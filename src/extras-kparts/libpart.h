#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBPART_H
#define SRC_EXTRAS_KPARTSC_LIBPART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent)
typedef KParts::GUIActivateEvent KParts__GUIActivateEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part)
typedef KParts::Part KParts__Part;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent)
typedef KParts::PartActivateEvent KParts__PartActivateEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase)
typedef KParts::PartBase KParts__PartBase;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager)
typedef KParts::PartManager KParts__PartManager;
#endif
#else
typedef struct KActionCollection KActionCollection;
typedef struct KParts__GUIActivateEvent KParts__GUIActivateEvent;
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartActivateEvent KParts__PartActivateEvent;
typedef struct KParts__PartBase KParts__PartBase;
typedef struct KParts__PartManager KParts__PartManager;
typedef struct KPluginMetaData KPluginMetaData;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QDomDocument QDomDocument;
typedef struct QDomElement QDomElement;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KParts__Part* KParts__Part_new();
KParts__Part* KParts__Part_new2(QObject* parent);
KParts__Part* KParts__Part_new3(QObject* parent, const KPluginMetaData* data);
QMetaObject* KParts__Part_MetaObject(const KParts__Part* self);
void* KParts__Part_Metacast(KParts__Part* self, const char* param1);
int KParts__Part_Metacall(KParts__Part* self, int param1, int param2, void** param3);
libqt_string KParts__Part_Tr(const char* s);
QWidget* KParts__Part_Widget(KParts__Part* self);
void KParts__Part_SetManager(KParts__Part* self, KParts__PartManager* manager);
KParts__PartManager* KParts__Part_Manager(const KParts__Part* self);
void KParts__Part_SetAutoDeleteWidget(KParts__Part* self, bool autoDeleteWidget);
void KParts__Part_SetAutoDeletePart(KParts__Part* self, bool autoDeletePart);
KParts__Part* KParts__Part_HitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos);
KPluginMetaData* KParts__Part_MetaData(const KParts__Part* self);
void KParts__Part_SetWindowCaption(KParts__Part* self, const libqt_string caption);
void KParts__Part_Connect_SetWindowCaption(KParts__Part* self, intptr_t slot);
void KParts__Part_SetStatusBarText(KParts__Part* self, const libqt_string text);
void KParts__Part_Connect_SetStatusBarText(KParts__Part* self, intptr_t slot);
void KParts__Part_SetWidget(KParts__Part* self, QWidget* widget);
void KParts__Part_CustomEvent(KParts__Part* self, QEvent* event);
void KParts__Part_PartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event);
void KParts__Part_GuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event);
libqt_string KParts__Part_Tr2(const char* s, const char* c);
libqt_string KParts__Part_Tr3(const char* s, const char* c, int n);
void KParts__Part_OnMetacall(KParts__Part* self, intptr_t slot);
int KParts__Part_QBaseMetacall(KParts__Part* self, int param1, int param2, void** param3);
void KParts__Part_OnWidget(KParts__Part* self, intptr_t slot);
QWidget* KParts__Part_QBaseWidget(KParts__Part* self);
void KParts__Part_OnSetManager(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetManager(KParts__Part* self, KParts__PartManager* manager);
void KParts__Part_OnHitTest(KParts__Part* self, intptr_t slot);
KParts__Part* KParts__Part_QBaseHitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos);
void KParts__Part_OnSetWidget(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetWidget(KParts__Part* self, QWidget* widget);
void KParts__Part_OnCustomEvent(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseCustomEvent(KParts__Part* self, QEvent* event);
void KParts__Part_OnPartActivateEvent(KParts__Part* self, intptr_t slot);
void KParts__Part_QBasePartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event);
void KParts__Part_OnGuiActivateEvent(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseGuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event);
bool KParts__Part_Event(KParts__Part* self, QEvent* event);
void KParts__Part_OnEvent(KParts__Part* self, intptr_t slot);
bool KParts__Part_QBaseEvent(KParts__Part* self, QEvent* event);
bool KParts__Part_EventFilter(KParts__Part* self, QObject* watched, QEvent* event);
void KParts__Part_OnEventFilter(KParts__Part* self, intptr_t slot);
bool KParts__Part_QBaseEventFilter(KParts__Part* self, QObject* watched, QEvent* event);
void KParts__Part_TimerEvent(KParts__Part* self, QTimerEvent* event);
void KParts__Part_OnTimerEvent(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseTimerEvent(KParts__Part* self, QTimerEvent* event);
void KParts__Part_ChildEvent(KParts__Part* self, QChildEvent* event);
void KParts__Part_OnChildEvent(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseChildEvent(KParts__Part* self, QChildEvent* event);
void KParts__Part_ConnectNotify(KParts__Part* self, const QMetaMethod* signal);
void KParts__Part_OnConnectNotify(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseConnectNotify(KParts__Part* self, const QMetaMethod* signal);
void KParts__Part_DisconnectNotify(KParts__Part* self, const QMetaMethod* signal);
void KParts__Part_OnDisconnectNotify(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseDisconnectNotify(KParts__Part* self, const QMetaMethod* signal);
QAction* KParts__Part_Action2(const KParts__Part* self, const QDomElement* element);
void KParts__Part_OnAction2(const KParts__Part* self, intptr_t slot);
QAction* KParts__Part_QBaseAction2(const KParts__Part* self, const QDomElement* element);
KActionCollection* KParts__Part_ActionCollection(const KParts__Part* self);
void KParts__Part_OnActionCollection(const KParts__Part* self, intptr_t slot);
KActionCollection* KParts__Part_QBaseActionCollection(const KParts__Part* self);
libqt_string KParts__Part_ComponentName(const KParts__Part* self);
void KParts__Part_OnComponentName(const KParts__Part* self, intptr_t slot);
libqt_string KParts__Part_QBaseComponentName(const KParts__Part* self);
QDomDocument* KParts__Part_DomDocument(const KParts__Part* self);
void KParts__Part_OnDomDocument(const KParts__Part* self, intptr_t slot);
QDomDocument* KParts__Part_QBaseDomDocument(const KParts__Part* self);
libqt_string KParts__Part_XmlFile(const KParts__Part* self);
void KParts__Part_OnXmlFile(const KParts__Part* self, intptr_t slot);
libqt_string KParts__Part_QBaseXmlFile(const KParts__Part* self);
libqt_string KParts__Part_LocalXMLFile(const KParts__Part* self);
void KParts__Part_OnLocalXMLFile(const KParts__Part* self, intptr_t slot);
libqt_string KParts__Part_QBaseLocalXMLFile(const KParts__Part* self);
void KParts__Part_SetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__Part_OnSetComponentName(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__Part_SetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__Part_OnSetXMLFile(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__Part_SetLocalXMLFile(KParts__Part* self, const libqt_string file);
void KParts__Part_OnSetLocalXMLFile(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetLocalXMLFile(KParts__Part* self, const libqt_string file);
void KParts__Part_SetXML(KParts__Part* self, const libqt_string document, bool merge);
void KParts__Part_OnSetXML(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetXML(KParts__Part* self, const libqt_string document, bool merge);
void KParts__Part_SetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge);
void KParts__Part_OnSetDOMDocument(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge);
void KParts__Part_StateChanged(KParts__Part* self, const libqt_string newstate, int reverse);
void KParts__Part_OnStateChanged(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseStateChanged(KParts__Part* self, const libqt_string newstate, int reverse);
QWidget* KParts__Part_HostContainer(KParts__Part* self, const libqt_string containerName);
void KParts__Part_OnHostContainer(KParts__Part* self, intptr_t slot);
QWidget* KParts__Part_QBaseHostContainer(KParts__Part* self, const libqt_string containerName);
void KParts__Part_SlotWidgetDestroyed(KParts__Part* self);
void KParts__Part_OnSlotWidgetDestroyed(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseSlotWidgetDestroyed(KParts__Part* self);
QObject* KParts__Part_Sender(const KParts__Part* self);
void KParts__Part_OnSender(const KParts__Part* self, intptr_t slot);
QObject* KParts__Part_QBaseSender(const KParts__Part* self);
int KParts__Part_SenderSignalIndex(const KParts__Part* self);
void KParts__Part_OnSenderSignalIndex(const KParts__Part* self, intptr_t slot);
int KParts__Part_QBaseSenderSignalIndex(const KParts__Part* self);
int KParts__Part_Receivers(const KParts__Part* self, const char* signal);
void KParts__Part_OnReceivers(const KParts__Part* self, intptr_t slot);
int KParts__Part_QBaseReceivers(const KParts__Part* self, const char* signal);
bool KParts__Part_IsSignalConnected(const KParts__Part* self, const QMetaMethod* signal);
void KParts__Part_OnIsSignalConnected(const KParts__Part* self, intptr_t slot);
bool KParts__Part_QBaseIsSignalConnected(const KParts__Part* self, const QMetaMethod* signal);
libqt_string KParts__Part_StandardsXmlFileLocation(KParts__Part* self);
void KParts__Part_OnStandardsXmlFileLocation(KParts__Part* self, intptr_t slot);
libqt_string KParts__Part_QBaseStandardsXmlFileLocation(KParts__Part* self);
void KParts__Part_LoadStandardsXmlFile(KParts__Part* self);
void KParts__Part_OnLoadStandardsXmlFile(KParts__Part* self, intptr_t slot);
void KParts__Part_QBaseLoadStandardsXmlFile(KParts__Part* self);
void KParts__Part_Delete(KParts__Part* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
