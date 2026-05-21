#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTLIBREOFFICEAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALIMPORTLIBREOFFICEAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionCore::ImportLibreOfficeAutocorrection so that we can call protected methods
class VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection final : public TextAutoCorrectionCore::ImportLibreOfficeAutocorrection {

  public:
    // Virtual class boolean flag
    bool isVirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection = true;

    // Virtual class public types (including callbacks)
    using TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback = bool (*)(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*, const char*, const char*, int);

  protected:
    // Instance callback storage
    TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback textautocorrectioncore__importlibreofficeautocorrection_import_callback = nullptr;

    // Instance base flags
    mutable bool textautocorrectioncore__importlibreofficeautocorrection_import_isbase = false;

  public:
    VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection() : TextAutoCorrectionCore::ImportLibreOfficeAutocorrection() {};
    VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection(const TextAutoCorrectionCore::ImportLibreOfficeAutocorrection& param1) : TextAutoCorrectionCore::ImportLibreOfficeAutocorrection(param1) {};

    // Callback setters
    inline void setTextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback cb) { textautocorrectioncore__importlibreofficeautocorrection_import_callback = cb; }

    // Base flag setters
    inline void setTextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_IsBase(bool value) const { textautocorrectioncore__importlibreofficeautocorrection_import_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool import(const QString& fileName, QString& errorMessage, TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute loadAttribute) override {
        if (textautocorrectioncore__importlibreofficeautocorrection_import_isbase) {
            textautocorrectioncore__importlibreofficeautocorrection_import_isbase = false;
            return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection::import(fileName, errorMessage, loadAttribute);
        }
        auto import_cb = textautocorrectioncore__importlibreofficeautocorrection_import_callback;
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
        return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection::import(fileName, errorMessage, loadAttribute);
    }
};

#endif
