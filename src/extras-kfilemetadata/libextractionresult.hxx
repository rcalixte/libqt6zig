#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBEXTRACTIONRESULT_HXX
#define EXTRAS_KFILEMETADATA_LIBEXTRACTIONRESULT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::ExtractionResult
class VirtualKFileMetaDataExtractionResult : public KFileMetaData::ExtractionResult {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileMetaData__ExtractionResult_Append_Callback = void (*)(KFileMetaData__ExtractionResult*, const char*);
    using KFileMetaData__ExtractionResult_Add_Callback = void (*)(KFileMetaData__ExtractionResult*, int, QVariant*);
    using KFileMetaData__ExtractionResult_AddType_Callback = void (*)(KFileMetaData__ExtractionResult*, int);

    // Instance callback storage
    KFileMetaData__ExtractionResult_Append_Callback kfilemetadata__extractionresult_append_callback = nullptr;
    KFileMetaData__ExtractionResult_Add_Callback kfilemetadata__extractionresult_add_callback = nullptr;
    KFileMetaData__ExtractionResult_AddType_Callback kfilemetadata__extractionresult_addtype_callback = nullptr;

    VirtualKFileMetaDataExtractionResult(const QString& url) : KFileMetaData::ExtractionResult(url) {};
    VirtualKFileMetaDataExtractionResult(const KFileMetaData::ExtractionResult& rhs) : KFileMetaData::ExtractionResult(rhs) {};
    VirtualKFileMetaDataExtractionResult(const QString& url, const QString& mimetype) : KFileMetaData::ExtractionResult(url, mimetype) {};
    VirtualKFileMetaDataExtractionResult(const QString& url, const QString& mimetype, const KFileMetaData::ExtractionResult::Flags& flags) : KFileMetaData::ExtractionResult(url, mimetype, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (kfilemetadata__extractionresult_append_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            kfilemetadata__extractionresult_append_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::ExtractionResult::append called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void add(KFileMetaData::Property::Property property, const QVariant& value) override {
        if (kfilemetadata__extractionresult_add_callback) {
            int cbval1 = static_cast<int>(property);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            kfilemetadata__extractionresult_add_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::ExtractionResult::add called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addType(KFileMetaData::Type::Type typeVal) override {
        if (kfilemetadata__extractionresult_addtype_callback) {
            int cbval1 = static_cast<int>(typeVal);
            kfilemetadata__extractionresult_addtype_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::ExtractionResult::addType called without being implemented");
    }
};

#endif
