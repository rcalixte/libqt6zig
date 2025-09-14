#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWSYSTEM_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWSYSTEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWindowSystem KWindowSystem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWindow QWindow;
#endif

QMetaObject* KWindowSystem_MetaObject(const KWindowSystem* self);
void* KWindowSystem_Metacast(KWindowSystem* self, const char* param1);
int KWindowSystem_Metacall(KWindowSystem* self, int param1, int param2, void** param3);
libqt_string KWindowSystem_Tr(const char* s);
KWindowSystem* KWindowSystem_Self();
void KWindowSystem_ActivateWindow(QWindow* window);
bool KWindowSystem_ShowingDesktop();
void KWindowSystem_SetShowingDesktop(bool showing);
void KWindowSystem_SetMainWindow(QWindow* subwindow, uintptr_t mainwindow);
void KWindowSystem_SetMainWindow2(QWindow* subwindow, const libqt_string mainwindow);
void KWindowSystem_UpdateStartupId(QWindow* window);
int KWindowSystem_Platform();
bool KWindowSystem_IsPlatformX11();
bool KWindowSystem_IsPlatformWayland();
void KWindowSystem_SetCurrentXdgActivationToken(const libqt_string token);
void KWindowSystem_ShowingDesktopChanged(KWindowSystem* self, bool showing);
void KWindowSystem_Connect_ShowingDesktopChanged(KWindowSystem* self, intptr_t slot);
libqt_string KWindowSystem_Tr2(const char* s, const char* c);
libqt_string KWindowSystem_Tr3(const char* s, const char* c, int n);
void KWindowSystem_ActivateWindow2(QWindow* window, long time);
void KWindowSystem_Delete(KWindowSystem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
