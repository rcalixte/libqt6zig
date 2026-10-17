#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstract3DAxis QAbstract3DAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QValue3DAxisFormatter QValue3DAxisFormatter;
#endif

QValue3DAxis* QValue3DAxis_new();
QValue3DAxis* QValue3DAxis_new2(QObject* parent);
QMetaObject* QValue3DAxis_MetaObject(const QValue3DAxis* self);
void* QValue3DAxis_Metacast(QValue3DAxis* self, const char* param1);
int QValue3DAxis_Metacall(QValue3DAxis* self, int param1, int param2, void** param3);
libqt_string QValue3DAxis_Tr(const char* s);
void QValue3DAxis_SetSegmentCount(QValue3DAxis* self, int count);
int QValue3DAxis_SegmentCount(const QValue3DAxis* self);
void QValue3DAxis_SetSubSegmentCount(QValue3DAxis* self, int count);
int QValue3DAxis_SubSegmentCount(const QValue3DAxis* self);
void QValue3DAxis_SetLabelFormat(QValue3DAxis* self, const libqt_string format);
libqt_string QValue3DAxis_LabelFormat(const QValue3DAxis* self);
void QValue3DAxis_SetFormatter(QValue3DAxis* self, QValue3DAxisFormatter* formatter);
QValue3DAxisFormatter* QValue3DAxis_Formatter(const QValue3DAxis* self);
void QValue3DAxis_SetReversed(QValue3DAxis* self, bool enable);
bool QValue3DAxis_Reversed(const QValue3DAxis* self);
void QValue3DAxis_SegmentCountChanged(QValue3DAxis* self, int count);
void QValue3DAxis_Connect_SegmentCountChanged(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SubSegmentCountChanged(QValue3DAxis* self, int count);
void QValue3DAxis_Connect_SubSegmentCountChanged(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_LabelFormatChanged(QValue3DAxis* self, const libqt_string format);
void QValue3DAxis_Connect_LabelFormatChanged(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_FormatterChanged(QValue3DAxis* self, QValue3DAxisFormatter* formatter);
void QValue3DAxis_Connect_FormatterChanged(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_ReversedChanged(QValue3DAxis* self, bool enable);
void QValue3DAxis_Connect_ReversedChanged(QValue3DAxis* self, intptr_t slot);
libqt_string QValue3DAxis_Tr2(const char* s, const char* c);
libqt_string QValue3DAxis_Tr3(const char* s, const char* c, int n);
void QValue3DAxis_OnMetaObject(QValue3DAxis* self, intptr_t slot);
QMetaObject* QValue3DAxis_SuperMetaObject(const QValue3DAxis* self);
void QValue3DAxis_OnMetacast(QValue3DAxis* self, intptr_t slot);
void* QValue3DAxis_SuperMetacast(QValue3DAxis* self, const char* param1);
void QValue3DAxis_OnMetacall(QValue3DAxis* self, intptr_t slot);
int QValue3DAxis_SuperMetacall(QValue3DAxis* self, int param1, int param2, void** param3);
bool QValue3DAxis_Event(QValue3DAxis* self, QEvent* event);
void QValue3DAxis_OnEvent(QValue3DAxis* self, intptr_t slot);
bool QValue3DAxis_SuperEvent(QValue3DAxis* self, QEvent* event);
bool QValue3DAxis_EventFilter(QValue3DAxis* self, QObject* watched, QEvent* event);
void QValue3DAxis_OnEventFilter(QValue3DAxis* self, intptr_t slot);
bool QValue3DAxis_SuperEventFilter(QValue3DAxis* self, QObject* watched, QEvent* event);
void QValue3DAxis_TimerEvent(QValue3DAxis* self, QTimerEvent* event);
void QValue3DAxis_OnTimerEvent(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SuperTimerEvent(QValue3DAxis* self, QTimerEvent* event);
void QValue3DAxis_ChildEvent(QValue3DAxis* self, QChildEvent* event);
void QValue3DAxis_OnChildEvent(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SuperChildEvent(QValue3DAxis* self, QChildEvent* event);
void QValue3DAxis_CustomEvent(QValue3DAxis* self, QEvent* event);
void QValue3DAxis_OnCustomEvent(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SuperCustomEvent(QValue3DAxis* self, QEvent* event);
void QValue3DAxis_ConnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
void QValue3DAxis_OnConnectNotify(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SuperConnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
void QValue3DAxis_DisconnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
void QValue3DAxis_OnDisconnectNotify(QValue3DAxis* self, intptr_t slot);
void QValue3DAxis_SuperDisconnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
QObject* QValue3DAxis_Sender(const QValue3DAxis* self);
int QValue3DAxis_SenderSignalIndex(const QValue3DAxis* self);
int QValue3DAxis_Receivers(const QValue3DAxis* self, const char* signal);
bool QValue3DAxis_IsSignalConnected(const QValue3DAxis* self, const QMetaMethod* signal);
void QValue3DAxis_Delete(QValue3DAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
