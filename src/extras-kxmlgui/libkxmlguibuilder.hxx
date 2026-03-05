#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIBUILDER_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXMLGUIBuilder so that we can call protected methods
class VirtualKXMLGUIBuilder final : public KXMLGUIBuilder {

  public:
    // Virtual class boolean flag
    bool isVirtualKXMLGUIBuilder = true;

    // Virtual class public types (including callbacks)
    using KXMLGUIBuilder_ContainerTags_Callback = const char** (*)();
    using KXMLGUIBuilder_CreateContainer_Callback = QWidget* (*)(KXMLGUIBuilder*, QWidget*, int, QDomElement*, QAction**);
    using KXMLGUIBuilder_RemoveContainer_Callback = void (*)(KXMLGUIBuilder*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KXMLGUIBuilder_CustomTags_Callback = const char** (*)();
    using KXMLGUIBuilder_CreateCustomElement_Callback = QAction* (*)(KXMLGUIBuilder*, QWidget*, int, QDomElement*);
    using KXMLGUIBuilder_FinalizeGUI_Callback = void (*)(KXMLGUIBuilder*, KXMLGUIClient*);

  protected:
    // Instance callback storage
    KXMLGUIBuilder_ContainerTags_Callback kxmlguibuilder_containertags_callback = nullptr;
    KXMLGUIBuilder_CreateContainer_Callback kxmlguibuilder_createcontainer_callback = nullptr;
    KXMLGUIBuilder_RemoveContainer_Callback kxmlguibuilder_removecontainer_callback = nullptr;
    KXMLGUIBuilder_CustomTags_Callback kxmlguibuilder_customtags_callback = nullptr;
    KXMLGUIBuilder_CreateCustomElement_Callback kxmlguibuilder_createcustomelement_callback = nullptr;
    KXMLGUIBuilder_FinalizeGUI_Callback kxmlguibuilder_finalizegui_callback = nullptr;

    // Instance base flags
    mutable bool kxmlguibuilder_containertags_isbase = false;
    mutable bool kxmlguibuilder_createcontainer_isbase = false;
    mutable bool kxmlguibuilder_removecontainer_isbase = false;
    mutable bool kxmlguibuilder_customtags_isbase = false;
    mutable bool kxmlguibuilder_createcustomelement_isbase = false;
    mutable bool kxmlguibuilder_finalizegui_isbase = false;

  public:
    VirtualKXMLGUIBuilder(QWidget* widget) : KXMLGUIBuilder(widget) {};

    // Callback setters
    inline void setKXMLGUIBuilder_ContainerTags_Callback(KXMLGUIBuilder_ContainerTags_Callback cb) { kxmlguibuilder_containertags_callback = cb; }
    inline void setKXMLGUIBuilder_CreateContainer_Callback(KXMLGUIBuilder_CreateContainer_Callback cb) { kxmlguibuilder_createcontainer_callback = cb; }
    inline void setKXMLGUIBuilder_RemoveContainer_Callback(KXMLGUIBuilder_RemoveContainer_Callback cb) { kxmlguibuilder_removecontainer_callback = cb; }
    inline void setKXMLGUIBuilder_CustomTags_Callback(KXMLGUIBuilder_CustomTags_Callback cb) { kxmlguibuilder_customtags_callback = cb; }
    inline void setKXMLGUIBuilder_CreateCustomElement_Callback(KXMLGUIBuilder_CreateCustomElement_Callback cb) { kxmlguibuilder_createcustomelement_callback = cb; }
    inline void setKXMLGUIBuilder_FinalizeGUI_Callback(KXMLGUIBuilder_FinalizeGUI_Callback cb) { kxmlguibuilder_finalizegui_callback = cb; }

    // Base flag setters
    inline void setKXMLGUIBuilder_ContainerTags_IsBase(bool value) const { kxmlguibuilder_containertags_isbase = value; }
    inline void setKXMLGUIBuilder_CreateContainer_IsBase(bool value) const { kxmlguibuilder_createcontainer_isbase = value; }
    inline void setKXMLGUIBuilder_RemoveContainer_IsBase(bool value) const { kxmlguibuilder_removecontainer_isbase = value; }
    inline void setKXMLGUIBuilder_CustomTags_IsBase(bool value) const { kxmlguibuilder_customtags_isbase = value; }
    inline void setKXMLGUIBuilder_CreateCustomElement_IsBase(bool value) const { kxmlguibuilder_createcustomelement_isbase = value; }
    inline void setKXMLGUIBuilder_FinalizeGUI_IsBase(bool value) const { kxmlguibuilder_finalizegui_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kxmlguibuilder_containertags_isbase) {
            kxmlguibuilder_containertags_isbase = false;
            return KXMLGUIBuilder::containerTags();
        }
        auto containertags_cb = kxmlguibuilder_containertags_callback;
        if (containertags_cb) {
            const char** callback_ret = containertags_cb();
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
        if (kxmlguibuilder_createcontainer_isbase) {
            kxmlguibuilder_createcontainer_isbase = false;
            return KXMLGUIBuilder::createContainer(parent, index, element, containerAction);
        }
        auto createcontainer_cb = kxmlguibuilder_createcontainer_callback;
        if (createcontainer_cb) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;

            QWidget* callback_ret = createcontainer_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KXMLGUIBuilder::createContainer(parent, index, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kxmlguibuilder_removecontainer_isbase) {
            kxmlguibuilder_removecontainer_isbase = false;
            KXMLGUIBuilder::removeContainer(container, parent, element, containerAction);
            return;
        }
        auto removecontainer_cb = kxmlguibuilder_removecontainer_callback;
        if (removecontainer_cb) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;

            removecontainer_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KXMLGUIBuilder::removeContainer(container, parent, element, containerAction);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kxmlguibuilder_customtags_isbase) {
            kxmlguibuilder_customtags_isbase = false;
            return KXMLGUIBuilder::customTags();
        }
        auto customtags_cb = kxmlguibuilder_customtags_callback;
        if (customtags_cb) {
            const char** callback_ret = customtags_cb();
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
        if (kxmlguibuilder_createcustomelement_isbase) {
            kxmlguibuilder_createcustomelement_isbase = false;
            return KXMLGUIBuilder::createCustomElement(parent, index, element);
        }
        auto createcustomelement_cb = kxmlguibuilder_createcustomelement_callback;
        if (createcustomelement_cb) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = createcustomelement_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KXMLGUIBuilder::createCustomElement(parent, index, element);
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kxmlguibuilder_finalizegui_isbase) {
            kxmlguibuilder_finalizegui_isbase = false;
            KXMLGUIBuilder::finalizeGUI(client);
            return;
        }
        auto finalizegui_cb = kxmlguibuilder_finalizegui_callback;
        if (finalizegui_cb) {
            KXMLGUIClient* cbval1 = client;

            finalizegui_cb(this, cbval1);
            return;
        }
        KXMLGUIBuilder::finalizeGUI(client);
    }
};

#endif
