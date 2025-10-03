#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBREADONLYPART_H
#define SRC_EXTRAS_KPARTSC_LIBREADONLYPART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent)
typedef KParts::GUIActivateEvent KParts__GUIActivateEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__NavigationExtension)
typedef KParts::NavigationExtension KParts__NavigationExtension;
#endif
typedef KParts::OpenUrlArguments KParts__OpenUrlArguments;
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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KActionCollection KActionCollection;
typedef struct KIO__Job KIO__Job;
typedef struct KParts__GUIActivateEvent KParts__GUIActivateEvent;
typedef struct KParts__NavigationExtension KParts__NavigationExtension;
typedef struct KParts__OpenUrlArguments KParts__OpenUrlArguments;
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartActivateEvent KParts__PartActivateEvent;
typedef struct KParts__PartBase KParts__PartBase;
typedef struct KParts__PartManager KParts__PartManager;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
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
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

KParts__ReadOnlyPart* KParts__ReadOnlyPart_new();
KParts__ReadOnlyPart* KParts__ReadOnlyPart_new2(QObject* parent);
KParts__ReadOnlyPart* KParts__ReadOnlyPart_new3(QObject* parent, const KPluginMetaData* data);
QMetaObject* KParts__ReadOnlyPart_MetaObject(const KParts__ReadOnlyPart* self);
void* KParts__ReadOnlyPart_Metacast(KParts__ReadOnlyPart* self, const char* param1);
int KParts__ReadOnlyPart_Metacall(KParts__ReadOnlyPart* self, int param1, int param2, void** param3);
libqt_string KParts__ReadOnlyPart_Tr(const char* s);
void KParts__ReadOnlyPart_SetProgressInfoEnabled(KParts__ReadOnlyPart* self, bool show);
bool KParts__ReadOnlyPart_IsProgressInfoEnabled(const KParts__ReadOnlyPart* self);
bool KParts__ReadOnlyPart_OpenUrl(KParts__ReadOnlyPart* self, const QUrl* url);
QUrl* KParts__ReadOnlyPart_Url(const KParts__ReadOnlyPart* self);
bool KParts__ReadOnlyPart_CloseUrl(KParts__ReadOnlyPart* self);
KParts__NavigationExtension* KParts__ReadOnlyPart_NavigationExtension(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_SetArguments(KParts__ReadOnlyPart* self, const KParts__OpenUrlArguments* arguments);
KParts__OpenUrlArguments* KParts__ReadOnlyPart_Arguments(const KParts__ReadOnlyPart* self);
bool KParts__ReadOnlyPart_OpenStream(KParts__ReadOnlyPart* self, const libqt_string mimeType, const QUrl* url);
bool KParts__ReadOnlyPart_WriteStream(KParts__ReadOnlyPart* self, const libqt_string data);
bool KParts__ReadOnlyPart_CloseStream(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_Started(KParts__ReadOnlyPart* self, KIO__Job* job);
void KParts__ReadOnlyPart_Connect_Started(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_Completed(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_Connect_Completed(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_CompletedWithPendingAction(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_Canceled(KParts__ReadOnlyPart* self, const libqt_string errMsg);
void KParts__ReadOnlyPart_Connect_Canceled(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_UrlChanged(KParts__ReadOnlyPart* self, const QUrl* url);
void KParts__ReadOnlyPart_Connect_UrlChanged(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_OpenFile(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_GuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event);
libqt_string KParts__ReadOnlyPart_Tr2(const char* s, const char* c);
libqt_string KParts__ReadOnlyPart_Tr3(const char* s, const char* c, int n);
void KParts__ReadOnlyPart_OnMetacall(KParts__ReadOnlyPart* self, intptr_t slot);
int KParts__ReadOnlyPart_QBaseMetacall(KParts__ReadOnlyPart* self, int param1, int param2, void** param3);
void KParts__ReadOnlyPart_OnOpenUrl(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseOpenUrl(KParts__ReadOnlyPart* self, const QUrl* url);
void KParts__ReadOnlyPart_OnCloseUrl(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseCloseUrl(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnOpenFile(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseOpenFile(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnGuiActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseGuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event);
QWidget* KParts__ReadOnlyPart_Widget(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnWidget(KParts__ReadOnlyPart* self, intptr_t slot);
QWidget* KParts__ReadOnlyPart_QBaseWidget(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_SetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager);
void KParts__ReadOnlyPart_OnSetManager(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager);
KParts__Part* KParts__ReadOnlyPart_HitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos);
void KParts__ReadOnlyPart_OnHitTest(KParts__ReadOnlyPart* self, intptr_t slot);
KParts__Part* KParts__ReadOnlyPart_QBaseHitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos);
void KParts__ReadOnlyPart_SetWidget(KParts__ReadOnlyPart* self, QWidget* widget);
void KParts__ReadOnlyPart_OnSetWidget(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetWidget(KParts__ReadOnlyPart* self, QWidget* widget);
void KParts__ReadOnlyPart_CustomEvent(KParts__ReadOnlyPart* self, QEvent* event);
void KParts__ReadOnlyPart_OnCustomEvent(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseCustomEvent(KParts__ReadOnlyPart* self, QEvent* event);
void KParts__ReadOnlyPart_PartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event);
void KParts__ReadOnlyPart_OnPartActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBasePartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event);
bool KParts__ReadOnlyPart_Event(KParts__ReadOnlyPart* self, QEvent* event);
void KParts__ReadOnlyPart_OnEvent(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseEvent(KParts__ReadOnlyPart* self, QEvent* event);
bool KParts__ReadOnlyPart_EventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event);
void KParts__ReadOnlyPart_OnEventFilter(KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseEventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event);
void KParts__ReadOnlyPart_TimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event);
void KParts__ReadOnlyPart_OnTimerEvent(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseTimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event);
void KParts__ReadOnlyPart_ChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event);
void KParts__ReadOnlyPart_OnChildEvent(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event);
void KParts__ReadOnlyPart_ConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal);
void KParts__ReadOnlyPart_OnConnectNotify(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal);
void KParts__ReadOnlyPart_DisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal);
void KParts__ReadOnlyPart_OnDisconnectNotify(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseDisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal);
QAction* KParts__ReadOnlyPart_Action2(const KParts__ReadOnlyPart* self, const QDomElement* element);
void KParts__ReadOnlyPart_OnAction2(const KParts__ReadOnlyPart* self, intptr_t slot);
QAction* KParts__ReadOnlyPart_QBaseAction2(const KParts__ReadOnlyPart* self, const QDomElement* element);
KActionCollection* KParts__ReadOnlyPart_ActionCollection(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnActionCollection(const KParts__ReadOnlyPart* self, intptr_t slot);
KActionCollection* KParts__ReadOnlyPart_QBaseActionCollection(const KParts__ReadOnlyPart* self);
libqt_string KParts__ReadOnlyPart_ComponentName(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnComponentName(const KParts__ReadOnlyPart* self, intptr_t slot);
libqt_string KParts__ReadOnlyPart_QBaseComponentName(const KParts__ReadOnlyPart* self);
QDomDocument* KParts__ReadOnlyPart_DomDocument(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnDomDocument(const KParts__ReadOnlyPart* self, intptr_t slot);
QDomDocument* KParts__ReadOnlyPart_QBaseDomDocument(const KParts__ReadOnlyPart* self);
libqt_string KParts__ReadOnlyPart_XmlFile(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnXmlFile(const KParts__ReadOnlyPart* self, intptr_t slot);
libqt_string KParts__ReadOnlyPart_QBaseXmlFile(const KParts__ReadOnlyPart* self);
libqt_string KParts__ReadOnlyPart_LocalXMLFile(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnLocalXMLFile(const KParts__ReadOnlyPart* self, intptr_t slot);
libqt_string KParts__ReadOnlyPart_QBaseLocalXMLFile(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_SetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__ReadOnlyPart_OnSetComponentName(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__ReadOnlyPart_SetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__ReadOnlyPart_OnSetXMLFile(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__ReadOnlyPart_SetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file);
void KParts__ReadOnlyPart_OnSetLocalXMLFile(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file);
void KParts__ReadOnlyPart_SetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge);
void KParts__ReadOnlyPart_OnSetXML(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge);
void KParts__ReadOnlyPart_SetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge);
void KParts__ReadOnlyPart_OnSetDOMDocument(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge);
void KParts__ReadOnlyPart_StateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse);
void KParts__ReadOnlyPart_OnStateChanged(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseStateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse);
void KParts__ReadOnlyPart_AbortLoad(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnAbortLoad(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseAbortLoad(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_SetUrl(KParts__ReadOnlyPart* self, const QUrl* url);
void KParts__ReadOnlyPart_OnSetUrl(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetUrl(KParts__ReadOnlyPart* self, const QUrl* url);
libqt_string KParts__ReadOnlyPart_LocalFilePath(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnLocalFilePath(const KParts__ReadOnlyPart* self, intptr_t slot);
libqt_string KParts__ReadOnlyPart_QBaseLocalFilePath(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_SetLocalFilePath(KParts__ReadOnlyPart* self, const libqt_string localFilePath);
void KParts__ReadOnlyPart_OnSetLocalFilePath(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSetLocalFilePath(KParts__ReadOnlyPart* self, const libqt_string localFilePath);
QWidget* KParts__ReadOnlyPart_HostContainer(KParts__ReadOnlyPart* self, const libqt_string containerName);
void KParts__ReadOnlyPart_OnHostContainer(KParts__ReadOnlyPart* self, intptr_t slot);
QWidget* KParts__ReadOnlyPart_QBaseHostContainer(KParts__ReadOnlyPart* self, const libqt_string containerName);
void KParts__ReadOnlyPart_SlotWidgetDestroyed(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnSlotWidgetDestroyed(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseSlotWidgetDestroyed(KParts__ReadOnlyPart* self);
QObject* KParts__ReadOnlyPart_Sender(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnSender(const KParts__ReadOnlyPart* self, intptr_t slot);
QObject* KParts__ReadOnlyPart_QBaseSender(const KParts__ReadOnlyPart* self);
int KParts__ReadOnlyPart_SenderSignalIndex(const KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnSenderSignalIndex(const KParts__ReadOnlyPart* self, intptr_t slot);
int KParts__ReadOnlyPart_QBaseSenderSignalIndex(const KParts__ReadOnlyPart* self);
int KParts__ReadOnlyPart_Receivers(const KParts__ReadOnlyPart* self, const char* signal);
void KParts__ReadOnlyPart_OnReceivers(const KParts__ReadOnlyPart* self, intptr_t slot);
int KParts__ReadOnlyPart_QBaseReceivers(const KParts__ReadOnlyPart* self, const char* signal);
bool KParts__ReadOnlyPart_IsSignalConnected(const KParts__ReadOnlyPart* self, const QMetaMethod* signal);
void KParts__ReadOnlyPart_OnIsSignalConnected(const KParts__ReadOnlyPart* self, intptr_t slot);
bool KParts__ReadOnlyPart_QBaseIsSignalConnected(const KParts__ReadOnlyPart* self, const QMetaMethod* signal);
libqt_string KParts__ReadOnlyPart_StandardsXmlFileLocation(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnStandardsXmlFileLocation(KParts__ReadOnlyPart* self, intptr_t slot);
libqt_string KParts__ReadOnlyPart_QBaseStandardsXmlFileLocation(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_LoadStandardsXmlFile(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_OnLoadStandardsXmlFile(KParts__ReadOnlyPart* self, intptr_t slot);
void KParts__ReadOnlyPart_QBaseLoadStandardsXmlFile(KParts__ReadOnlyPart* self);
void KParts__ReadOnlyPart_Delete(KParts__ReadOnlyPart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
