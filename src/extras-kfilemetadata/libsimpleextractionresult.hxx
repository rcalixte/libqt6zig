#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALSIMPLEEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALSIMPLEEXTRACTIONRESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::SimpleExtractionResult so that we can call protected methods
class VirtualKFileMetaDataSimpleExtractionResult final : public KFileMetaData::SimpleExtractionResult {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileMetaDataSimpleExtractionResult = true;

    // Virtual class public types (including callbacks)
    using KFileMetaData__SimpleExtractionResult_Add_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, int, QVariant*);
    using KFileMetaData__SimpleExtractionResult_AddType_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, int);
    using KFileMetaData__SimpleExtractionResult_Append_Callback = void (*)(KFileMetaData__SimpleExtractionResult*, libqt_string);

  protected:
    // Instance callback storage
    KFileMetaData__SimpleExtractionResult_Add_Callback kfilemetadata__simpleextractionresult_add_callback = nullptr;
    KFileMetaData__SimpleExtractionResult_AddType_Callback kfilemetadata__simpleextractionresult_addtype_callback = nullptr;
    KFileMetaData__SimpleExtractionResult_Append_Callback kfilemetadata__simpleextractionresult_append_callback = nullptr;

    // Instance base flags
    mutable bool kfilemetadata__simpleextractionresult_add_isbase = false;
    mutable bool kfilemetadata__simpleextractionresult_addtype_isbase = false;
    mutable bool kfilemetadata__simpleextractionresult_append_isbase = false;

  public:
    VirtualKFileMetaDataSimpleExtractionResult(const QString& url) : KFileMetaData::SimpleExtractionResult(url) {};
    VirtualKFileMetaDataSimpleExtractionResult(const KFileMetaData::SimpleExtractionResult& rhs) : KFileMetaData::SimpleExtractionResult(rhs) {};
    VirtualKFileMetaDataSimpleExtractionResult(const QString& url, const QString& mimetype) : KFileMetaData::SimpleExtractionResult(url, mimetype) {};
    VirtualKFileMetaDataSimpleExtractionResult(const QString& url, const QString& mimetype, const KFileMetaData::ExtractionResult::Flags& flags) : KFileMetaData::SimpleExtractionResult(url, mimetype, flags) {};

    ~VirtualKFileMetaDataSimpleExtractionResult() {
        kfilemetadata__simpleextractionresult_add_callback = nullptr;
        kfilemetadata__simpleextractionresult_addtype_callback = nullptr;
        kfilemetadata__simpleextractionresult_append_callback = nullptr;
    }

    // Callback setters
    inline void setKFileMetaData__SimpleExtractionResult_Add_Callback(KFileMetaData__SimpleExtractionResult_Add_Callback cb) { kfilemetadata__simpleextractionresult_add_callback = cb; }
    inline void setKFileMetaData__SimpleExtractionResult_AddType_Callback(KFileMetaData__SimpleExtractionResult_AddType_Callback cb) { kfilemetadata__simpleextractionresult_addtype_callback = cb; }
    inline void setKFileMetaData__SimpleExtractionResult_Append_Callback(KFileMetaData__SimpleExtractionResult_Append_Callback cb) { kfilemetadata__simpleextractionresult_append_callback = cb; }

    // Base flag setters
    inline void setKFileMetaData__SimpleExtractionResult_Add_IsBase(bool value) const { kfilemetadata__simpleextractionresult_add_isbase = value; }
    inline void setKFileMetaData__SimpleExtractionResult_AddType_IsBase(bool value) const { kfilemetadata__simpleextractionresult_addtype_isbase = value; }
    inline void setKFileMetaData__SimpleExtractionResult_Append_IsBase(bool value) const { kfilemetadata__simpleextractionresult_append_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void add(KFileMetaData::Property::Property property, const QVariant& value) override {
        if (kfilemetadata__simpleextractionresult_add_isbase) {
            kfilemetadata__simpleextractionresult_add_isbase = false;
            KFileMetaData__SimpleExtractionResult::add(property, value);
        } else if (kfilemetadata__simpleextractionresult_add_callback != nullptr) {
            int cbval1 = static_cast<int>(property);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            kfilemetadata__simpleextractionresult_add_callback(this, cbval1, cbval2);
        } else {
            KFileMetaData__SimpleExtractionResult::add(property, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addType(KFileMetaData::Type::Type typeVal) override {
        if (kfilemetadata__simpleextractionresult_addtype_isbase) {
            kfilemetadata__simpleextractionresult_addtype_isbase = false;
            KFileMetaData__SimpleExtractionResult::addType(typeVal);
        } else if (kfilemetadata__simpleextractionresult_addtype_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            kfilemetadata__simpleextractionresult_addtype_callback(this, cbval1);
        } else {
            KFileMetaData__SimpleExtractionResult::addType(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (kfilemetadata__simpleextractionresult_append_isbase) {
            kfilemetadata__simpleextractionresult_append_isbase = false;
            KFileMetaData__SimpleExtractionResult::append(text);
        } else if (kfilemetadata__simpleextractionresult_append_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            kfilemetadata__simpleextractionresult_append_callback(this, cbval1);
        } else {
            KFileMetaData__SimpleExtractionResult::append(text);
        }
    }
};

#endif
