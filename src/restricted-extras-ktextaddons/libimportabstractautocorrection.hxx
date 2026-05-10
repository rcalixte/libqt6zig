#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTABSTRACTAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTABSTRACTAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionCore::ImportAbstractAutocorrection so that we can call protected methods
class VirtualTextAutoCorrectionCoreImportAbstractAutocorrection : public TextAutoCorrectionCore::ImportAbstractAutocorrection {

  public:
    // Virtual class boolean flag
    bool isVirtualTextAutoCorrectionCoreImportAbstractAutocorrection = true;

    // Virtual class public types (including callbacks)
    using TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback = bool (*)(TextAutoCorrectionCore__ImportAbstractAutocorrection*, const char*, const char*, int);
    using TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback = void (*)(TextAutoCorrectionCore__ImportAbstractAutocorrection*, TextAutoCorrectionCore__ImportAbstractAutocorrection*);

  protected:
    // Instance callback storage
    TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback textautocorrectioncore__importabstractautocorrection_import_callback = nullptr;
    TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback textautocorrectioncore__importabstractautocorrection_operatorassign_callback = nullptr;

    // Instance base flags
    mutable bool textautocorrectioncore__importabstractautocorrection_import_isbase = false;
    mutable bool textautocorrectioncore__importabstractautocorrection_operatorassign_isbase = false;

  public:
    VirtualTextAutoCorrectionCoreImportAbstractAutocorrection() : TextAutoCorrectionCore::ImportAbstractAutocorrection() {};
    VirtualTextAutoCorrectionCoreImportAbstractAutocorrection(const TextAutoCorrectionCore::ImportAbstractAutocorrection& param1) : TextAutoCorrectionCore::ImportAbstractAutocorrection(param1) {};

    // Callback setters
    inline void setTextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback(TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback cb) { textautocorrectioncore__importabstractautocorrection_import_callback = cb; }
    inline void setTextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback(TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_Callback cb) { textautocorrectioncore__importabstractautocorrection_operatorassign_callback = cb; }

    // Base flag setters
    inline void setTextAutoCorrectionCore__ImportAbstractAutocorrection_Import_IsBase(bool value) const { textautocorrectioncore__importabstractautocorrection_import_isbase = value; }
    inline void setTextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign_IsBase(bool value) const { textautocorrectioncore__importabstractautocorrection_operatorassign_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool import(const QString& fileName, QString& errorMessage, TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute loadAttribute) override {
        auto import_cb = textautocorrectioncore__importabstractautocorrection_import_callback;
        if (import_cb) {
            const QString fileName_ret = fileName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray fileName_b = fileName_ret.toUtf8();
            auto fileName_str_len = fileName_b.length();
            const char* fileName_str = static_cast<const char*>(malloc(fileName_str_len + 1));
            memcpy((void*)fileName_str, fileName_b.data(), fileName_str_len);
            ((char*)fileName_str)[fileName_str_len] = '\0';
            const char* cbval1 = fileName_str;
            QString errorMessage_ret = errorMessage;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorMessage_b = errorMessage_ret.toUtf8();
            auto errorMessage_str_len = errorMessage_b.length();
            const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_str_len + 1));
            memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_str_len);
            ((char*)errorMessage_str)[errorMessage_str_len] = '\0';
            const char* cbval2 = errorMessage_str;
            int cbval3 = static_cast<int>(loadAttribute);

            bool callback_ret = import_cb(this, cbval1, cbval2, cbval3);
            libqt_free(fileName_str);
            libqt_free(errorMessage_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    void operator=(const TextAutoCorrectionCore::ImportAbstractAutocorrection& param1) {
        if (textautocorrectioncore__importabstractautocorrection_operatorassign_isbase) {
            textautocorrectioncore__importabstractautocorrection_operatorassign_isbase = false;
            TextAutoCorrectionCore__ImportAbstractAutocorrection::operator=(param1);
            return;
        }
        auto operatorassign_cb = textautocorrectioncore__importabstractautocorrection_operatorassign_callback;
        if (operatorassign_cb) {
            const TextAutoCorrectionCore::ImportAbstractAutocorrection& param1_ret = param1;
            // Cast returned reference into pointer
            TextAutoCorrectionCore__ImportAbstractAutocorrection* cbval1 = const_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection*>(&param1_ret);

            operatorassign_cb(this, cbval1);
            return;
        }
        TextAutoCorrectionCore__ImportAbstractAutocorrection::operator=(param1);
    }

    // Friend functions
    friend void TextAutoCorrectionCore__ImportAbstractAutocorrection_OperatorAssign(TextAutoCorrectionCore::ImportAbstractAutocorrection* self, const TextAutoCorrectionCore__ImportAbstractAutocorrection* param1);
    friend void TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperOperatorAssign(TextAutoCorrectionCore::ImportAbstractAutocorrection* self, const TextAutoCorrectionCore__ImportAbstractAutocorrection* param1);
};

#endif
