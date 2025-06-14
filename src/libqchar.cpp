#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchar.h>
#include "libqchar.h"
#include "libqchar.hxx"

QLatin1Char* QLatin1Char_new(const QLatin1Char* other) {
    return new QLatin1Char(*other);
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* other) {
    return new QLatin1Char(std::move(*other));
}

QLatin1Char* QLatin1Char_new3(char c) {
    return new QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new4(const QLatin1Char* param1) {
    return new QLatin1Char(*param1);
}

void QLatin1Char_CopyAssign(QLatin1Char* self, QLatin1Char* other) {
    *self = *other;
}

void QLatin1Char_MoveAssign(QLatin1Char* self, QLatin1Char* other) {
    *self = std::move(*other);
}

char QLatin1Char_ToLatin1(const QLatin1Char* self) {
    return self->toLatin1();
}

void QLatin1Char_Delete(QLatin1Char* self) {
    delete self;
}

QChar* QChar_new(const QChar* other) {
    return new QChar(*other);
}

QChar* QChar_new2(QChar* other) {
    return new QChar(std::move(*other));
}

QChar* QChar_new3() {
    return new QChar();
}

QChar* QChar_new4(uint16_t rc) {
    return new QChar(static_cast<ushort>(rc));
}

QChar* QChar_new5(unsigned char c, unsigned char r) {
    return new QChar(static_cast<uchar>(c), static_cast<uchar>(r));
}

QChar* QChar_new6(int16_t rc) {
    return new QChar(static_cast<short>(rc));
}

QChar* QChar_new7(unsigned int rc) {
    return new QChar(static_cast<uint>(rc));
}

QChar* QChar_new8(int rc) {
    return new QChar(static_cast<int>(rc));
}

QChar* QChar_new9(int s) {
    return new QChar(static_cast<QChar::SpecialCharacter>(s));
}

QChar* QChar_new10(QLatin1Char* ch) {
    return new QChar(*ch);
}

QChar* QChar_new11(char c) {
    return new QChar(static_cast<char>(c));
}

QChar* QChar_new12(unsigned char c) {
    return new QChar(static_cast<uchar>(c));
}

QChar* QChar_new13(const QChar* param1) {
    return new QChar(*param1);
}

void QChar_CopyAssign(QChar* self, QChar* other) {
    *self = *other;
}

void QChar_MoveAssign(QChar* self, QChar* other) {
    *self = std::move(*other);
}

int QChar_Category(const QChar* self) {
    return static_cast<int>(self->category());
}

int QChar_Direction(const QChar* self) {
    return static_cast<int>(self->direction());
}

int QChar_JoiningType(const QChar* self) {
    return static_cast<int>(self->joiningType());
}

unsigned char QChar_CombiningClass(const QChar* self) {
    return self->combiningClass();
}

QChar* QChar_MirroredChar(const QChar* self) {
    return new QChar(self->mirroredChar());
}

bool QChar_HasMirrored(const QChar* self) {
    return self->hasMirrored();
}

libqt_string QChar_Decomposition(const QChar* self) {
    QString _ret = self->decomposition();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QChar_DecompositionTag(const QChar* self) {
    return static_cast<int>(self->decompositionTag());
}

int QChar_DigitValue(const QChar* self) {
    return self->digitValue();
}

QChar* QChar_ToLower(const QChar* self) {
    return new QChar(self->toLower());
}

QChar* QChar_ToUpper(const QChar* self) {
    return new QChar(self->toUpper());
}

QChar* QChar_ToTitleCase(const QChar* self) {
    return new QChar(self->toTitleCase());
}

QChar* QChar_ToCaseFolded(const QChar* self) {
    return new QChar(self->toCaseFolded());
}

int QChar_Script(const QChar* self) {
    return static_cast<int>(self->script());
}

int QChar_UnicodeVersion(const QChar* self) {
    return static_cast<int>(self->unicodeVersion());
}

char QChar_ToLatin1(const QChar* self) {
    return self->toLatin1();
}

QChar* QChar_FromLatin1(char c) {
    return new QChar(QChar::fromLatin1(static_cast<char>(c)));
}

bool QChar_IsNull(const QChar* self) {
    return self->isNull();
}

bool QChar_IsPrint(const QChar* self) {
    return self->isPrint();
}

bool QChar_IsSpace(const QChar* self) {
    return self->isSpace();
}

bool QChar_IsMark(const QChar* self) {
    return self->isMark();
}

bool QChar_IsPunct(const QChar* self) {
    return self->isPunct();
}

bool QChar_IsSymbol(const QChar* self) {
    return self->isSymbol();
}

bool QChar_IsLetter(const QChar* self) {
    return self->isLetter();
}

bool QChar_IsNumber(const QChar* self) {
    return self->isNumber();
}

bool QChar_IsLetterOrNumber(const QChar* self) {
    return self->isLetterOrNumber();
}

bool QChar_IsDigit(const QChar* self) {
    return self->isDigit();
}

bool QChar_IsLower(const QChar* self) {
    return self->isLower();
}

bool QChar_IsUpper(const QChar* self) {
    return self->isUpper();
}

bool QChar_IsTitleCase(const QChar* self) {
    return self->isTitleCase();
}

bool QChar_IsNonCharacter(const QChar* self) {
    return self->isNonCharacter();
}

bool QChar_IsHighSurrogate(const QChar* self) {
    return self->isHighSurrogate();
}

bool QChar_IsLowSurrogate(const QChar* self) {
    return self->isLowSurrogate();
}

bool QChar_IsSurrogate(const QChar* self) {
    return self->isSurrogate();
}

unsigned char QChar_Cell(const QChar* self) {
    return static_cast<unsigned char>(self->cell());
}

unsigned char QChar_Row(const QChar* self) {
    return static_cast<unsigned char>(self->row());
}

void QChar_SetCell(QChar* self, unsigned char acell) {
    self->setCell(static_cast<uchar>(acell));
}

void QChar_SetRow(QChar* self, unsigned char arow) {
    self->setRow(static_cast<uchar>(arow));
}

int QChar_CurrentUnicodeVersion() {
    return static_cast<int>(QChar::currentUnicodeVersion());
}

void QChar_Delete(QChar* self) {
    delete self;
}
