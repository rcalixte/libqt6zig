#pragma once
#ifndef SRC_SVGC_LIBQSVGRENDERER_H
#define SRC_SVGC_LIBQSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QXmlStreamReader QXmlStreamReader;
#endif

QSvgRenderer* QSvgRenderer_new();
QSvgRenderer* QSvgRenderer_new2(const libqt_string filename);
QSvgRenderer* QSvgRenderer_new3(const libqt_string contents);
QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents);
QSvgRenderer* QSvgRenderer_new5(QObject* parent);
QSvgRenderer* QSvgRenderer_new6(const libqt_string filename, QObject* parent);
QSvgRenderer* QSvgRenderer_new7(const libqt_string contents, QObject* parent);
QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent);
QMetaObject* QSvgRenderer_MetaObject(const QSvgRenderer* self);
void* QSvgRenderer_Metacast(QSvgRenderer* self, const char* param1);
int QSvgRenderer_Metacall(QSvgRenderer* self, int param1, int param2, void** param3);
void QSvgRenderer_OnMetacall(QSvgRenderer* self, intptr_t slot);
int QSvgRenderer_QBaseMetacall(QSvgRenderer* self, int param1, int param2, void** param3);
libqt_string QSvgRenderer_Tr(const char* s);
bool QSvgRenderer_IsValid(const QSvgRenderer* self);
QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self);
QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self);
QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self);
void QSvgRenderer_SetViewBox(QSvgRenderer* self, const QRect* viewbox);
void QSvgRenderer_SetViewBoxWithViewbox(QSvgRenderer* self, const QRectF* viewbox);
int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self);
void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode);
int QSvgRenderer_Options(const QSvgRenderer* self);
void QSvgRenderer_SetOptions(QSvgRenderer* self, int flags);
bool QSvgRenderer_Animated(const QSvgRenderer* self);
int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self);
void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num);
int QSvgRenderer_CurrentFrame(const QSvgRenderer* self);
void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame);
int QSvgRenderer_AnimationDuration(const QSvgRenderer* self);
bool QSvgRenderer_IsAnimationEnabled(const QSvgRenderer* self);
void QSvgRenderer_SetAnimationEnabled(QSvgRenderer* self, bool enable);
QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, const libqt_string id);
bool QSvgRenderer_ElementExists(const QSvgRenderer* self, const libqt_string id);
QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, const libqt_string id);
void QSvgRenderer_SetDefaultOptions(int flags);
bool QSvgRenderer_Load(QSvgRenderer* self, const libqt_string filename);
bool QSvgRenderer_LoadWithContents(QSvgRenderer* self, const libqt_string contents);
bool QSvgRenderer_Load2(QSvgRenderer* self, QXmlStreamReader* contents);
void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p);
void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, const QRectF* bounds);
void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, const libqt_string elementId);
void QSvgRenderer_RepaintNeeded(QSvgRenderer* self);
void QSvgRenderer_Connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot);
libqt_string QSvgRenderer_Tr2(const char* s, const char* c);
libqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n);
void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, const libqt_string elementId, const QRectF* bounds);
bool QSvgRenderer_Event(QSvgRenderer* self, QEvent* event);
void QSvgRenderer_OnEvent(QSvgRenderer* self, intptr_t slot);
bool QSvgRenderer_QBaseEvent(QSvgRenderer* self, QEvent* event);
bool QSvgRenderer_EventFilter(QSvgRenderer* self, QObject* watched, QEvent* event);
void QSvgRenderer_OnEventFilter(QSvgRenderer* self, intptr_t slot);
bool QSvgRenderer_QBaseEventFilter(QSvgRenderer* self, QObject* watched, QEvent* event);
void QSvgRenderer_TimerEvent(QSvgRenderer* self, QTimerEvent* event);
void QSvgRenderer_OnTimerEvent(QSvgRenderer* self, intptr_t slot);
void QSvgRenderer_QBaseTimerEvent(QSvgRenderer* self, QTimerEvent* event);
void QSvgRenderer_ChildEvent(QSvgRenderer* self, QChildEvent* event);
void QSvgRenderer_OnChildEvent(QSvgRenderer* self, intptr_t slot);
void QSvgRenderer_QBaseChildEvent(QSvgRenderer* self, QChildEvent* event);
void QSvgRenderer_CustomEvent(QSvgRenderer* self, QEvent* event);
void QSvgRenderer_OnCustomEvent(QSvgRenderer* self, intptr_t slot);
void QSvgRenderer_QBaseCustomEvent(QSvgRenderer* self, QEvent* event);
void QSvgRenderer_ConnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
void QSvgRenderer_OnConnectNotify(QSvgRenderer* self, intptr_t slot);
void QSvgRenderer_QBaseConnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
void QSvgRenderer_DisconnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
void QSvgRenderer_OnDisconnectNotify(QSvgRenderer* self, intptr_t slot);
void QSvgRenderer_QBaseDisconnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
QObject* QSvgRenderer_Sender(const QSvgRenderer* self);
void QSvgRenderer_OnSender(const QSvgRenderer* self, intptr_t slot);
QObject* QSvgRenderer_QBaseSender(const QSvgRenderer* self);
int QSvgRenderer_SenderSignalIndex(const QSvgRenderer* self);
void QSvgRenderer_OnSenderSignalIndex(const QSvgRenderer* self, intptr_t slot);
int QSvgRenderer_QBaseSenderSignalIndex(const QSvgRenderer* self);
int QSvgRenderer_Receivers(const QSvgRenderer* self, const char* signal);
void QSvgRenderer_OnReceivers(const QSvgRenderer* self, intptr_t slot);
int QSvgRenderer_QBaseReceivers(const QSvgRenderer* self, const char* signal);
bool QSvgRenderer_IsSignalConnected(const QSvgRenderer* self, const QMetaMethod* signal);
void QSvgRenderer_OnIsSignalConnected(const QSvgRenderer* self, intptr_t slot);
bool QSvgRenderer_QBaseIsSignalConnected(const QSvgRenderer* self, const QMetaMethod* signal);
void QSvgRenderer_Delete(QSvgRenderer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
