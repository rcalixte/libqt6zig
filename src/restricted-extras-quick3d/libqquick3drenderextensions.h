#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData)
typedef QQuick3DObject::ItemChangeData QQuick3DObject__ItemChangeData;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuick3DObject QQuick3DObject;
typedef struct QQuick3DObject__ItemChangeData QQuick3DObject__ItemChangeData;
typedef struct QQuick3DRenderExtension QQuick3DRenderExtension;
typedef struct QTimerEvent QTimerEvent;
#endif

QQuick3DRenderExtension* QQuick3DRenderExtension_new();
QQuick3DRenderExtension* QQuick3DRenderExtension_new2(QQuick3DObject* parent);
QMetaObject* QQuick3DRenderExtension_MetaObject(const QQuick3DRenderExtension* self);
void* QQuick3DRenderExtension_Metacast(QQuick3DRenderExtension* self, const char* param1);
int QQuick3DRenderExtension_Metacall(QQuick3DRenderExtension* self, int param1, int param2, void** param3);
libqt_string QQuick3DRenderExtension_Tr(const char* s);
libqt_string QQuick3DRenderExtension_Tr2(const char* s, const char* c);
libqt_string QQuick3DRenderExtension_Tr3(const char* s, const char* c, int n);
void QQuick3DRenderExtension_OnMetaObject(QQuick3DRenderExtension* self, intptr_t slot);
QMetaObject* QQuick3DRenderExtension_SuperMetaObject(const QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_OnMetacast(QQuick3DRenderExtension* self, intptr_t slot);
void* QQuick3DRenderExtension_SuperMetacast(QQuick3DRenderExtension* self, const char* param1);
void QQuick3DRenderExtension_OnMetacall(QQuick3DRenderExtension* self, intptr_t slot);
int QQuick3DRenderExtension_SuperMetacall(QQuick3DRenderExtension* self, int param1, int param2, void** param3);
void QQuick3DRenderExtension_MarkAllDirty(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_OnMarkAllDirty(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperMarkAllDirty(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_ItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DRenderExtension_OnItemChange(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DRenderExtension_ClassBegin(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_OnClassBegin(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperClassBegin(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_ComponentComplete(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_OnComponentComplete(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperComponentComplete(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_PreSync(QQuick3DRenderExtension* self);
void QQuick3DRenderExtension_OnPreSync(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperPreSync(QQuick3DRenderExtension* self);
bool QQuick3DRenderExtension_Event(QQuick3DRenderExtension* self, QEvent* event);
void QQuick3DRenderExtension_OnEvent(QQuick3DRenderExtension* self, intptr_t slot);
bool QQuick3DRenderExtension_SuperEvent(QQuick3DRenderExtension* self, QEvent* event);
bool QQuick3DRenderExtension_EventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event);
void QQuick3DRenderExtension_OnEventFilter(QQuick3DRenderExtension* self, intptr_t slot);
bool QQuick3DRenderExtension_SuperEventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event);
void QQuick3DRenderExtension_TimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event);
void QQuick3DRenderExtension_OnTimerEvent(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperTimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event);
void QQuick3DRenderExtension_ChildEvent(QQuick3DRenderExtension* self, QChildEvent* event);
void QQuick3DRenderExtension_OnChildEvent(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperChildEvent(QQuick3DRenderExtension* self, QChildEvent* event);
void QQuick3DRenderExtension_CustomEvent(QQuick3DRenderExtension* self, QEvent* event);
void QQuick3DRenderExtension_OnCustomEvent(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperCustomEvent(QQuick3DRenderExtension* self, QEvent* event);
void QQuick3DRenderExtension_ConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
void QQuick3DRenderExtension_OnConnectNotify(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
void QQuick3DRenderExtension_DisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
void QQuick3DRenderExtension_OnDisconnectNotify(QQuick3DRenderExtension* self, intptr_t slot);
void QQuick3DRenderExtension_SuperDisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
bool QQuick3DRenderExtension_IsComponentComplete(const QQuick3DRenderExtension* self);
QObject* QQuick3DRenderExtension_Sender(const QQuick3DRenderExtension* self);
int QQuick3DRenderExtension_SenderSignalIndex(const QQuick3DRenderExtension* self);
int QQuick3DRenderExtension_Receivers(const QQuick3DRenderExtension* self, const char* signal);
bool QQuick3DRenderExtension_IsSignalConnected(const QQuick3DRenderExtension* self, const QMetaMethod* signal);
void QQuick3DRenderExtension_Delete(QQuick3DRenderExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
