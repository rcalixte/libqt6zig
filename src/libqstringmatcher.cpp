#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringMatcher>
#include <qstringmatcher.h>
#include "libqstringmatcher.h"
#include "libqstringmatcher.hxx"

QStringMatcher* QStringMatcher_new() {
    return new QStringMatcher();
}

QStringMatcher* QStringMatcher_new2(const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return new QStringMatcher(pattern_QString);
}

QStringMatcher* QStringMatcher_new3(const QChar* uc, ptrdiff_t lenVal) {
    return new QStringMatcher(uc, (qsizetype)(lenVal));
}

QStringMatcher* QStringMatcher_new4(const QStringMatcher* other) {
    return new QStringMatcher(*other);
}

QStringMatcher* QStringMatcher_new5(const libqt_string pattern, int cs) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return new QStringMatcher(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

QStringMatcher* QStringMatcher_new6(const QChar* uc, ptrdiff_t lenVal, int cs) {
    return new QStringMatcher(uc, (qsizetype)(lenVal), static_cast<Qt::CaseSensitivity>(cs));
}

void QStringMatcher_OperatorAssign(QStringMatcher* self, const QStringMatcher* other) {
    self->operator=(*other);
}

void QStringMatcher_SetPattern(QStringMatcher* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setPattern(pattern_QString);
}

void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return static_cast<ptrdiff_t>(self->indexIn(str_QString));
}

ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, const QChar* str, ptrdiff_t length) {
    return static_cast<ptrdiff_t>(self->indexIn(str, (qsizetype)(length)));
}

libqt_string QStringMatcher_Pattern(const QStringMatcher* self) {
    QString _ret = self->pattern();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStringMatcher_CaseSensitivity(const QStringMatcher* self) {
    return static_cast<int>(self->caseSensitivity());
}

ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, const libqt_string str, ptrdiff_t from) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return static_cast<ptrdiff_t>(self->indexIn(str_QString, (qsizetype)(from)));
}

ptrdiff_t QStringMatcher_IndexIn32(const QStringMatcher* self, const QChar* str, ptrdiff_t length, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexIn(str, (qsizetype)(length), (qsizetype)(from)));
}

void QStringMatcher_Delete(QStringMatcher* self) {
    delete self;
}
