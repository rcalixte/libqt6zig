#include <QByteArray>
#include <QChar>
#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qstringview.h>
#include "libqstringview.h"
#include "libqstringview.hxx"

QStringView* QStringView_new() {
    return new QStringView();
}

void QStringView_CopyAssign(QStringView* self, QStringView* other) {
    *self = *other;
}

void QStringView_MoveAssign(QStringView* self, QStringView* other) {
    *self = std::move(*other);
}

libqt_string QStringView_ToString(const QStringView* self) {
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

ptrdiff_t QStringView_Size(const QStringView* self) {
    return static_cast<ptrdiff_t>(self->size());
}

QChar* QStringView_Data(const QStringView* self) {
    QStringView::const_pointer _ret = self->data();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_ConstData(const QStringView* self) {
    QStringView::const_pointer _ret = self->constData();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_OperatorSubscript(const QStringView* self, ptrdiff_t n) {
    return new QChar(self->operator[]((qsizetype)(n)));
}

libqt_string QStringView_ToLatin1(const QStringView* self) {
    QByteArray _qb = self->toLatin1();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStringView_ToUtf8(const QStringView* self) {
    QByteArray _qb = self->toUtf8();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStringView_ToLocal8Bit(const QStringView* self) {
    QByteArray _qb = self->toLocal8Bit();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of unsigned int */ QStringView_ToUcs4(const QStringView* self) {
    QList<unsigned int> _ret = self->toUcs4();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QChar* QStringView_At(const QStringView* self, ptrdiff_t n) {
    return new QChar(self->at((qsizetype)(n)));
}

void QStringView_Truncate(QStringView* self, ptrdiff_t n) {
    self->truncate((qsizetype)(n));
}

void QStringView_Chop(QStringView* self, ptrdiff_t n) {
    self->chop((qsizetype)(n));
}

int QStringView_Compare4(const QStringView* self, QChar* c) {
    return self->compare(*c);
}

int QStringView_Compare5(const QStringView* self, QChar* c, int cs) {
    return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWith3(const QStringView* self, QChar* c) {
    return self->startsWith(*c);
}

bool QStringView_StartsWith4(const QStringView* self, QChar* c, int cs) {
    return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWith3(const QStringView* self, QChar* c) {
    return self->endsWith(*c);
}

bool QStringView_EndsWith4(const QStringView* self, QChar* c, int cs) {
    return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf(const QStringView* self, QChar* c) {
    return static_cast<ptrdiff_t>(self->indexOf(*c));
}

bool QStringView_Contains(const QStringView* self, QChar* c) {
    return self->contains(*c);
}

ptrdiff_t QStringView_Count(const QStringView* self, QChar* c) {
    return static_cast<ptrdiff_t>(self->count(*c));
}

ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*c));
}

ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*c, (qsizetype)(from)));
}

ptrdiff_t QStringView_IndexOf4(const QStringView* self, const QRegularExpression* re) {
    return static_cast<ptrdiff_t>(self->indexOf(*re));
}

ptrdiff_t QStringView_LastIndexOf7(const QStringView* self, const QRegularExpression* re, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*re, (qsizetype)(from)));
}

bool QStringView_Contains4(const QStringView* self, const QRegularExpression* re) {
    return self->contains(*re);
}

ptrdiff_t QStringView_Count4(const QStringView* self, const QRegularExpression* re) {
    return static_cast<ptrdiff_t>(self->count(*re));
}

bool QStringView_IsRightToLeft(const QStringView* self) {
    return self->isRightToLeft();
}

bool QStringView_IsValidUtf16(const QStringView* self) {
    return self->isValidUtf16();
}

bool QStringView_IsUpper(const QStringView* self) {
    return self->isUpper();
}

bool QStringView_IsLower(const QStringView* self) {
    return self->isLower();
}

int16_t QStringView_ToShort(const QStringView* self) {
    return self->toShort();
}

uint16_t QStringView_ToUShort(const QStringView* self) {
    return static_cast<uint16_t>(self->toUShort());
}

int QStringView_ToInt(const QStringView* self) {
    return self->toInt();
}

unsigned int QStringView_ToUInt(const QStringView* self) {
    return static_cast<unsigned int>(self->toUInt());
}

long QStringView_ToLong(const QStringView* self) {
    return self->toLong();
}

unsigned long QStringView_ToULong(const QStringView* self) {
    return static_cast<unsigned long>(self->toULong());
}

long long QStringView_ToLongLong(const QStringView* self) {
    return static_cast<long long>(self->toLongLong());
}

unsigned long long QStringView_ToULongLong(const QStringView* self) {
    return static_cast<unsigned long long>(self->toULongLong());
}

float QStringView_ToFloat(const QStringView* self) {
    return self->toFloat();
}

double QStringView_ToDouble(const QStringView* self) {
    return self->toDouble();
}

QChar* QStringView_Begin(const QStringView* self) {
    QStringView::const_iterator _ret = self->begin();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_End(const QStringView* self) {
    QStringView::const_iterator _ret = self->end();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_Cbegin(const QStringView* self) {
    QStringView::const_iterator _ret = self->cbegin();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_Cend(const QStringView* self) {
    QStringView::const_iterator _ret = self->cend();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

bool QStringView_Empty(const QStringView* self) {
    return self->empty();
}

QChar* QStringView_Front(const QStringView* self) {
    return new QChar(self->front());
}

QChar* QStringView_Back(const QStringView* self) {
    return new QChar(self->back());
}

ptrdiff_t QStringView_MaxSize(const QStringView* self) {
    return static_cast<ptrdiff_t>(self->max_size());
}

QChar* QStringView_ConstBegin(const QStringView* self) {
    QStringView::const_iterator _ret = self->constBegin();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_ConstEnd(const QStringView* self) {
    QStringView::const_iterator _ret = self->constEnd();
    return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

bool QStringView_IsNull(const QStringView* self) {
    return self->isNull();
}

bool QStringView_IsEmpty(const QStringView* self) {
    return self->isEmpty();
}

ptrdiff_t QStringView_Length(const QStringView* self) {
    return static_cast<ptrdiff_t>(self->length());
}

QChar* QStringView_First2(const QStringView* self) {
    return new QChar(self->first());
}

QChar* QStringView_Last2(const QStringView* self) {
    return new QChar(self->last());
}

ptrdiff_t QStringView_MaxSize2() {
    return static_cast<ptrdiff_t>(QStringView::maxSize());
}

ptrdiff_t QStringView_IndexOf22(const QStringView* self, QChar* c, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexOf(*c, (qsizetype)(from)));
}

ptrdiff_t QStringView_IndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
    return static_cast<ptrdiff_t>(self->indexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs)));
}

bool QStringView_Contains22(const QStringView* self, QChar* c, int cs) {
    return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_Count22(const QStringView* self, QChar* c, int cs) {
    return static_cast<ptrdiff_t>(self->count(*c, static_cast<Qt::CaseSensitivity>(cs)));
}

ptrdiff_t QStringView_LastIndexOf22(const QStringView* self, QChar* c, int cs) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs)));
}

ptrdiff_t QStringView_LastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs)));
}

