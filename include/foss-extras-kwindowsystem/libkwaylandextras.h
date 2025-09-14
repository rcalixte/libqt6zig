#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWAYLANDEXTRAS_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWAYLANDEXTRAS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWaylandExtras KWaylandExtras;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWindow QWindow;
#endif

QMetaObject* KWaylandExtras_MetaObject(const KWaylandExtras* self);
void* KWaylandExtras_Metacast(KWaylandExtras* self, const char* param1);
int KWaylandExtras_Metacall(KWaylandExtras* self, int param1, int param2, void** param3);
libqt_string KWaylandExtras_Tr(const char* s);
KWaylandExtras* KWaylandExtras_Self();
void KWaylandExtras_RequestXdgActivationToken(QWindow* win, uint32_t serial, const libqt_string app_id);
unsigned int KWaylandExtras_LastInputSerial(QWindow* window);
void KWaylandExtras_ExportWindow(QWindow* window);
void KWaylandExtras_UnexportWindow(QWindow* window);
void KWaylandExtras_XdgActivationTokenArrived(KWaylandExtras* self, int serial, const libqt_string token);
void KWaylandExtras_Connect_XdgActivationTokenArrived(KWaylandExtras* self, intptr_t slot);
void KWaylandExtras_WindowExported(KWaylandExtras* self, QWindow* window, const libqt_string handle);
void KWaylandExtras_Connect_WindowExported(KWaylandExtras* self, intptr_t slot);
libqt_string KWaylandExtras_Tr2(const char* s, const char* c);
libqt_string KWaylandExtras_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
