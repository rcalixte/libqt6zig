#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QCustom3DItem QCustom3DItem;
typedef struct QCustom3DLabel QCustom3DLabel;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QCustom3DLabel* QCustom3DLabel_new();
QCustom3DLabel* QCustom3DLabel_new2(const libqt_string text, const QFont* font, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation);
QCustom3DLabel* QCustom3DLabel_new3(QObject* parent);
QCustom3DLabel* QCustom3DLabel_new4(const libqt_string text, const QFont* font, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, QObject* parent);
QMetaObject* QCustom3DLabel_MetaObject(const QCustom3DLabel* self);
void* QCustom3DLabel_Metacast(QCustom3DLabel* self, const char* param1);
int QCustom3DLabel_Metacall(QCustom3DLabel* self, int param1, int param2, void** param3);
libqt_string QCustom3DLabel_Tr(const char* s);
void QCustom3DLabel_SetText(QCustom3DLabel* self, const libqt_string text);
libqt_string QCustom3DLabel_Text(const QCustom3DLabel* self);
void QCustom3DLabel_SetFont(QCustom3DLabel* self, const QFont* font);
QFont* QCustom3DLabel_Font(const QCustom3DLabel* self);
void QCustom3DLabel_SetTextColor(QCustom3DLabel* self, const QColor* color);
QColor* QCustom3DLabel_TextColor(const QCustom3DLabel* self);
void QCustom3DLabel_SetBackgroundColor(QCustom3DLabel* self, const QColor* color);
QColor* QCustom3DLabel_BackgroundColor(const QCustom3DLabel* self);
void QCustom3DLabel_SetBorderEnabled(QCustom3DLabel* self, bool enabled);
bool QCustom3DLabel_IsBorderEnabled(const QCustom3DLabel* self);
void QCustom3DLabel_SetBackgroundEnabled(QCustom3DLabel* self, bool enabled);
bool QCustom3DLabel_IsBackgroundEnabled(const QCustom3DLabel* self);
void QCustom3DLabel_SetFacingCamera(QCustom3DLabel* self, bool enabled);
bool QCustom3DLabel_IsFacingCamera(const QCustom3DLabel* self);
void QCustom3DLabel_TextChanged(QCustom3DLabel* self, const libqt_string text);
void QCustom3DLabel_Connect_TextChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_FontChanged(QCustom3DLabel* self, const QFont* font);
void QCustom3DLabel_Connect_FontChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_TextColorChanged(QCustom3DLabel* self, const QColor* color);
void QCustom3DLabel_Connect_TextColorChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_BackgroundColorChanged(QCustom3DLabel* self, const QColor* color);
void QCustom3DLabel_Connect_BackgroundColorChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_BorderEnabledChanged(QCustom3DLabel* self, bool enabled);
void QCustom3DLabel_Connect_BorderEnabledChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_BackgroundEnabledChanged(QCustom3DLabel* self, bool enabled);
void QCustom3DLabel_Connect_BackgroundEnabledChanged(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_FacingCameraChanged(QCustom3DLabel* self, bool enabled);
void QCustom3DLabel_Connect_FacingCameraChanged(QCustom3DLabel* self, intptr_t slot);
libqt_string QCustom3DLabel_Tr2(const char* s, const char* c);
libqt_string QCustom3DLabel_Tr3(const char* s, const char* c, int n);
void QCustom3DLabel_OnMetaObject(QCustom3DLabel* self, intptr_t slot);
QMetaObject* QCustom3DLabel_SuperMetaObject(const QCustom3DLabel* self);
void QCustom3DLabel_OnMetacast(QCustom3DLabel* self, intptr_t slot);
void* QCustom3DLabel_SuperMetacast(QCustom3DLabel* self, const char* param1);
void QCustom3DLabel_OnMetacall(QCustom3DLabel* self, intptr_t slot);
int QCustom3DLabel_SuperMetacall(QCustom3DLabel* self, int param1, int param2, void** param3);
bool QCustom3DLabel_Event(QCustom3DLabel* self, QEvent* event);
void QCustom3DLabel_OnEvent(QCustom3DLabel* self, intptr_t slot);
bool QCustom3DLabel_SuperEvent(QCustom3DLabel* self, QEvent* event);
bool QCustom3DLabel_EventFilter(QCustom3DLabel* self, QObject* watched, QEvent* event);
void QCustom3DLabel_OnEventFilter(QCustom3DLabel* self, intptr_t slot);
bool QCustom3DLabel_SuperEventFilter(QCustom3DLabel* self, QObject* watched, QEvent* event);
void QCustom3DLabel_TimerEvent(QCustom3DLabel* self, QTimerEvent* event);
void QCustom3DLabel_OnTimerEvent(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_SuperTimerEvent(QCustom3DLabel* self, QTimerEvent* event);
void QCustom3DLabel_ChildEvent(QCustom3DLabel* self, QChildEvent* event);
void QCustom3DLabel_OnChildEvent(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_SuperChildEvent(QCustom3DLabel* self, QChildEvent* event);
void QCustom3DLabel_CustomEvent(QCustom3DLabel* self, QEvent* event);
void QCustom3DLabel_OnCustomEvent(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_SuperCustomEvent(QCustom3DLabel* self, QEvent* event);
void QCustom3DLabel_ConnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
void QCustom3DLabel_OnConnectNotify(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_SuperConnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
void QCustom3DLabel_DisconnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
void QCustom3DLabel_OnDisconnectNotify(QCustom3DLabel* self, intptr_t slot);
void QCustom3DLabel_SuperDisconnectNotify(QCustom3DLabel* self, const QMetaMethod* signal);
QObject* QCustom3DLabel_Sender(const QCustom3DLabel* self);
int QCustom3DLabel_SenderSignalIndex(const QCustom3DLabel* self);
int QCustom3DLabel_Receivers(const QCustom3DLabel* self, const char* signal);
bool QCustom3DLabel_IsSignalConnected(const QCustom3DLabel* self, const QMetaMethod* signal);
void QCustom3DLabel_Delete(QCustom3DLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
