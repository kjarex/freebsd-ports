--- src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src2.cpp.orig	2022-09-08 14:42:13 UTC
+++ src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src2.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "builtin/Promise.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/Promise.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/Promise.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "builtin/Reflect.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/Reflect.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/Reflect.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "builtin/ReflectParse.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/ReflectParse.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/ReflectParse.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "builtin/Stream.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/Stream.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/Stream.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "builtin/String.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/String.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/String.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "builtin/Symbol.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "builtin/Symbol.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "builtin/Symbol.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
\ No newline at end of file
