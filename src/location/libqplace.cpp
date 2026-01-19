#include <QGeoLocation>
#include <QList>
#include <QMap>
#include <QPlace>
#include <QPlaceAttribute>
#include <QPlaceCategory>
#include <QPlaceContactDetail>
#include <QPlaceContent>
#include <QPlaceIcon>
#include <QPlaceRatings>
#include <QPlaceSupplier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qplace.h>
#include "libqplace.h"
#include "libqplace.hxx"

QPlace* QPlace_new() {
    return new QPlace();
}

QPlace* QPlace_new2(const QPlace* other) {
    return new QPlace(*other);
}

void QPlace_OperatorAssign(QPlace* self, const QPlace* other) {
    self->operator=(*other);
}

void QPlace_Swap(QPlace* self, QPlace* other) {
    self->swap(*other);
}

libqt_list /* of QPlaceCategory* */ QPlace_Categories(const QPlace* self) {
    QList<QPlaceCategory> _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlace_SetCategory(QPlace* self, const QPlaceCategory* category) {
    self->setCategory(*category);
}

void QPlace_SetCategories(QPlace* self, const libqt_list /* of QPlaceCategory* */ categories) {
    QList<QPlaceCategory> categories_QList;
    categories_QList.reserve(categories.len);
    QPlaceCategory** categories_arr = static_cast<QPlaceCategory**>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        categories_QList.push_back(*(categories_arr[i]));
    }
    self->setCategories(categories_QList);
}

QGeoLocation* QPlace_Location(const QPlace* self) {
    return new QGeoLocation(self->location());
}

void QPlace_SetLocation(QPlace* self, const QGeoLocation* location) {
    self->setLocation(*location);
}

QPlaceRatings* QPlace_Ratings(const QPlace* self) {
    return new QPlaceRatings(self->ratings());
}

void QPlace_SetRatings(QPlace* self, const QPlaceRatings* ratings) {
    self->setRatings(*ratings);
}

QPlaceSupplier* QPlace_Supplier(const QPlace* self) {
    return new QPlaceSupplier(self->supplier());
}

void QPlace_SetSupplier(QPlace* self, const QPlaceSupplier* supplier) {
    self->setSupplier(*supplier);
}

