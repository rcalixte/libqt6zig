#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTINTEGRATION_H
#define SRC_DESIGNERC_LIBABSTRACTINTEGRATION_H

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
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerIntegration QDesignerIntegration;
typedef struct QDesignerIntegrationInterface QDesignerIntegrationInterface;
typedef struct QDesignerResourceBrowserInterface QDesignerResourceBrowserInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new(QDesignerFormEditorInterface* core);
QDesignerIntegrationInterface* QDesignerIntegrationInterface_new2(QDesignerFormEditorInterface* core, QObject* parent);
QMetaObject* QDesignerIntegrationInterface_MetaObject(const QDesignerIntegrationInterface* self);
void* QDesignerIntegrationInterface_Metacast(QDesignerIntegrationInterface* self, const char* param1);
int QDesignerIntegrationInterface_Metacall(QDesignerIntegrationInterface* self, int param1, int param2, void** param3);
QDesignerFormEditorInterface* QDesignerIntegrationInterface_Core(const QDesignerIntegrationInterface* self);
QWidget* QDesignerIntegrationInterface_ContainerWindow(const QDesignerIntegrationInterface* self, QWidget* widget);
QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_CreateResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent);
libqt_string QDesignerIntegrationInterface_HeaderSuffix(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_SetHeaderSuffix(QDesignerIntegrationInterface* self, const libqt_string headerSuffix);
bool QDesignerIntegrationInterface_IsHeaderLowercase(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_SetHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase);
int QDesignerIntegrationInterface_Features(const QDesignerIntegrationInterface* self);
bool QDesignerIntegrationInterface_HasFeature(const QDesignerIntegrationInterface* self, int f);
int QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour);
libqt_string QDesignerIntegrationInterface_ContextHelpId(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_EmitObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, const libqt_string newName, const libqt_string oldName);
void QDesignerIntegrationInterface_EmitNavigateToSlot(QDesignerIntegrationInterface* self, const libqt_string objectName, const libqt_string signalSignature, const libqt_list /* of libqt_string */ parameterNames);
void QDesignerIntegrationInterface_EmitNavigateToSlot2(QDesignerIntegrationInterface* self, const libqt_string slotSignature);
void QDesignerIntegrationInterface_EmitHelpRequested(QDesignerIntegrationInterface* self, const libqt_string manual, const libqt_string document);
void QDesignerIntegrationInterface_PropertyChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, const libqt_string name, const QVariant* value);
void QDesignerIntegrationInterface_ObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, const libqt_string newName, const libqt_string oldName);
void QDesignerIntegrationInterface_HelpRequested(QDesignerIntegrationInterface* self, const libqt_string manual, const libqt_string document);
void QDesignerIntegrationInterface_NavigateToSlot(QDesignerIntegrationInterface* self, const libqt_string objectName, const libqt_string signalSignature, const libqt_list /* of libqt_string */ parameterNames);
void QDesignerIntegrationInterface_NavigateToSlot2(QDesignerIntegrationInterface* self, const libqt_string slotSignature);
void QDesignerIntegrationInterface_SetFeatures(QDesignerIntegrationInterface* self, int f);
void QDesignerIntegrationInterface_UpdateProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegrationInterface_UpdateProperty2(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value);
void QDesignerIntegrationInterface_ResetProperty(QDesignerIntegrationInterface* self, const libqt_string name);
void QDesignerIntegrationInterface_AddDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value);
void QDesignerIntegrationInterface_RemoveDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name);
void QDesignerIntegrationInterface_UpdateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_SetupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_UpdateSelection(QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnMetaObject(const QDesignerIntegrationInterface* self, intptr_t slot);
QMetaObject* QDesignerIntegrationInterface_SuperMetaObject(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnMetacast(QDesignerIntegrationInterface* self, intptr_t slot);
void* QDesignerIntegrationInterface_SuperMetacast(QDesignerIntegrationInterface* self, const char* param1);
void QDesignerIntegrationInterface_OnMetacall(QDesignerIntegrationInterface* self, intptr_t slot);
int QDesignerIntegrationInterface_SuperMetacall(QDesignerIntegrationInterface* self, int param1, int param2, void** param3);
void QDesignerIntegrationInterface_OnContainerWindow(const QDesignerIntegrationInterface* self, intptr_t slot);
QWidget* QDesignerIntegrationInterface_SuperContainerWindow(const QDesignerIntegrationInterface* self, QWidget* widget);
void QDesignerIntegrationInterface_OnCreateResourceBrowser(QDesignerIntegrationInterface* self, intptr_t slot);
QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_SuperCreateResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent);
void QDesignerIntegrationInterface_OnHeaderSuffix(const QDesignerIntegrationInterface* self, intptr_t slot);
libqt_string QDesignerIntegrationInterface_SuperHeaderSuffix(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSetHeaderSuffix(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperSetHeaderSuffix(QDesignerIntegrationInterface* self, const libqt_string headerSuffix);
void QDesignerIntegrationInterface_OnIsHeaderLowercase(const QDesignerIntegrationInterface* self, intptr_t slot);
bool QDesignerIntegrationInterface_SuperIsHeaderLowercase(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSetHeaderLowercase(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperSetHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase);
void QDesignerIntegrationInterface_OnFeatures(const QDesignerIntegrationInterface* self, intptr_t slot);
int QDesignerIntegrationInterface_SuperFeatures(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self, intptr_t slot);
int QDesignerIntegrationInterface_SuperResourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperSetResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour);
void QDesignerIntegrationInterface_OnContextHelpId(const QDesignerIntegrationInterface* self, intptr_t slot);
libqt_string QDesignerIntegrationInterface_SuperContextHelpId(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSetFeatures(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperSetFeatures(QDesignerIntegrationInterface* self, int f);
void QDesignerIntegrationInterface_OnUpdateProperty(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperUpdateProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegrationInterface_OnUpdateProperty2(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperUpdateProperty2(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value);
void QDesignerIntegrationInterface_OnResetProperty(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperResetProperty(QDesignerIntegrationInterface* self, const libqt_string name);
void QDesignerIntegrationInterface_OnAddDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperAddDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name, const QVariant* value);
void QDesignerIntegrationInterface_OnRemoveDynamicProperty(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperRemoveDynamicProperty(QDesignerIntegrationInterface* self, const libqt_string name);
void QDesignerIntegrationInterface_OnUpdateActiveFormWindow(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperUpdateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_OnSetupFormWindow(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperSetupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegrationInterface_OnUpdateSelection(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperUpdateSelection(QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperUpdateCustomWidgetPlugins(QDesignerIntegrationInterface* self);
bool QDesignerIntegrationInterface_Event(QDesignerIntegrationInterface* self, QEvent* event);
void QDesignerIntegrationInterface_OnEvent(QDesignerIntegrationInterface* self, intptr_t slot);
bool QDesignerIntegrationInterface_SuperEvent(QDesignerIntegrationInterface* self, QEvent* event);
bool QDesignerIntegrationInterface_EventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event);
void QDesignerIntegrationInterface_OnEventFilter(QDesignerIntegrationInterface* self, intptr_t slot);
bool QDesignerIntegrationInterface_SuperEventFilter(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event);
void QDesignerIntegrationInterface_TimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event);
void QDesignerIntegrationInterface_OnTimerEvent(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperTimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event);
void QDesignerIntegrationInterface_ChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event);
void QDesignerIntegrationInterface_OnChildEvent(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event);
void QDesignerIntegrationInterface_CustomEvent(QDesignerIntegrationInterface* self, QEvent* event);
void QDesignerIntegrationInterface_OnCustomEvent(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperCustomEvent(QDesignerIntegrationInterface* self, QEvent* event);
void QDesignerIntegrationInterface_ConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
void QDesignerIntegrationInterface_OnConnectNotify(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
void QDesignerIntegrationInterface_DisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
void QDesignerIntegrationInterface_OnDisconnectNotify(QDesignerIntegrationInterface* self, intptr_t slot);
void QDesignerIntegrationInterface_SuperDisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
QObject* QDesignerIntegrationInterface_Sender(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSender(const QDesignerIntegrationInterface* self, intptr_t slot);
QObject* QDesignerIntegrationInterface_SuperSender(const QDesignerIntegrationInterface* self);
int QDesignerIntegrationInterface_SenderSignalIndex(const QDesignerIntegrationInterface* self);
void QDesignerIntegrationInterface_OnSenderSignalIndex(const QDesignerIntegrationInterface* self, intptr_t slot);
int QDesignerIntegrationInterface_SuperSenderSignalIndex(const QDesignerIntegrationInterface* self);
int QDesignerIntegrationInterface_Receivers(const QDesignerIntegrationInterface* self, const char* signal);
void QDesignerIntegrationInterface_OnReceivers(const QDesignerIntegrationInterface* self, intptr_t slot);
int QDesignerIntegrationInterface_SuperReceivers(const QDesignerIntegrationInterface* self, const char* signal);
bool QDesignerIntegrationInterface_IsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal);
void QDesignerIntegrationInterface_OnIsSignalConnected(const QDesignerIntegrationInterface* self, intptr_t slot);
bool QDesignerIntegrationInterface_SuperIsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal);
void QDesignerIntegrationInterface_Delete(QDesignerIntegrationInterface* self);

QDesignerIntegration* QDesignerIntegration_new(QDesignerFormEditorInterface* core);
QDesignerIntegration* QDesignerIntegration_new2(QDesignerFormEditorInterface* core, QObject* parent);
QMetaObject* QDesignerIntegration_MetaObject(const QDesignerIntegration* self);
void* QDesignerIntegration_Metacast(QDesignerIntegration* self, const char* param1);
int QDesignerIntegration_Metacall(QDesignerIntegration* self, int param1, int param2, void** param3);
libqt_string QDesignerIntegration_HeaderSuffix(const QDesignerIntegration* self);
void QDesignerIntegration_SetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix);
bool QDesignerIntegration_IsHeaderLowercase(const QDesignerIntegration* self);
void QDesignerIntegration_SetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase);
int QDesignerIntegration_Features(const QDesignerIntegration* self);
void QDesignerIntegration_SetFeatures(QDesignerIntegration* self, int f);
int QDesignerIntegration_ResourceFileWatcherBehaviour(const QDesignerIntegration* self);
void QDesignerIntegration_SetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour);
QWidget* QDesignerIntegration_ContainerWindow(const QDesignerIntegration* self, QWidget* widget);
void QDesignerIntegration_InitializePlugins(QDesignerFormEditorInterface* formEditor);
QDesignerResourceBrowserInterface* QDesignerIntegration_CreateResourceBrowser(QDesignerIntegration* self, QWidget* parent);
libqt_string QDesignerIntegration_ContextHelpId(const QDesignerIntegration* self);
void QDesignerIntegration_UpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegration_UpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value);
void QDesignerIntegration_ResetProperty(QDesignerIntegration* self, const libqt_string name);
void QDesignerIntegration_AddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value);
void QDesignerIntegration_RemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name);
void QDesignerIntegration_UpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_SetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_UpdateSelection(QDesignerIntegration* self);
void QDesignerIntegration_UpdateCustomWidgetPlugins(QDesignerIntegration* self);
void QDesignerIntegration_OnMetaObject(const QDesignerIntegration* self, intptr_t slot);
QMetaObject* QDesignerIntegration_SuperMetaObject(const QDesignerIntegration* self);
void QDesignerIntegration_OnMetacast(QDesignerIntegration* self, intptr_t slot);
void* QDesignerIntegration_SuperMetacast(QDesignerIntegration* self, const char* param1);
void QDesignerIntegration_OnMetacall(QDesignerIntegration* self, intptr_t slot);
int QDesignerIntegration_SuperMetacall(QDesignerIntegration* self, int param1, int param2, void** param3);
void QDesignerIntegration_OnHeaderSuffix(const QDesignerIntegration* self, intptr_t slot);
libqt_string QDesignerIntegration_SuperHeaderSuffix(const QDesignerIntegration* self);
void QDesignerIntegration_OnSetHeaderSuffix(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperSetHeaderSuffix(QDesignerIntegration* self, const libqt_string headerSuffix);
void QDesignerIntegration_OnIsHeaderLowercase(const QDesignerIntegration* self, intptr_t slot);
bool QDesignerIntegration_SuperIsHeaderLowercase(const QDesignerIntegration* self);
void QDesignerIntegration_OnSetHeaderLowercase(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperSetHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase);
void QDesignerIntegration_OnFeatures(const QDesignerIntegration* self, intptr_t slot);
int QDesignerIntegration_SuperFeatures(const QDesignerIntegration* self);
void QDesignerIntegration_OnSetFeatures(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperSetFeatures(QDesignerIntegration* self, int f);
void QDesignerIntegration_OnResourceFileWatcherBehaviour(const QDesignerIntegration* self, intptr_t slot);
int QDesignerIntegration_SuperResourceFileWatcherBehaviour(const QDesignerIntegration* self);
void QDesignerIntegration_OnSetResourceFileWatcherBehaviour(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperSetResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour);
void QDesignerIntegration_OnContainerWindow(const QDesignerIntegration* self, intptr_t slot);
QWidget* QDesignerIntegration_SuperContainerWindow(const QDesignerIntegration* self, QWidget* widget);
void QDesignerIntegration_OnCreateResourceBrowser(QDesignerIntegration* self, intptr_t slot);
QDesignerResourceBrowserInterface* QDesignerIntegration_SuperCreateResourceBrowser(QDesignerIntegration* self, QWidget* parent);
void QDesignerIntegration_OnContextHelpId(const QDesignerIntegration* self, intptr_t slot);
libqt_string QDesignerIntegration_SuperContextHelpId(const QDesignerIntegration* self);
void QDesignerIntegration_OnUpdateProperty(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperUpdateProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value, bool enableSubPropertyHandling);
void QDesignerIntegration_OnUpdateProperty2(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperUpdateProperty2(QDesignerIntegration* self, const libqt_string name, const QVariant* value);
void QDesignerIntegration_OnResetProperty(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperResetProperty(QDesignerIntegration* self, const libqt_string name);
void QDesignerIntegration_OnAddDynamicProperty(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperAddDynamicProperty(QDesignerIntegration* self, const libqt_string name, const QVariant* value);
void QDesignerIntegration_OnRemoveDynamicProperty(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperRemoveDynamicProperty(QDesignerIntegration* self, const libqt_string name);
void QDesignerIntegration_OnUpdateActiveFormWindow(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperUpdateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_OnSetupFormWindow(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperSetupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow);
void QDesignerIntegration_OnUpdateSelection(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperUpdateSelection(QDesignerIntegration* self);
void QDesignerIntegration_OnUpdateCustomWidgetPlugins(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperUpdateCustomWidgetPlugins(QDesignerIntegration* self);
bool QDesignerIntegration_Event(QDesignerIntegration* self, QEvent* event);
void QDesignerIntegration_OnEvent(QDesignerIntegration* self, intptr_t slot);
bool QDesignerIntegration_SuperEvent(QDesignerIntegration* self, QEvent* event);
bool QDesignerIntegration_EventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event);
void QDesignerIntegration_OnEventFilter(QDesignerIntegration* self, intptr_t slot);
bool QDesignerIntegration_SuperEventFilter(QDesignerIntegration* self, QObject* watched, QEvent* event);
void QDesignerIntegration_TimerEvent(QDesignerIntegration* self, QTimerEvent* event);
void QDesignerIntegration_OnTimerEvent(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperTimerEvent(QDesignerIntegration* self, QTimerEvent* event);
void QDesignerIntegration_ChildEvent(QDesignerIntegration* self, QChildEvent* event);
void QDesignerIntegration_OnChildEvent(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperChildEvent(QDesignerIntegration* self, QChildEvent* event);
void QDesignerIntegration_CustomEvent(QDesignerIntegration* self, QEvent* event);
void QDesignerIntegration_OnCustomEvent(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperCustomEvent(QDesignerIntegration* self, QEvent* event);
void QDesignerIntegration_ConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
void QDesignerIntegration_OnConnectNotify(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
void QDesignerIntegration_DisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
void QDesignerIntegration_OnDisconnectNotify(QDesignerIntegration* self, intptr_t slot);
void QDesignerIntegration_SuperDisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
QObject* QDesignerIntegration_Sender(const QDesignerIntegration* self);
void QDesignerIntegration_OnSender(const QDesignerIntegration* self, intptr_t slot);
QObject* QDesignerIntegration_SuperSender(const QDesignerIntegration* self);
int QDesignerIntegration_SenderSignalIndex(const QDesignerIntegration* self);
void QDesignerIntegration_OnSenderSignalIndex(const QDesignerIntegration* self, intptr_t slot);
int QDesignerIntegration_SuperSenderSignalIndex(const QDesignerIntegration* self);
int QDesignerIntegration_Receivers(const QDesignerIntegration* self, const char* signal);
void QDesignerIntegration_OnReceivers(const QDesignerIntegration* self, intptr_t slot);
int QDesignerIntegration_SuperReceivers(const QDesignerIntegration* self, const char* signal);
bool QDesignerIntegration_IsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal);
void QDesignerIntegration_OnIsSignalConnected(const QDesignerIntegration* self, intptr_t slot);
bool QDesignerIntegration_SuperIsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal);
void QDesignerIntegration_Delete(QDesignerIntegration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
