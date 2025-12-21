#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMEDITORPLUGIN_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMEDITORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormEditorPluginInterface so that we can call protected methods
class VirtualQDesignerFormEditorPluginInterface : public QDesignerFormEditorPluginInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerFormEditorPluginInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerFormEditorPluginInterface_IsInitialized_Callback = bool (*)();
    using QDesignerFormEditorPluginInterface_Initialize_Callback = void (*)(QDesignerFormEditorPluginInterface*, QDesignerFormEditorInterface*);
    using QDesignerFormEditorPluginInterface_Action_Callback = QAction* (*)();
    using QDesignerFormEditorPluginInterface_Core_Callback = QDesignerFormEditorInterface* (*)();

  protected:
    // Instance callback storage
    QDesignerFormEditorPluginInterface_IsInitialized_Callback qdesignerformeditorplugininterface_isinitialized_callback = nullptr;
    QDesignerFormEditorPluginInterface_Initialize_Callback qdesignerformeditorplugininterface_initialize_callback = nullptr;
    QDesignerFormEditorPluginInterface_Action_Callback qdesignerformeditorplugininterface_action_callback = nullptr;
    QDesignerFormEditorPluginInterface_Core_Callback qdesignerformeditorplugininterface_core_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerformeditorplugininterface_isinitialized_isbase = false;
    mutable bool qdesignerformeditorplugininterface_initialize_isbase = false;
    mutable bool qdesignerformeditorplugininterface_action_isbase = false;
    mutable bool qdesignerformeditorplugininterface_core_isbase = false;

  public:
    VirtualQDesignerFormEditorPluginInterface() : QDesignerFormEditorPluginInterface() {};

    ~VirtualQDesignerFormEditorPluginInterface() {
        qdesignerformeditorplugininterface_isinitialized_callback = nullptr;
        qdesignerformeditorplugininterface_initialize_callback = nullptr;
        qdesignerformeditorplugininterface_action_callback = nullptr;
        qdesignerformeditorplugininterface_core_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerFormEditorPluginInterface_IsInitialized_Callback(QDesignerFormEditorPluginInterface_IsInitialized_Callback cb) { qdesignerformeditorplugininterface_isinitialized_callback = cb; }
    inline void setQDesignerFormEditorPluginInterface_Initialize_Callback(QDesignerFormEditorPluginInterface_Initialize_Callback cb) { qdesignerformeditorplugininterface_initialize_callback = cb; }
    inline void setQDesignerFormEditorPluginInterface_Action_Callback(QDesignerFormEditorPluginInterface_Action_Callback cb) { qdesignerformeditorplugininterface_action_callback = cb; }
    inline void setQDesignerFormEditorPluginInterface_Core_Callback(QDesignerFormEditorPluginInterface_Core_Callback cb) { qdesignerformeditorplugininterface_core_callback = cb; }

    // Base flag setters
    inline void setQDesignerFormEditorPluginInterface_IsInitialized_IsBase(bool value) const { qdesignerformeditorplugininterface_isinitialized_isbase = value; }
    inline void setQDesignerFormEditorPluginInterface_Initialize_IsBase(bool value) const { qdesignerformeditorplugininterface_initialize_isbase = value; }
    inline void setQDesignerFormEditorPluginInterface_Action_IsBase(bool value) const { qdesignerformeditorplugininterface_action_isbase = value; }
    inline void setQDesignerFormEditorPluginInterface_Core_IsBase(bool value) const { qdesignerformeditorplugininterface_core_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isInitialized() const override {
        if (qdesignerformeditorplugininterface_isinitialized_callback != nullptr) {
            bool callback_ret = qdesignerformeditorplugininterface_isinitialized_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initialize(QDesignerFormEditorInterface* core) override {
        if (qdesignerformeditorplugininterface_initialize_callback != nullptr) {
            QDesignerFormEditorInterface* cbval1 = core;

            qdesignerformeditorplugininterface_initialize_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        if (qdesignerformeditorplugininterface_action_callback != nullptr) {
            QAction* callback_ret = qdesignerformeditorplugininterface_action_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformeditorplugininterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformeditorplugininterface_core_callback();
            return callback_ret;
        } else {
            return {};
        }
    }
};

#endif
