#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKXMLGUIBUILDER_HXX
#define EXTRAS_KXMLGUI_LIBKXMLGUIBUILDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIBuilder
class VirtualKXMLGUIBuilder final : public KXMLGUIBuilder {
  public:
    // Virtual class public types (including callbacks and access types)
    using KXMLGUIBuilder_ContainerTags_Callback = const char** (*)(const KXMLGUIBuilder*);
    using KXMLGUIBuilder_CreateContainer_Callback = QWidget* (*)(KXMLGUIBuilder*, QWidget*, int, QDomElement*, QAction**);
    using KXMLGUIBuilder_RemoveContainer_Callback = void (*)(KXMLGUIBuilder*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KXMLGUIBuilder_CustomTags_Callback = const char** (*)(const KXMLGUIBuilder*);
    using KXMLGUIBuilder_CreateCustomElement_Callback = QAction* (*)(KXMLGUIBuilder*, QWidget*, int, QDomElement*);
    using KXMLGUIBuilder_FinalizeGUI_Callback = void (*)(KXMLGUIBuilder*, KXMLGUIClient*);

    // Instance callback storage
    KXMLGUIBuilder_ContainerTags_Callback kxmlguibuilder_containertags_callback = nullptr;
    KXMLGUIBuilder_CreateContainer_Callback kxmlguibuilder_createcontainer_callback = nullptr;
    KXMLGUIBuilder_RemoveContainer_Callback kxmlguibuilder_removecontainer_callback = nullptr;
    KXMLGUIBuilder_CustomTags_Callback kxmlguibuilder_customtags_callback = nullptr;
    KXMLGUIBuilder_CreateCustomElement_Callback kxmlguibuilder_createcustomelement_callback = nullptr;
    KXMLGUIBuilder_FinalizeGUI_Callback kxmlguibuilder_finalizegui_callback = nullptr;

    VirtualKXMLGUIBuilder(QWidget* widget) : KXMLGUIBuilder(widget) {};

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kxmlguibuilder_containertags_callback) {
            const char** callback_ret = kxmlguibuilder_containertags_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KXMLGUIBuilder::containerTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createContainer(QWidget* parent, int index, const QDomElement& element, QAction*& containerAction) override {
        if (kxmlguibuilder_createcontainer_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;
            QWidget* callback_ret = kxmlguibuilder_createcontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KXMLGUIBuilder::createContainer(parent, index, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kxmlguibuilder_removecontainer_callback) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;
            kxmlguibuilder_removecontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KXMLGUIBuilder::removeContainer(container, parent, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kxmlguibuilder_customtags_callback) {
            const char** callback_ret = kxmlguibuilder_customtags_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KXMLGUIBuilder::customTags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createCustomElement(QWidget* parent, int index, const QDomElement& element) override {
        if (kxmlguibuilder_createcustomelement_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction* callback_ret = kxmlguibuilder_createcustomelement_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KXMLGUIBuilder::createCustomElement(parent, index, element);
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kxmlguibuilder_finalizegui_callback) {
            KXMLGUIClient* cbval1 = client;
            kxmlguibuilder_finalizegui_callback(this, cbval1);
            return;
        }
        KXMLGUIBuilder::finalizeGUI(client);
    }
};

#endif
