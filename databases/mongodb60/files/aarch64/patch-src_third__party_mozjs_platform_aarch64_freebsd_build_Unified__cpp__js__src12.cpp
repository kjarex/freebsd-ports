--- src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src12.cpp.orig	2022-09-08 14:42:13 UTC
+++ src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src12.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "util/StringBuffer.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "util/StringBuffer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "util/StringBuffer.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "util/StructuredSpewer.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "util/StructuredSpewer.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "util/StructuredSpewer.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "util/Text.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "util/Text.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "util/Text.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "util/Unicode.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "util/Unicode.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "util/Unicode.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/Activation.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/Activation.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/Activation.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/ArgumentsObject.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/ArgumentsObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/ArgumentsObject.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
\ No newline at end of file
