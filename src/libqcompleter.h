#pragma once
#ifndef SRCC_LIBQCOMPLETER_H
#define SRCC_LIBQCOMPLETER_H

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
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QCompleter QCompleter;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QCompleter* QCompleter_new();
QCompleter* QCompleter_new2(QAbstractItemModel* model);
QCompleter* QCompleter_new3(const libqt_list /* of libqt_string */ completions);
QCompleter* QCompleter_new4(QObject* parent);
QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent);
QCompleter* QCompleter_new6(const libqt_list /* of libqt_string */ completions, QObject* parent);
QMetaObject* QCompleter_MetaObject(const QCompleter* self);
void* QCompleter_Metacast(QCompleter* self, const char* param1);
int QCompleter_Metacall(QCompleter* self, int param1, int param2, void** param3);
void QCompleter_OnMetacall(QCompleter* self, intptr_t slot);
int QCompleter_QBaseMetacall(QCompleter* self, int param1, int param2, void** param3);
libqt_string QCompleter_Tr(const char* s);
void QCompleter_SetWidget(QCompleter* self, QWidget* widget);
QWidget* QCompleter_Widget(const QCompleter* self);
void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c);
QAbstractItemModel* QCompleter_Model(const QCompleter* self);
void QCompleter_SetCompletionMode(QCompleter* self, int mode);
int QCompleter_CompletionMode(const QCompleter* self);
void QCompleter_SetFilterMode(QCompleter* self, int filterMode);
int QCompleter_FilterMode(const QCompleter* self);
QAbstractItemView* QCompleter_Popup(const QCompleter* self);
void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup);
void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity);
int QCompleter_CaseSensitivity(const QCompleter* self);
void QCompleter_SetModelSorting(QCompleter* self, int sorting);
int QCompleter_ModelSorting(const QCompleter* self);
void QCompleter_SetCompletionColumn(QCompleter* self, int column);
int QCompleter_CompletionColumn(const QCompleter* self);
void QCompleter_SetCompletionRole(QCompleter* self, int role);
int QCompleter_CompletionRole(const QCompleter* self);
bool QCompleter_WrapAround(const QCompleter* self);
int QCompleter_MaxVisibleItems(const QCompleter* self);
void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems);
int QCompleter_CompletionCount(const QCompleter* self);
bool QCompleter_SetCurrentRow(QCompleter* self, int row);
int QCompleter_CurrentRow(const QCompleter* self);
QModelIndex* QCompleter_CurrentIndex(const QCompleter* self);
libqt_string QCompleter_CurrentCompletion(const QCompleter* self);
QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self);
libqt_string QCompleter_CompletionPrefix(const QCompleter* self);
void QCompleter_SetCompletionPrefix(QCompleter* self, const libqt_string prefix);
void QCompleter_Complete(QCompleter* self);
void QCompleter_SetWrapAround(QCompleter* self, bool wrap);
libqt_string QCompleter_PathFromIndex(const QCompleter* self, const QModelIndex* index);
void QCompleter_OnPathFromIndex(const QCompleter* self, intptr_t slot);
libqt_string QCompleter_QBasePathFromIndex(const QCompleter* self, const QModelIndex* index);
libqt_list /* of libqt_string */ QCompleter_SplitPath(const QCompleter* self, const libqt_string path);
void QCompleter_OnSplitPath(const QCompleter* self, intptr_t slot);
libqt_list /* of libqt_string */ QCompleter_QBaseSplitPath(const QCompleter* self, const libqt_string path);
bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e);
void QCompleter_OnEventFilter(QCompleter* self, intptr_t slot);
bool QCompleter_QBaseEventFilter(QCompleter* self, QObject* o, QEvent* e);
bool QCompleter_Event(QCompleter* self, QEvent* param1);
void QCompleter_OnEvent(QCompleter* self, intptr_t slot);
bool QCompleter_QBaseEvent(QCompleter* self, QEvent* param1);
void QCompleter_Activated(QCompleter* self, const libqt_string text);
void QCompleter_ActivatedWithIndex(QCompleter* self, const QModelIndex* index);
void QCompleter_Highlighted(QCompleter* self, const libqt_string text);
void QCompleter_HighlightedWithIndex(QCompleter* self, const QModelIndex* index);
libqt_string QCompleter_Tr2(const char* s, const char* c);
libqt_string QCompleter_Tr3(const char* s, const char* c, int n);
void QCompleter_Complete1(QCompleter* self, const QRect* rect);
void QCompleter_TimerEvent(QCompleter* self, QTimerEvent* event);
void QCompleter_OnTimerEvent(QCompleter* self, intptr_t slot);
void QCompleter_QBaseTimerEvent(QCompleter* self, QTimerEvent* event);
void QCompleter_ChildEvent(QCompleter* self, QChildEvent* event);
void QCompleter_OnChildEvent(QCompleter* self, intptr_t slot);
void QCompleter_QBaseChildEvent(QCompleter* self, QChildEvent* event);
void QCompleter_CustomEvent(QCompleter* self, QEvent* event);
void QCompleter_OnCustomEvent(QCompleter* self, intptr_t slot);
void QCompleter_QBaseCustomEvent(QCompleter* self, QEvent* event);
void QCompleter_ConnectNotify(QCompleter* self, const QMetaMethod* signal);
void QCompleter_OnConnectNotify(QCompleter* self, intptr_t slot);
void QCompleter_QBaseConnectNotify(QCompleter* self, const QMetaMethod* signal);
void QCompleter_DisconnectNotify(QCompleter* self, const QMetaMethod* signal);
void QCompleter_OnDisconnectNotify(QCompleter* self, intptr_t slot);
void QCompleter_QBaseDisconnectNotify(QCompleter* self, const QMetaMethod* signal);
QObject* QCompleter_Sender(const QCompleter* self);
void QCompleter_OnSender(const QCompleter* self, intptr_t slot);
QObject* QCompleter_QBaseSender(const QCompleter* self);
int QCompleter_SenderSignalIndex(const QCompleter* self);
void QCompleter_OnSenderSignalIndex(const QCompleter* self, intptr_t slot);
int QCompleter_QBaseSenderSignalIndex(const QCompleter* self);
int QCompleter_Receivers(const QCompleter* self, const char* signal);
void QCompleter_OnReceivers(const QCompleter* self, intptr_t slot);
int QCompleter_QBaseReceivers(const QCompleter* self, const char* signal);
bool QCompleter_IsSignalConnected(const QCompleter* self, const QMetaMethod* signal);
void QCompleter_OnIsSignalConnected(const QCompleter* self, intptr_t slot);
bool QCompleter_QBaseIsSignalConnected(const QCompleter* self, const QMetaMethod* signal);
void QCompleter_Delete(QCompleter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
