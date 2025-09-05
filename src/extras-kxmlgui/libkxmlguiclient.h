#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKXMLGUICLIENT_H
#define SRC_EXTRAS_KXMLGUIC_LIBKXMLGUICLIENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KXMLGUIClient__StateChange)
typedef KXMLGUIClient::StateChange KXMLGUIClient__StateChange;
#endif
#else
typedef struct KActionCollection KActionCollection;
typedef struct KXMLGUIBuilder KXMLGUIBuilder;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct KXMLGUIClient__StateChange KXMLGUIClient__StateChange;
typedef struct KXMLGUIFactory KXMLGUIFactory;
typedef struct QAction QAction;
typedef struct QDomDocument QDomDocument;
typedef struct QDomElement QDomElement;
typedef struct QWidget QWidget;
#endif

KXMLGUIClient* KXMLGUIClient_new();
KXMLGUIClient* KXMLGUIClient_new2(KXMLGUIClient* parent);
QAction* KXMLGUIClient_Action(const KXMLGUIClient* self, const libqt_string name);
QAction* KXMLGUIClient_Action2(const KXMLGUIClient* self, const QDomElement* element);
KActionCollection* KXMLGUIClient_ActionCollection(const KXMLGUIClient* self);
libqt_string KXMLGUIClient_ComponentName(const KXMLGUIClient* self);
QDomDocument* KXMLGUIClient_DomDocument(const KXMLGUIClient* self);
libqt_string KXMLGUIClient_XmlFile(const KXMLGUIClient* self);
libqt_string KXMLGUIClient_LocalXMLFile(const KXMLGUIClient* self);
void KXMLGUIClient_SetXMLGUIBuildDocument(KXMLGUIClient* self, const QDomDocument* doc);
QDomDocument* KXMLGUIClient_XmlguiBuildDocument(const KXMLGUIClient* self);
void KXMLGUIClient_SetFactory(KXMLGUIClient* self, KXMLGUIFactory* factory);
KXMLGUIFactory* KXMLGUIClient_Factory(const KXMLGUIClient* self);
KXMLGUIClient* KXMLGUIClient_ParentClient(const KXMLGUIClient* self);
void KXMLGUIClient_InsertChildClient(KXMLGUIClient* self, KXMLGUIClient* child);
void KXMLGUIClient_RemoveChildClient(KXMLGUIClient* self, KXMLGUIClient* child);
libqt_list /* of KXMLGUIClient* */ KXMLGUIClient_ChildClients(KXMLGUIClient* self);
void KXMLGUIClient_SetClientBuilder(KXMLGUIClient* self, KXMLGUIBuilder* builder);
KXMLGUIBuilder* KXMLGUIClient_ClientBuilder(const KXMLGUIClient* self);
void KXMLGUIClient_ReloadXML(KXMLGUIClient* self);
void KXMLGUIClient_PlugActionList(KXMLGUIClient* self, const libqt_string name, const libqt_list /* of QAction* */ actionList);
void KXMLGUIClient_UnplugActionList(KXMLGUIClient* self, const libqt_string name);
libqt_string KXMLGUIClient_FindMostRecentXMLFile(const libqt_list /* of libqt_string */ files, libqt_string doc);
void KXMLGUIClient_AddStateActionEnabled(KXMLGUIClient* self, const libqt_string state, const libqt_string action);
void KXMLGUIClient_AddStateActionDisabled(KXMLGUIClient* self, const libqt_string state, const libqt_string action);
KXMLGUIClient__StateChange* KXMLGUIClient_GetActionsToChangeForState(KXMLGUIClient* self, const libqt_string state);
void KXMLGUIClient_BeginXMLPlug(KXMLGUIClient* self, QWidget* param1);
void KXMLGUIClient_EndXMLPlug(KXMLGUIClient* self);
void KXMLGUIClient_PrepareXMLUnplug(KXMLGUIClient* self, QWidget* param1);
void KXMLGUIClient_ReplaceXMLFile(KXMLGUIClient* self, const libqt_string xmlfile, const libqt_string localxmlfile);
libqt_string KXMLGUIClient_FindVersionNumber(const libqt_string xml);
void KXMLGUIClient_SetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KXMLGUIClient_SetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc);
void KXMLGUIClient_SetLocalXMLFile(KXMLGUIClient* self, const libqt_string file);
void KXMLGUIClient_SetXML(KXMLGUIClient* self, const libqt_string document, bool merge);
void KXMLGUIClient_SetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge);
void KXMLGUIClient_StateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse);
void KXMLGUIClient_VirtualHook(KXMLGUIClient* self, int id, void* data);
void KXMLGUIClient_ReplaceXMLFile3(KXMLGUIClient* self, const libqt_string xmlfile, const libqt_string localxmlfile, bool merge);
void KXMLGUIClient_OnAction2(const KXMLGUIClient* self, intptr_t slot);
QAction* KXMLGUIClient_QBaseAction2(const KXMLGUIClient* self, const QDomElement* element);
void KXMLGUIClient_OnActionCollection(const KXMLGUIClient* self, intptr_t slot);
KActionCollection* KXMLGUIClient_QBaseActionCollection(const KXMLGUIClient* self);
void KXMLGUIClient_OnComponentName(const KXMLGUIClient* self, intptr_t slot);
libqt_string KXMLGUIClient_QBaseComponentName(const KXMLGUIClient* self);
void KXMLGUIClient_OnDomDocument(const KXMLGUIClient* self, intptr_t slot);
QDomDocument* KXMLGUIClient_QBaseDomDocument(const KXMLGUIClient* self);
void KXMLGUIClient_OnXmlFile(const KXMLGUIClient* self, intptr_t slot);
libqt_string KXMLGUIClient_QBaseXmlFile(const KXMLGUIClient* self);
void KXMLGUIClient_OnLocalXMLFile(const KXMLGUIClient* self, intptr_t slot);
libqt_string KXMLGUIClient_QBaseLocalXMLFile(const KXMLGUIClient* self);
void KXMLGUIClient_OnSetComponentName(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseSetComponentName(KXMLGUIClient* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KXMLGUIClient_OnSetXMLFile(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseSetXMLFile(KXMLGUIClient* self, const libqt_string file, bool merge, bool setXMLDoc);
void KXMLGUIClient_OnSetLocalXMLFile(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseSetLocalXMLFile(KXMLGUIClient* self, const libqt_string file);
void KXMLGUIClient_OnSetXML(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseSetXML(KXMLGUIClient* self, const libqt_string document, bool merge);
void KXMLGUIClient_OnSetDOMDocument(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseSetDOMDocument(KXMLGUIClient* self, const QDomDocument* document, bool merge);
void KXMLGUIClient_OnStateChanged(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseStateChanged(KXMLGUIClient* self, const libqt_string newstate, int reverse);
void KXMLGUIClient_OnVirtualHook(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseVirtualHook(KXMLGUIClient* self, int id, void* data);
libqt_string KXMLGUIClient_StandardsXmlFileLocation(KXMLGUIClient* self);
void KXMLGUIClient_OnStandardsXmlFileLocation(KXMLGUIClient* self, intptr_t slot);
libqt_string KXMLGUIClient_QBaseStandardsXmlFileLocation(KXMLGUIClient* self);
void KXMLGUIClient_LoadStandardsXmlFile(KXMLGUIClient* self);
void KXMLGUIClient_OnLoadStandardsXmlFile(KXMLGUIClient* self, intptr_t slot);
void KXMLGUIClient_QBaseLoadStandardsXmlFile(KXMLGUIClient* self);
void KXMLGUIClient_Delete(KXMLGUIClient* self);

libqt_list /* of libqt_string */ KXMLGUIClient__StateChange_ActionsToEnable(const KXMLGUIClient__StateChange* self);
void KXMLGUIClient__StateChange_SetActionsToEnable(KXMLGUIClient__StateChange* self, libqt_list /* of libqt_string */ actionsToEnable);
libqt_list /* of libqt_string */ KXMLGUIClient__StateChange_ActionsToDisable(const KXMLGUIClient__StateChange* self);
void KXMLGUIClient__StateChange_SetActionsToDisable(KXMLGUIClient__StateChange* self, libqt_list /* of libqt_string */ actionsToDisable);
void KXMLGUIClient__StateChange_Delete(KXMLGUIClient__StateChange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
