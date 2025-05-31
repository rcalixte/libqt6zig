#pragma once
#ifndef SRC_PDFC_LIBQPDFPAGERENDERER_H
#define SRC_PDFC_LIBQPDFPAGERENDERER_H

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
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QPdfPageRenderer QPdfPageRenderer;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QPdfPageRenderer::RenderMode RenderMode; // C++ enum
#else
typedef int RenderMode; // C ABI enum
#endif

QPdfPageRenderer* QPdfPageRenderer_new();
QPdfPageRenderer* QPdfPageRenderer_new2(QObject* parent);
QMetaObject* QPdfPageRenderer_MetaObject(const QPdfPageRenderer* self);
void* QPdfPageRenderer_Metacast(QPdfPageRenderer* self, const char* param1);
int QPdfPageRenderer_Metacall(QPdfPageRenderer* self, int param1, int param2, void** param3);
void QPdfPageRenderer_OnMetacall(QPdfPageRenderer* self, intptr_t slot);
int QPdfPageRenderer_QBaseMetacall(QPdfPageRenderer* self, int param1, int param2, void** param3);
libqt_string QPdfPageRenderer_Tr(const char* s);
int QPdfPageRenderer_RenderMode(const QPdfPageRenderer* self);
void QPdfPageRenderer_SetRenderMode(QPdfPageRenderer* self, int mode);
QPdfDocument* QPdfPageRenderer_Document(const QPdfPageRenderer* self);
void QPdfPageRenderer_SetDocument(QPdfPageRenderer* self, QPdfDocument* document);
unsigned long long QPdfPageRenderer_RequestPage(QPdfPageRenderer* self, int pageNumber, QSize* imageSize);
void QPdfPageRenderer_DocumentChanged(QPdfPageRenderer* self, QPdfDocument* document);
void QPdfPageRenderer_Connect_DocumentChanged(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_RenderModeChanged(QPdfPageRenderer* self, int renderMode);
void QPdfPageRenderer_Connect_RenderModeChanged(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_PageRendered(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, const QImage* image, QPdfDocumentRenderOptions* options, unsigned long long requestId);
void QPdfPageRenderer_Connect_PageRendered(QPdfPageRenderer* self, intptr_t slot);
libqt_string QPdfPageRenderer_Tr2(const char* s, const char* c);
libqt_string QPdfPageRenderer_Tr3(const char* s, const char* c, int n);
unsigned long long QPdfPageRenderer_RequestPage3(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options);
bool QPdfPageRenderer_Event(QPdfPageRenderer* self, QEvent* event);
void QPdfPageRenderer_OnEvent(QPdfPageRenderer* self, intptr_t slot);
bool QPdfPageRenderer_QBaseEvent(QPdfPageRenderer* self, QEvent* event);
bool QPdfPageRenderer_EventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event);
void QPdfPageRenderer_OnEventFilter(QPdfPageRenderer* self, intptr_t slot);
bool QPdfPageRenderer_QBaseEventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event);
void QPdfPageRenderer_TimerEvent(QPdfPageRenderer* self, QTimerEvent* event);
void QPdfPageRenderer_OnTimerEvent(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_QBaseTimerEvent(QPdfPageRenderer* self, QTimerEvent* event);
void QPdfPageRenderer_ChildEvent(QPdfPageRenderer* self, QChildEvent* event);
void QPdfPageRenderer_OnChildEvent(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_QBaseChildEvent(QPdfPageRenderer* self, QChildEvent* event);
void QPdfPageRenderer_CustomEvent(QPdfPageRenderer* self, QEvent* event);
void QPdfPageRenderer_OnCustomEvent(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_QBaseCustomEvent(QPdfPageRenderer* self, QEvent* event);
void QPdfPageRenderer_ConnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
void QPdfPageRenderer_OnConnectNotify(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_QBaseConnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
void QPdfPageRenderer_DisconnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
void QPdfPageRenderer_OnDisconnectNotify(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_QBaseDisconnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
QObject* QPdfPageRenderer_Sender(const QPdfPageRenderer* self);
void QPdfPageRenderer_OnSender(const QPdfPageRenderer* self, intptr_t slot);
QObject* QPdfPageRenderer_QBaseSender(const QPdfPageRenderer* self);
int QPdfPageRenderer_SenderSignalIndex(const QPdfPageRenderer* self);
void QPdfPageRenderer_OnSenderSignalIndex(const QPdfPageRenderer* self, intptr_t slot);
int QPdfPageRenderer_QBaseSenderSignalIndex(const QPdfPageRenderer* self);
int QPdfPageRenderer_Receivers(const QPdfPageRenderer* self, const char* signal);
void QPdfPageRenderer_OnReceivers(const QPdfPageRenderer* self, intptr_t slot);
int QPdfPageRenderer_QBaseReceivers(const QPdfPageRenderer* self, const char* signal);
bool QPdfPageRenderer_IsSignalConnected(const QPdfPageRenderer* self, const QMetaMethod* signal);
void QPdfPageRenderer_OnIsSignalConnected(const QPdfPageRenderer* self, intptr_t slot);
bool QPdfPageRenderer_QBaseIsSignalConnected(const QPdfPageRenderer* self, const QMetaMethod* signal);
void QPdfPageRenderer_Delete(QPdfPageRenderer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
