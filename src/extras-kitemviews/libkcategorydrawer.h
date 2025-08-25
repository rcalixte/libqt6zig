#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBKCATEGORYDRAWER_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBKCATEGORYDRAWER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCategorizedView KCategorizedView;
typedef struct KCategoryDrawer KCategoryDrawer;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QStyleOption QStyleOption;
typedef struct QTimerEvent QTimerEvent;
#endif

KCategoryDrawer* KCategoryDrawer_new(KCategorizedView* view);
QMetaObject* KCategoryDrawer_MetaObject(const KCategoryDrawer* self);
void* KCategoryDrawer_Metacast(KCategoryDrawer* self, const char* param1);
int KCategoryDrawer_Metacall(KCategoryDrawer* self, int param1, int param2, void** param3);
void KCategoryDrawer_OnMetacall(KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseMetacall(KCategoryDrawer* self, int param1, int param2, void** param3);
libqt_string KCategoryDrawer_Tr(const char* s);
KCategorizedView* KCategoryDrawer_View(const KCategoryDrawer* self);
void KCategoryDrawer_DrawCategory(const KCategoryDrawer* self, const QModelIndex* index, int sortRole, const QStyleOption* option, QPainter* painter);
void KCategoryDrawer_OnDrawCategory(const KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseDrawCategory(const KCategoryDrawer* self, const QModelIndex* index, int sortRole, const QStyleOption* option, QPainter* painter);
int KCategoryDrawer_CategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option);
void KCategoryDrawer_OnCategoryHeight(const KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseCategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option);
int KCategoryDrawer_LeftMargin(const KCategoryDrawer* self);
void KCategoryDrawer_OnLeftMargin(const KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseLeftMargin(const KCategoryDrawer* self);
int KCategoryDrawer_RightMargin(const KCategoryDrawer* self);
void KCategoryDrawer_OnRightMargin(const KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseRightMargin(const KCategoryDrawer* self);
void KCategoryDrawer_CollapseOrExpandClicked(KCategoryDrawer* self, const QModelIndex* index);
void KCategoryDrawer_Connect_CollapseOrExpandClicked(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_ActionRequested(KCategoryDrawer* self, int action, const QModelIndex* index);
void KCategoryDrawer_Connect_ActionRequested(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_MouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_OnMouseButtonPressed(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseMouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_MouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_OnMouseButtonReleased(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseMouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_MouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_OnMouseMoved(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseMouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_MouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_OnMouseButtonDoubleClicked(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseMouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
void KCategoryDrawer_MouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect);
void KCategoryDrawer_OnMouseLeft(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseMouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect);
libqt_string KCategoryDrawer_Tr2(const char* s, const char* c);
libqt_string KCategoryDrawer_Tr3(const char* s, const char* c, int n);
bool KCategoryDrawer_Event(KCategoryDrawer* self, QEvent* event);
void KCategoryDrawer_OnEvent(KCategoryDrawer* self, intptr_t slot);
bool KCategoryDrawer_QBaseEvent(KCategoryDrawer* self, QEvent* event);
bool KCategoryDrawer_EventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event);
void KCategoryDrawer_OnEventFilter(KCategoryDrawer* self, intptr_t slot);
bool KCategoryDrawer_QBaseEventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event);
void KCategoryDrawer_TimerEvent(KCategoryDrawer* self, QTimerEvent* event);
void KCategoryDrawer_OnTimerEvent(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseTimerEvent(KCategoryDrawer* self, QTimerEvent* event);
void KCategoryDrawer_ChildEvent(KCategoryDrawer* self, QChildEvent* event);
void KCategoryDrawer_OnChildEvent(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseChildEvent(KCategoryDrawer* self, QChildEvent* event);
void KCategoryDrawer_CustomEvent(KCategoryDrawer* self, QEvent* event);
void KCategoryDrawer_OnCustomEvent(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseCustomEvent(KCategoryDrawer* self, QEvent* event);
void KCategoryDrawer_ConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
void KCategoryDrawer_OnConnectNotify(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
void KCategoryDrawer_DisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
void KCategoryDrawer_OnDisconnectNotify(KCategoryDrawer* self, intptr_t slot);
void KCategoryDrawer_QBaseDisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
QObject* KCategoryDrawer_Sender(const KCategoryDrawer* self);
void KCategoryDrawer_OnSender(const KCategoryDrawer* self, intptr_t slot);
QObject* KCategoryDrawer_QBaseSender(const KCategoryDrawer* self);
int KCategoryDrawer_SenderSignalIndex(const KCategoryDrawer* self);
void KCategoryDrawer_OnSenderSignalIndex(const KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseSenderSignalIndex(const KCategoryDrawer* self);
int KCategoryDrawer_Receivers(const KCategoryDrawer* self, const char* signal);
void KCategoryDrawer_OnReceivers(const KCategoryDrawer* self, intptr_t slot);
int KCategoryDrawer_QBaseReceivers(const KCategoryDrawer* self, const char* signal);
bool KCategoryDrawer_IsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal);
void KCategoryDrawer_OnIsSignalConnected(const KCategoryDrawer* self, intptr_t slot);
bool KCategoryDrawer_QBaseIsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal);
void KCategoryDrawer_Delete(KCategoryDrawer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
