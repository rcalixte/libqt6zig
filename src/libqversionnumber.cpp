#include <QAnyStringView>
#include <QList>
#include <QSpan>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "libqversionnumber.h"
#include "libqversionnumber.hxx"

QVersionNumber* QVersionNumber_new() {
    return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(libqt_list /* of const int */ args) {
    QList<int> args_QSpan;
    args_QSpan.reserve(args.len);
    int* args_arr = static_cast<int*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QSpan.push_back(static_cast<int>(args_arr[i]));
    }
    return new QVersionNumber(args_QSpan);
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVersionNumber* QVersionNumber_FromString(libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(stringVal_QString)));
}

QVersionNumber* QVersionNumber_FromString2(libqt_string stringVal, ptrdiff_t* suffixIndex) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(stringVal_QString), (qsizetype*)(suffixIndex)));
}

void QVersionNumber_Delete(QVersionNumber* self) {
    delete self;
}