ptrdiff_t QStringView_IndexOf25(const QStringView* self, const QRegularExpression* re, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexOf(*re, (qsizetype)(from)));
}

ptrdiff_t QStringView_IndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
    return static_cast<ptrdiff_t>(self->indexOf(*re, (qsizetype)(from), rmatch));
}

ptrdiff_t QStringView_LastIndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*re, (qsizetype)(from), rmatch));
}

bool QStringView_Contains25(const QStringView* self, const QRegularExpression* re, QRegularExpressionMatch* rmatch) {
    return self->contains(*re, rmatch);
}

int16_t QStringView_ToShort1(const QStringView* self, bool* ok) {
    return self->toShort(ok);
}

int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base) {
    return self->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok) {
    return static_cast<uint16_t>(self->toUShort(ok));
}

uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base) {
    return static_cast<uint16_t>(self->toUShort(ok, static_cast<int>(base)));
}

int QStringView_ToInt1(const QStringView* self, bool* ok) {
    return self->toInt(ok);
}

int QStringView_ToInt2(const QStringView* self, bool* ok, int base) {
    return self->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok) {
    return static_cast<unsigned int>(self->toUInt(ok));
}

unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base) {
    return static_cast<unsigned int>(self->toUInt(ok, static_cast<int>(base)));
}

long QStringView_ToLong1(const QStringView* self, bool* ok) {
    return self->toLong(ok);
}

long QStringView_ToLong2(const QStringView* self, bool* ok, int base) {
    return self->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_ToULong1(const QStringView* self, bool* ok) {
    return static_cast<unsigned long>(self->toULong(ok));
}

unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base) {
    return static_cast<unsigned long>(self->toULong(ok, static_cast<int>(base)));
}

long long QStringView_ToLongLong1(const QStringView* self, bool* ok) {
    return static_cast<long long>(self->toLongLong(ok));
}

long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base) {
    return static_cast<long long>(self->toLongLong(ok, static_cast<int>(base)));
}

unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok) {
    return static_cast<unsigned long long>(self->toULongLong(ok));
}

unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base) {
    return static_cast<unsigned long long>(self->toULongLong(ok, static_cast<int>(base)));
}

float QStringView_ToFloat1(const QStringView* self, bool* ok) {
    return self->toFloat(ok);
}

double QStringView_ToDouble1(const QStringView* self, bool* ok) {
    return self->toDouble(ok);
}

void QStringView_Delete(QStringView* self) {
    delete self;
}
