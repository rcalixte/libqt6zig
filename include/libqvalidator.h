#pragma once
#ifndef SRCC_LIBQVALIDATOR_H
#define SRCC_LIBQVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDoubleValidator QDoubleValidator;
typedef struct QEvent QEvent;
typedef struct QIntValidator QIntValidator;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionValidator QRegularExpressionValidator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
#endif

#ifdef __cplusplus
typedef QDoubleValidator::Notation Notation; // C++ enum
typedef QValidator::State State;             // C++ enum
#else
typedef int Notation; // C ABI enum
typedef int State;    // C ABI enum
#endif

QValidator* QValidator_new();
QValidator* QValidator_new2(QObject* parent);
QMetaObject* QValidator_MetaObject(const QValidator* self);
void* QValidator_Metacast(QValidator* self, const char* param1);
int QValidator_Metacall(QValidator* self, int param1, int param2, void** param3);
void QValidator_OnMetacall(QValidator* self, intptr_t slot);
int QValidator_QBaseMetacall(QValidator* self, int param1, int param2, void** param3);
libqt_string QValidator_Tr(const char* s);
void QValidator_SetLocale(QValidator* self, const QLocale* locale);
QLocale* QValidator_Locale(const QValidator* self);
int QValidator_Validate(const QValidator* self, libqt_string param1, int* param2);
void QValidator_OnValidate(const QValidator* self, intptr_t slot);
int QValidator_QBaseValidate(const QValidator* self, libqt_string param1, int* param2);
void QValidator_Fixup(const QValidator* self, libqt_string param1);
void QValidator_OnFixup(const QValidator* self, intptr_t slot);
void QValidator_QBaseFixup(const QValidator* self, libqt_string param1);
void QValidator_Changed(QValidator* self);
void QValidator_Connect_Changed(QValidator* self, intptr_t slot);
libqt_string QValidator_Tr2(const char* s, const char* c);
libqt_string QValidator_Tr3(const char* s, const char* c, int n);
bool QValidator_Event(QValidator* self, QEvent* event);
void QValidator_OnEvent(QValidator* self, intptr_t slot);
bool QValidator_QBaseEvent(QValidator* self, QEvent* event);
bool QValidator_EventFilter(QValidator* self, QObject* watched, QEvent* event);
void QValidator_OnEventFilter(QValidator* self, intptr_t slot);
bool QValidator_QBaseEventFilter(QValidator* self, QObject* watched, QEvent* event);
void QValidator_TimerEvent(QValidator* self, QTimerEvent* event);
void QValidator_OnTimerEvent(QValidator* self, intptr_t slot);
void QValidator_QBaseTimerEvent(QValidator* self, QTimerEvent* event);
void QValidator_ChildEvent(QValidator* self, QChildEvent* event);
void QValidator_OnChildEvent(QValidator* self, intptr_t slot);
void QValidator_QBaseChildEvent(QValidator* self, QChildEvent* event);
void QValidator_CustomEvent(QValidator* self, QEvent* event);
void QValidator_OnCustomEvent(QValidator* self, intptr_t slot);
void QValidator_QBaseCustomEvent(QValidator* self, QEvent* event);
void QValidator_ConnectNotify(QValidator* self, const QMetaMethod* signal);
void QValidator_OnConnectNotify(QValidator* self, intptr_t slot);
void QValidator_QBaseConnectNotify(QValidator* self, const QMetaMethod* signal);
void QValidator_DisconnectNotify(QValidator* self, const QMetaMethod* signal);
void QValidator_OnDisconnectNotify(QValidator* self, intptr_t slot);
void QValidator_QBaseDisconnectNotify(QValidator* self, const QMetaMethod* signal);
QObject* QValidator_Sender(const QValidator* self);
void QValidator_OnSender(const QValidator* self, intptr_t slot);
QObject* QValidator_QBaseSender(const QValidator* self);
int QValidator_SenderSignalIndex(const QValidator* self);
void QValidator_OnSenderSignalIndex(const QValidator* self, intptr_t slot);
int QValidator_QBaseSenderSignalIndex(const QValidator* self);
int QValidator_Receivers(const QValidator* self, const char* signal);
void QValidator_OnReceivers(const QValidator* self, intptr_t slot);
int QValidator_QBaseReceivers(const QValidator* self, const char* signal);
bool QValidator_IsSignalConnected(const QValidator* self, const QMetaMethod* signal);
void QValidator_OnIsSignalConnected(const QValidator* self, intptr_t slot);
bool QValidator_QBaseIsSignalConnected(const QValidator* self, const QMetaMethod* signal);
void QValidator_Delete(QValidator* self);

