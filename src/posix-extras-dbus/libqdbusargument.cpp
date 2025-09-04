#include <QByteArray>
#include <QDBusArgument>
#include <QDBusObjectPath>
#include <QDBusSignature>
#include <QDBusUnixFileDescriptor>
#include <QDBusVariant>
#include <QList>
#include <QMetaType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdbusargument.h>
#include "libqdbusargument.h"
#include "libqdbusargument.hxx"

QDBusArgument* QDBusArgument_new() {
    return new QDBusArgument();
}

QDBusArgument* QDBusArgument_new2(const QDBusArgument* other) {
    return new QDBusArgument(*other);
}

void QDBusArgument_OperatorAssign(QDBusArgument* self, const QDBusArgument* other) {
    self->operator=(*other);
}

void QDBusArgument_Swap(QDBusArgument* self, QDBusArgument* other) {
    self->swap(*other);
}

QDBusArgument* QDBusArgument_OperatorShiftLeft(QDBusArgument* self, unsigned char arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<uchar>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft2(QDBusArgument* self, bool arg) {
    QDBusArgument& _ret = self->operator<<(arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft3(QDBusArgument* self, int16_t arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<short>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft4(QDBusArgument* self, uint16_t arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<ushort>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft5(QDBusArgument* self, int arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<int>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft6(QDBusArgument* self, unsigned int arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<uint>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft7(QDBusArgument* self, long long arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<qlonglong>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft8(QDBusArgument* self, unsigned long long arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<qulonglong>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft9(QDBusArgument* self, double arg) {
    QDBusArgument& _ret = self->operator<<(static_cast<double>(arg));
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft10(QDBusArgument* self, const libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    QDBusArgument& _ret = self->operator<<(arg_QString);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft11(QDBusArgument* self, const QDBusVariant* arg) {
    QDBusArgument& _ret = self->operator<<(*arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft12(QDBusArgument* self, const QDBusObjectPath* arg) {
    QDBusArgument& _ret = self->operator<<(*arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft13(QDBusArgument* self, const QDBusSignature* arg) {
    QDBusArgument& _ret = self->operator<<(*arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft14(QDBusArgument* self, const QDBusUnixFileDescriptor* arg) {
    QDBusArgument& _ret = self->operator<<(*arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft15(QDBusArgument* self, const libqt_list /* of libqt_string */ arg) {
    QList<QString> arg_QList;
    arg_QList.reserve(arg.len);
    libqt_string* arg_arr = static_cast<libqt_string*>(arg.data);
    for (size_t i = 0; i < arg.len; ++i) {
        QString arg_arr_i_QString = QString::fromUtf8(arg_arr[i].data, arg_arr[i].len);
        arg_QList.push_back(arg_arr_i_QString);
    }
    QDBusArgument& _ret = self->operator<<(arg_QList);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusArgument* QDBusArgument_OperatorShiftLeft16(QDBusArgument* self, const libqt_string arg) {
    QByteArray arg_QByteArray(arg.data, arg.len);
    QDBusArgument& _ret = self->operator<<(arg_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

void QDBusArgument_BeginStructure(QDBusArgument* self) {
    self->beginStructure();
}

void QDBusArgument_EndStructure(QDBusArgument* self) {
    self->endStructure();
}

void QDBusArgument_BeginArray(QDBusArgument* self, int elementMetaTypeId) {
    self->beginArray(static_cast<int>(elementMetaTypeId));
}

void QDBusArgument_BeginArray2(QDBusArgument* self, QMetaType* elementMetaType) {
    self->beginArray(*elementMetaType);
}

void QDBusArgument_EndArray(QDBusArgument* self) {
    self->endArray();
}

void QDBusArgument_BeginMap(QDBusArgument* self, int keyMetaTypeId, int valueMetaTypeId) {
    self->beginMap(static_cast<int>(keyMetaTypeId), static_cast<int>(valueMetaTypeId));
}

void QDBusArgument_BeginMap2(QDBusArgument* self, QMetaType* keyMetaType, QMetaType* valueMetaType) {
    self->beginMap(*keyMetaType, *valueMetaType);
}

void QDBusArgument_EndMap(QDBusArgument* self) {
    self->endMap();
}

void QDBusArgument_BeginMapEntry(QDBusArgument* self) {
    self->beginMapEntry();
}

void QDBusArgument_EndMapEntry(QDBusArgument* self) {
    self->endMapEntry();
}

void QDBusArgument_AppendVariant(QDBusArgument* self, const QVariant* v) {
    self->appendVariant(*v);
}

libqt_string QDBusArgument_CurrentSignature(const QDBusArgument* self) {
    QString _ret = self->currentSignature();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDBusArgument_CurrentType(const QDBusArgument* self) {
    return static_cast<int>(self->currentType());
}

QDBusArgument* QDBusArgument_OperatorShiftRight(const QDBusArgument* self, unsigned char* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<uchar&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight2(const QDBusArgument* self, bool* arg) {
    const QDBusArgument& _ret = self->operator>>(*arg);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight3(const QDBusArgument* self, int16_t* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<short&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight4(const QDBusArgument* self, uint16_t* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<ushort&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight5(const QDBusArgument* self, int* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<int&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight6(const QDBusArgument* self, unsigned int* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<uint&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight7(const QDBusArgument* self, long long* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<qlonglong&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight8(const QDBusArgument* self, unsigned long long* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<qulonglong&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight9(const QDBusArgument* self, double* arg) {
    const QDBusArgument& _ret = self->operator>>(static_cast<double&>(*arg));
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight10(const QDBusArgument* self, libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    const QDBusArgument& _ret = self->operator>>(arg_QString);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight11(const QDBusArgument* self, QDBusVariant* arg) {
    const QDBusArgument& _ret = self->operator>>(*arg);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight12(const QDBusArgument* self, QDBusObjectPath* arg) {
    const QDBusArgument& _ret = self->operator>>(*arg);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight13(const QDBusArgument* self, QDBusSignature* arg) {
    const QDBusArgument& _ret = self->operator>>(*arg);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight14(const QDBusArgument* self, QDBusUnixFileDescriptor* arg) {
    const QDBusArgument& _ret = self->operator>>(*arg);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight15(const QDBusArgument* self, libqt_list /* of libqt_string */ arg) {
    QList<QString> arg_QList;
    arg_QList.reserve(arg.len);
    libqt_string* arg_arr = static_cast<libqt_string*>(arg.data);
    for (size_t i = 0; i < arg.len; ++i) {
        QString arg_arr_i_QString = QString::fromUtf8(arg_arr[i].data, arg_arr[i].len);
        arg_QList.push_back(arg_arr_i_QString);
    }
    const QDBusArgument& _ret = self->operator>>(arg_QList);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

QDBusArgument* QDBusArgument_OperatorShiftRight16(const QDBusArgument* self, libqt_string arg) {
    QByteArray arg_QByteArray(arg.data, arg.len);
    const QDBusArgument& _ret = self->operator>>(arg_QByteArray);
    // Cast returned reference into pointer
    return const_cast<QDBusArgument*>(&_ret);
}

void QDBusArgument_BeginStructure2(const QDBusArgument* self) {
    self->beginStructure();
}

void QDBusArgument_EndStructure2(const QDBusArgument* self) {
    self->endStructure();
}

void QDBusArgument_BeginArray3(const QDBusArgument* self) {
    self->beginArray();
}

void QDBusArgument_EndArray2(const QDBusArgument* self) {
    self->endArray();
}

void QDBusArgument_BeginMap3(const QDBusArgument* self) {
    self->beginMap();
}

void QDBusArgument_EndMap2(const QDBusArgument* self) {
    self->endMap();
}

void QDBusArgument_BeginMapEntry2(const QDBusArgument* self) {
    self->beginMapEntry();
}

void QDBusArgument_EndMapEntry2(const QDBusArgument* self) {
    self->endMapEntry();
}

bool QDBusArgument_AtEnd(const QDBusArgument* self) {
    return self->atEnd();
}

QVariant* QDBusArgument_AsVariant(const QDBusArgument* self) {
    return new QVariant(self->asVariant());
}

void QDBusArgument_Delete(QDBusArgument* self) {
    delete self;
}
