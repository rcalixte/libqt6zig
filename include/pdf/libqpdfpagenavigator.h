#pragma once
#ifndef SRC_PDFC_LIBQPDFPAGENAVIGATOR_H
#define SRC_PDFC_LIBQPDFPAGENAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPdfLink QPdfLink;
typedef struct QPdfPageNavigator QPdfPageNavigator;
typedef struct QPointF QPointF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfPageNavigator* QPdfPageNavigator_new();
QPdfPageNavigator* QPdfPageNavigator_new2(QObject* parent);
QMetaObject* QPdfPageNavigator_MetaObject(const QPdfPageNavigator* self);
void* QPdfPageNavigator_Metacast(QPdfPageNavigator* self, const char* param1);
int QPdfPageNavigator_Metacall(QPdfPageNavigator* self, int param1, int param2, void** param3);
void QPdfPageNavigator_OnMetacall(QPdfPageNavigator* self, intptr_t slot);
int QPdfPageNavigator_QBaseMetacall(QPdfPageNavigator* self, int param1, int param2, void** param3);
libqt_string QPdfPageNavigator_Tr(const char* s);
int QPdfPageNavigator_CurrentPage(const QPdfPageNavigator* self);
QPointF* QPdfPageNavigator_CurrentLocation(const QPdfPageNavigator* self);
double QPdfPageNavigator_CurrentZoom(const QPdfPageNavigator* self);
bool QPdfPageNavigator_BackAvailable(const QPdfPageNavigator* self);
bool QPdfPageNavigator_ForwardAvailable(const QPdfPageNavigator* self);
void QPdfPageNavigator_Clear(QPdfPageNavigator* self);
void QPdfPageNavigator_Jump(QPdfPageNavigator* self, QPdfLink* destination);
void QPdfPageNavigator_Jump2(QPdfPageNavigator* self, int page, QPointF* location);
void QPdfPageNavigator_Update(QPdfPageNavigator* self, int page, QPointF* location, double zoom);
void QPdfPageNavigator_Forward(QPdfPageNavigator* self);
void QPdfPageNavigator_Back(QPdfPageNavigator* self);
void QPdfPageNavigator_CurrentPageChanged(QPdfPageNavigator* self, int page);
void QPdfPageNavigator_Connect_CurrentPageChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_CurrentLocationChanged(QPdfPageNavigator* self, QPointF* location);
void QPdfPageNavigator_Connect_CurrentLocationChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_CurrentZoomChanged(QPdfPageNavigator* self, double zoom);
void QPdfPageNavigator_Connect_CurrentZoomChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_BackAvailableChanged(QPdfPageNavigator* self, bool available);
void QPdfPageNavigator_Connect_BackAvailableChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_ForwardAvailableChanged(QPdfPageNavigator* self, bool available);
void QPdfPageNavigator_Connect_ForwardAvailableChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_Jumped(QPdfPageNavigator* self, QPdfLink* current);
void QPdfPageNavigator_Connect_Jumped(QPdfPageNavigator* self, intptr_t slot);
libqt_string QPdfPageNavigator_Tr2(const char* s, const char* c);
libqt_string QPdfPageNavigator_Tr3(const char* s, const char* c, int n);
void QPdfPageNavigator_Jump3(QPdfPageNavigator* self, int page, QPointF* location, double zoom);
bool QPdfPageNavigator_Event(QPdfPageNavigator* self, QEvent* event);
void QPdfPageNavigator_OnEvent(QPdfPageNavigator* self, intptr_t slot);
bool QPdfPageNavigator_QBaseEvent(QPdfPageNavigator* self, QEvent* event);
bool QPdfPageNavigator_EventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event);
void QPdfPageNavigator_OnEventFilter(QPdfPageNavigator* self, intptr_t slot);
bool QPdfPageNavigator_QBaseEventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event);
void QPdfPageNavigator_TimerEvent(QPdfPageNavigator* self, QTimerEvent* event);
void QPdfPageNavigator_OnTimerEvent(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_QBaseTimerEvent(QPdfPageNavigator* self, QTimerEvent* event);
void QPdfPageNavigator_ChildEvent(QPdfPageNavigator* self, QChildEvent* event);
void QPdfPageNavigator_OnChildEvent(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_QBaseChildEvent(QPdfPageNavigator* self, QChildEvent* event);
void QPdfPageNavigator_CustomEvent(QPdfPageNavigator* self, QEvent* event);
void QPdfPageNavigator_OnCustomEvent(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_QBaseCustomEvent(QPdfPageNavigator* self, QEvent* event);
void QPdfPageNavigator_ConnectNotify(QPdfPageNavigator* self, QMetaMethod* signal);
void QPdfPageNavigator_OnConnectNotify(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_QBaseConnectNotify(QPdfPageNavigator* self, QMetaMethod* signal);
void QPdfPageNavigator_DisconnectNotify(QPdfPageNavigator* self, QMetaMethod* signal);
void QPdfPageNavigator_OnDisconnectNotify(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_QBaseDisconnectNotify(QPdfPageNavigator* self, QMetaMethod* signal);
QPdfLink* QPdfPageNavigator_CurrentLink(const QPdfPageNavigator* self);
void QPdfPageNavigator_OnCurrentLink(const QPdfPageNavigator* self, intptr_t slot);
QPdfLink* QPdfPageNavigator_QBaseCurrentLink(const QPdfPageNavigator* self);
QObject* QPdfPageNavigator_Sender(const QPdfPageNavigator* self);
void QPdfPageNavigator_OnSender(const QPdfPageNavigator* self, intptr_t slot);
QObject* QPdfPageNavigator_QBaseSender(const QPdfPageNavigator* self);
int QPdfPageNavigator_SenderSignalIndex(const QPdfPageNavigator* self);
void QPdfPageNavigator_OnSenderSignalIndex(const QPdfPageNavigator* self, intptr_t slot);
int QPdfPageNavigator_QBaseSenderSignalIndex(const QPdfPageNavigator* self);
int QPdfPageNavigator_Receivers(const QPdfPageNavigator* self, const char* signal);
void QPdfPageNavigator_OnReceivers(const QPdfPageNavigator* self, intptr_t slot);
int QPdfPageNavigator_QBaseReceivers(const QPdfPageNavigator* self, const char* signal);
bool QPdfPageNavigator_IsSignalConnected(const QPdfPageNavigator* self, QMetaMethod* signal);
void QPdfPageNavigator_OnIsSignalConnected(const QPdfPageNavigator* self, intptr_t slot);
bool QPdfPageNavigator_QBaseIsSignalConnected(const QPdfPageNavigator* self, QMetaMethod* signal);
void QPdfPageNavigator_Delete(QPdfPageNavigator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
