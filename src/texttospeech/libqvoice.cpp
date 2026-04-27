#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVoice>
#include <qvoice.h>
#include "libqvoice.h"
#include "libqvoice.hxx"

QVoice* QVoice_new() {
    return new QVoice();
}

QVoice* QVoice_new2(const QVoice* other) {
    return new QVoice(*other);
}

void QVoice_OperatorAssign(QVoice* self, const QVoice* other) {
    self->operator=(*other);
}

void QVoice_Swap(QVoice* self, QVoice* other) {
    self->swap(*other);
}

libqt_string QVoice_Name(const QVoice* self) {
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

QLocale* QVoice_Locale(const QVoice* self) {
    return new QLocale(self->locale());
}

int QVoice_Gender(const QVoice* self) {
    return static_cast<int>(self->gender());
}

int QVoice_Age(const QVoice* self) {
    return static_cast<int>(self->age());
}

uint16_t QVoice_Language(const QVoice* self) {
    return static_cast<uint16_t>(self->language());
}

libqt_string QVoice_GenderName(int gender) {
    QString _ret = QVoice::genderName(static_cast<QVoice::Gender>(gender));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVoice_AgeName(int age) {
    QString _ret = QVoice::ageName(static_cast<QVoice::Age>(age));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVoice_Delete(QVoice* self) {
    delete self;
}
