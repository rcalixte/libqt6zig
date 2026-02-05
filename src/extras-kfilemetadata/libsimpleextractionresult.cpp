#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__SimpleExtractionResult
#include <QList>
#include <QMultiMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <simpleextractionresult.h>
#include "libsimpleextractionresult.h"
#include "libsimpleextractionresult.hxx"

KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new VirtualKFileMetaDataSimpleExtractionResult(url_QString);
}

KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new2(const KFileMetaData__SimpleExtractionResult* rhs) {
    return new VirtualKFileMetaDataSimpleExtractionResult(*rhs);
}

KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new3(const libqt_string url, const libqt_string mimetype) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new VirtualKFileMetaDataSimpleExtractionResult(url_QString, mimetype_QString);
}

KFileMetaData__SimpleExtractionResult* KFileMetaData__SimpleExtractionResult_new4(const libqt_string url, const libqt_string mimetype, const int* flags) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new VirtualKFileMetaDataSimpleExtractionResult(url_QString, mimetype_QString, (const KFileMetaData::ExtractionResult::Flags&)(*flags));
}

void KFileMetaData__SimpleExtractionResult_OperatorAssign(KFileMetaData__SimpleExtractionResult* self, const KFileMetaData__SimpleExtractionResult* rhs) {
    self->operator=(*rhs);
}

bool KFileMetaData__SimpleExtractionResult_OperatorEqual(const KFileMetaData__SimpleExtractionResult* self, const KFileMetaData__SimpleExtractionResult* rhs) {
    return (*self == *rhs);
}

void KFileMetaData__SimpleExtractionResult_Add(KFileMetaData__SimpleExtractionResult* self, int property, const QVariant* value) {
    auto* vkfilemetadata__simpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadata__simpleextractionresult && vkfilemetadata__simpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        self->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    } else {
        ((VirtualKFileMetaDataSimpleExtractionResult*)self)->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    }
}

void KFileMetaData__SimpleExtractionResult_AddType(KFileMetaData__SimpleExtractionResult* self, int typeVal) {
    auto* vkfilemetadata__simpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadata__simpleextractionresult && vkfilemetadata__simpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        self->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    } else {
        ((VirtualKFileMetaDataSimpleExtractionResult*)self)->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    }
}

void KFileMetaData__SimpleExtractionResult_Append(KFileMetaData__SimpleExtractionResult* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkfilemetadata__simpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadata__simpleextractionresult && vkfilemetadata__simpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        self->append(text_QString);
    } else {
        ((VirtualKFileMetaDataSimpleExtractionResult*)self)->append(text_QString);
    }
}

libqt_map /* of int to libqt_list of QVariant* */ KFileMetaData__SimpleExtractionResult_Properties(const KFileMetaData__SimpleExtractionResult* self) {
    QMultiMap<KFileMetaData::Property::Property, QVariant> _ret = self->properties();
    // Convert QMultiMap<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        KFileMetaData::Property::Property key = _uniqueKeys[i];
        _karr[i] = static_cast<int>(key);
        QList<QVariant> values = _ret.values(key);
        size_t numValues = values.size();
        QVariant** _array = static_cast<QVariant**>(malloc(sizeof(QVariant*) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j] = new QVariant(values[j]);
        }
        _varr[i].len = numValues;
        _varr[i].data = static_cast<void*>(_array);
    }
    libqt_map _out;
    _out.len = _numUniqueKeys;
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_string KFileMetaData__SimpleExtractionResult_Text(const KFileMetaData__SimpleExtractionResult* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of int */ KFileMetaData__SimpleExtractionResult_Types(const KFileMetaData__SimpleExtractionResult* self) {
    QList<KFileMetaData::Type::Type> _ret = self->types();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
void KFileMetaData__SimpleExtractionResult_QBaseAdd(KFileMetaData__SimpleExtractionResult* self, int property, const QVariant* value) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_Add_IsBase(true);
        vkfilemetadatasimpleextractionresult->add(static_cast<KFileMetaData::Property::Property>(property), *value);
    } else {
        self->KFileMetaData::SimpleExtractionResult::add(static_cast<KFileMetaData::Property::Property>(property), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__SimpleExtractionResult_OnAdd(KFileMetaData__SimpleExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_Add_Callback(reinterpret_cast<VirtualKFileMetaDataSimpleExtractionResult::KFileMetaData__SimpleExtractionResult_Add_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__SimpleExtractionResult_QBaseAddType(KFileMetaData__SimpleExtractionResult* self, int typeVal) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_AddType_IsBase(true);
        vkfilemetadatasimpleextractionresult->addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    } else {
        self->KFileMetaData::SimpleExtractionResult::addType(static_cast<KFileMetaData::Type::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__SimpleExtractionResult_OnAddType(KFileMetaData__SimpleExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_AddType_Callback(reinterpret_cast<VirtualKFileMetaDataSimpleExtractionResult::KFileMetaData__SimpleExtractionResult_AddType_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__SimpleExtractionResult_QBaseAppend(KFileMetaData__SimpleExtractionResult* self, const libqt_string text) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_Append_IsBase(true);
        vkfilemetadatasimpleextractionresult->append(text_QString);
    } else {
        self->KFileMetaData::SimpleExtractionResult::append(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__SimpleExtractionResult_OnAppend(KFileMetaData__SimpleExtractionResult* self, intptr_t slot) {
    auto* vkfilemetadatasimpleextractionresult = dynamic_cast<VirtualKFileMetaDataSimpleExtractionResult*>(self);
    if (vkfilemetadatasimpleextractionresult && vkfilemetadatasimpleextractionresult->isVirtualKFileMetaDataSimpleExtractionResult) {
        vkfilemetadatasimpleextractionresult->setKFileMetaData__SimpleExtractionResult_Append_Callback(reinterpret_cast<VirtualKFileMetaDataSimpleExtractionResult::KFileMetaData__SimpleExtractionResult_Append_Callback>(slot));
    }
}

void KFileMetaData__SimpleExtractionResult_Delete(KFileMetaData__SimpleExtractionResult* self) {
    delete self;
}