QIntValidator* QIntValidator_new();
QIntValidator* QIntValidator_new2(int bottom, int top);
QIntValidator* QIntValidator_new3(QObject* parent);
QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent);
QMetaObject* QIntValidator_MetaObject(const QIntValidator* self);
void* QIntValidator_Metacast(QIntValidator* self, const char* param1);
int QIntValidator_Metacall(QIntValidator* self, int param1, int param2, void** param3);
void QIntValidator_OnMetacall(QIntValidator* self, intptr_t slot);
int QIntValidator_QBaseMetacall(QIntValidator* self, int param1, int param2, void** param3);
libqt_string QIntValidator_Tr(const char* s);
int QIntValidator_Validate(const QIntValidator* self, libqt_string param1, int* param2);
void QIntValidator_OnValidate(const QIntValidator* self, intptr_t slot);
int QIntValidator_QBaseValidate(const QIntValidator* self, libqt_string param1, int* param2);
void QIntValidator_Fixup(const QIntValidator* self, libqt_string input);
void QIntValidator_OnFixup(const QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseFixup(const QIntValidator* self, libqt_string input);
void QIntValidator_SetBottom(QIntValidator* self, int bottom);
void QIntValidator_SetTop(QIntValidator* self, int top);
void QIntValidator_SetRange(QIntValidator* self, int bottom, int top);
int QIntValidator_Bottom(const QIntValidator* self);
int QIntValidator_Top(const QIntValidator* self);
void QIntValidator_BottomChanged(QIntValidator* self, int bottom);
void QIntValidator_Connect_BottomChanged(QIntValidator* self, intptr_t slot);
void QIntValidator_TopChanged(QIntValidator* self, int top);
void QIntValidator_Connect_TopChanged(QIntValidator* self, intptr_t slot);
libqt_string QIntValidator_Tr2(const char* s, const char* c);
libqt_string QIntValidator_Tr3(const char* s, const char* c, int n);
bool QIntValidator_Event(QIntValidator* self, QEvent* event);
void QIntValidator_OnEvent(QIntValidator* self, intptr_t slot);
bool QIntValidator_QBaseEvent(QIntValidator* self, QEvent* event);
bool QIntValidator_EventFilter(QIntValidator* self, QObject* watched, QEvent* event);
void QIntValidator_OnEventFilter(QIntValidator* self, intptr_t slot);
bool QIntValidator_QBaseEventFilter(QIntValidator* self, QObject* watched, QEvent* event);
void QIntValidator_TimerEvent(QIntValidator* self, QTimerEvent* event);
void QIntValidator_OnTimerEvent(QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseTimerEvent(QIntValidator* self, QTimerEvent* event);
void QIntValidator_ChildEvent(QIntValidator* self, QChildEvent* event);
void QIntValidator_OnChildEvent(QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseChildEvent(QIntValidator* self, QChildEvent* event);
void QIntValidator_CustomEvent(QIntValidator* self, QEvent* event);
void QIntValidator_OnCustomEvent(QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseCustomEvent(QIntValidator* self, QEvent* event);
void QIntValidator_ConnectNotify(QIntValidator* self, const QMetaMethod* signal);
void QIntValidator_OnConnectNotify(QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseConnectNotify(QIntValidator* self, const QMetaMethod* signal);
void QIntValidator_DisconnectNotify(QIntValidator* self, const QMetaMethod* signal);
void QIntValidator_OnDisconnectNotify(QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseDisconnectNotify(QIntValidator* self, const QMetaMethod* signal);
QObject* QIntValidator_Sender(const QIntValidator* self);
void QIntValidator_OnSender(const QIntValidator* self, intptr_t slot);
QObject* QIntValidator_QBaseSender(const QIntValidator* self);
int QIntValidator_SenderSignalIndex(const QIntValidator* self);
void QIntValidator_OnSenderSignalIndex(const QIntValidator* self, intptr_t slot);
int QIntValidator_QBaseSenderSignalIndex(const QIntValidator* self);
int QIntValidator_Receivers(const QIntValidator* self, const char* signal);
void QIntValidator_OnReceivers(const QIntValidator* self, intptr_t slot);
int QIntValidator_QBaseReceivers(const QIntValidator* self, const char* signal);
bool QIntValidator_IsSignalConnected(const QIntValidator* self, const QMetaMethod* signal);
void QIntValidator_OnIsSignalConnected(const QIntValidator* self, intptr_t slot);
bool QIntValidator_QBaseIsSignalConnected(const QIntValidator* self, const QMetaMethod* signal);
void QIntValidator_Delete(QIntValidator* self);

QDoubleValidator* QDoubleValidator_new();
QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals);
QDoubleValidator* QDoubleValidator_new3(QObject* parent);
QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent);
QMetaObject* QDoubleValidator_MetaObject(const QDoubleValidator* self);
void* QDoubleValidator_Metacast(QDoubleValidator* self, const char* param1);
int QDoubleValidator_Metacall(QDoubleValidator* self, int param1, int param2, void** param3);
void QDoubleValidator_OnMetacall(QDoubleValidator* self, intptr_t slot);
int QDoubleValidator_QBaseMetacall(QDoubleValidator* self, int param1, int param2, void** param3);
libqt_string QDoubleValidator_Tr(const char* s);
int QDoubleValidator_Validate(const QDoubleValidator* self, libqt_string param1, int* param2);
void QDoubleValidator_OnValidate(const QDoubleValidator* self, intptr_t slot);
int QDoubleValidator_QBaseValidate(const QDoubleValidator* self, libqt_string param1, int* param2);
void QDoubleValidator_Fixup(const QDoubleValidator* self, libqt_string input);
void QDoubleValidator_OnFixup(const QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseFixup(const QDoubleValidator* self, libqt_string input);
void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals);
void QDoubleValidator_SetRange2(QDoubleValidator* self, double bottom, double top);
void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom);
void QDoubleValidator_SetTop(QDoubleValidator* self, double top);
void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals);
void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation);
double QDoubleValidator_Bottom(const QDoubleValidator* self);
double QDoubleValidator_Top(const QDoubleValidator* self);
int QDoubleValidator_Decimals(const QDoubleValidator* self);
int QDoubleValidator_Notation(const QDoubleValidator* self);
void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom);
void QDoubleValidator_Connect_BottomChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_TopChanged(QDoubleValidator* self, double top);
void QDoubleValidator_Connect_TopChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals);
void QDoubleValidator_Connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation);
void QDoubleValidator_Connect_NotationChanged(QDoubleValidator* self, intptr_t slot);
libqt_string QDoubleValidator_Tr2(const char* s, const char* c);
libqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n);
bool QDoubleValidator_Event(QDoubleValidator* self, QEvent* event);
void QDoubleValidator_OnEvent(QDoubleValidator* self, intptr_t slot);
bool QDoubleValidator_QBaseEvent(QDoubleValidator* self, QEvent* event);
bool QDoubleValidator_EventFilter(QDoubleValidator* self, QObject* watched, QEvent* event);
void QDoubleValidator_OnEventFilter(QDoubleValidator* self, intptr_t slot);
bool QDoubleValidator_QBaseEventFilter(QDoubleValidator* self, QObject* watched, QEvent* event);
void QDoubleValidator_TimerEvent(QDoubleValidator* self, QTimerEvent* event);
void QDoubleValidator_OnTimerEvent(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseTimerEvent(QDoubleValidator* self, QTimerEvent* event);
void QDoubleValidator_ChildEvent(QDoubleValidator* self, QChildEvent* event);
void QDoubleValidator_OnChildEvent(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseChildEvent(QDoubleValidator* self, QChildEvent* event);
void QDoubleValidator_CustomEvent(QDoubleValidator* self, QEvent* event);
void QDoubleValidator_OnCustomEvent(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseCustomEvent(QDoubleValidator* self, QEvent* event);
void QDoubleValidator_ConnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
void QDoubleValidator_OnConnectNotify(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseConnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
void QDoubleValidator_DisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
void QDoubleValidator_OnDisconnectNotify(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseDisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
QObject* QDoubleValidator_Sender(const QDoubleValidator* self);
void QDoubleValidator_OnSender(const QDoubleValidator* self, intptr_t slot);
QObject* QDoubleValidator_QBaseSender(const QDoubleValidator* self);
int QDoubleValidator_SenderSignalIndex(const QDoubleValidator* self);
void QDoubleValidator_OnSenderSignalIndex(const QDoubleValidator* self, intptr_t slot);
int QDoubleValidator_QBaseSenderSignalIndex(const QDoubleValidator* self);
int QDoubleValidator_Receivers(const QDoubleValidator* self, const char* signal);
void QDoubleValidator_OnReceivers(const QDoubleValidator* self, intptr_t slot);
int QDoubleValidator_QBaseReceivers(const QDoubleValidator* self, const char* signal);
bool QDoubleValidator_IsSignalConnected(const QDoubleValidator* self, const QMetaMethod* signal);
void QDoubleValidator_OnIsSignalConnected(const QDoubleValidator* self, intptr_t slot);
bool QDoubleValidator_QBaseIsSignalConnected(const QDoubleValidator* self, const QMetaMethod* signal);
void QDoubleValidator_Delete(QDoubleValidator* self);

QRegularExpressionValidator* QRegularExpressionValidator_new();
QRegularExpressionValidator* QRegularExpressionValidator_new2(const QRegularExpression* re);
QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent);
QRegularExpressionValidator* QRegularExpressionValidator_new4(const QRegularExpression* re, QObject* parent);
QMetaObject* QRegularExpressionValidator_MetaObject(const QRegularExpressionValidator* self);
void* QRegularExpressionValidator_Metacast(QRegularExpressionValidator* self, const char* param1);
int QRegularExpressionValidator_Metacall(QRegularExpressionValidator* self, int param1, int param2, void** param3);
void QRegularExpressionValidator_OnMetacall(QRegularExpressionValidator* self, intptr_t slot);
int QRegularExpressionValidator_QBaseMetacall(QRegularExpressionValidator* self, int param1, int param2, void** param3);
libqt_string QRegularExpressionValidator_Tr(const char* s);
int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, libqt_string input, int* pos);
void QRegularExpressionValidator_OnValidate(const QRegularExpressionValidator* self, intptr_t slot);
int QRegularExpressionValidator_QBaseValidate(const QRegularExpressionValidator* self, libqt_string input, int* pos);
QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self);
void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, const QRegularExpression* re);
void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, const QRegularExpression* re);
void QRegularExpressionValidator_Connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot);
libqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c);
libqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n);
void QRegularExpressionValidator_Fixup(const QRegularExpressionValidator* self, libqt_string param1);
void QRegularExpressionValidator_OnFixup(const QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseFixup(const QRegularExpressionValidator* self, libqt_string param1);
bool QRegularExpressionValidator_Event(QRegularExpressionValidator* self, QEvent* event);
void QRegularExpressionValidator_OnEvent(QRegularExpressionValidator* self, intptr_t slot);
bool QRegularExpressionValidator_QBaseEvent(QRegularExpressionValidator* self, QEvent* event);
bool QRegularExpressionValidator_EventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event);
void QRegularExpressionValidator_OnEventFilter(QRegularExpressionValidator* self, intptr_t slot);
bool QRegularExpressionValidator_QBaseEventFilter(QRegularExpressionValidator* self, QObject* watched, QEvent* event);
void QRegularExpressionValidator_TimerEvent(QRegularExpressionValidator* self, QTimerEvent* event);
void QRegularExpressionValidator_OnTimerEvent(QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseTimerEvent(QRegularExpressionValidator* self, QTimerEvent* event);
void QRegularExpressionValidator_ChildEvent(QRegularExpressionValidator* self, QChildEvent* event);
void QRegularExpressionValidator_OnChildEvent(QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseChildEvent(QRegularExpressionValidator* self, QChildEvent* event);
void QRegularExpressionValidator_CustomEvent(QRegularExpressionValidator* self, QEvent* event);
void QRegularExpressionValidator_OnCustomEvent(QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseCustomEvent(QRegularExpressionValidator* self, QEvent* event);
void QRegularExpressionValidator_ConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
void QRegularExpressionValidator_OnConnectNotify(QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
void QRegularExpressionValidator_DisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
void QRegularExpressionValidator_OnDisconnectNotify(QRegularExpressionValidator* self, intptr_t slot);
void QRegularExpressionValidator_QBaseDisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
QObject* QRegularExpressionValidator_Sender(const QRegularExpressionValidator* self);
void QRegularExpressionValidator_OnSender(const QRegularExpressionValidator* self, intptr_t slot);
QObject* QRegularExpressionValidator_QBaseSender(const QRegularExpressionValidator* self);
int QRegularExpressionValidator_SenderSignalIndex(const QRegularExpressionValidator* self);
void QRegularExpressionValidator_OnSenderSignalIndex(const QRegularExpressionValidator* self, intptr_t slot);
int QRegularExpressionValidator_QBaseSenderSignalIndex(const QRegularExpressionValidator* self);
int QRegularExpressionValidator_Receivers(const QRegularExpressionValidator* self, const char* signal);
void QRegularExpressionValidator_OnReceivers(const QRegularExpressionValidator* self, intptr_t slot);
int QRegularExpressionValidator_QBaseReceivers(const QRegularExpressionValidator* self, const char* signal);
bool QRegularExpressionValidator_IsSignalConnected(const QRegularExpressionValidator* self, const QMetaMethod* signal);
void QRegularExpressionValidator_OnIsSignalConnected(const QRegularExpressionValidator* self, intptr_t slot);
bool QRegularExpressionValidator_QBaseIsSignalConnected(const QRegularExpressionValidator* self, const QMetaMethod* signal);
void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
