#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALEXTRACTIONRESULT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::ExtractionResult so that we can call protected methods
class VirtualKFileMetaDataExtractionResult : public KFileMetaData::ExtractionResult {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileMetaDataExtractionResult = true;

    // Virtual class public types (including callbacks)
    using KFileMetaData__ExtractionResult_Append_Callback = void (*)(KFileMetaData__ExtractionResult*, libqt_string);
    using KFileMetaData__ExtractionResult_Add_Callback = void (*)(KFileMetaData__ExtractionResult*, int, QVariant*);
    using KFileMetaData__ExtractionResult_AddType_Callback = void (*)(KFileMetaData__ExtractionResult*, int);

  protected:
    // Instance callback storage
    KFileMetaData__ExtractionResult_Append_Callback kfilemetadata__extractionresult_append_callback = nullptr;
    KFileMetaData__ExtractionResult_Add_Callback kfilemetadata__extractionresult_add_callback = nullptr;
    KFileMetaData__ExtractionResult_AddType_Callback kfilemetadata__extractionresult_addtype_callback = nullptr;

    // Instance base flags
    mutable bool kfilemetadata__extractionresult_append_isbase = false;
    mutable bool kfilemetadata__extractionresult_add_isbase = false;
    mutable bool kfilemetadata__extractionresult_addtype_isbase = false;

  public:
    VirtualKFileMetaDataExtractionResult(const QString& url) : KFileMetaData::ExtractionResult(url) {};
    VirtualKFileMetaDataExtractionResult(const KFileMetaData::ExtractionResult& rhs) : KFileMetaData::ExtractionResult(rhs) {};
    VirtualKFileMetaDataExtractionResult(const QString& url, const QString& mimetype) : KFileMetaData::ExtractionResult(url, mimetype) {};
    VirtualKFileMetaDataExtractionResult(const QString& url, const QString& mimetype, const KFileMetaData::ExtractionResult::Flags& flags) : KFileMetaData::ExtractionResult(url, mimetype, flags) {};

    ~VirtualKFileMetaDataExtractionResult() {
        kfilemetadata__extractionresult_append_callback = nullptr;
        kfilemetadata__extractionresult_add_callback = nullptr;
        kfilemetadata__extractionresult_addtype_callback = nullptr;
    }

    // Callback setters
    inline void setKFileMetaData__ExtractionResult_Append_Callback(KFileMetaData__ExtractionResult_Append_Callback cb) { kfilemetadata__extractionresult_append_callback = cb; }
    inline void setKFileMetaData__ExtractionResult_Add_Callback(KFileMetaData__ExtractionResult_Add_Callback cb) { kfilemetadata__extractionresult_add_callback = cb; }
    inline void setKFileMetaData__ExtractionResult_AddType_Callback(KFileMetaData__ExtractionResult_AddType_Callback cb) { kfilemetadata__extractionresult_addtype_callback = cb; }

    // Base flag setters
    inline void setKFileMetaData__ExtractionResult_Append_IsBase(bool value) const { kfilemetadata__extractionresult_append_isbase = value; }
    inline void setKFileMetaData__ExtractionResult_Add_IsBase(bool value) const { kfilemetadata__extractionresult_add_isbase = value; }
    inline void setKFileMetaData__ExtractionResult_AddType_IsBase(bool value) const { kfilemetadata__extractionresult_addtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (kfilemetadata__extractionresult_append_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            kfilemetadata__extractionresult_append_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void add(KFileMetaData::Property::Property property, const QVariant& value) override {
        if (kfilemetadata__extractionresult_add_callback != nullptr) {
            int cbval1 = static_cast<int>(property);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            kfilemetadata__extractionresult_add_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addType(KFileMetaData::Type::Type typeVal) override {
        if (kfilemetadata__extractionresult_addtype_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            kfilemetadata__extractionresult_addtype_callback(this, cbval1);
        }
    }
};

#endif
