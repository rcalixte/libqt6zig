#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBSIMPLEEXTRACTIONRESULT_HXX
#define EXTRAS_KFILEMETADATA_LIBSIMPLEEXTRACTIONRESULT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::SimpleExtractionResult
class VirtualKFileMetaDataSimpleExtractionResult final : public KFileMetaData::SimpleExtractionResult {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileMetaData__SimpleExtractionResult_Add_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, int, QVariant*);
    using KFileMetaData__SimpleExtractionResult_AddType_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, int);
    using KFileMetaData__SimpleExtractionResult_Append_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, const char*);

    // Instance callback storage
    KFileMetaData__SimpleExtractionResult_Add_Callback kfilemetadata__simpleextractionresult_add_callback = nullptr;
    KFileMetaData__SimpleExtractionResult_AddType_Callback kfilemetadata__simpleextractionresult_addtype_callback = nullptr;
    KFileMetaData__SimpleExtractionResult_Append_Callback kfilemetadata__simpleextractionresult_append_callback = nullptr;

    VirtualKFileMetaDataSimpleExtractionResult(const QString& url) : KFileMetaData::SimpleExtractionResult(url) {};
    VirtualKFileMetaDataSimpleExtractionResult(const KFileMetaData::SimpleExtractionResult& rhs) : KFileMetaData::SimpleExtractionResult(rhs) {};
    VirtualKFileMetaDataSimpleExtractionResult(const QString& url, const QString& mimetype) : KFileMetaData::SimpleExtractionResult(url, mimetype) {};
    VirtualKFileMetaDataSimpleExtractionResult(const QString& url, const QString& mimetype, const KFileMetaData::ExtractionResult::Flags& flags) : KFileMetaData::SimpleExtractionResult(url, mimetype, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual void add(KFileMetaData::Property::Property property, const QVariant& value) override {
        if (kfilemetadata__simpleextractionresult_add_callback) {
            int cbval1 = static_cast<int>(property);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            kfilemetadata__simpleextractionresult_add_callback(this, cbval1, cbval2);
            return;
        }
        KFileMetaData__SimpleExtractionResult::add(property, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addType(KFileMetaData::Type::Type typeVal) override {
        if (kfilemetadata__simpleextractionresult_addtype_callback) {
            int cbval1 = static_cast<int>(typeVal);
            kfilemetadata__simpleextractionresult_addtype_callback(this, cbval1);
            return;
        }
        KFileMetaData__SimpleExtractionResult::addType(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (kfilemetadata__simpleextractionresult_append_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            kfilemetadata__simpleextractionresult_append_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KFileMetaData__SimpleExtractionResult::append(text);
    }
};

#endif
