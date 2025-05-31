#include <QAnyStringView>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTypeRevision>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "libqversionnumber.h"
#include "libqversionnumber.hxx"

QVersionNumber* QVersionNumber_new() {
    return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(const libqt_list /* of int */ seg) {
    QList<int> seg_QList;
    seg_QList.reserve(seg.len);
    int* seg_arr = static_cast<int*>(seg.data);
    for (size_t i = 0; i < seg.len; ++i) {
        seg_QList.push_back(static_cast<int>(seg_arr[i]));
    }
    return new QVersionNumber(seg_QList);
}

QVersionNumber* QVersionNumber_new3(int maj) {
    return new QVersionNumber(static_cast<int>(maj));
}

QVersionNumber* QVersionNumber_new4(int maj, int min) {
    return new QVersionNumber(static_cast<int>(maj), static_cast<int>(min));
}

QVersionNumber* QVersionNumber_new5(int maj, int min, int mic) {
    return new QVersionNumber(static_cast<int>(maj), static_cast<int>(min), static_cast<int>(mic));
}

QVersionNumber* QVersionNumber_new6(const QVersionNumber* param1) {
    return new QVersionNumber(*param1);
}

bool QVersionNumber_IsNull(const QVersionNumber* self) {
    return self->isNull();
}

bool QVersionNumber_IsNormalized(const QVersionNumber* self) {
    return self->isNormalized();
}

int QVersionNumber_MajorVersion(const QVersionNumber* self) {
    return self->majorVersion();
}

int QVersionNumber_MinorVersion(const QVersionNumber* self) {
    return self->minorVersion();
}

int QVersionNumber_MicroVersion(const QVersionNumber* self) {
    return self->microVersion();
}

QVersionNumber* QVersionNumber_Normalized(const QVersionNumber* self) {
    return new QVersionNumber(self->normalized());
}

libqt_list /* of int */ QVersionNumber_Segments(const QVersionNumber* self) {
    QList<int> _ret = self->segments();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QVersionNumber_SegmentAt(const QVersionNumber* self, ptrdiff_t index) {
    return self->segmentAt((qsizetype)(index));
}

ptrdiff_t QVersionNumber_SegmentCount(const QVersionNumber* self) {
    return static_cast<ptrdiff_t>(self->segmentCount());
}

bool QVersionNumber_IsPrefixOf(const QVersionNumber* self, const QVersionNumber* other) {
    return self->isPrefixOf(*other);
}

int QVersionNumber_Compare(const QVersionNumber* v1, const QVersionNumber* v2) {
    return QVersionNumber::compare(*v1, *v2);
}

QVersionNumber* QVersionNumber_CommonPrefix(const QVersionNumber* v1, const QVersionNumber* v2) {
    return new QVersionNumber(QVersionNumber::commonPrefix(*v1, *v2));
}

libqt_string QVersionNumber_ToString(const QVersionNumber* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVersionNumber* QVersionNumber_FromString(char* stringVal) {
    return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(stringVal)));
}

QVersionNumber* QVersionNumber_FromString2(char* stringVal, ptrdiff_t* suffixIndex) {
    return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(stringVal), (qsizetype*)(suffixIndex)));
}

void QVersionNumber_Delete(QVersionNumber* self) {
    delete self;
}

QTypeRevision* QTypeRevision_new(const QTypeRevision* other) {
    return new QTypeRevision(*other);
}

QTypeRevision* QTypeRevision_new2(QTypeRevision* other) {
    return new QTypeRevision(std::move(*other));
}

QTypeRevision* QTypeRevision_new3() {
    return new QTypeRevision();
}

QTypeRevision* QTypeRevision_new4(const QTypeRevision* param1) {
    return new QTypeRevision(*param1);
}

void QTypeRevision_CopyAssign(QTypeRevision* self, QTypeRevision* other) {
    *self = *other;
}

void QTypeRevision_MoveAssign(QTypeRevision* self, QTypeRevision* other) {
    *self = std::move(*other);
}

QTypeRevision* QTypeRevision_Zero() {
    return new QTypeRevision(QTypeRevision::zero());
}

bool QTypeRevision_HasMajorVersion(const QTypeRevision* self) {
    return self->hasMajorVersion();
}

unsigned char QTypeRevision_MajorVersion(const QTypeRevision* self) {
    return static_cast<unsigned char>(self->majorVersion());
}

bool QTypeRevision_HasMinorVersion(const QTypeRevision* self) {
    return self->hasMinorVersion();
}

unsigned char QTypeRevision_MinorVersion(const QTypeRevision* self) {
    return static_cast<unsigned char>(self->minorVersion());
}

bool QTypeRevision_IsValid(const QTypeRevision* self) {
    return self->isValid();
}

void QTypeRevision_Delete(QTypeRevision* self) {
    delete self;
}
