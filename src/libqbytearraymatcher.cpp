#include <QByteArray>
#include <QByteArrayMatcher>
#include <QByteArrayView>
#include <QStaticByteArrayMatcherBase>
#include <qbytearraymatcher.h>
#include "libqbytearraymatcher.h"
#include "libqbytearraymatcher.hxx"

QByteArrayMatcher* QByteArrayMatcher_new() {
    return new QByteArrayMatcher();
}

QByteArrayMatcher* QByteArrayMatcher_new2(const libqt_string pattern) {
    QByteArray pattern_QByteArray(pattern.data, pattern.len);
    return new QByteArrayMatcher(pattern_QByteArray);
}

QByteArrayMatcher* QByteArrayMatcher_new3(QByteArrayView* pattern) {
    return new QByteArrayMatcher(*pattern);
}

QByteArrayMatcher* QByteArrayMatcher_new4(const char* pattern) {
    return new QByteArrayMatcher(pattern);
}

QByteArrayMatcher* QByteArrayMatcher_new5(const QByteArrayMatcher* other) {
    return new QByteArrayMatcher(*other);
}

QByteArrayMatcher* QByteArrayMatcher_new6(const char* pattern, ptrdiff_t length) {
    return new QByteArrayMatcher(pattern, (qsizetype)(length));
}

void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, const QByteArrayMatcher* other) {
    self->operator=(*other);
}

void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, const libqt_string pattern) {
    QByteArray pattern_QByteArray(pattern.data, pattern.len);
    self->setPattern(pattern_QByteArray);
}

ptrdiff_t QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal) {
    return static_cast<ptrdiff_t>(self->indexIn(str, (qsizetype)(lenVal)));
}

ptrdiff_t QByteArrayMatcher_IndexInWithData(const QByteArrayMatcher* self, QByteArrayView* data) {
    return static_cast<ptrdiff_t>(self->indexIn(*data));
}

libqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self) {
    QByteArray _qb = self->pattern();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

ptrdiff_t QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexIn(str, (qsizetype)(lenVal), (qsizetype)(from)));
}

ptrdiff_t QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, QByteArrayView* data, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexIn(*data, (qsizetype)(from)));
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self) {
    delete self;
}

QStaticByteArrayMatcherBase* QStaticByteArrayMatcherBase_new(const QStaticByteArrayMatcherBase* other) {
    return new QStaticByteArrayMatcherBase(*other);
}

void QStaticByteArrayMatcherBase_CopyAssign(QStaticByteArrayMatcherBase* self, QStaticByteArrayMatcherBase* other) {
    *self = *other;
}
