#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTKMAILAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTKMAILAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionCore::ImportKMailAutocorrection so that we can call protected methods
class VirtualTextAutoCorrectionCoreImportKMailAutocorrection final : public TextAutoCorrectionCore::ImportKMailAutocorrection {

  public:
    // Virtual class boolean flag
    bool isVirtualTextAutoCorrectionCoreImportKMailAutocorrection = true;

    // Virtual class public types (including callbacks)
    using TextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback = bool (*)(TextAutoCorrectionCore__ImportKMailAutocorrection*, const char*, const char*, int);

  protected:
    // Instance callback storage
    TextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback textautocorrectioncore__importkmailautocorrection_import_callback = nullptr;

    // Instance base flags
    mutable bool textautocorrectioncore__importkmailautocorrection_import_isbase = false;

  public:
    VirtualTextAutoCorrectionCoreImportKMailAutocorrection() : TextAutoCorrectionCore::ImportKMailAutocorrection() {};
    VirtualTextAutoCorrectionCoreImportKMailAutocorrection(const TextAutoCorrectionCore::ImportKMailAutocorrection& param1) : TextAutoCorrectionCore::ImportKMailAutocorrection(param1) {};

    // Callback setters
    inline void setTextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback(TextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback cb) { textautocorrectioncore__importkmailautocorrection_import_callback = cb; }

    // Base flag setters
    inline void setTextAutoCorrectionCore__ImportKMailAutocorrection_Import_IsBase(bool value) const { textautocorrectioncore__importkmailautocorrection_import_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool import(const QString& fileName, QString& errorMessage, TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute loadAttribute) override {
        if (textautocorrectioncore__importkmailautocorrection_import_isbase) {
            textautocorrectioncore__importkmailautocorrection_import_isbase = false;
            return TextAutoCorrectionCore__ImportKMailAutocorrection::import(fileName, errorMessage, loadAttribute);
        }
        auto import_cb = textautocorrectioncore__importkmailautocorrection_import_callback;
        if (import_cb) {
            const auto fileName_ret = fileName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray fileName_b = fileName_ret.toUtf8();
            auto fileName_str_len = fileName_b.length();
            const char* fileName_str = static_cast<const char*>(malloc(fileName_str_len + 1));
            memcpy((void*)fileName_str, fileName_b.data(), fileName_str_len);
            ((char*)fileName_str)[fileName_str_len] = '\0';
            const char* cbval1 = fileName_str;
            auto errorMessage_ret = errorMessage;
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
        return TextAutoCorrectionCore__ImportKMailAutocorrection::import(fileName, errorMessage, loadAttribute);
    }
};

#endif
