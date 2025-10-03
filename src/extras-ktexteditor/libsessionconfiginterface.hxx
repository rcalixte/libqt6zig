#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALSESSIONCONFIGINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALSESSIONCONFIGINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::SessionConfigInterface so that we can call protected methods
class VirtualKTextEditorSessionConfigInterface : public KTextEditor::SessionConfigInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorSessionConfigInterface = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback = void (*)(KTextEditor__SessionConfigInterface*, KConfigGroup*);
    using KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback = void (*)(KTextEditor__SessionConfigInterface*, KConfigGroup*);

  protected:
    // Instance callback storage
    KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback ktexteditor__sessionconfiginterface_readsessionconfig_callback = nullptr;
    KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback ktexteditor__sessionconfiginterface_writesessionconfig_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__sessionconfiginterface_readsessionconfig_isbase = false;
    mutable bool ktexteditor__sessionconfiginterface_writesessionconfig_isbase = false;

  public:
    VirtualKTextEditorSessionConfigInterface() : KTextEditor::SessionConfigInterface() {};

    ~VirtualKTextEditorSessionConfigInterface() {
        ktexteditor__sessionconfiginterface_readsessionconfig_callback = nullptr;
        ktexteditor__sessionconfiginterface_writesessionconfig_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__SessionConfigInterface_ReadSessionConfig_Callback(KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback cb) { ktexteditor__sessionconfiginterface_readsessionconfig_callback = cb; }
    inline void setKTextEditor__SessionConfigInterface_WriteSessionConfig_Callback(KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback cb) { ktexteditor__sessionconfiginterface_writesessionconfig_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__SessionConfigInterface_ReadSessionConfig_IsBase(bool value) const { ktexteditor__sessionconfiginterface_readsessionconfig_isbase = value; }
    inline void setKTextEditor__SessionConfigInterface_WriteSessionConfig_IsBase(bool value) const { ktexteditor__sessionconfiginterface_writesessionconfig_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void readSessionConfig(const KConfigGroup& config) override {
        if (ktexteditor__sessionconfiginterface_readsessionconfig_callback != nullptr) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);

            ktexteditor__sessionconfiginterface_readsessionconfig_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeSessionConfig(KConfigGroup& config) override {
        if (ktexteditor__sessionconfiginterface_writesessionconfig_callback != nullptr) {
            KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &config_ret;

            ktexteditor__sessionconfiginterface_writesessionconfig_callback(this, cbval1);
        }
    }
};

#endif
