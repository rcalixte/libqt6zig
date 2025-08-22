#include <QBitArray>
#include <QByteArray>
#include <QChar>
#include <QDataStream>
#include <QDate>
#include <QDateTime>
#include <QEasingCurve>
#include <QHash>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QLine>
#include <QLineF>
#include <QList>
#include <QLocale>
#include <QMap>
#include <QMetaType>
#include <QModelIndex>
#include <QPartialOrdering>
#include <QPersistentModelIndex>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QUrl>
#include <QUuid>
#include <QVariant>
#include <qvariant.h>
#include "libqvariant.h"
#include "libqvariant.hxx"

QVariant* QVariant_new() {
    return new QVariant();
}

QVariant* QVariant_new2(QMetaType* typeVal) {
    return new QVariant(*typeVal);
}

QVariant* QVariant_new3(const QVariant* other) {
    return new QVariant(*other);
}

QVariant* QVariant_new4(int i) {
    return new QVariant(static_cast<int>(i));
}

QVariant* QVariant_new5(unsigned int ui) {
    return new QVariant(static_cast<uint>(ui));
}

QVariant* QVariant_new6(long long ll) {
    return new QVariant(static_cast<qlonglong>(ll));
}

QVariant* QVariant_new7(unsigned long long ull) {
    return new QVariant(static_cast<qulonglong>(ull));
}

QVariant* QVariant_new8(bool b) {
    return new QVariant(b);
}

QVariant* QVariant_new9(double d) {
    return new QVariant(static_cast<double>(d));
}

QVariant* QVariant_new10(float f) {
    return new QVariant(static_cast<float>(f));
}

QVariant* QVariant_new11(QChar* qchar) {
    return new QVariant(*qchar);
}

QVariant* QVariant_new12(QDate* date) {
    return new QVariant(*date);
}

QVariant* QVariant_new13(QTime* time) {
    return new QVariant(*time);
}

QVariant* QVariant_new14(const QBitArray* bitarray) {
    return new QVariant(*bitarray);
}

QVariant* QVariant_new15(const libqt_string bytearray) {
    QByteArray bytearray_QByteArray(bytearray.data, bytearray.len);
    return new QVariant(bytearray_QByteArray);
}

QVariant* QVariant_new16(const QDateTime* datetime) {
    return new QVariant(*datetime);
}

QVariant* QVariant_new17(const libqt_map /* of libqt_string to QVariant* */ hash) {
    QHash<QString, QVariant> hash_QMap;
    hash_QMap.reserve(hash.len);
    libqt_string* hash_karr = static_cast<libqt_string*>(hash.keys);
    QVariant** hash_varr = static_cast<QVariant**>(hash.values);
    for (size_t i = 0; i < hash.len; ++i) {
        QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
        hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
    }
    return new QVariant(hash_QMap);
}

QVariant* QVariant_new18(const QJsonArray* jsonArray) {
    return new QVariant(*jsonArray);
}

QVariant* QVariant_new19(const QJsonObject* jsonObject) {
    return new QVariant(*jsonObject);
}

QVariant* QVariant_new20(const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new QVariant(list_QList);
}

QVariant* QVariant_new21(const QLocale* locale) {
    return new QVariant(*locale);
}

QVariant* QVariant_new22(const libqt_map /* of libqt_string to QVariant* */ mapVal) {
    QMap<QString, QVariant> mapVal_QMap;
    libqt_string* mapVal_karr = static_cast<libqt_string*>(mapVal.keys);
    QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
    for (size_t i = 0; i < mapVal.len; ++i) {
        QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
        mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
    }
    return new QVariant(mapVal_QMap);
}

QVariant* QVariant_new23(const QRegularExpression* re) {
    return new QVariant(*re);
}

QVariant* QVariant_new24(const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QVariant(stringVal_QString);
}

QVariant* QVariant_new25(const libqt_list /* of libqt_string */ stringlist) {
    QList<QString> stringlist_QList;
    stringlist_QList.reserve(stringlist.len);
    libqt_string* stringlist_arr = static_cast<libqt_string*>(stringlist.data);
    for (size_t i = 0; i < stringlist.len; ++i) {
        QString stringlist_arr_i_QString = QString::fromUtf8(stringlist_arr[i].data, stringlist_arr[i].len);
        stringlist_QList.push_back(stringlist_arr_i_QString);
    }
    return new QVariant(stringlist_QList);
}

