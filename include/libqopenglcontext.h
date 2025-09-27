#pragma once
#ifndef SRCC_LIBQOPENGLCONTEXT_H
#define SRCC_LIBQOPENGLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLContextGroup QOpenGLContextGroup;
typedef struct QOpenGLExtraFunctions QOpenGLExtraFunctions;
typedef struct QOpenGLFunctions QOpenGLFunctions;
typedef struct QScreen QScreen;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTimerEvent QTimerEvent;
#endif

QMetaObject* QOpenGLContextGroup_MetaObject(const QOpenGLContextGroup* self);
void* QOpenGLContextGroup_Metacast(QOpenGLContextGroup* self, const char* param1);
int QOpenGLContextGroup_Metacall(QOpenGLContextGroup* self, int param1, int param2, void** param3);
libqt_string QOpenGLContextGroup_Tr(const char* s);
libqt_list /* of QOpenGLContext* */ QOpenGLContextGroup_Shares(const QOpenGLContextGroup* self);
QOpenGLContextGroup* QOpenGLContextGroup_CurrentContextGroup();
libqt_string QOpenGLContextGroup_Tr2(const char* s, const char* c);
libqt_string QOpenGLContextGroup_Tr3(const char* s, const char* c, int n);
void QOpenGLContextGroup_Delete(QOpenGLContextGroup* self);

QOpenGLContext* QOpenGLContext_new();
QOpenGLContext* QOpenGLContext_new2(QObject* parent);
QMetaObject* QOpenGLContext_MetaObject(const QOpenGLContext* self);
void* QOpenGLContext_Metacast(QOpenGLContext* self, const char* param1);
int QOpenGLContext_Metacall(QOpenGLContext* self, int param1, int param2, void** param3);
libqt_string QOpenGLContext_Tr(const char* s);
void QOpenGLContext_SetFormat(QOpenGLContext* self, const QSurfaceFormat* format);
void QOpenGLContext_SetShareContext(QOpenGLContext* self, QOpenGLContext* shareContext);
void QOpenGLContext_SetScreen(QOpenGLContext* self, QScreen* screen);
bool QOpenGLContext_Create(QOpenGLContext* self);
bool QOpenGLContext_IsValid(const QOpenGLContext* self);
QSurfaceFormat* QOpenGLContext_Format(const QOpenGLContext* self);
QOpenGLContext* QOpenGLContext_ShareContext(const QOpenGLContext* self);
QOpenGLContextGroup* QOpenGLContext_ShareGroup(const QOpenGLContext* self);
QScreen* QOpenGLContext_Screen(const QOpenGLContext* self);
uint32_t QOpenGLContext_DefaultFramebufferObject(const QOpenGLContext* self);
bool QOpenGLContext_MakeCurrent(QOpenGLContext* self, QSurface* surface);
void QOpenGLContext_DoneCurrent(QOpenGLContext* self);
void QOpenGLContext_SwapBuffers(QOpenGLContext* self, QSurface* surface);
QSurface* QOpenGLContext_Surface(const QOpenGLContext* self);
QOpenGLContext* QOpenGLContext_CurrentContext();
bool QOpenGLContext_AreSharing(QOpenGLContext* first, QOpenGLContext* second);
QOpenGLFunctions* QOpenGLContext_Functions(const QOpenGLContext* self);
QOpenGLExtraFunctions* QOpenGLContext_ExtraFunctions(const QOpenGLContext* self);
libqt_list /* set of libqt_string */ QOpenGLContext_Extensions(const QOpenGLContext* self);
bool QOpenGLContext_HasExtension(const QOpenGLContext* self, const libqt_string extension);
int QOpenGLContext_OpenGLModuleType();
bool QOpenGLContext_IsOpenGLES(const QOpenGLContext* self);
bool QOpenGLContext_SupportsThreadedOpenGL();
QOpenGLContext* QOpenGLContext_GlobalShareContext();
void QOpenGLContext_AboutToBeDestroyed(QOpenGLContext* self);
void QOpenGLContext_Connect_AboutToBeDestroyed(QOpenGLContext* self, intptr_t slot);
libqt_string QOpenGLContext_Tr2(const char* s, const char* c);
libqt_string QOpenGLContext_Tr3(const char* s, const char* c, int n);
void QOpenGLContext_OnMetacall(QOpenGLContext* self, intptr_t slot);
int QOpenGLContext_QBaseMetacall(QOpenGLContext* self, int param1, int param2, void** param3);
bool QOpenGLContext_Event(QOpenGLContext* self, QEvent* event);
void QOpenGLContext_OnEvent(QOpenGLContext* self, intptr_t slot);
bool QOpenGLContext_QBaseEvent(QOpenGLContext* self, QEvent* event);
bool QOpenGLContext_EventFilter(QOpenGLContext* self, QObject* watched, QEvent* event);
void QOpenGLContext_OnEventFilter(QOpenGLContext* self, intptr_t slot);
bool QOpenGLContext_QBaseEventFilter(QOpenGLContext* self, QObject* watched, QEvent* event);
void QOpenGLContext_TimerEvent(QOpenGLContext* self, QTimerEvent* event);
void QOpenGLContext_OnTimerEvent(QOpenGLContext* self, intptr_t slot);
void QOpenGLContext_QBaseTimerEvent(QOpenGLContext* self, QTimerEvent* event);
void QOpenGLContext_ChildEvent(QOpenGLContext* self, QChildEvent* event);
void QOpenGLContext_OnChildEvent(QOpenGLContext* self, intptr_t slot);
void QOpenGLContext_QBaseChildEvent(QOpenGLContext* self, QChildEvent* event);
void QOpenGLContext_CustomEvent(QOpenGLContext* self, QEvent* event);
void QOpenGLContext_OnCustomEvent(QOpenGLContext* self, intptr_t slot);
void QOpenGLContext_QBaseCustomEvent(QOpenGLContext* self, QEvent* event);
void QOpenGLContext_ConnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
void QOpenGLContext_OnConnectNotify(QOpenGLContext* self, intptr_t slot);
void QOpenGLContext_QBaseConnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
void QOpenGLContext_DisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
void QOpenGLContext_OnDisconnectNotify(QOpenGLContext* self, intptr_t slot);
void QOpenGLContext_QBaseDisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
void* QOpenGLContext_ResolveInterface(const QOpenGLContext* self, const char* name, int revision);
void QOpenGLContext_OnResolveInterface(const QOpenGLContext* self, intptr_t slot);
void* QOpenGLContext_QBaseResolveInterface(const QOpenGLContext* self, const char* name, int revision);
QObject* QOpenGLContext_Sender(const QOpenGLContext* self);
void QOpenGLContext_OnSender(const QOpenGLContext* self, intptr_t slot);
QObject* QOpenGLContext_QBaseSender(const QOpenGLContext* self);
int QOpenGLContext_SenderSignalIndex(const QOpenGLContext* self);
void QOpenGLContext_OnSenderSignalIndex(const QOpenGLContext* self, intptr_t slot);
int QOpenGLContext_QBaseSenderSignalIndex(const QOpenGLContext* self);
int QOpenGLContext_Receivers(const QOpenGLContext* self, const char* signal);
void QOpenGLContext_OnReceivers(const QOpenGLContext* self, intptr_t slot);
int QOpenGLContext_QBaseReceivers(const QOpenGLContext* self, const char* signal);
bool QOpenGLContext_IsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal);
void QOpenGLContext_OnIsSignalConnected(const QOpenGLContext* self, intptr_t slot);
bool QOpenGLContext_QBaseIsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal);
void QOpenGLContext_Delete(QOpenGLContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
