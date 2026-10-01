#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_HXX
#define DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormEditorPluginInterface
class VirtualQDesignerFormEditorPluginInterface : public QDesignerFormEditorPluginInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerFormEditorPluginInterface_IsInitialized_Callback = bool (*)(const QDesignerFormEditorPluginInterface*);
    using QDesignerFormEditorPluginInterface_Initialize_Callback = void (*)(QDesignerFormEditorPluginInterface*, QDesignerFormEditorInterface*);
    using QDesignerFormEditorPluginInterface_Action_Callback = QAction* (*)(const QDesignerFormEditorPluginInterface*);
    using QDesignerFormEditorPluginInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerFormEditorPluginInterface*);

    // Instance callback storage
    QDesignerFormEditorPluginInterface_IsInitialized_Callback qdesignerformeditorplugininterface_isinitialized_callback = nullptr;
    QDesignerFormEditorPluginInterface_Initialize_Callback qdesignerformeditorplugininterface_initialize_callback = nullptr;
    QDesignerFormEditorPluginInterface_Action_Callback qdesignerformeditorplugininterface_action_callback = nullptr;
    QDesignerFormEditorPluginInterface_Core_Callback qdesignerformeditorplugininterface_core_callback = nullptr;

    VirtualQDesignerFormEditorPluginInterface() : QDesignerFormEditorPluginInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual bool isInitialized() const override {
        if (qdesignerformeditorplugininterface_isinitialized_callback) {
            bool callback_ret = qdesignerformeditorplugininterface_isinitialized_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormEditorPluginInterface::isInitialized called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void initialize(QDesignerFormEditorInterface* core) override {
        if (qdesignerformeditorplugininterface_initialize_callback) {
            QDesignerFormEditorInterface* cbval1 = core;
            qdesignerformeditorplugininterface_initialize_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormEditorPluginInterface::initialize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        if (qdesignerformeditorplugininterface_action_callback) {
            QAction* callback_ret = qdesignerformeditorplugininterface_action_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormEditorPluginInterface::action called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformeditorplugininterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformeditorplugininterface_core_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormEditorPluginInterface::core called without being implemented");
    }
};

#endif
