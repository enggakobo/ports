--- ui/base/ui_base_features.h.orig	2025-01-27 17:37:37 UTC
+++ ui/base/ui_base_features.h
@@ -138,7 +138,7 @@ BASE_DECLARE_FEATURE(kWaylandUiScale);
 BASE_DECLARE_FEATURE(kWaylandUiScale);
 #endif  // BUILDFLAG(IS_OZONE)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE_FEATURES)
 BASE_DECLARE_FEATURE(kOverrideDefaultOzonePlatformHintToAuto);
 #endif  // BUILDFLAG(IS_LINUX)
