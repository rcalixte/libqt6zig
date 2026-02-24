#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTMETADATABASE_H
#define SRC_DESIGNERC_LIBABSTRACTMETADATABASE_H

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
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerMetaDataBaseInterface QDesignerMetaDataBaseInterface;
typedef struct QDesignerMetaDataBaseItemInterface QDesignerMetaDataBaseItemInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new();
libqt_string QDesignerMetaDataBaseItemInterface_Name(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_SetName(QDesignerMetaDataBaseItemInterface* self, const libqt_string name);
libqt_list /* of QWidget* */ QDesignerMetaDataBaseItemInterface_TabOrder(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_SetTabOrder(QDesignerMetaDataBaseItemInterface* self, const libqt_list /* of QWidget* */ tabOrder);
bool QDesignerMetaDataBaseItemInterface_Enabled(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_SetEnabled(QDesignerMetaDataBaseItemInterface* self, bool b);
void QDesignerMetaDataBaseItemInterface_OnName(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
libqt_string QDesignerMetaDataBaseItemInterface_SuperName(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_OnSetName(QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_SuperSetName(QDesignerMetaDataBaseItemInterface* self, const libqt_string name);
void QDesignerMetaDataBaseItemInterface_OnTabOrder(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
libqt_list /* of QWidget* */ QDesignerMetaDataBaseItemInterface_SuperTabOrder(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_OnSetTabOrder(QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_SuperSetTabOrder(QDesignerMetaDataBaseItemInterface* self, const libqt_list /* of QWidget* */ tabOrder);
void QDesignerMetaDataBaseItemInterface_OnEnabled(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
bool QDesignerMetaDataBaseItemInterface_SuperEnabled(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_OnSetEnabled(QDesignerMetaDataBaseItemInterface* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_SuperSetEnabled(QDesignerMetaDataBaseItemInterface* self, bool b);
void QDesignerMetaDataBaseItemInterface_Delete(QDesignerMetaDataBaseItemInterface* self);

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new();
QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent);
QMetaObject* QDesignerMetaDataBaseInterface_MetaObject(const QDesignerMetaDataBaseInterface* self);
void* QDesignerMetaDataBaseInterface_Metacast(QDesignerMetaDataBaseInterface* self, const char* param1);
int QDesignerMetaDataBaseInterface_Metacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3);
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_Item(const QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_Add(QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_Remove(QDesignerMetaDataBaseInterface* self, QObject* object);
libqt_list /* of QObject* */ QDesignerMetaDataBaseInterface_Objects(const QDesignerMetaDataBaseInterface* self);
QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_Core(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_Changed(QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_Connect_Changed(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_OnMetaObject(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
QMetaObject* QDesignerMetaDataBaseInterface_SuperMetaObject(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_OnMetacast(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void* QDesignerMetaDataBaseInterface_SuperMetacast(QDesignerMetaDataBaseInterface* self, const char* param1);
void QDesignerMetaDataBaseInterface_OnMetacall(QDesignerMetaDataBaseInterface* self, intptr_t slot);
int QDesignerMetaDataBaseInterface_SuperMetacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3);
void QDesignerMetaDataBaseInterface_OnItem(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_SuperItem(const QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_OnAdd(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperAdd(QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_OnRemove(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperRemove(QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_OnObjects(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
libqt_list /* of QObject* */ QDesignerMetaDataBaseInterface_SuperObjects(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_OnCore(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_SuperCore(const QDesignerMetaDataBaseInterface* self);
bool QDesignerMetaDataBaseInterface_Event(QDesignerMetaDataBaseInterface* self, QEvent* event);
void QDesignerMetaDataBaseInterface_OnEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot);
bool QDesignerMetaDataBaseInterface_SuperEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
bool QDesignerMetaDataBaseInterface_EventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event);
void QDesignerMetaDataBaseInterface_OnEventFilter(QDesignerMetaDataBaseInterface* self, intptr_t slot);
bool QDesignerMetaDataBaseInterface_SuperEventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event);
void QDesignerMetaDataBaseInterface_TimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event);
void QDesignerMetaDataBaseInterface_OnTimerEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperTimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event);
void QDesignerMetaDataBaseInterface_ChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event);
void QDesignerMetaDataBaseInterface_OnChildEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event);
void QDesignerMetaDataBaseInterface_CustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
void QDesignerMetaDataBaseInterface_OnCustomEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperCustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
void QDesignerMetaDataBaseInterface_ConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
void QDesignerMetaDataBaseInterface_OnConnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
void QDesignerMetaDataBaseInterface_DisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
void QDesignerMetaDataBaseInterface_OnDisconnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot);
void QDesignerMetaDataBaseInterface_SuperDisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
QObject* QDesignerMetaDataBaseInterface_Sender(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_OnSender(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
QObject* QDesignerMetaDataBaseInterface_SuperSender(const QDesignerMetaDataBaseInterface* self);
int QDesignerMetaDataBaseInterface_SenderSignalIndex(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_OnSenderSignalIndex(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
int QDesignerMetaDataBaseInterface_SuperSenderSignalIndex(const QDesignerMetaDataBaseInterface* self);
int QDesignerMetaDataBaseInterface_Receivers(const QDesignerMetaDataBaseInterface* self, const char* signal);
void QDesignerMetaDataBaseInterface_OnReceivers(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
int QDesignerMetaDataBaseInterface_SuperReceivers(const QDesignerMetaDataBaseInterface* self, const char* signal);
bool QDesignerMetaDataBaseInterface_IsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
void QDesignerMetaDataBaseInterface_OnIsSignalConnected(const QDesignerMetaDataBaseInterface* self, intptr_t slot);
bool QDesignerMetaDataBaseInterface_SuperIsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
void QDesignerMetaDataBaseInterface_Delete(QDesignerMetaDataBaseInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
