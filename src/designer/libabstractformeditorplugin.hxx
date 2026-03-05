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
        auto isinitialized_cb = qdesignerformeditorplugininterface_isinitialized_callback;
        if (isinitialized_cb) {
            bool callback_ret = isinitialized_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void initialize(QDesignerFormEditorInterface* core) override {
        auto initialize_cb = qdesignerformeditorplugininterface_initialize_callback;
        if (initialize_cb) {
            QDesignerFormEditorInterface* cbval1 = core;

            initialize_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        auto action_cb = qdesignerformeditorplugininterface_action_callback;
        if (action_cb) {
            QAction* callback_ret = action_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        auto core_cb = qdesignerformeditorplugininterface_core_callback;
        if (core_cb) {
            QDesignerFormEditorInterface* callback_ret = core_cb();
            return callback_ret;
        }
        return {};
    }
};

#endif