libqt_string QPlace_Attribution(const QPlace* self) {
    QString _ret = self->attribution();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlace_SetAttribution(QPlace* self, const libqt_string attribution) {
    QString attribution_QString = QString::fromUtf8(attribution.data, attribution.len);
    self->setAttribution(attribution_QString);
}

QPlaceIcon* QPlace_Icon(const QPlace* self) {
    return new QPlaceIcon(self->icon());
}

void QPlace_SetIcon(QPlace* self, const QPlaceIcon* icon) {
    self->setIcon(*icon);
}

libqt_map /* of int to QPlaceContent* */ QPlace_Content(const QPlace* self, int typeVal) {
    QMap<int, QPlaceContent> _ret = self->content(static_cast<QPlaceContent::Type>(typeVal));
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QPlaceContent** _varr = static_cast<QPlaceContent**>(malloc(sizeof(QPlaceContent*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = new QPlaceContent(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QPlace_SetContent(QPlace* self, int typeVal, const libqt_map /* of int to QPlaceContent* */ content) {
    QMap<int, QPlaceContent> content_QMap;
    int* content_karr = static_cast<int*>(content.keys);
    QPlaceContent** content_varr = static_cast<QPlaceContent**>(content.values);
    for (size_t i = 0; i < content.len; ++i) {
        content_QMap[static_cast<int>(content_karr[i])] = *(content_varr[i]);
    }
    self->setContent(static_cast<QPlaceContent::Type>(typeVal), content_QMap);
}

void QPlace_InsertContent(QPlace* self, int typeVal, const libqt_map /* of int to QPlaceContent* */ content) {
    QMap<int, QPlaceContent> content_QMap;
    int* content_karr = static_cast<int*>(content.keys);
    QPlaceContent** content_varr = static_cast<QPlaceContent**>(content.values);
    for (size_t i = 0; i < content.len; ++i) {
        content_QMap[static_cast<int>(content_karr[i])] = *(content_varr[i]);
    }
    self->insertContent(static_cast<QPlaceContent::Type>(typeVal), content_QMap);
}

int QPlace_TotalContentCount(const QPlace* self, int typeVal) {
    return self->totalContentCount(static_cast<QPlaceContent::Type>(typeVal));
}

void QPlace_SetTotalContentCount(QPlace* self, int typeVal, int total) {
    self->setTotalContentCount(static_cast<QPlaceContent::Type>(typeVal), static_cast<int>(total));
}

libqt_string QPlace_Name(const QPlace* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlace_SetName(QPlace* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QPlace_PlaceId(const QPlace* self) {
    QString _ret = self->placeId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlace_SetPlaceId(QPlace* self, const libqt_string identifier) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    self->setPlaceId(identifier_QString);
}

libqt_string QPlace_PrimaryPhone(const QPlace* self) {
    QString _ret = self->primaryPhone();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlace_PrimaryFax(const QPlace* self) {
    QString _ret = self->primaryFax();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlace_PrimaryEmail(const QPlace* self) {
    QString _ret = self->primaryEmail();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QPlace_PrimaryWebsite(const QPlace* self) {
    return new QUrl(self->primaryWebsite());
}

bool QPlace_DetailsFetched(const QPlace* self) {
    return self->detailsFetched();
}

void QPlace_SetDetailsFetched(QPlace* self, bool fetched) {
    self->setDetailsFetched(fetched);
}

libqt_list /* of libqt_string */ QPlace_ExtendedAttributeTypes(const QPlace* self) {
    QList<QString> _ret = self->extendedAttributeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

QPlaceAttribute* QPlace_ExtendedAttribute(const QPlace* self, const libqt_string attributeType) {
    QString attributeType_QString = QString::fromUtf8(attributeType.data, attributeType.len);
    return new QPlaceAttribute(self->extendedAttribute(attributeType_QString));
}

void QPlace_SetExtendedAttribute(QPlace* self, const libqt_string attributeType, const QPlaceAttribute* attribute) {
    QString attributeType_QString = QString::fromUtf8(attributeType.data, attributeType.len);
    self->setExtendedAttribute(attributeType_QString, *attribute);
}

void QPlace_RemoveExtendedAttribute(QPlace* self, const libqt_string attributeType) {
    QString attributeType_QString = QString::fromUtf8(attributeType.data, attributeType.len);
    self->removeExtendedAttribute(attributeType_QString);
}

libqt_list /* of libqt_string */ QPlace_ContactTypes(const QPlace* self) {
    QList<QString> _ret = self->contactTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

libqt_list /* of QPlaceContactDetail* */ QPlace_ContactDetails(const QPlace* self, const libqt_string contactType) {
    QString contactType_QString = QString::fromUtf8(contactType.data, contactType.len);
    QList<QPlaceContactDetail> _ret = self->contactDetails(contactType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceContactDetail** _arr = static_cast<QPlaceContactDetail**>(malloc(sizeof(QPlaceContactDetail*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceContactDetail(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlace_SetContactDetails(QPlace* self, const libqt_string contactType, libqt_list /* of QPlaceContactDetail* */ details) {
    QString contactType_QString = QString::fromUtf8(contactType.data, contactType.len);
    QList<QPlaceContactDetail> details_QList;
    details_QList.reserve(details.len);
    QPlaceContactDetail** details_arr = static_cast<QPlaceContactDetail**>(details.data);
    for (size_t i = 0; i < details.len; ++i) {
        details_QList.push_back(*(details_arr[i]));
    }
    self->setContactDetails(contactType_QString, details_QList);
}

void QPlace_AppendContactDetail(QPlace* self, const libqt_string contactType, const QPlaceContactDetail* detail) {
    QString contactType_QString = QString::fromUtf8(contactType.data, contactType.len);
    self->appendContactDetail(contactType_QString, *detail);
}

void QPlace_RemoveContactDetails(QPlace* self, const libqt_string contactType) {
    QString contactType_QString = QString::fromUtf8(contactType.data, contactType.len);
    self->removeContactDetails(contactType_QString);
}

int QPlace_Visibility(const QPlace* self) {
    return static_cast<int>(self->visibility());
}

void QPlace_SetVisibility(QPlace* self, int visibility) {
    self->setVisibility(static_cast<QLocation::Visibility>(visibility));
}

bool QPlace_IsEmpty(const QPlace* self) {
    return self->isEmpty();
}

void QPlace_Delete(QPlace* self) {
    delete self;
}
