#include <QByteArray>
#include <QWebEngineUrlScheme>
#include <qwebengineurlscheme.h>
#include "libqwebengineurlscheme.h"
#include "libqwebengineurlscheme.hxx"

QWebEngineUrlScheme* QWebEngineUrlScheme_new() {
    return new QWebEngineUrlScheme();
}

QWebEngineUrlScheme* QWebEngineUrlScheme_new2(const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new QWebEngineUrlScheme(name_QByteArray);
}

QWebEngineUrlScheme* QWebEngineUrlScheme_new3(const QWebEngineUrlScheme* that) {
    return new QWebEngineUrlScheme(*that);
}

void QWebEngineUrlScheme_OperatorAssign(QWebEngineUrlScheme* self, const QWebEngineUrlScheme* that) {
    self->operator=(*that);
}

bool QWebEngineUrlScheme_OperatorEqual(const QWebEngineUrlScheme* self, const QWebEngineUrlScheme* that) {
    return (*self == *that);
}

bool QWebEngineUrlScheme_OperatorNotEqual(const QWebEngineUrlScheme* self, const QWebEngineUrlScheme* that) {
    return (*self != *that);
}

libqt_string QWebEngineUrlScheme_Name(const QWebEngineUrlScheme* self) {
    QByteArray _qb = self->name();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineUrlScheme_SetName(QWebEngineUrlScheme* self, const libqt_string newValue) {
    QByteArray newValue_QByteArray(newValue.data, newValue.len);
    self->setName(newValue_QByteArray);
}

int QWebEngineUrlScheme_Syntax(const QWebEngineUrlScheme* self) {
    return static_cast<int>(self->syntax());
}

void QWebEngineUrlScheme_SetSyntax(QWebEngineUrlScheme* self, int newValue) {
    self->setSyntax(static_cast<QWebEngineUrlScheme::Syntax>(newValue));
}

int QWebEngineUrlScheme_DefaultPort(const QWebEngineUrlScheme* self) {
    return self->defaultPort();
}

void QWebEngineUrlScheme_SetDefaultPort(QWebEngineUrlScheme* self, int newValue) {
    self->setDefaultPort(static_cast<int>(newValue));
}

int QWebEngineUrlScheme_Flags(const QWebEngineUrlScheme* self) {
    return static_cast<int>(self->flags());
}

void QWebEngineUrlScheme_SetFlags(QWebEngineUrlScheme* self, int newValue) {
    self->setFlags(static_cast<QWebEngineUrlScheme::Flags>(newValue));
}

void QWebEngineUrlScheme_RegisterScheme(const QWebEngineUrlScheme* scheme) {
    QWebEngineUrlScheme::registerScheme(*scheme);
}

QWebEngineUrlScheme* QWebEngineUrlScheme_SchemeByName(const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new QWebEngineUrlScheme(QWebEngineUrlScheme::schemeByName(name_QByteArray));
}

void QWebEngineUrlScheme_Delete(QWebEngineUrlScheme* self) {
    delete self;
}
