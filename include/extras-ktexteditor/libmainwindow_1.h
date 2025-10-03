#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBMAINWINDOW_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow)
typedef KTextEditor::MainWindow KTextEditor__MainWindow;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Plugin)
typedef KTextEditor::Plugin KTextEditor__Plugin;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__MainWindow KTextEditor__MainWindow;
typedef struct KTextEditor__Plugin KTextEditor__Plugin;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct KXMLGUIFactory KXMLGUIFactory;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

KTextEditor__MainWindow* KTextEditor__MainWindow_new(QObject* parent);
QMetaObject* KTextEditor__MainWindow_MetaObject(const KTextEditor__MainWindow* self);
void* KTextEditor__MainWindow_Metacast(KTextEditor__MainWindow* self, const char* param1);
int KTextEditor__MainWindow_Metacall(KTextEditor__MainWindow* self, int param1, int param2, void** param3);
libqt_string KTextEditor__MainWindow_Tr(const char* s);
QWidget* KTextEditor__MainWindow_Window(KTextEditor__MainWindow* self);
KXMLGUIFactory* KTextEditor__MainWindow_GuiFactory(KTextEditor__MainWindow* self);
void KTextEditor__MainWindow_UnhandledShortcutOverride(KTextEditor__MainWindow* self, QEvent* e);
void KTextEditor__MainWindow_Connect_UnhandledShortcutOverride(KTextEditor__MainWindow* self, intptr_t slot);
libqt_list /* of KTextEditor__View* */ KTextEditor__MainWindow_Views(KTextEditor__MainWindow* self);
KTextEditor__View* KTextEditor__MainWindow_ActiveView(KTextEditor__MainWindow* self);
KTextEditor__View* KTextEditor__MainWindow_ActivateView(KTextEditor__MainWindow* self, KTextEditor__Document* document);
KTextEditor__View* KTextEditor__MainWindow_OpenUrl(KTextEditor__MainWindow* self, const QUrl* url);
bool KTextEditor__MainWindow_CloseView(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_SplitView(KTextEditor__MainWindow* self, int orientation);
bool KTextEditor__MainWindow_CloseSplitView(KTextEditor__MainWindow* self, KTextEditor__View* view);
bool KTextEditor__MainWindow_ViewsInSameSplitView(KTextEditor__MainWindow* self, KTextEditor__View* view1, KTextEditor__View* view2);
void KTextEditor__MainWindow_ViewChanged(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_Connect_ViewChanged(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_ViewCreated(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_Connect_ViewCreated(KTextEditor__MainWindow* self, intptr_t slot);
QWidget* KTextEditor__MainWindow_CreateViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_DeleteViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_AddWidgetToViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view, QWidget* bar);
void KTextEditor__MainWindow_ShowViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view);
void KTextEditor__MainWindow_HideViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view);
QWidget* KTextEditor__MainWindow_CreateToolView(KTextEditor__MainWindow* self, KTextEditor__Plugin* plugin, const libqt_string identifier, int pos, const QIcon* icon, const libqt_string text);
bool KTextEditor__MainWindow_MoveToolView(KTextEditor__MainWindow* self, QWidget* widget, int pos);
bool KTextEditor__MainWindow_ShowToolView(KTextEditor__MainWindow* self, QWidget* widget);
bool KTextEditor__MainWindow_HideToolView(KTextEditor__MainWindow* self, QWidget* widget);
bool KTextEditor__MainWindow_ShowPluginConfigPage(KTextEditor__MainWindow* self, KTextEditor__Plugin* plugin, int page);
QObject* KTextEditor__MainWindow_PluginView(KTextEditor__MainWindow* self, const libqt_string name);
void KTextEditor__MainWindow_PluginViewCreated(KTextEditor__MainWindow* self, const libqt_string name, QObject* pluginView);
void KTextEditor__MainWindow_Connect_PluginViewCreated(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_PluginViewDeleted(KTextEditor__MainWindow* self, const libqt_string name, QObject* pluginView);
void KTextEditor__MainWindow_Connect_PluginViewDeleted(KTextEditor__MainWindow* self, intptr_t slot);
bool KTextEditor__MainWindow_AddWidget(KTextEditor__MainWindow* self, QWidget* widget);
bool KTextEditor__MainWindow_RemoveWidget(KTextEditor__MainWindow* self, QWidget* widget);
libqt_list /* of QWidget* */ KTextEditor__MainWindow_Widgets(KTextEditor__MainWindow* self);
QWidget* KTextEditor__MainWindow_ActiveWidget(KTextEditor__MainWindow* self);
void KTextEditor__MainWindow_ActivateWidget(KTextEditor__MainWindow* self, QWidget* widget);
void KTextEditor__MainWindow_WidgetAdded(KTextEditor__MainWindow* self, QWidget* widget);
void KTextEditor__MainWindow_Connect_WidgetAdded(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_WidgetRemoved(KTextEditor__MainWindow* self, QWidget* widget);
void KTextEditor__MainWindow_Connect_WidgetRemoved(KTextEditor__MainWindow* self, intptr_t slot);
bool KTextEditor__MainWindow_ShowMessage(KTextEditor__MainWindow* self, const libqt_map /* of libqt_string to QVariant* */ message);
libqt_string KTextEditor__MainWindow_Tr2(const char* s, const char* c);
libqt_string KTextEditor__MainWindow_Tr3(const char* s, const char* c, int n);
KTextEditor__View* KTextEditor__MainWindow_OpenUrl2(KTextEditor__MainWindow* self, const QUrl* url, const libqt_string encoding);
void KTextEditor__MainWindow_OnMetacall(KTextEditor__MainWindow* self, intptr_t slot);
int KTextEditor__MainWindow_QBaseMetacall(KTextEditor__MainWindow* self, int param1, int param2, void** param3);
bool KTextEditor__MainWindow_Event(KTextEditor__MainWindow* self, QEvent* event);
void KTextEditor__MainWindow_OnEvent(KTextEditor__MainWindow* self, intptr_t slot);
bool KTextEditor__MainWindow_QBaseEvent(KTextEditor__MainWindow* self, QEvent* event);
bool KTextEditor__MainWindow_EventFilter(KTextEditor__MainWindow* self, QObject* watched, QEvent* event);
void KTextEditor__MainWindow_OnEventFilter(KTextEditor__MainWindow* self, intptr_t slot);
bool KTextEditor__MainWindow_QBaseEventFilter(KTextEditor__MainWindow* self, QObject* watched, QEvent* event);
void KTextEditor__MainWindow_TimerEvent(KTextEditor__MainWindow* self, QTimerEvent* event);
void KTextEditor__MainWindow_OnTimerEvent(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_QBaseTimerEvent(KTextEditor__MainWindow* self, QTimerEvent* event);
void KTextEditor__MainWindow_ChildEvent(KTextEditor__MainWindow* self, QChildEvent* event);
void KTextEditor__MainWindow_OnChildEvent(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_QBaseChildEvent(KTextEditor__MainWindow* self, QChildEvent* event);
void KTextEditor__MainWindow_CustomEvent(KTextEditor__MainWindow* self, QEvent* event);
void KTextEditor__MainWindow_OnCustomEvent(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_QBaseCustomEvent(KTextEditor__MainWindow* self, QEvent* event);
void KTextEditor__MainWindow_ConnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal);
void KTextEditor__MainWindow_OnConnectNotify(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_QBaseConnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal);
void KTextEditor__MainWindow_DisconnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal);
void KTextEditor__MainWindow_OnDisconnectNotify(KTextEditor__MainWindow* self, intptr_t slot);
void KTextEditor__MainWindow_QBaseDisconnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal);
QObject* KTextEditor__MainWindow_Sender(const KTextEditor__MainWindow* self);
void KTextEditor__MainWindow_OnSender(const KTextEditor__MainWindow* self, intptr_t slot);
QObject* KTextEditor__MainWindow_QBaseSender(const KTextEditor__MainWindow* self);
int KTextEditor__MainWindow_SenderSignalIndex(const KTextEditor__MainWindow* self);
void KTextEditor__MainWindow_OnSenderSignalIndex(const KTextEditor__MainWindow* self, intptr_t slot);
int KTextEditor__MainWindow_QBaseSenderSignalIndex(const KTextEditor__MainWindow* self);
int KTextEditor__MainWindow_Receivers(const KTextEditor__MainWindow* self, const char* signal);
void KTextEditor__MainWindow_OnReceivers(const KTextEditor__MainWindow* self, intptr_t slot);
int KTextEditor__MainWindow_QBaseReceivers(const KTextEditor__MainWindow* self, const char* signal);
bool KTextEditor__MainWindow_IsSignalConnected(const KTextEditor__MainWindow* self, const QMetaMethod* signal);
void KTextEditor__MainWindow_OnIsSignalConnected(const KTextEditor__MainWindow* self, intptr_t slot);
bool KTextEditor__MainWindow_QBaseIsSignalConnected(const KTextEditor__MainWindow* self, const QMetaMethod* signal);
void KTextEditor__MainWindow_Delete(KTextEditor__MainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
