#include <QByteArray>
#include <QByteArrayView>
#include <qbytearrayview.h>
#include "libqbytearrayview.h"
#include "libqbytearrayview.hxx"

QByteArrayView* QByteArrayView_new(const QByteArrayView* other) {
    return new QByteArrayView(*other);
}

QByteArrayView* QByteArrayView_new2(QByteArrayView* other) {
    return new QByteArrayView(std::move(*other));
}

QByteArrayView* QByteArrayView_new3() {
    return new QByteArrayView();
}

QByteArrayView* QByteArrayView_new4(const QByteArrayView* param1) {
    return new QByteArrayView(*param1);
}

void QByteArrayView_CopyAssign(QByteArrayView* self, QByteArrayView* other) {
    *self = *other;
}

void QByteArrayView_MoveAssign(QByteArrayView* self, QByteArrayView* other) {
    *self = std::move(*other);
}

libqt_string QByteArrayView_ToByteArray(const QByteArrayView* self) {
    QByteArray _qb = self->toByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

ptrdiff_t QByteArrayView_Size(const QByteArrayView* self) {
    return static_cast<ptrdiff_t>(self->size());
}

const char* QByteArrayView_Data(const QByteArrayView* self) {
    QByteArrayView::const_pointer _ret = self->data();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_ConstData(const QByteArrayView* self) {
    QByteArrayView::const_pointer _ret = self->constData();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

char QByteArrayView_OperatorSubscript(const QByteArrayView* self, ptrdiff_t n) {
    return self->operator[]((qsizetype)(n));
}

char QByteArrayView_At(const QByteArrayView* self, ptrdiff_t n) {
    return self->at((qsizetype)(n));
}

QByteArrayView* QByteArrayView_First(const QByteArrayView* self, ptrdiff_t n) {
    return new QByteArrayView(self->first((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Last(const QByteArrayView* self, ptrdiff_t n) {
    return new QByteArrayView(self->last((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Sliced(const QByteArrayView* self, ptrdiff_t pos) {
    return new QByteArrayView(self->sliced((qsizetype)(pos)));
}

QByteArrayView* QByteArrayView_Sliced2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
    return new QByteArrayView(self->sliced((qsizetype)(pos), (qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Chopped(const QByteArrayView* self, ptrdiff_t lenVal) {
    return new QByteArrayView(self->chopped((qsizetype)(lenVal)));
}

void QByteArrayView_Truncate(QByteArrayView* self, ptrdiff_t n) {
    self->truncate((qsizetype)(n));
}

void QByteArrayView_Chop(QByteArrayView* self, ptrdiff_t n) {
    self->chop((qsizetype)(n));
}

QByteArrayView* QByteArrayView_Trimmed(const QByteArrayView* self) {
    return new QByteArrayView(self->trimmed());
}

int16_t QByteArrayView_ToShort(const QByteArrayView* self) {
    return self->toShort();
}

uint16_t QByteArrayView_ToUShort(const QByteArrayView* self) {
    return static_cast<uint16_t>(self->toUShort());
}

int QByteArrayView_ToInt(const QByteArrayView* self) {
    return self->toInt();
}

unsigned int QByteArrayView_ToUInt(const QByteArrayView* self) {
    return static_cast<unsigned int>(self->toUInt());
}

long QByteArrayView_ToLong(const QByteArrayView* self) {
    return self->toLong();
}

unsigned long QByteArrayView_ToULong(const QByteArrayView* self) {
    return static_cast<unsigned long>(self->toULong());
}

long long QByteArrayView_ToLongLong(const QByteArrayView* self) {
    return static_cast<long long>(self->toLongLong());
}

unsigned long long QByteArrayView_ToULongLong(const QByteArrayView* self) {
    return static_cast<unsigned long long>(self->toULongLong());
}

float QByteArrayView_ToFloat(const QByteArrayView* self) {
    return self->toFloat();
}

double QByteArrayView_ToDouble(const QByteArrayView* self) {
    return self->toDouble();
}

bool QByteArrayView_StartsWith(const QByteArrayView* self, QByteArrayView* other) {
    return self->startsWith(*other);
}

bool QByteArrayView_StartsWithWithChar(const QByteArrayView* self, char c) {
    return self->startsWith(static_cast<char>(c));
}

bool QByteArrayView_EndsWith(const QByteArrayView* self, QByteArrayView* other) {
    return self->endsWith(*other);
}

bool QByteArrayView_EndsWithWithChar(const QByteArrayView* self, char c) {
    return self->endsWith(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_IndexOf(const QByteArrayView* self, QByteArrayView* a) {
    return static_cast<ptrdiff_t>(self->indexOf(*a));
}

ptrdiff_t QByteArrayView_IndexOfWithCh(const QByteArrayView* self, char ch) {
    return static_cast<ptrdiff_t>(self->indexOf(static_cast<char>(ch)));
}

bool QByteArrayView_Contains(const QByteArrayView* self, QByteArrayView* a) {
    return self->contains(*a);
}

bool QByteArrayView_ContainsWithChar(const QByteArrayView* self, char c) {
    return self->contains(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_LastIndexOf(const QByteArrayView* self, QByteArrayView* a) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*a));
}

ptrdiff_t QByteArrayView_LastIndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(*a, (qsizetype)(from)));
}

ptrdiff_t QByteArrayView_LastIndexOfWithCh(const QByteArrayView* self, char ch) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(static_cast<char>(ch)));
}

ptrdiff_t QByteArrayView_Count(const QByteArrayView* self, QByteArrayView* a) {
    return static_cast<ptrdiff_t>(self->count(*a));
}

ptrdiff_t QByteArrayView_CountWithCh(const QByteArrayView* self, char ch) {
    return static_cast<ptrdiff_t>(self->count(static_cast<char>(ch)));
}

int QByteArrayView_Compare(const QByteArrayView* self, QByteArrayView* a) {
    return self->compare(*a);
}

bool QByteArrayView_IsValidUtf8(const QByteArrayView* self) {
    return self->isValidUtf8();
}

const char* QByteArrayView_Begin(const QByteArrayView* self) {
    QByteArrayView::const_iterator _ret = self->begin();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_End(const QByteArrayView* self) {
    QByteArrayView::const_iterator _ret = self->end();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_Cbegin(const QByteArrayView* self) {
    QByteArrayView::const_iterator _ret = self->cbegin();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_Cend(const QByteArrayView* self) {
    QByteArrayView::const_iterator _ret = self->cend();
    return const_cast<const char*>(static_cast<const char*>(_ret));
}

bool QByteArrayView_Empty(const QByteArrayView* self) {
    return self->empty();
}

char QByteArrayView_Front(const QByteArrayView* self) {
    return self->front();
}

char QByteArrayView_Back(const QByteArrayView* self) {
    return self->back();
}

bool QByteArrayView_IsNull(const QByteArrayView* self) {
    return self->isNull();
}

bool QByteArrayView_IsEmpty(const QByteArrayView* self) {
    return self->isEmpty();
}

ptrdiff_t QByteArrayView_Length(const QByteArrayView* self) {
    return static_cast<ptrdiff_t>(self->length());
}

char QByteArrayView_First2(const QByteArrayView* self) {
    return self->first();
}

char QByteArrayView_Last2(const QByteArrayView* self) {
    return self->last();
}

int16_t QByteArrayView_ToShort1(const QByteArrayView* self, bool* ok) {
    return self->toShort(ok);
}

int16_t QByteArrayView_ToShort2(const QByteArrayView* self, bool* ok, int base) {
    return self->toShort(ok, static_cast<int>(base));
}

uint16_t QByteArrayView_ToUShort1(const QByteArrayView* self, bool* ok) {
    return static_cast<uint16_t>(self->toUShort(ok));
}

uint16_t QByteArrayView_ToUShort2(const QByteArrayView* self, bool* ok, int base) {
    return static_cast<uint16_t>(self->toUShort(ok, static_cast<int>(base)));
}

int QByteArrayView_ToInt1(const QByteArrayView* self, bool* ok) {
    return self->toInt(ok);
}

int QByteArrayView_ToInt2(const QByteArrayView* self, bool* ok, int base) {
    return self->toInt(ok, static_cast<int>(base));
}

unsigned int QByteArrayView_ToUInt1(const QByteArrayView* self, bool* ok) {
    return static_cast<unsigned int>(self->toUInt(ok));
}

unsigned int QByteArrayView_ToUInt2(const QByteArrayView* self, bool* ok, int base) {
    return static_cast<unsigned int>(self->toUInt(ok, static_cast<int>(base)));
}

long QByteArrayView_ToLong1(const QByteArrayView* self, bool* ok) {
    return self->toLong(ok);
}

long QByteArrayView_ToLong2(const QByteArrayView* self, bool* ok, int base) {
    return self->toLong(ok, static_cast<int>(base));
}

unsigned long QByteArrayView_ToULong1(const QByteArrayView* self, bool* ok) {
    return static_cast<unsigned long>(self->toULong(ok));
}

unsigned long QByteArrayView_ToULong2(const QByteArrayView* self, bool* ok, int base) {
    return static_cast<unsigned long>(self->toULong(ok, static_cast<int>(base)));
}

long long QByteArrayView_ToLongLong1(const QByteArrayView* self, bool* ok) {
    return static_cast<long long>(self->toLongLong(ok));
}

long long QByteArrayView_ToLongLong2(const QByteArrayView* self, bool* ok, int base) {
    return static_cast<long long>(self->toLongLong(ok, static_cast<int>(base)));
}

unsigned long long QByteArrayView_ToULongLong1(const QByteArrayView* self, bool* ok) {
    return static_cast<unsigned long long>(self->toULongLong(ok));
}

unsigned long long QByteArrayView_ToULongLong2(const QByteArrayView* self, bool* ok, int base) {
    return static_cast<unsigned long long>(self->toULongLong(ok, static_cast<int>(base)));
}

float QByteArrayView_ToFloat1(const QByteArrayView* self, bool* ok) {
    return self->toFloat(ok);
}

double QByteArrayView_ToDouble1(const QByteArrayView* self, bool* ok) {
    return self->toDouble(ok);
}

ptrdiff_t QByteArrayView_IndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexOf(*a, (qsizetype)(from)));
}

ptrdiff_t QByteArrayView_IndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->indexOf(static_cast<char>(ch), (qsizetype)(from)));
}

ptrdiff_t QByteArrayView_LastIndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
    return static_cast<ptrdiff_t>(self->lastIndexOf(static_cast<char>(ch), (qsizetype)(from)));
}

int QByteArrayView_Compare2(const QByteArrayView* self, QByteArrayView* a, int cs) {
    return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

void QByteArrayView_Delete(QByteArrayView* self) {
    delete self;
}
