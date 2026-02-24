#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBREADWRITEPART_H
#define SRC_EXTRAS_KPARTSC_LIBREADWRITEPART_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadWritePart)
typedef KParts::ReadWritePart KParts__ReadWritePart;
#endif
#else
typedef struct KActionCollection KActionCollection;
typedef struct KParts__GUIActivateEvent KParts__GUIActivateEvent;
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartActivateEvent KParts__PartActivateEvent;
typedef struct KParts__PartBase KParts__PartBase;
typedef struct KParts__PartManager KParts__PartManager;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct KParts__ReadWritePart KParts__ReadWritePart;
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

KParts__ReadWritePart* KParts__ReadWritePart_new();
KParts__ReadWritePart* KParts__ReadWritePart_new2(QObject* parent);
KParts__ReadWritePart* KParts__ReadWritePart_new3(QObject* parent, const KPluginMetaData* data);
QMetaObject* KParts__ReadWritePart_MetaObject(const KParts__ReadWritePart* self);
void* KParts__ReadWritePart_Metacast(KParts__ReadWritePart* self, const char* param1);
int KParts__ReadWritePart_Metacall(KParts__ReadWritePart* self, int param1, int param2, void** param3);
bool KParts__ReadWritePart_IsReadWrite(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_SetReadWrite(KParts__ReadWritePart* self, bool readwrite);
bool KParts__ReadWritePart_IsModified(const KParts__ReadWritePart* self);
bool KParts__ReadWritePart_QueryClose(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_CloseUrl(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_CloseUrl2(KParts__ReadWritePart* self, bool promptToSave);
bool KParts__ReadWritePart_SaveAs(KParts__ReadWritePart* self, const QUrl* url);
void KParts__ReadWritePart_SetModified(KParts__ReadWritePart* self, bool modified);
void KParts__ReadWritePart_SigQueryClose(KParts__ReadWritePart* self, bool* handled, bool* abortClosing);
void KParts__ReadWritePart_Connect_SigQueryClose(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SetModified2(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_Save(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_WaitSaveComplete(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_SaveFile(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_SaveToUrl(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnMetaObject(const KParts__ReadWritePart* self, intptr_t slot);
QMetaObject* KParts__ReadWritePart_SuperMetaObject(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnMetacast(KParts__ReadWritePart* self, intptr_t slot);
void* KParts__ReadWritePart_SuperMetacast(KParts__ReadWritePart* self, const char* param1);
void KParts__ReadWritePart_OnMetacall(KParts__ReadWritePart* self, intptr_t slot);
int KParts__ReadWritePart_SuperMetacall(KParts__ReadWritePart* self, int param1, int param2, void** param3);
void KParts__ReadWritePart_OnSetReadWrite(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetReadWrite(KParts__ReadWritePart* self, bool readwrite);
void KParts__ReadWritePart_OnQueryClose(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperQueryClose(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnCloseUrl(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperCloseUrl(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnCloseUrl2(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperCloseUrl2(KParts__ReadWritePart* self, bool promptToSave);
void KParts__ReadWritePart_OnSaveAs(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperSaveAs(KParts__ReadWritePart* self, const QUrl* url);
void KParts__ReadWritePart_OnSetModified(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetModified(KParts__ReadWritePart* self, bool modified);
void KParts__ReadWritePart_OnSave(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperSave(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnSaveFile(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperSaveFile(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnSaveToUrl(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperSaveToUrl(KParts__ReadWritePart* self);
bool KParts__ReadWritePart_OpenUrl(KParts__ReadWritePart* self, const QUrl* url);
void KParts__ReadWritePart_OnOpenUrl(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperOpenUrl(KParts__ReadWritePart* self, const QUrl* url);
bool KParts__ReadWritePart_OpenFile(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnOpenFile(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperOpenFile(KParts__ReadWritePart* self);
void KParts__ReadWritePart_GuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event);
void KParts__ReadWritePart_OnGuiActivateEvent(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperGuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event);
QWidget* KParts__ReadWritePart_Widget(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnWidget(KParts__ReadWritePart* self, intptr_t slot);
QWidget* KParts__ReadWritePart_SuperWidget(KParts__ReadWritePart* self);
void KParts__ReadWritePart_SetManager(KParts__ReadWritePart* self, KParts__PartManager* manager);
void KParts__ReadWritePart_OnSetManager(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetManager(KParts__ReadWritePart* self, KParts__PartManager* manager);
KParts__Part* KParts__ReadWritePart_HitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos);
void KParts__ReadWritePart_OnHitTest(KParts__ReadWritePart* self, intptr_t slot);
KParts__Part* KParts__ReadWritePart_SuperHitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos);
void KParts__ReadWritePart_SetWidget(KParts__ReadWritePart* self, QWidget* widget);
void KParts__ReadWritePart_OnSetWidget(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetWidget(KParts__ReadWritePart* self, QWidget* widget);
void KParts__ReadWritePart_CustomEvent(KParts__ReadWritePart* self, QEvent* event);
void KParts__ReadWritePart_OnCustomEvent(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperCustomEvent(KParts__ReadWritePart* self, QEvent* event);
void KParts__ReadWritePart_PartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event);
void KParts__ReadWritePart_OnPartActivateEvent(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperPartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event);
bool KParts__ReadWritePart_Event(KParts__ReadWritePart* self, QEvent* event);
void KParts__ReadWritePart_OnEvent(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperEvent(KParts__ReadWritePart* self, QEvent* event);
bool KParts__ReadWritePart_EventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event);
void KParts__ReadWritePart_OnEventFilter(KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperEventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event);
void KParts__ReadWritePart_TimerEvent(KParts__ReadWritePart* self, QTimerEvent* event);
void KParts__ReadWritePart_OnTimerEvent(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperTimerEvent(KParts__ReadWritePart* self, QTimerEvent* event);
void KParts__ReadWritePart_ChildEvent(KParts__ReadWritePart* self, QChildEvent* event);
void KParts__ReadWritePart_OnChildEvent(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperChildEvent(KParts__ReadWritePart* self, QChildEvent* event);
void KParts__ReadWritePart_ConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal);
void KParts__ReadWritePart_OnConnectNotify(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal);
void KParts__ReadWritePart_DisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal);
void KParts__ReadWritePart_OnDisconnectNotify(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperDisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal);
QAction* KParts__ReadWritePart_Action2(const KParts__ReadWritePart* self, const QDomElement* element);
void KParts__ReadWritePart_OnAction2(const KParts__ReadWritePart* self, intptr_t slot);
QAction* KParts__ReadWritePart_SuperAction2(const KParts__ReadWritePart* self, const QDomElement* element);
KActionCollection* KParts__ReadWritePart_ActionCollection(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnActionCollection(const KParts__ReadWritePart* self, intptr_t slot);
KActionCollection* KParts__ReadWritePart_SuperActionCollection(const KParts__ReadWritePart* self);
libqt_string KParts__ReadWritePart_ComponentName(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnComponentName(const KParts__ReadWritePart* self, intptr_t slot);
libqt_string KParts__ReadWritePart_SuperComponentName(const KParts__ReadWritePart* self);
QDomDocument* KParts__ReadWritePart_DomDocument(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnDomDocument(const KParts__ReadWritePart* self, intptr_t slot);
QDomDocument* KParts__ReadWritePart_SuperDomDocument(const KParts__ReadWritePart* self);
libqt_string KParts__ReadWritePart_XmlFile(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnXmlFile(const KParts__ReadWritePart* self, intptr_t slot);
libqt_string KParts__ReadWritePart_SuperXmlFile(const KParts__ReadWritePart* self);
libqt_string KParts__ReadWritePart_LocalXMLFile(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnLocalXMLFile(const KParts__ReadWritePart* self, intptr_t slot);
libqt_string KParts__ReadWritePart_SuperLocalXMLFile(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_SetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__ReadWritePart_OnSetComponentName(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__ReadWritePart_SetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__ReadWritePart_OnSetXMLFile(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__ReadWritePart_SetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file);
void KParts__ReadWritePart_OnSetLocalXMLFile(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file);
void KParts__ReadWritePart_SetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge);
void KParts__ReadWritePart_OnSetXML(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge);
void KParts__ReadWritePart_SetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge);
void KParts__ReadWritePart_OnSetDOMDocument(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge);
void KParts__ReadWritePart_StateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse);
void KParts__ReadWritePart_OnStateChanged(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperStateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse);
void KParts__ReadWritePart_AbortLoad(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnAbortLoad(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperAbortLoad(KParts__ReadWritePart* self);
void KParts__ReadWritePart_SetUrl(KParts__ReadWritePart* self, const QUrl* url);
void KParts__ReadWritePart_OnSetUrl(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetUrl(KParts__ReadWritePart* self, const QUrl* url);
libqt_string KParts__ReadWritePart_LocalFilePath(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnLocalFilePath(const KParts__ReadWritePart* self, intptr_t slot);
libqt_string KParts__ReadWritePart_SuperLocalFilePath(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_SetLocalFilePath(KParts__ReadWritePart* self, const libqt_string localFilePath);
void KParts__ReadWritePart_OnSetLocalFilePath(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSetLocalFilePath(KParts__ReadWritePart* self, const libqt_string localFilePath);
QWidget* KParts__ReadWritePart_HostContainer(KParts__ReadWritePart* self, const libqt_string containerName);
void KParts__ReadWritePart_OnHostContainer(KParts__ReadWritePart* self, intptr_t slot);
QWidget* KParts__ReadWritePart_SuperHostContainer(KParts__ReadWritePart* self, const libqt_string containerName);
void KParts__ReadWritePart_SlotWidgetDestroyed(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnSlotWidgetDestroyed(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperSlotWidgetDestroyed(KParts__ReadWritePart* self);
QObject* KParts__ReadWritePart_Sender(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnSender(const KParts__ReadWritePart* self, intptr_t slot);
QObject* KParts__ReadWritePart_SuperSender(const KParts__ReadWritePart* self);
int KParts__ReadWritePart_SenderSignalIndex(const KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnSenderSignalIndex(const KParts__ReadWritePart* self, intptr_t slot);
int KParts__ReadWritePart_SuperSenderSignalIndex(const KParts__ReadWritePart* self);
int KParts__ReadWritePart_Receivers(const KParts__ReadWritePart* self, const char* signal);
void KParts__ReadWritePart_OnReceivers(const KParts__ReadWritePart* self, intptr_t slot);
int KParts__ReadWritePart_SuperReceivers(const KParts__ReadWritePart* self, const char* signal);
bool KParts__ReadWritePart_IsSignalConnected(const KParts__ReadWritePart* self, const QMetaMethod* signal);
void KParts__ReadWritePart_OnIsSignalConnected(const KParts__ReadWritePart* self, intptr_t slot);
bool KParts__ReadWritePart_SuperIsSignalConnected(const KParts__ReadWritePart* self, const QMetaMethod* signal);
libqt_string KParts__ReadWritePart_StandardsXmlFileLocation(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnStandardsXmlFileLocation(KParts__ReadWritePart* self, intptr_t slot);
libqt_string KParts__ReadWritePart_SuperStandardsXmlFileLocation(KParts__ReadWritePart* self);
void KParts__ReadWritePart_LoadStandardsXmlFile(KParts__ReadWritePart* self);
void KParts__ReadWritePart_OnLoadStandardsXmlFile(KParts__ReadWritePart* self, intptr_t slot);
void KParts__ReadWritePart_SuperLoadStandardsXmlFile(KParts__ReadWritePart* self);
void KParts__ReadWritePart_Delete(KParts__ReadWritePart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
