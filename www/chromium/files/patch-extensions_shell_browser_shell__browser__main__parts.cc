--- extensions/shell/browser/shell_browser_main_parts.cc.orig	2022-08-31 12:19:35 UTC
+++ extensions/shell/browser/shell_browser_main_parts.cc
@@ -147,7 +147,7 @@ void ShellBrowserMainParts::PostCreateMainMessageLoop(
       switches::kAppShellAllowRoaming)) {
     network_controller_->SetCellularAllowRoaming(true);
   }
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   // app_shell doesn't need GTK, so the fake input method context can work.
   // See crbug.com/381852 and revision fb69f142.
   // TODO(michaelpg): Verify this works for target environments.
