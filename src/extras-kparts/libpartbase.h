#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBPARTBASE_H
#define SRC_EXTRAS_KPARTSC_LIBPARTBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase)
typedef KParts::PartBase KParts__PartBase;
#endif
#else
typedef struct KActionCollection KActionCollection;
typedef struct KParts__PartBase KParts__PartBase;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct QAction QAction;
typedef struct QDomDocument QDomDocument;
typedef struct QDomElement QDomElement;
typedef struct QObject QObject;
#endif

KParts__PartBase* KParts__PartBase_new();
void KParts__PartBase_SetPartObject(KParts__PartBase* self, QObject* object);
QObject* KParts__PartBase_PartObject(const KParts__PartBase* self);
QAction* KParts__PartBase_Action2(const KParts__PartBase* self, const QDomElement* element);
void KParts__PartBase_OnAction2(const KParts__PartBase* self, intptr_t slot);
QAction* KParts__PartBase_QBaseAction2(const KParts__PartBase* self, const QDomElement* element);
KActionCollection* KParts__PartBase_ActionCollection(const KParts__PartBase* self);
void KParts__PartBase_OnActionCollection(const KParts__PartBase* self, intptr_t slot);
KActionCollection* KParts__PartBase_QBaseActionCollection(const KParts__PartBase* self);
libqt_string KParts__PartBase_ComponentName(const KParts__PartBase* self);
void KParts__PartBase_OnComponentName(const KParts__PartBase* self, intptr_t slot);
libqt_string KParts__PartBase_QBaseComponentName(const KParts__PartBase* self);
QDomDocument* KParts__PartBase_DomDocument(const KParts__PartBase* self);
void KParts__PartBase_OnDomDocument(const KParts__PartBase* self, intptr_t slot);
QDomDocument* KParts__PartBase_QBaseDomDocument(const KParts__PartBase* self);
libqt_string KParts__PartBase_XmlFile(const KParts__PartBase* self);
void KParts__PartBase_OnXmlFile(const KParts__PartBase* self, intptr_t slot);
libqt_string KParts__PartBase_QBaseXmlFile(const KParts__PartBase* self);
libqt_string KParts__PartBase_LocalXMLFile(const KParts__PartBase* self);
void KParts__PartBase_OnLocalXMLFile(const KParts__PartBase* self, intptr_t slot);
libqt_string KParts__PartBase_QBaseLocalXMLFile(const KParts__PartBase* self);
void KParts__PartBase_SetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__PartBase_OnSetComponentName(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseSetComponentName(KParts__PartBase* self, const libqt_string componentName, const libqt_string componentDisplayName);
void KParts__PartBase_SetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__PartBase_OnSetXMLFile(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseSetXMLFile(KParts__PartBase* self, const libqt_string file, bool merge, bool setXMLDoc);
void KParts__PartBase_SetLocalXMLFile(KParts__PartBase* self, const libqt_string file);
void KParts__PartBase_OnSetLocalXMLFile(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseSetLocalXMLFile(KParts__PartBase* self, const libqt_string file);
void KParts__PartBase_SetXML(KParts__PartBase* self, const libqt_string document, bool merge);
void KParts__PartBase_OnSetXML(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseSetXML(KParts__PartBase* self, const libqt_string document, bool merge);
void KParts__PartBase_SetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge);
void KParts__PartBase_OnSetDOMDocument(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseSetDOMDocument(KParts__PartBase* self, const QDomDocument* document, bool merge);
void KParts__PartBase_StateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse);
void KParts__PartBase_OnStateChanged(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseStateChanged(KParts__PartBase* self, const libqt_string newstate, int reverse);
libqt_string KParts__PartBase_StandardsXmlFileLocation(KParts__PartBase* self);
void KParts__PartBase_OnStandardsXmlFileLocation(KParts__PartBase* self, intptr_t slot);
libqt_string KParts__PartBase_QBaseStandardsXmlFileLocation(KParts__PartBase* self);
void KParts__PartBase_LoadStandardsXmlFile(KParts__PartBase* self);
void KParts__PartBase_OnLoadStandardsXmlFile(KParts__PartBase* self, intptr_t slot);
void KParts__PartBase_QBaseLoadStandardsXmlFile(KParts__PartBase* self);
void KParts__PartBase_Delete(KParts__PartBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
