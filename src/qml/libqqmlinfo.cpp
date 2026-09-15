#include <QByteArray>
#include <QChar>
#include <QDebug>
#include <QIODeviceBase>
#include <QList>
#include <QObject>
#include <QQmlError>
#include <QQmlInfo>
#include <QString>
#include <QUrl>
#include <qqmlinfo.h>
#include "libqqmlinfo.h"
#include "libqqmlinfo.hxx"

QQmlInfo* qqmlinfo_h_QmlDebug(const QObject* me) {
    return new QQmlInfo(qmlDebug(me));
}

QQmlInfo* qqmlinfo_h_QmlDebug2(const QObject* me, const QQmlError* error) {
    return new QQmlInfo(qmlDebug(me, *error));
}

QQmlInfo* qqmlinfo_h_QmlDebug3(const QObject* me, const libqt_list /* of QQmlError* */ errors) {
    QList<QQmlError> errors_QList;
    errors_QList.reserve(errors.len);
    QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    return new QQmlInfo(qmlDebug(me, errors_QList));
}

QQmlInfo* qqmlinfo_h_QmlInfo(const QObject* me) {
    return new QQmlInfo(qmlInfo(me));
}

QQmlInfo* qqmlinfo_h_QmlInfo2(const QObject* me, const QQmlError* error) {
    return new QQmlInfo(qmlInfo(me, *error));
}

QQmlInfo* qqmlinfo_h_QmlInfo3(const QObject* me, const libqt_list /* of QQmlError* */ errors) {
    QList<QQmlError> errors_QList;
    errors_QList.reserve(errors.len);
    QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    return new QQmlInfo(qmlInfo(me, errors_QList));
}

QQmlInfo* qqmlinfo_h_QmlWarning(const QObject* me) {
    return new QQmlInfo(qmlWarning(me));
}

QQmlInfo* qqmlinfo_h_QmlWarning2(const QObject* me, const QQmlError* error) {
    return new QQmlInfo(qmlWarning(me, *error));
}

QQmlInfo* qqmlinfo_h_QmlWarning3(const QObject* me, const libqt_list /* of QQmlError* */ errors) {
    QList<QQmlError> errors_QList;
    errors_QList.reserve(errors.len);
    QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    return new QQmlInfo(qmlWarning(me, errors_QList));
}

QQmlInfo* QQmlInfo_new(const QQmlInfo* param1) {
    return new QQmlInfo(*param1);
}

QQmlInfo* QQmlInfo_OperatorShiftLeft(QQmlInfo* self, QChar* t) {
    QQmlInfo& _ret = self->operator<<(*t);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft2(QQmlInfo* self, bool t) {
    QQmlInfo& _ret = self->operator<<(t);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft3(QQmlInfo* self, char t) {
    QQmlInfo& _ret = self->operator<<(static_cast<char>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft4(QQmlInfo* self, int16_t t) {
    QQmlInfo& _ret = self->operator<<(static_cast<short>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft5(QQmlInfo* self, uint16_t t) {
    QQmlInfo& _ret = self->operator<<(static_cast<unsigned short>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft6(QQmlInfo* self, int t) {
    QQmlInfo& _ret = self->operator<<(static_cast<int>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft7(QQmlInfo* self, unsigned int t) {
    QQmlInfo& _ret = self->operator<<(static_cast<unsigned int>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft8(QQmlInfo* self, long t) {
    QQmlInfo& _ret = self->operator<<(static_cast<long>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft9(QQmlInfo* self, unsigned long t) {
    QQmlInfo& _ret = self->operator<<(static_cast<unsigned long>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft10(QQmlInfo* self, long long t) {
    QQmlInfo& _ret = self->operator<<(static_cast<qint64>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft11(QQmlInfo* self, unsigned long long t) {
    QQmlInfo& _ret = self->operator<<(static_cast<quint64>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft12(QQmlInfo* self, float t) {
    QQmlInfo& _ret = self->operator<<(static_cast<float>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft13(QQmlInfo* self, double t) {
    QQmlInfo& _ret = self->operator<<(static_cast<double>(t));
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft14(QQmlInfo* self, const char* t) {
    QQmlInfo& _ret = self->operator<<(t);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft15(QQmlInfo* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    QQmlInfo& _ret = self->operator<<(t_QString);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft16(QQmlInfo* self, libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    QQmlInfo& _ret = self->operator<<(t_QString);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft17(QQmlInfo* self, const libqt_string t) {
    QLatin1String t_QLatin1String(t.data, t.len);
    QQmlInfo& _ret = self->operator<<(t_QLatin1String);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft18(QQmlInfo* self, const libqt_string t) {
    QByteArray t_QByteArray(t.data, t.len);
    QQmlInfo& _ret = self->operator<<(t_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft19(QQmlInfo* self, const void* t) {
    QQmlInfo& _ret = self->operator<<(t);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft20(QQmlInfo* self, intptr_t f) {
    auto f_func = reinterpret_cast<QTextStreamFunction>(f);
    QQmlInfo& _ret = self->operator<<(f_func);
    // Cast returned reference into pointer
    return &_ret;
}

QQmlInfo* QQmlInfo_OperatorShiftLeft22(QQmlInfo* self, const QUrl* t) {
    QQmlInfo& _ret = self->operator<<(*t);
    // Cast returned reference into pointer
    return &_ret;
}

void QQmlInfo_Delete(QQmlInfo* self) {
    delete self;
}
