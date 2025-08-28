#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPIXMAPSEQUENCEOVERLAYPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPixmapSequence KPixmapSequence;
typedef struct KPixmapSequenceOverlayPainter KPixmapSequenceOverlayPainter;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new();
KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new2(const KPixmapSequence* seq);
KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new3(QObject* parent);
KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new4(const KPixmapSequence* seq, QObject* parent);
QMetaObject* KPixmapSequenceOverlayPainter_MetaObject(const KPixmapSequenceOverlayPainter* self);
void* KPixmapSequenceOverlayPainter_Metacast(KPixmapSequenceOverlayPainter* self, const char* param1);
int KPixmapSequenceOverlayPainter_Metacall(KPixmapSequenceOverlayPainter* self, int param1, int param2, void** param3);
libqt_string KPixmapSequenceOverlayPainter_Tr(const char* s);
KPixmapSequence* KPixmapSequenceOverlayPainter_Sequence(const KPixmapSequenceOverlayPainter* self);
int KPixmapSequenceOverlayPainter_Interval(const KPixmapSequenceOverlayPainter* self);
QRect* KPixmapSequenceOverlayPainter_Rect(const KPixmapSequenceOverlayPainter* self);
int KPixmapSequenceOverlayPainter_Alignment(const KPixmapSequenceOverlayPainter* self);
QPoint* KPixmapSequenceOverlayPainter_Offset(const KPixmapSequenceOverlayPainter* self);
void KPixmapSequenceOverlayPainter_SetSequence(KPixmapSequenceOverlayPainter* self, const KPixmapSequence* seq);
void KPixmapSequenceOverlayPainter_SetInterval(KPixmapSequenceOverlayPainter* self, int msecs);
void KPixmapSequenceOverlayPainter_SetWidget(KPixmapSequenceOverlayPainter* self, QWidget* w);
void KPixmapSequenceOverlayPainter_SetRect(KPixmapSequenceOverlayPainter* self, const QRect* rect);
void KPixmapSequenceOverlayPainter_SetAlignment(KPixmapSequenceOverlayPainter* self, int alignVal);
void KPixmapSequenceOverlayPainter_SetOffset(KPixmapSequenceOverlayPainter* self, const QPoint* offset);
void KPixmapSequenceOverlayPainter_Start(KPixmapSequenceOverlayPainter* self);
void KPixmapSequenceOverlayPainter_Stop(KPixmapSequenceOverlayPainter* self);
bool KPixmapSequenceOverlayPainter_EventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
libqt_string KPixmapSequenceOverlayPainter_Tr2(const char* s, const char* c);
libqt_string KPixmapSequenceOverlayPainter_Tr3(const char* s, const char* c, int n);
void KPixmapSequenceOverlayPainter_OnMetacall(KPixmapSequenceOverlayPainter* self, intptr_t slot);
int KPixmapSequenceOverlayPainter_QBaseMetacall(KPixmapSequenceOverlayPainter* self, int param1, int param2, void** param3);
void KPixmapSequenceOverlayPainter_OnEventFilter(KPixmapSequenceOverlayPainter* self, intptr_t slot);
bool KPixmapSequenceOverlayPainter_QBaseEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
bool KPixmapSequenceOverlayPainter_Event(KPixmapSequenceOverlayPainter* self, QEvent* event);
void KPixmapSequenceOverlayPainter_OnEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot);
bool KPixmapSequenceOverlayPainter_QBaseEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
void KPixmapSequenceOverlayPainter_TimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
void KPixmapSequenceOverlayPainter_OnTimerEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot);
void KPixmapSequenceOverlayPainter_QBaseTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
void KPixmapSequenceOverlayPainter_ChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
void KPixmapSequenceOverlayPainter_OnChildEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot);
void KPixmapSequenceOverlayPainter_QBaseChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
void KPixmapSequenceOverlayPainter_CustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
void KPixmapSequenceOverlayPainter_OnCustomEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot);
void KPixmapSequenceOverlayPainter_QBaseCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
void KPixmapSequenceOverlayPainter_ConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
void KPixmapSequenceOverlayPainter_OnConnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot);
void KPixmapSequenceOverlayPainter_QBaseConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
void KPixmapSequenceOverlayPainter_DisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
void KPixmapSequenceOverlayPainter_OnDisconnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot);
void KPixmapSequenceOverlayPainter_QBaseDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
QObject* KPixmapSequenceOverlayPainter_Sender(const KPixmapSequenceOverlayPainter* self);
void KPixmapSequenceOverlayPainter_OnSender(const KPixmapSequenceOverlayPainter* self, intptr_t slot);
QObject* KPixmapSequenceOverlayPainter_QBaseSender(const KPixmapSequenceOverlayPainter* self);
int KPixmapSequenceOverlayPainter_SenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
void KPixmapSequenceOverlayPainter_OnSenderSignalIndex(const KPixmapSequenceOverlayPainter* self, intptr_t slot);
int KPixmapSequenceOverlayPainter_QBaseSenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
int KPixmapSequenceOverlayPainter_Receivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
void KPixmapSequenceOverlayPainter_OnReceivers(const KPixmapSequenceOverlayPainter* self, intptr_t slot);
int KPixmapSequenceOverlayPainter_QBaseReceivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
bool KPixmapSequenceOverlayPainter_IsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
void KPixmapSequenceOverlayPainter_OnIsSignalConnected(const KPixmapSequenceOverlayPainter* self, intptr_t slot);
bool KPixmapSequenceOverlayPainter_QBaseIsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
void KPixmapSequenceOverlayPainter_Delete(KPixmapSequenceOverlayPainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
