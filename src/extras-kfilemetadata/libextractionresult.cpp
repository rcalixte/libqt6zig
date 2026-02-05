#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult
#include <QByteArray>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <extractionresult.h>
#include "libextractionresult.h"
#include "libextractionresult.hxx"

KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new VirtualKFileMetaDataExtractionResult(url_QString);
}

KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new2(const KFileMetaData__ExtractionResult* rhs) {
    return new VirtualKFileMetaDataExtractionResult(*rhs);
}

KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new3(const libqt_string url, const libqt_string mimetype) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new VirtualKFileMetaDataExtractionResult(url_QString, mimetype_QString);
}

KFileMetaData__ExtractionResult* KFileMetaData__ExtractionResult_new4(const libqt_string url, const libqt_string mimetype, const int* flags) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new VirtualKFileMetaDataExtractionResult(url_QString, mimetype_QString, (const KFileMetaData::ExtractionResult::Flags&)(*flags));
}

libqt_string KFileMetaData__ExtractionResult_InputUrl(const KFileMetaData__ExtractionResult* self) {
    QString _ret = self->inputUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileMetaData__ExtractionResult_InputMimetype(const KFileMetaData__ExtractionResult* self) {
    QString _ret = self->inputMimetype();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__ExtractionResult_InputFlags(const KFileMetaData__ExtractionResult* self) {
    return static_cast<int>(self->inputFlags());
}

void KFileMetaData__ExtractionResult_Append(KFileMetaData__ExtractionResult* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkfilemetadata__extractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadata__extractionresult && vkfilemetadata__extractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadata__extractionresult->append(text_QString);
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->append(text_QString);
    }
}

void KFileMetaData__ExtractionResult_Add(KFileMetaData__ExtractionResult* self, int property, const QVariant* value) {
    auto* vkfilemetadata__extractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadata__extractionresult && vkfilemetadata__extractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadata__extractionresult->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    }
}

void KFileMetaData__ExtractionResult_AddType(KFileMetaData__ExtractionResult* self, int typeVal) {
    auto* vkfilemetadata__extractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadata__extractionresult && vkfilemetadata__extractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadata__extractionresult->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    }
}

libqt_map /* of int to libqt_string */ KFileMetaData__ExtractionResult_ImageData(const KFileMetaData__ExtractionResult* self) {
    QMap<KFileMetaData::EmbeddedImageData::ImageType, QByteArray> _ret = self->imageData();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        QByteArray _mapval_qb = _itr->second;
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_qb.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_qb.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Base class handler implementation
void KFileMetaData__ExtractionResult_QBaseAppend(KFileMetaData__ExtractionResult* self, const libqt_string text) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_Append_IsBase(true);
        vkfilemetadataextractionresult->append(text_QString);
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->append(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractionResult_OnAppend(KFileMetaData__ExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_Append_Callback(reinterpret_cast<VirtualKFileMetaDataExtractionResult::KFileMetaData__ExtractionResult_Append_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__ExtractionResult_QBaseAdd(KFileMetaData__ExtractionResult* self, int property, const QVariant* value) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_Add_IsBase(true);
        vkfilemetadataextractionresult->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractionResult_OnAdd(KFileMetaData__ExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_Add_Callback(reinterpret_cast<VirtualKFileMetaDataExtractionResult::KFileMetaData__ExtractionResult_Add_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__ExtractionResult_QBaseAddType(KFileMetaData__ExtractionResult* self, int typeVal) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_AddType_IsBase(true);
        vkfilemetadataextractionresult->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    } else {
        ((VirtualKFileMetaDataExtractionResult*)self)->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractionResult_OnAddType(KFileMetaData__ExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadataextractionresult = dynamic_cast<VirtualKFileMetaDataExtractionResult*>(self);
    if (vkfilemetadataextractionresult && vkfilemetadataextractionresult->isVirtualKFileMetaDataExtractionResult) {
        vkfilemetadataextractionresult->setKFileMetaData__ExtractionResult_AddType_Callback(reinterpret_cast<VirtualKFileMetaDataExtractionResult::KFileMetaData__ExtractionResult_AddType_Callback>(slot));
    }
}

void KFileMetaData__ExtractionResult_Delete(KFileMetaData__ExtractionResult* self) {
    delete self;
}
