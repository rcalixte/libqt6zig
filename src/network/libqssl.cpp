#include <QMetaObject>
#include <QSsl>
#include <qssl.h>
#include "libqssl.h"
#include "libqssl.hxx"

QMetaObject* QSsl_GetEnumMetaObject(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::KeyType>(param1));
}

const char* QSsl_GetEnumName(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::KeyType>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject2(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::EncodingFormat>(param1));
}

const char* QSsl_GetEnumName2(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::EncodingFormat>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject3(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::KeyAlgorithm>(param1));
}

const char* QSsl_GetEnumName3(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::KeyAlgorithm>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject4(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::AlternativeNameEntryType>(param1));
}

const char* QSsl_GetEnumName4(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::AlternativeNameEntryType>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject5(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::SslProtocol>(param1));
}

const char* QSsl_GetEnumName5(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::SslProtocol>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject6(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::SslOption>(param1));
}

const char* QSsl_GetEnumName6(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::SslOption>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject7(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::AlertLevel>(param1));
}

const char* QSsl_GetEnumName7(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::AlertLevel>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject8(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::AlertType>(param1));
}

const char* QSsl_GetEnumName8(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::AlertType>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject9(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::ImplementedClass>(param1));
}

const char* QSsl_GetEnumName9(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::ImplementedClass>(param1));
}

QMetaObject* QSsl_GetEnumMetaObject10(int param1) {
    return (QMetaObject*)QSsl::qt_getEnumMetaObject(static_cast<QSsl::SupportedFeature>(param1));
}

const char* QSsl_GetEnumName10(int param1) {
    return (const char*)QSsl::qt_getEnumName(static_cast<QSsl::SupportedFeature>(param1));
}
