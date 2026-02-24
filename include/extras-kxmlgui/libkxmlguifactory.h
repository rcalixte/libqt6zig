#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKXMLGUIFACTORY_H
#define SRC_EXTRAS_KXMLGUIC_LIBKXMLGUIFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KXMLGUIBuilder KXMLGUIBuilder;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct KXMLGUIFactory KXMLGUIFactory;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QDomDocument QDomDocument;
typedef struct QDomElement QDomElement;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KXMLGUIFactory* KXMLGUIFactory_new(KXMLGUIBuilder* builder);
KXMLGUIFactory* KXMLGUIFactory_new2(KXMLGUIBuilder* builder, QObject* parent);
QMetaObject* KXMLGUIFactory_MetaObject(const KXMLGUIFactory* self);
void* KXMLGUIFactory_Metacast(KXMLGUIFactory* self, const char* param1);
int KXMLGUIFactory_Metacall(KXMLGUIFactory* self, int param1, int param2, void** param3);
libqt_string KXMLGUIFactory_ReadConfigFile(const libqt_string filename);
bool KXMLGUIFactory_SaveConfigFile(const QDomDocument* doc, const libqt_string filename);
QDomElement* KXMLGUIFactory_ActionPropertiesElement(QDomDocument* doc);
QDomElement* KXMLGUIFactory_FindActionByName(QDomElement* elem, const libqt_string sName, bool create);
void KXMLGUIFactory_AddClient(KXMLGUIFactory* self, KXMLGUIClient* client);
void KXMLGUIFactory_RemoveClient(KXMLGUIFactory* self, KXMLGUIClient* client);
void KXMLGUIFactory_PlugActionList(KXMLGUIFactory* self, KXMLGUIClient* client, const libqt_string name, const libqt_list /* of QAction* */ actionList);
void KXMLGUIFactory_UnplugActionList(KXMLGUIFactory* self, KXMLGUIClient* client, const libqt_string name);
libqt_list /* of KXMLGUIClient* */ KXMLGUIFactory_Clients(const KXMLGUIFactory* self);
QWidget* KXMLGUIFactory_Container(KXMLGUIFactory* self, const libqt_string containerName, KXMLGUIClient* client);
libqt_list /* of QWidget* */ KXMLGUIFactory_Containers(KXMLGUIFactory* self, const libqt_string tagName);
void KXMLGUIFactory_Reset(KXMLGUIFactory* self);
void KXMLGUIFactory_ResetContainer(KXMLGUIFactory* self, const libqt_string containerName);
void KXMLGUIFactory_RefreshActionProperties(KXMLGUIFactory* self);
void KXMLGUIFactory_ShowConfigureShortcutsDialog(KXMLGUIFactory* self);
void KXMLGUIFactory_ChangeShortcutScheme(KXMLGUIFactory* self, const libqt_string scheme);
void KXMLGUIFactory_ClientAdded(KXMLGUIFactory* self, KXMLGUIClient* client);
void KXMLGUIFactory_Connect_ClientAdded(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_ClientRemoved(KXMLGUIFactory* self, KXMLGUIClient* client);
void KXMLGUIFactory_Connect_ClientRemoved(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_MakingChanges(KXMLGUIFactory* self, bool param1);
void KXMLGUIFactory_Connect_MakingChanges(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_ShortcutsSaved(KXMLGUIFactory* self);
void KXMLGUIFactory_Connect_ShortcutsSaved(KXMLGUIFactory* self, intptr_t slot);
libqt_string KXMLGUIFactory_ReadConfigFile2(const libqt_string filename, const libqt_string componentName);
bool KXMLGUIFactory_SaveConfigFile3(const QDomDocument* doc, const libqt_string filename, const libqt_string componentName);
QWidget* KXMLGUIFactory_Container3(KXMLGUIFactory* self, const libqt_string containerName, KXMLGUIClient* client, bool useTagName);
void KXMLGUIFactory_ResetContainer2(KXMLGUIFactory* self, const libqt_string containerName, bool useTagName);
void KXMLGUIFactory_OnMetaObject(const KXMLGUIFactory* self, intptr_t slot);
QMetaObject* KXMLGUIFactory_SuperMetaObject(const KXMLGUIFactory* self);
void KXMLGUIFactory_OnMetacast(KXMLGUIFactory* self, intptr_t slot);
void* KXMLGUIFactory_SuperMetacast(KXMLGUIFactory* self, const char* param1);
void KXMLGUIFactory_OnMetacall(KXMLGUIFactory* self, intptr_t slot);
int KXMLGUIFactory_SuperMetacall(KXMLGUIFactory* self, int param1, int param2, void** param3);
bool KXMLGUIFactory_Event(KXMLGUIFactory* self, QEvent* event);
void KXMLGUIFactory_OnEvent(KXMLGUIFactory* self, intptr_t slot);
bool KXMLGUIFactory_SuperEvent(KXMLGUIFactory* self, QEvent* event);
bool KXMLGUIFactory_EventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event);
void KXMLGUIFactory_OnEventFilter(KXMLGUIFactory* self, intptr_t slot);
bool KXMLGUIFactory_SuperEventFilter(KXMLGUIFactory* self, QObject* watched, QEvent* event);
void KXMLGUIFactory_TimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
void KXMLGUIFactory_OnTimerEvent(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_SuperTimerEvent(KXMLGUIFactory* self, QTimerEvent* event);
void KXMLGUIFactory_ChildEvent(KXMLGUIFactory* self, QChildEvent* event);
void KXMLGUIFactory_OnChildEvent(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_SuperChildEvent(KXMLGUIFactory* self, QChildEvent* event);
void KXMLGUIFactory_CustomEvent(KXMLGUIFactory* self, QEvent* event);
void KXMLGUIFactory_OnCustomEvent(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_SuperCustomEvent(KXMLGUIFactory* self, QEvent* event);
void KXMLGUIFactory_ConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
void KXMLGUIFactory_OnConnectNotify(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_SuperConnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
void KXMLGUIFactory_DisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
void KXMLGUIFactory_OnDisconnectNotify(KXMLGUIFactory* self, intptr_t slot);
void KXMLGUIFactory_SuperDisconnectNotify(KXMLGUIFactory* self, const QMetaMethod* signal);
QObject* KXMLGUIFactory_Sender(const KXMLGUIFactory* self);
void KXMLGUIFactory_OnSender(const KXMLGUIFactory* self, intptr_t slot);
QObject* KXMLGUIFactory_SuperSender(const KXMLGUIFactory* self);
int KXMLGUIFactory_SenderSignalIndex(const KXMLGUIFactory* self);
void KXMLGUIFactory_OnSenderSignalIndex(const KXMLGUIFactory* self, intptr_t slot);
int KXMLGUIFactory_SuperSenderSignalIndex(const KXMLGUIFactory* self);
int KXMLGUIFactory_Receivers(const KXMLGUIFactory* self, const char* signal);
void KXMLGUIFactory_OnReceivers(const KXMLGUIFactory* self, intptr_t slot);
int KXMLGUIFactory_SuperReceivers(const KXMLGUIFactory* self, const char* signal);
bool KXMLGUIFactory_IsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
void KXMLGUIFactory_OnIsSignalConnected(const KXMLGUIFactory* self, intptr_t slot);
bool KXMLGUIFactory_SuperIsSignalConnected(const KXMLGUIFactory* self, const QMetaMethod* signal);
void KXMLGUIFactory_Delete(KXMLGUIFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
