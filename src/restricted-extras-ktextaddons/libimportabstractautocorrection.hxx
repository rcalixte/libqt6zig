#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBIMPORTABSTRACTAUTOCORRECTION_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBIMPORTABSTRACTAUTOCORRECTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionCore::ImportAbstractAutocorrection
class VirtualTextAutoCorrectionCoreImportAbstractAutocorrection : public TextAutoCorrectionCore::ImportAbstractAutocorrection {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback = bool (*)(TextAutoCorrectionCore__ImportAbstractAutocorrection*, const char*, const char*, int);

    // Instance callback storage
    TextAutoCorrectionCore__ImportAbstractAutocorrection_Import_Callback textautocorrectioncore__importabstractautocorrection_import_callback = nullptr;

    VirtualTextAutoCorrectionCoreImportAbstractAutocorrection() : TextAutoCorrectionCore::ImportAbstractAutocorrection() {};
    VirtualTextAutoCorrectionCoreImportAbstractAutocorrection(const TextAutoCorrectionCore::ImportAbstractAutocorrection& param1) : TextAutoCorrectionCore::ImportAbstractAutocorrection(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool import(const QString& fileName, QString& errorMessage, TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute loadAttribute) override {
        if (textautocorrectioncore__importabstractautocorrection_import_callback) {
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
            bool callback_ret = textautocorrectioncore__importabstractautocorrection_import_callback(this, cbval1, cbval2, cbval3);
            libqt_free(fileName_str);
            libqt_free(errorMessage_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextAutoCorrectionCore::ImportAbstractAutocorrection::import called without being implemented");
    }
};

#endif
