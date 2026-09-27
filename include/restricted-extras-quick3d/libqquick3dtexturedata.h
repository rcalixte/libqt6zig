#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_H

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
typedef struct QQuick3DTextureData QQuick3DTextureData;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QQuick3DTextureData* QQuick3DTextureData_new();
QQuick3DTextureData* QQuick3DTextureData_new2(QQuick3DObject* parent);
QMetaObject* QQuick3DTextureData_MetaObject(const QQuick3DTextureData* self);
void* QQuick3DTextureData_Metacast(QQuick3DTextureData* self, const char* param1);
int QQuick3DTextureData_Metacall(QQuick3DTextureData* self, int param1, int param2, void** param3);
libqt_string QQuick3DTextureData_Tr(const char* s);
libqt_string QQuick3DTextureData_TextureData(const QQuick3DTextureData* self);
void QQuick3DTextureData_SetTextureData(QQuick3DTextureData* self, const libqt_string data);
QSize* QQuick3DTextureData_Size(const QQuick3DTextureData* self);
void QQuick3DTextureData_SetSize(QQuick3DTextureData* self, const QSize* size);
int QQuick3DTextureData_Depth(const QQuick3DTextureData* self);
void QQuick3DTextureData_SetDepth(QQuick3DTextureData* self, int depth);
int QQuick3DTextureData_Format(const QQuick3DTextureData* self);
void QQuick3DTextureData_SetFormat(QQuick3DTextureData* self, int format);
bool QQuick3DTextureData_HasTransparency(const QQuick3DTextureData* self);
void QQuick3DTextureData_SetHasTransparency(QQuick3DTextureData* self, bool hasTransparency);
void QQuick3DTextureData_TextureDataNodeDirty(QQuick3DTextureData* self);
void QQuick3DTextureData_Connect_TextureDataNodeDirty(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_MarkAllDirty(QQuick3DTextureData* self);
libqt_string QQuick3DTextureData_Tr2(const char* s, const char* c);
libqt_string QQuick3DTextureData_Tr3(const char* s, const char* c, int n);
void QQuick3DTextureData_OnMetaObject(const QQuick3DTextureData* self, intptr_t slot);
QMetaObject* QQuick3DTextureData_SuperMetaObject(const QQuick3DTextureData* self);
void QQuick3DTextureData_OnMetacast(QQuick3DTextureData* self, intptr_t slot);
void* QQuick3DTextureData_SuperMetacast(QQuick3DTextureData* self, const char* param1);
void QQuick3DTextureData_OnMetacall(QQuick3DTextureData* self, intptr_t slot);
int QQuick3DTextureData_SuperMetacall(QQuick3DTextureData* self, int param1, int param2, void** param3);
void QQuick3DTextureData_OnMarkAllDirty(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperMarkAllDirty(QQuick3DTextureData* self);
void QQuick3DTextureData_ItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DTextureData_OnItemChange(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DTextureData_ClassBegin(QQuick3DTextureData* self);
void QQuick3DTextureData_OnClassBegin(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperClassBegin(QQuick3DTextureData* self);
void QQuick3DTextureData_ComponentComplete(QQuick3DTextureData* self);
void QQuick3DTextureData_OnComponentComplete(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperComponentComplete(QQuick3DTextureData* self);
void QQuick3DTextureData_PreSync(QQuick3DTextureData* self);
void QQuick3DTextureData_OnPreSync(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperPreSync(QQuick3DTextureData* self);
bool QQuick3DTextureData_Event(QQuick3DTextureData* self, QEvent* event);
void QQuick3DTextureData_OnEvent(QQuick3DTextureData* self, intptr_t slot);
bool QQuick3DTextureData_SuperEvent(QQuick3DTextureData* self, QEvent* event);
bool QQuick3DTextureData_EventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event);
void QQuick3DTextureData_OnEventFilter(QQuick3DTextureData* self, intptr_t slot);
bool QQuick3DTextureData_SuperEventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event);
void QQuick3DTextureData_TimerEvent(QQuick3DTextureData* self, QTimerEvent* event);
void QQuick3DTextureData_OnTimerEvent(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperTimerEvent(QQuick3DTextureData* self, QTimerEvent* event);
void QQuick3DTextureData_ChildEvent(QQuick3DTextureData* self, QChildEvent* event);
void QQuick3DTextureData_OnChildEvent(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperChildEvent(QQuick3DTextureData* self, QChildEvent* event);
void QQuick3DTextureData_CustomEvent(QQuick3DTextureData* self, QEvent* event);
void QQuick3DTextureData_OnCustomEvent(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperCustomEvent(QQuick3DTextureData* self, QEvent* event);
void QQuick3DTextureData_ConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
void QQuick3DTextureData_OnConnectNotify(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
void QQuick3DTextureData_DisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
void QQuick3DTextureData_OnDisconnectNotify(QQuick3DTextureData* self, intptr_t slot);
void QQuick3DTextureData_SuperDisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
bool QQuick3DTextureData_IsComponentComplete(const QQuick3DTextureData* self);
void QQuick3DTextureData_OnIsComponentComplete(const QQuick3DTextureData* self, intptr_t slot);
bool QQuick3DTextureData_SuperIsComponentComplete(const QQuick3DTextureData* self);
QObject* QQuick3DTextureData_Sender(const QQuick3DTextureData* self);
void QQuick3DTextureData_OnSender(const QQuick3DTextureData* self, intptr_t slot);
QObject* QQuick3DTextureData_SuperSender(const QQuick3DTextureData* self);
int QQuick3DTextureData_SenderSignalIndex(const QQuick3DTextureData* self);
void QQuick3DTextureData_OnSenderSignalIndex(const QQuick3DTextureData* self, intptr_t slot);
int QQuick3DTextureData_SuperSenderSignalIndex(const QQuick3DTextureData* self);
int QQuick3DTextureData_Receivers(const QQuick3DTextureData* self, const char* signal);
void QQuick3DTextureData_OnReceivers(const QQuick3DTextureData* self, intptr_t slot);
int QQuick3DTextureData_SuperReceivers(const QQuick3DTextureData* self, const char* signal);
bool QQuick3DTextureData_IsSignalConnected(const QQuick3DTextureData* self, const QMetaMethod* signal);
void QQuick3DTextureData_OnIsSignalConnected(const QQuick3DTextureData* self, intptr_t slot);
bool QQuick3DTextureData_SuperIsSignalConnected(const QQuick3DTextureData* self, const QMetaMethod* signal);
void QQuick3DTextureData_Delete(QQuick3DTextureData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
