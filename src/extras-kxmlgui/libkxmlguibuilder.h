#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKXMLGUIBUILDER_H
#define SRC_EXTRAS_KXMLGUIC_LIBKXMLGUIBUILDER_H

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
typedef struct QAction QAction;
typedef struct QDomElement QDomElement;
typedef struct QWidget QWidget;
#endif

KXMLGUIBuilder* KXMLGUIBuilder_new(QWidget* widget);
KXMLGUIClient* KXMLGUIBuilder_BuilderClient(const KXMLGUIBuilder* self);
void KXMLGUIBuilder_SetBuilderClient(KXMLGUIBuilder* self, KXMLGUIClient* client);
QWidget* KXMLGUIBuilder_Widget(KXMLGUIBuilder* self);
libqt_list /* of libqt_string */ KXMLGUIBuilder_ContainerTags(const KXMLGUIBuilder* self);
QWidget* KXMLGUIBuilder_CreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction);
void KXMLGUIBuilder_RemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction);
libqt_list /* of libqt_string */ KXMLGUIBuilder_CustomTags(const KXMLGUIBuilder* self);
QAction* KXMLGUIBuilder_CreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element);
void KXMLGUIBuilder_FinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client);
void KXMLGUIBuilder_OnContainerTags(const KXMLGUIBuilder* self, intptr_t slot);
libqt_list /* of libqt_string */ KXMLGUIBuilder_SuperContainerTags(const KXMLGUIBuilder* self);
void KXMLGUIBuilder_OnCreateContainer(KXMLGUIBuilder* self, intptr_t slot);
QWidget* KXMLGUIBuilder_SuperCreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction);
void KXMLGUIBuilder_OnRemoveContainer(KXMLGUIBuilder* self, intptr_t slot);
void KXMLGUIBuilder_SuperRemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction);
void KXMLGUIBuilder_OnCustomTags(const KXMLGUIBuilder* self, intptr_t slot);
libqt_list /* of libqt_string */ KXMLGUIBuilder_SuperCustomTags(const KXMLGUIBuilder* self);
void KXMLGUIBuilder_OnCreateCustomElement(KXMLGUIBuilder* self, intptr_t slot);
QAction* KXMLGUIBuilder_SuperCreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element);
void KXMLGUIBuilder_OnFinalizeGUI(KXMLGUIBuilder* self, intptr_t slot);
void KXMLGUIBuilder_SuperFinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client);
void KXMLGUIBuilder_Delete(KXMLGUIBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
