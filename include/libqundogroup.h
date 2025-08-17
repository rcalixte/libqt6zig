#pragma once
#ifndef SRCC_LIBQUNDOGROUP_H
#define SRCC_LIBQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
#endif

QUndoGroup* QUndoGroup_new();
QUndoGroup* QUndoGroup_new2(QObject* parent);
QMetaObject* QUndoGroup_MetaObject(const QUndoGroup* self);
void* QUndoGroup_Metacast(QUndoGroup* self, const char* param1);
int QUndoGroup_Metacall(QUndoGroup* self, int param1, int param2, void** param3);
void QUndoGroup_OnMetacall(QUndoGroup* self, intptr_t slot);
int QUndoGroup_QBaseMetacall(QUndoGroup* self, int param1, int param2, void** param3);
libqt_string QUndoGroup_Tr(const char* s);
void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack);
libqt_list /* of QUndoStack* */ QUndoGroup_Stacks(const QUndoGroup* self);
QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self);
QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent);
QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent);
bool QUndoGroup_CanUndo(const QUndoGroup* self);
bool QUndoGroup_CanRedo(const QUndoGroup* self);
libqt_string QUndoGroup_UndoText(const QUndoGroup* self);
libqt_string QUndoGroup_RedoText(const QUndoGroup* self);
bool QUndoGroup_IsClean(const QUndoGroup* self);
void QUndoGroup_Undo(QUndoGroup* self);
void QUndoGroup_Redo(QUndoGroup* self);
void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack);
void QUndoGroup_Connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_IndexChanged(QUndoGroup* self, int idx);
void QUndoGroup_Connect_IndexChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean);
void QUndoGroup_Connect_CleanChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo);
void QUndoGroup_Connect_CanUndoChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo);
void QUndoGroup_Connect_CanRedoChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_UndoTextChanged(QUndoGroup* self, const libqt_string undoText);
void QUndoGroup_Connect_UndoTextChanged(QUndoGroup* self, intptr_t slot);
void QUndoGroup_RedoTextChanged(QUndoGroup* self, const libqt_string redoText);
void QUndoGroup_Connect_RedoTextChanged(QUndoGroup* self, intptr_t slot);
libqt_string QUndoGroup_Tr2(const char* s, const char* c);
libqt_string QUndoGroup_Tr3(const char* s, const char* c, int n);
QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix);
QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix);
bool QUndoGroup_Event(QUndoGroup* self, QEvent* event);
void QUndoGroup_OnEvent(QUndoGroup* self, intptr_t slot);
bool QUndoGroup_QBaseEvent(QUndoGroup* self, QEvent* event);
bool QUndoGroup_EventFilter(QUndoGroup* self, QObject* watched, QEvent* event);
void QUndoGroup_OnEventFilter(QUndoGroup* self, intptr_t slot);
bool QUndoGroup_QBaseEventFilter(QUndoGroup* self, QObject* watched, QEvent* event);
void QUndoGroup_TimerEvent(QUndoGroup* self, QTimerEvent* event);
void QUndoGroup_OnTimerEvent(QUndoGroup* self, intptr_t slot);
void QUndoGroup_QBaseTimerEvent(QUndoGroup* self, QTimerEvent* event);
void QUndoGroup_ChildEvent(QUndoGroup* self, QChildEvent* event);
void QUndoGroup_OnChildEvent(QUndoGroup* self, intptr_t slot);
void QUndoGroup_QBaseChildEvent(QUndoGroup* self, QChildEvent* event);
void QUndoGroup_CustomEvent(QUndoGroup* self, QEvent* event);
void QUndoGroup_OnCustomEvent(QUndoGroup* self, intptr_t slot);
void QUndoGroup_QBaseCustomEvent(QUndoGroup* self, QEvent* event);
void QUndoGroup_ConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
void QUndoGroup_OnConnectNotify(QUndoGroup* self, intptr_t slot);
void QUndoGroup_QBaseConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
void QUndoGroup_DisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
void QUndoGroup_OnDisconnectNotify(QUndoGroup* self, intptr_t slot);
void QUndoGroup_QBaseDisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
QObject* QUndoGroup_Sender(const QUndoGroup* self);
void QUndoGroup_OnSender(const QUndoGroup* self, intptr_t slot);
QObject* QUndoGroup_QBaseSender(const QUndoGroup* self);
int QUndoGroup_SenderSignalIndex(const QUndoGroup* self);
void QUndoGroup_OnSenderSignalIndex(const QUndoGroup* self, intptr_t slot);
int QUndoGroup_QBaseSenderSignalIndex(const QUndoGroup* self);
int QUndoGroup_Receivers(const QUndoGroup* self, const char* signal);
void QUndoGroup_OnReceivers(const QUndoGroup* self, intptr_t slot);
int QUndoGroup_QBaseReceivers(const QUndoGroup* self, const char* signal);
bool QUndoGroup_IsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
void QUndoGroup_OnIsSignalConnected(const QUndoGroup* self, intptr_t slot);
bool QUndoGroup_QBaseIsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
void QUndoGroup_Delete(QUndoGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
