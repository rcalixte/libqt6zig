#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#include <QByteArray>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <metadata.h>
#include "libmetadata.h"
#include "libmetadata.hxx"

Attica__Metadata* Attica__Metadata_new() {
    return new Attica::Metadata();
}

Attica__Metadata* Attica__Metadata_new2(const Attica__Metadata* other) {
    return new Attica::Metadata(*other);
}

void Attica__Metadata_OperatorAssign(Attica__Metadata* self, const Attica__Metadata* other) {
    self->operator=(*other);
}

int Attica__Metadata_Error(const Attica__Metadata* self) {
    return static_cast<int>(self->error());
}

void Attica__Metadata_SetError(Attica__Metadata* self, int errorVal) {
    self->setError(static_cast<Attica::Metadata::Error>(errorVal));
}

int Attica__Metadata_StatusCode(const Attica__Metadata* self) {
    return self->statusCode();
}

void Attica__Metadata_SetStatusCode(Attica__Metadata* self, int code) {
    self->setStatusCode(static_cast<int>(code));
}

libqt_string Attica__Metadata_StatusString(const Attica__Metadata* self) {
    QString _ret = self->statusString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Metadata_SetStatusString(Attica__Metadata* self, const libqt_string status) {
    QString status_QString = QString::fromUtf8(status.data, status.len);
    self->setStatusString(status_QString);
}

libqt_string Attica__Metadata_Message(Attica__Metadata* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Metadata_SetMessage(Attica__Metadata* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->setMessage(message_QString);
}

int Attica__Metadata_TotalItems(Attica__Metadata* self) {
    return self->totalItems();
}

void Attica__Metadata_SetTotalItems(Attica__Metadata* self, int items) {
    self->setTotalItems(static_cast<int>(items));
}

int Attica__Metadata_ItemsPerPage(Attica__Metadata* self) {
    return self->itemsPerPage();
}

void Attica__Metadata_SetItemsPerPage(Attica__Metadata* self, int itemsPerPage) {
    self->setItemsPerPage(static_cast<int>(itemsPerPage));
}

libqt_string Attica__Metadata_ResultingId(Attica__Metadata* self) {
    QString _ret = self->resultingId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Metadata_SetResultingId(Attica__Metadata* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setResultingId(id_QString);
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ Attica__Metadata_Headers(const Attica__Metadata* self) {
    QList<QPair<QByteArray, QByteArray>> _ret = self->headers();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<const char*>(malloc(_lv_second_str.len + 1));
        memcpy((void*)_lv_second_str.data, _lv_second_qb.data(), _lv_second_str.len);
        ((char*)_lv_second_str.data)[_lv_second_str.len] = '\0';
        *_lv_second = _lv_second_str;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__Metadata_Delete(Attica__Metadata* self) {
    delete self;
}
