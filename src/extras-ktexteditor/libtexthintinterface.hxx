#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBTEXTHINTINTERFACE_HXX
#define EXTRAS_KTEXTEDITOR_LIBTEXTHINTINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::TextHintProvider
class VirtualKTextEditorTextHintProvider : public KTextEditor::TextHintProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__TextHintProvider_TextHint_Callback = const char* (*)(KTextEditor__TextHintProvider*, KTextEditor__View*, KTextEditor__Cursor*);

    // Instance callback storage
    KTextEditor__TextHintProvider_TextHint_Callback ktexteditor__texthintprovider_texthint_callback = nullptr;

    VirtualKTextEditorTextHintProvider() : KTextEditor::TextHintProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual QString textHint(KTextEditor::View* view, const KTextEditor::Cursor& position) override {
        if (ktexteditor__texthintprovider_texthint_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval2 = const_cast<KTextEditor::Cursor*>(&position_ret);
            const char* callback_ret = ktexteditor__texthintprovider_texthint_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::TextHintProvider::textHint called without being implemented");
    }
};

#endif
