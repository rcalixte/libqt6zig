#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBSESSIONCONFIGINTERFACE_HXX
#define EXTRAS_KTEXTEDITOR_LIBSESSIONCONFIGINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::SessionConfigInterface
class VirtualKTextEditorSessionConfigInterface : public KTextEditor::SessionConfigInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback = void (*)(KTextEditor__SessionConfigInterface*, KConfigGroup*);
    using KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback = void (*)(KTextEditor__SessionConfigInterface*, KConfigGroup*);

    // Instance callback storage
    KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback ktexteditor__sessionconfiginterface_readsessionconfig_callback = nullptr;
    KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback ktexteditor__sessionconfiginterface_writesessionconfig_callback = nullptr;

    VirtualKTextEditorSessionConfigInterface() : KTextEditor::SessionConfigInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual void readSessionConfig(const KConfigGroup& config) override {
        if (ktexteditor__sessionconfiginterface_readsessionconfig_callback) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);
            ktexteditor__sessionconfiginterface_readsessionconfig_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::SessionConfigInterface::readSessionConfig called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeSessionConfig(KConfigGroup& config) override {
        if (ktexteditor__sessionconfiginterface_writesessionconfig_callback) {
            KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &config_ret;
            ktexteditor__sessionconfiginterface_writesessionconfig_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::SessionConfigInterface::writeSessionConfig called without being implemented");
    }
};

#endif
