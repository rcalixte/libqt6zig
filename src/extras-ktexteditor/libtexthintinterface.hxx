#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALTEXTHINTINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALTEXTHINTINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::TextHintProvider so that we can call protected methods
class VirtualKTextEditorTextHintProvider : public KTextEditor::TextHintProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorTextHintProvider = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__TextHintProvider_TextHint_Callback = const char* (*)(KTextEditor__TextHintProvider*, KTextEditor__View*, KTextEditor__Cursor*);

  protected:
    // Instance callback storage
    KTextEditor__TextHintProvider_TextHint_Callback ktexteditor__texthintprovider_texthint_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__texthintprovider_texthint_isbase = false;

  public:
    VirtualKTextEditorTextHintProvider() : KTextEditor::TextHintProvider() {};

    ~VirtualKTextEditorTextHintProvider() {
        ktexteditor__texthintprovider_texthint_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__TextHintProvider_TextHint_Callback(KTextEditor__TextHintProvider_TextHint_Callback cb) { ktexteditor__texthintprovider_texthint_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__TextHintProvider_TextHint_IsBase(bool value) const { ktexteditor__texthintprovider_texthint_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString textHint(KTextEditor::View* view, const KTextEditor::Cursor& position) override {
        if (ktexteditor__texthintprovider_texthint_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval2 = const_cast<KTextEditor::Cursor*>(&position_ret);

            const char* callback_ret = ktexteditor__texthintprovider_texthint_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }
};

#endif
