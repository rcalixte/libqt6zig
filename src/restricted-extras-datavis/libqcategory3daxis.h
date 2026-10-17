#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCATEGORY3DAXIS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCATEGORY3DAXIS_H

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
typedef struct QCategory3DAxis QCategory3DAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QCategory3DAxis* QCategory3DAxis_new();
QCategory3DAxis* QCategory3DAxis_new2(QObject* parent);
QMetaObject* QCategory3DAxis_MetaObject(const QCategory3DAxis* self);
void* QCategory3DAxis_Metacast(QCategory3DAxis* self, const char* param1);
int QCategory3DAxis_Metacall(QCategory3DAxis* self, int param1, int param2, void** param3);
libqt_string QCategory3DAxis_Tr(const char* s);
void QCategory3DAxis_SetLabels(QCategory3DAxis* self, const libqt_list /* of libqt_string */ labels);
libqt_list /* of libqt_string */ QCategory3DAxis_Labels(const QCategory3DAxis* self);
void QCategory3DAxis_LabelsChanged(QCategory3DAxis* self);
void QCategory3DAxis_Connect_LabelsChanged(QCategory3DAxis* self, intptr_t slot);
libqt_string QCategory3DAxis_Tr2(const char* s, const char* c);
libqt_string QCategory3DAxis_Tr3(const char* s, const char* c, int n);
void QCategory3DAxis_OnMetaObject(QCategory3DAxis* self, intptr_t slot);
QMetaObject* QCategory3DAxis_SuperMetaObject(const QCategory3DAxis* self);
void QCategory3DAxis_OnMetacast(QCategory3DAxis* self, intptr_t slot);
void* QCategory3DAxis_SuperMetacast(QCategory3DAxis* self, const char* param1);
void QCategory3DAxis_OnMetacall(QCategory3DAxis* self, intptr_t slot);
int QCategory3DAxis_SuperMetacall(QCategory3DAxis* self, int param1, int param2, void** param3);
bool QCategory3DAxis_Event(QCategory3DAxis* self, QEvent* event);
void QCategory3DAxis_OnEvent(QCategory3DAxis* self, intptr_t slot);
bool QCategory3DAxis_SuperEvent(QCategory3DAxis* self, QEvent* event);
bool QCategory3DAxis_EventFilter(QCategory3DAxis* self, QObject* watched, QEvent* event);
void QCategory3DAxis_OnEventFilter(QCategory3DAxis* self, intptr_t slot);
bool QCategory3DAxis_SuperEventFilter(QCategory3DAxis* self, QObject* watched, QEvent* event);
void QCategory3DAxis_TimerEvent(QCategory3DAxis* self, QTimerEvent* event);
void QCategory3DAxis_OnTimerEvent(QCategory3DAxis* self, intptr_t slot);
void QCategory3DAxis_SuperTimerEvent(QCategory3DAxis* self, QTimerEvent* event);
void QCategory3DAxis_ChildEvent(QCategory3DAxis* self, QChildEvent* event);
void QCategory3DAxis_OnChildEvent(QCategory3DAxis* self, intptr_t slot);
void QCategory3DAxis_SuperChildEvent(QCategory3DAxis* self, QChildEvent* event);
void QCategory3DAxis_CustomEvent(QCategory3DAxis* self, QEvent* event);
void QCategory3DAxis_OnCustomEvent(QCategory3DAxis* self, intptr_t slot);
void QCategory3DAxis_SuperCustomEvent(QCategory3DAxis* self, QEvent* event);
void QCategory3DAxis_ConnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
void QCategory3DAxis_OnConnectNotify(QCategory3DAxis* self, intptr_t slot);
void QCategory3DAxis_SuperConnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
void QCategory3DAxis_DisconnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
void QCategory3DAxis_OnDisconnectNotify(QCategory3DAxis* self, intptr_t slot);
void QCategory3DAxis_SuperDisconnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
QObject* QCategory3DAxis_Sender(const QCategory3DAxis* self);
int QCategory3DAxis_SenderSignalIndex(const QCategory3DAxis* self);
int QCategory3DAxis_Receivers(const QCategory3DAxis* self, const char* signal);
bool QCategory3DAxis_IsSignalConnected(const QCategory3DAxis* self, const QMetaMethod* signal);
void QCategory3DAxis_Delete(QCategory3DAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
