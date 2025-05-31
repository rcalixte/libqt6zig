#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineScript>
#include <qwebenginescript.h>
#include "libqwebenginescript.h"
#include "libqwebenginescript.hxx"

QWebEngineScript* QWebEngineScript_new() {
    return new QWebEngineScript();
}

QWebEngineScript* QWebEngineScript_new2(const QWebEngineScript* other) {
    return new QWebEngineScript(*other);
}

void QWebEngineScript_OperatorAssign(QWebEngineScript* self, const QWebEngineScript* other) {
    self->operator=(*other);
}

libqt_string QWebEngineScript_Name(const QWebEngineScript* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineScript_SetName(QWebEngineScript* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

QUrl* QWebEngineScript_SourceUrl(const QWebEngineScript* self) {
    return new QUrl(self->sourceUrl());
}

void QWebEngineScript_SetSourceUrl(QWebEngineScript* self, const QUrl* url) {
    self->setSourceUrl(*url);
}

libqt_string QWebEngineScript_SourceCode(const QWebEngineScript* self) {
    QString _ret = self->sourceCode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineScript_SetSourceCode(QWebEngineScript* self, const libqt_string sourceCode) {
    QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
    self->setSourceCode(sourceCode_QString);
}

int QWebEngineScript_InjectionPoint(const QWebEngineScript* self) {
    return static_cast<int>(self->injectionPoint());
}

void QWebEngineScript_SetInjectionPoint(QWebEngineScript* self, int injectionPoint) {
    self->setInjectionPoint(static_cast<QWebEngineScript::InjectionPoint>(injectionPoint));
}

unsigned int QWebEngineScript_WorldId(const QWebEngineScript* self) {
    return static_cast<unsigned int>(self->worldId());
}

void QWebEngineScript_SetWorldId(QWebEngineScript* self, unsigned int worldId) {
    self->setWorldId(static_cast<unsigned int>(worldId));
}

bool QWebEngineScript_RunsOnSubFrames(const QWebEngineScript* self) {
    return self->runsOnSubFrames();
}

void QWebEngineScript_SetRunsOnSubFrames(QWebEngineScript* self, bool on) {
    self->setRunsOnSubFrames(on);
}

bool QWebEngineScript_OperatorEqual(const QWebEngineScript* self, const QWebEngineScript* other) {
    return (*self == *other);
}

bool QWebEngineScript_OperatorNotEqual(const QWebEngineScript* self, const QWebEngineScript* other) {
    return (*self != *other);
}

void QWebEngineScript_Swap(QWebEngineScript* self, QWebEngineScript* other) {
    self->swap(*other);
}

void QWebEngineScript_Delete(QWebEngineScript* self) {
    delete self;
}
