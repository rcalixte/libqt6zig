#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBoundaryFinder>
#include <qtextboundaryfinder.h>
#include "libqtextboundaryfinder.h"
#include "libqtextboundaryfinder.hxx"

QTextBoundaryFinder* QTextBoundaryFinder_new() {
    return new QTextBoundaryFinder();
}

QTextBoundaryFinder* QTextBoundaryFinder_new2(const QTextBoundaryFinder* other) {
    return new QTextBoundaryFinder(*other);
}

QTextBoundaryFinder* QTextBoundaryFinder_new3(int typeVal, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), stringVal_QString);
}

QTextBoundaryFinder* QTextBoundaryFinder_new4(int typeVal, const QChar* chars, ptrdiff_t length) {
    return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, (qsizetype)(length));
}

QTextBoundaryFinder* QTextBoundaryFinder_new5(int typeVal, const QChar* chars, ptrdiff_t length, unsigned char* buffer) {
    return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, (qsizetype)(length), static_cast<unsigned char*>(buffer));
}

QTextBoundaryFinder* QTextBoundaryFinder_new6(int typeVal, const QChar* chars, ptrdiff_t length, unsigned char* buffer, ptrdiff_t bufferSize) {
    return new QTextBoundaryFinder(static_cast<QTextBoundaryFinder::BoundaryType>(typeVal), chars, (qsizetype)(length), static_cast<unsigned char*>(buffer), (qsizetype)(bufferSize));
}

void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, const QTextBoundaryFinder* other) {
    self->operator=(*other);
}

bool QTextBoundaryFinder_IsValid(const QTextBoundaryFinder* self) {
    return self->isValid();
}

int QTextBoundaryFinder_Type(const QTextBoundaryFinder* self) {
    return static_cast<int>(self->type());
}

libqt_string QTextBoundaryFinder_String(const QTextBoundaryFinder* self) {
    QString _ret = self->string();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self) {
    self->toStart();
}

void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self) {
    self->toEnd();
}

ptrdiff_t QTextBoundaryFinder_Position(const QTextBoundaryFinder* self) {
    return static_cast<ptrdiff_t>(self->position());
}

void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, ptrdiff_t position) {
    self->setPosition((qsizetype)(position));
}

ptrdiff_t QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self) {
    return static_cast<ptrdiff_t>(self->toNextBoundary());
}

ptrdiff_t QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self) {
    return static_cast<ptrdiff_t>(self->toPreviousBoundary());
}

bool QTextBoundaryFinder_IsAtBoundary(const QTextBoundaryFinder* self) {
    return self->isAtBoundary();
}

int QTextBoundaryFinder_BoundaryReasons(const QTextBoundaryFinder* self) {
    return static_cast<int>(self->boundaryReasons());
}

void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self) {
    delete self;
}
