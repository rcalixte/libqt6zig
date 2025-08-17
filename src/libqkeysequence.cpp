#include <QKeyCombination>
#include <QKeySequence>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qkeysequence.h>
#include "libqkeysequence.h"
#include "libqkeysequence.hxx"

QKeySequence* QKeySequence_new() {
    return new QKeySequence();
}

QKeySequence* QKeySequence_new2(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QKeySequence(key_QString);
}

QKeySequence* QKeySequence_new3(int k1) {
    return new QKeySequence(static_cast<int>(k1));
}

QKeySequence* QKeySequence_new4(QKeyCombination* k1) {
    return new QKeySequence(*k1);
}

QKeySequence* QKeySequence_new5(const QKeySequence* ks) {
    return new QKeySequence(*ks);
}

QKeySequence* QKeySequence_new6(int key) {
    return new QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

QKeySequence* QKeySequence_new7(const libqt_string key, int format) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QKeySequence(key_QString, static_cast<QKeySequence::SequenceFormat>(format));
}

QKeySequence* QKeySequence_new8(int k1, int k2) {
    return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2));
}

QKeySequence* QKeySequence_new9(int k1, int k2, int k3) {
    return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3));
}

QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4) {
    return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3), static_cast<int>(k4));
}

QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2) {
    return new QKeySequence(*k1, *k2);
}

QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3) {
    return new QKeySequence(*k1, *k2, *k3);
}

QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4) {
    return new QKeySequence(*k1, *k2, *k3, *k4);
}

int QKeySequence_Count(const QKeySequence* self) {
    return self->count();
}

bool QKeySequence_IsEmpty(const QKeySequence* self) {
    return self->isEmpty();
}

libqt_string QKeySequence_ToString(const QKeySequence* self) {
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

QKeySequence* QKeySequence_FromString(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QKeySequence(QKeySequence::fromString(str_QString));
}

libqt_list /* of QKeySequence* */ QKeySequence_ListFromString(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QKeySequence_ListToString(const libqt_list /* of QKeySequence* */ list) {
    QList<QKeySequence> list_QList;
    list_QList.reserve(list.len);
    QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    QString _ret = QKeySequence::listToString(list_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QKeySequence_Matches(const QKeySequence* self, const QKeySequence* seq) {
    return static_cast<int>(self->matches(*seq));
}

QKeySequence* QKeySequence_Mnemonic(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QKeySequence(QKeySequence::mnemonic(text_QString));
}

libqt_list /* of QKeySequence* */ QKeySequence_KeyBindings(int key) {
    QList<QKeySequence> _ret = QKeySequence::keyBindings(static_cast<QKeySequence::StandardKey>(key));
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QVariant* QKeySequence_ToQVariant(const QKeySequence* self) {
    return new QVariant(self->operator QVariant());
}

QKeyCombination* QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i) {
    return new QKeyCombination(self->operator[](static_cast<uint>(i)));
}

void QKeySequence_OperatorAssign(QKeySequence* self, const QKeySequence* other) {
    self->operator=(*other);
}

void QKeySequence_Swap(QKeySequence* self, QKeySequence* other) {
    self->swap(*other);
}

bool QKeySequence_OperatorEqual(const QKeySequence* self, const QKeySequence* other) {
    return (*self == *other);
}

bool QKeySequence_OperatorNotEqual(const QKeySequence* self, const QKeySequence* other) {
    return (*self != *other);
}

bool QKeySequence_OperatorLesser(const QKeySequence* self, const QKeySequence* ks) {
    return (*self < *ks);
}

bool QKeySequence_OperatorGreater(const QKeySequence* self, const QKeySequence* other) {
    return (*self > *other);
}

bool QKeySequence_OperatorLesserOrEqual(const QKeySequence* self, const QKeySequence* other) {
    return (*self <= *other);
}

bool QKeySequence_OperatorGreaterOrEqual(const QKeySequence* self, const QKeySequence* other) {
    return (*self >= *other);
}

bool QKeySequence_IsDetached(const QKeySequence* self) {
    return self->isDetached();
}

libqt_string QKeySequence_ToString1(const QKeySequence* self, int format) {
    QString _ret = self->toString(static_cast<QKeySequence::SequenceFormat>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QKeySequence* QKeySequence_FromString2(const libqt_string str, int format) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QKeySequence(QKeySequence::fromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format)));
}

libqt_list /* of QKeySequence* */ QKeySequence_ListFromString2(const libqt_string str, int format) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format));
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QKeySequence_ListToString2(const libqt_list /* of QKeySequence* */ list, int format) {
    QList<QKeySequence> list_QList;
    list_QList.reserve(list.len);
    QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    QString _ret = QKeySequence::listToString(list_QList, static_cast<QKeySequence::SequenceFormat>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QKeySequence_Delete(QKeySequence* self) {
    delete self;
}