QVariant* QVariant_new26(const QUrl* url) {
    return new QVariant(*url);
}

QVariant* QVariant_new27(QSize* size) {
    return new QVariant(*size);
}

QVariant* QVariant_new28(QPoint* pt) {
    return new QVariant(*pt);
}

QVariant* QVariant_new29(int typeVal) {
    return new QVariant(static_cast<QVariant::Type>(typeVal));
}

QVariant* QVariant_new30(QMetaType* typeVal, const void* copyVal) {
    return new QVariant(*typeVal, copyVal);
}

void QVariant_OperatorAssign(QVariant* self, const QVariant* other) {
    self->operator=(*other);
}

void QVariant_Swap(QVariant* self, QVariant* other) {
    self->swap(*other);
}

int QVariant_UserType(const QVariant* self) {
    return self->userType();
}

int QVariant_TypeId(const QVariant* self) {
    return self->typeId();
}

const char* QVariant_TypeName(const QVariant* self) {
    return (const char*)self->typeName();
}

QMetaType* QVariant_MetaType(const QVariant* self) {
    return new QMetaType(self->metaType());
}

bool QVariant_CanConvert(const QVariant* self, QMetaType* targetType) {
    return self->canConvert(*targetType);
}

bool QVariant_Convert(QVariant* self, QMetaType* typeVal) {
    return self->convert(*typeVal);
}

bool QVariant_CanView(const QVariant* self, QMetaType* targetType) {
    return self->canView(*targetType);
}

bool QVariant_CanConvert2(const QVariant* self, int targetTypeId) {
    return self->canConvert(static_cast<int>(targetTypeId));
}

bool QVariant_Convert2(QVariant* self, int targetTypeId) {
    return self->convert(static_cast<int>(targetTypeId));
}

bool QVariant_IsValid(const QVariant* self) {
    return self->isValid();
}

bool QVariant_IsNull(const QVariant* self) {
    return self->isNull();
}

void QVariant_Clear(QVariant* self) {
    self->clear();
}

void QVariant_Detach(QVariant* self) {
    self->detach();
}

bool QVariant_IsDetached(const QVariant* self) {
    return self->isDetached();
}

int QVariant_ToInt(const QVariant* self) {
    return self->toInt();
}

unsigned int QVariant_ToUInt(const QVariant* self) {
    return static_cast<unsigned int>(self->toUInt());
}

long long QVariant_ToLongLong(const QVariant* self) {
    return static_cast<long long>(self->toLongLong());
}

unsigned long long QVariant_ToULongLong(const QVariant* self) {
    return static_cast<unsigned long long>(self->toULongLong());
}

bool QVariant_ToBool(const QVariant* self) {
    return self->toBool();
}

double QVariant_ToDouble(const QVariant* self) {
    return self->toDouble();
}

float QVariant_ToFloat(const QVariant* self) {
    return self->toFloat();
}

double QVariant_ToReal(const QVariant* self) {
    return static_cast<double>(self->toReal());
}

