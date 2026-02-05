#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData
#include <QByteArray>
#include <QMap>
#include <QMultiMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <writedata.h>
#include "libwritedata.h"
#include "libwritedata.hxx"

KFileMetaData__WriteData* KFileMetaData__WriteData_new(const libqt_string url, const libqt_string mimetype) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new KFileMetaData::WriteData(url_QString, mimetype_QString);
}

KFileMetaData__WriteData* KFileMetaData__WriteData_new2(const KFileMetaData__WriteData* rhs) {
    return new KFileMetaData::WriteData(*rhs);
}

void KFileMetaData__WriteData_OperatorAssign(KFileMetaData__WriteData* self, const KFileMetaData__WriteData* rhs) {
    self->operator=(*rhs);
}

bool KFileMetaData__WriteData_OperatorEqual(const KFileMetaData__WriteData* self, const KFileMetaData__WriteData* rhs) {
    return (*self == *rhs);
}

libqt_string KFileMetaData__WriteData_InputUrl(const KFileMetaData__WriteData* self) {
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

libqt_string KFileMetaData__WriteData_InputMimetype(const KFileMetaData__WriteData* self) {
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

void KFileMetaData__WriteData_Add(KFileMetaData__WriteData* self, int property, const QVariant* value) {
    self->add(static_cast<KFileMetaData::Property::Property>(property), *value);
}

void KFileMetaData__WriteData_AddImageData(KFileMetaData__WriteData* self, const libqt_map /* of int to libqt_string */ images) {
    QMap<KFileMetaData::EmbeddedImageData::ImageType, QByteArray> images_QMap;
    int* images_karr = static_cast<int*>(images.keys);
    libqt_string* images_varr = static_cast<libqt_string*>(images.values);
    for (size_t i = 0; i < images.len; ++i) {
        QByteArray images_varr_i_QByteArray(images_varr[i].data, images_varr[i].len);
        images_QMap[static_cast<KFileMetaData::EmbeddedImageData::ImageType>(images_karr[i])] = images_varr_i_QByteArray;
    }
    self->addImageData(images_QMap);
}

libqt_map /* of int to libqt_list of QVariant* */ KFileMetaData__WriteData_Properties(const KFileMetaData__WriteData* self) {
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

libqt_map /* of int to libqt_string */ KFileMetaData__WriteData_ImageData(const KFileMetaData__WriteData* self) {
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

void KFileMetaData__WriteData_Delete(KFileMetaData__WriteData* self) {
    delete self;
}
