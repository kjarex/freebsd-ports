Attempt to fix intermittent "can't find crate for `std`" build failures

The location of rustc (found via env::current_exe()) is used to
find the right libstd.  However it might have been "copied" by
creating a hard link to the new location instead.  Like /proc/curproc/file,
KERN_PROC_PATHNAME (used internally by current_exe()) can return
any of the file's multiple paths.  Most of the time it returns the
right rustc path and the build will succeed but occasionally it
will return the "wrong" path and the build fails with:

    error[E0463]: can't find crate for `std`

If this is right a viable workaround should be to never create hard
links during the build, so let's try that.

--- src/bootstrap/lib.rs.orig	2020-07-23 20:16:43 UTC
+++ src/bootstrap/lib.rs
@@ -1450,19 +1450,13 @@ impl Build {
                 return;
             }
         }
-        if let Ok(()) = fs::hard_link(&src, dst) {
-            // Attempt to "easy copy" by creating a hard link
-            // (symlinks don't work on windows), but if that fails
-            // just fall back to a slow `copy` operation.
-        } else {
-            if let Err(e) = fs::copy(&src, dst) {
-                panic!("failed to copy `{}` to `{}`: {}", src.display(), dst.display(), e)
-            }
-            t!(fs::set_permissions(dst, metadata.permissions()));
-            let atime = FileTime::from_last_access_time(&metadata);
-            let mtime = FileTime::from_last_modification_time(&metadata);
-            t!(filetime::set_file_times(dst, atime, mtime));
+        if let Err(e) = fs::copy(&src, dst) {
+            panic!("failed to copy `{}` to `{}`: {}", src.display(), dst.display(), e)
         }
+        t!(fs::set_permissions(dst, metadata.permissions()));
+        let atime = FileTime::from_last_access_time(&metadata);
+        let mtime = FileTime::from_last_modification_time(&metadata);
+        t!(filetime::set_file_times(dst, atime, mtime));
     }
 
     /// Copies the `src` directory recursively to `dst`. Both are assumed to exist