libqt_string QVariant_ToByteArray(const QVariant* self) {
    QByteArray _qb = self->toByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QBitArray* QVariant_ToBitArray(const QVariant* self) {
    return new QBitArray(self->toBitArray());
}

libqt_string QVariant_ToString(const QVariant* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QVariant_ToStringList(const QVariant* self) {
    QList<QString> _ret = self->toStringList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QChar* QVariant_ToChar(const QVariant* self) {
    return new QChar(self->toChar());
}

QDate* QVariant_ToDate(const QVariant* self) {
    return new QDate(self->toDate());
}

QTime* QVariant_ToTime(const QVariant* self) {
    return new QTime(self->toTime());
}

QDateTime* QVariant_ToDateTime(const QVariant* self) {
    return new QDateTime(self->toDateTime());
}

libqt_list /* of QVariant* */ QVariant_ToList(const QVariant* self) {
    QList<QVariant> _ret = self->toList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_map /* of libqt_string to QVariant* */ QVariant_ToMap(const QVariant* self) {
    QMap<QString, QVariant> _ret = self->toMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_map /* of libqt_string to QVariant* */ QVariant_ToHash(const QVariant* self) {
    QHash<QString, QVariant> _ret = self->toHash();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

QPoint* QVariant_ToPoint(const QVariant* self) {
    return new QPoint(self->toPoint());
}

QPointF* QVariant_ToPointF(const QVariant* self) {
    return new QPointF(self->toPointF());
}

QRect* QVariant_ToRect(const QVariant* self) {
    return new QRect(self->toRect());
}

QSize* QVariant_ToSize(const QVariant* self) {
    return new QSize(self->toSize());
}

QSizeF* QVariant_ToSizeF(const QVariant* self) {
    return new QSizeF(self->toSizeF());
}

QLine* QVariant_ToLine(const QVariant* self) {
    return new QLine(self->toLine());
}

QLineF* QVariant_ToLineF(const QVariant* self) {
    return new QLineF(self->toLineF());
}

QRectF* QVariant_ToRectF(const QVariant* self) {
    return new QRectF(self->toRectF());
}

QLocale* QVariant_ToLocale(const QVariant* self) {
    return new QLocale(self->toLocale());
}

QRegularExpression* QVariant_ToRegularExpression(const QVariant* self) {
    return new QRegularExpression(self->toRegularExpression());
}

QEasingCurve* QVariant_ToEasingCurve(const QVariant* self) {
    return new QEasingCurve(self->toEasingCurve());
}

QUuid* QVariant_ToUuid(const QVariant* self) {
    return new QUuid(self->toUuid());
}

QUrl* QVariant_ToUrl(const QVariant* self) {
    return new QUrl(self->toUrl());
}

QJsonValue* QVariant_ToJsonValue(const QVariant* self) {
    return new QJsonValue(self->toJsonValue());
}

QJsonObject* QVariant_ToJsonObject(const QVariant* self) {
    return new QJsonObject(self->toJsonObject());
}

QJsonArray* QVariant_ToJsonArray(const QVariant* self) {
    return new QJsonArray(self->toJsonArray());
}

QJsonDocument* QVariant_ToJsonDocument(const QVariant* self) {
    return new QJsonDocument(self->toJsonDocument());
}

QModelIndex* QVariant_ToModelIndex(const QVariant* self) {
    return new QModelIndex(self->toModelIndex());
}

QPersistentModelIndex* QVariant_ToPersistentModelIndex(const QVariant* self) {
    return new QPersistentModelIndex(self->toPersistentModelIndex());
}

void QVariant_Load(QVariant* self, QDataStream* ds) {
    self->load(*ds);
}

void QVariant_Save(const QVariant* self, QDataStream* ds) {
    self->save(*ds);
}

int QVariant_Type(const QVariant* self) {
    return static_cast<int>(self->type());
}

const char* QVariant_TypeToName(int typeId) {
    return (const char*)QVariant::typeToName(static_cast<int>(typeId));
}

int QVariant_NameToType(const char* name) {
    return static_cast<int>(QVariant::nameToType(name));
}

void* QVariant_Data(QVariant* self) {
    return self->data();
}

const void* QVariant_ConstData(const QVariant* self) {
    return (const void*)self->constData();
}

const void* QVariant_Data2(const QVariant* self) {
    return (const void*)self->data();
}

void QVariant_SetValue(QVariant* self, const QVariant* avalue) {
    self->setValue(*avalue);
}

QVariant* QVariant_FromMetaType(QMetaType* typeVal) {
    return new QVariant(QVariant::fromMetaType(*typeVal));
}

QPartialOrdering* QVariant_Compare(const QVariant* lhs, const QVariant* rhs) {
    return new QPartialOrdering(QVariant::compare(*lhs, *rhs));
}

int QVariant_ToInt1(const QVariant* self, bool* ok) {
    return self->toInt(ok);
}

unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok) {
    return static_cast<unsigned int>(self->toUInt(ok));
}

long long QVariant_ToLongLong1(const QVariant* self, bool* ok) {
    return static_cast<long long>(self->toLongLong(ok));
}

unsigned long long QVariant_ToULongLong1(const QVariant* self, bool* ok) {
    return static_cast<unsigned long long>(self->toULongLong(ok));
}

double QVariant_ToDouble1(const QVariant* self, bool* ok) {
    return self->toDouble(ok);
}

float QVariant_ToFloat1(const QVariant* self, bool* ok) {
    return self->toFloat(ok);
}

double QVariant_ToReal1(const QVariant* self, bool* ok) {
    return static_cast<double>(self->toReal(ok));
}

QVariant* QVariant_FromMetaType2(QMetaType* typeVal, const void* copyVal) {
    return new QVariant(QVariant::fromMetaType(*typeVal, copyVal));
}

void QVariant_Delete(QVariant* self) {
    delete self;
}
