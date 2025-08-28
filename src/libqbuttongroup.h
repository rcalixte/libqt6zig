#pragma once
#ifndef SRCC_LIBQBUTTONGROUP_H
#define SRCC_LIBQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QButtonGroup* QButtonGroup_new();
QButtonGroup* QButtonGroup_new2(QObject* parent);
QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self);
void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1);
int QButtonGroup_Metacall(QButtonGroup* self, int param1, int param2, void** param3);
libqt_string QButtonGroup_Tr(const char* s);
void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive);
bool QButtonGroup_Exclusive(const QButtonGroup* self);
void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1);
libqt_list /* of QAbstractButton* */ QButtonGroup_Buttons(const QButtonGroup* self);
QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self);
QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id);
void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id);
int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button);
int QButtonGroup_CheckedId(const QButtonGroup* self);
void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1);
void QButtonGroup_Connect_ButtonReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2);
void QButtonGroup_Connect_ButtonToggled(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdClicked(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdClicked(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdPressed(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdPressed(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdReleased(QButtonGroup* self, int param1);
void QButtonGroup_Connect_IdReleased(QButtonGroup* self, intptr_t slot);
void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2);
void QButtonGroup_Connect_IdToggled(QButtonGroup* self, intptr_t slot);
libqt_string QButtonGroup_Tr2(const char* s, const char* c);
libqt_string QButtonGroup_Tr3(const char* s, const char* c, int n);
void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id);
void QButtonGroup_OnMetacall(QButtonGroup* self, intptr_t slot);
int QButtonGroup_QBaseMetacall(QButtonGroup* self, int param1, int param2, void** param3);
bool QButtonGroup_Event(QButtonGroup* self, QEvent* event);
void QButtonGroup_OnEvent(QButtonGroup* self, intptr_t slot);
bool QButtonGroup_QBaseEvent(QButtonGroup* self, QEvent* event);
bool QButtonGroup_EventFilter(QButtonGroup* self, QObject* watched, QEvent* event);
void QButtonGroup_OnEventFilter(QButtonGroup* self, intptr_t slot);
bool QButtonGroup_QBaseEventFilter(QButtonGroup* self, QObject* watched, QEvent* event);
void QButtonGroup_TimerEvent(QButtonGroup* self, QTimerEvent* event);
void QButtonGroup_OnTimerEvent(QButtonGroup* self, intptr_t slot);
void QButtonGroup_QBaseTimerEvent(QButtonGroup* self, QTimerEvent* event);
void QButtonGroup_ChildEvent(QButtonGroup* self, QChildEvent* event);
void QButtonGroup_OnChildEvent(QButtonGroup* self, intptr_t slot);
void QButtonGroup_QBaseChildEvent(QButtonGroup* self, QChildEvent* event);
void QButtonGroup_CustomEvent(QButtonGroup* self, QEvent* event);
void QButtonGroup_OnCustomEvent(QButtonGroup* self, intptr_t slot);
void QButtonGroup_QBaseCustomEvent(QButtonGroup* self, QEvent* event);
void QButtonGroup_ConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
void QButtonGroup_OnConnectNotify(QButtonGroup* self, intptr_t slot);
void QButtonGroup_QBaseConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
void QButtonGroup_DisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
void QButtonGroup_OnDisconnectNotify(QButtonGroup* self, intptr_t slot);
void QButtonGroup_QBaseDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
QObject* QButtonGroup_Sender(const QButtonGroup* self);
void QButtonGroup_OnSender(const QButtonGroup* self, intptr_t slot);
QObject* QButtonGroup_QBaseSender(const QButtonGroup* self);
int QButtonGroup_SenderSignalIndex(const QButtonGroup* self);
void QButtonGroup_OnSenderSignalIndex(const QButtonGroup* self, intptr_t slot);
int QButtonGroup_QBaseSenderSignalIndex(const QButtonGroup* self);
int QButtonGroup_Receivers(const QButtonGroup* self, const char* signal);
void QButtonGroup_OnReceivers(const QButtonGroup* self, intptr_t slot);
int QButtonGroup_QBaseReceivers(const QButtonGroup* self, const char* signal);
bool QButtonGroup_IsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
void QButtonGroup_OnIsSignalConnected(const QButtonGroup* self, intptr_t slot);
bool QButtonGroup_QBaseIsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
void QButtonGroup_Delete(QButtonGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
