#include <QChar>
#include <QFont>
#include <QFontMetrics>
#include <QFontMetricsF>
#include <QPaintDevice>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextOption>
#include <qfontmetrics.h>
#include "libqfontmetrics.h"
#include "libqfontmetrics.hxx"

QFontMetrics* QFontMetrics_new(const QFont* param1) {
    return new QFontMetrics(*param1);
}

QFontMetrics* QFontMetrics_new2(const QFont* font, const QPaintDevice* pd) {
    return new QFontMetrics(*font, pd);
}

QFontMetrics* QFontMetrics_new3(const QFontMetrics* param1) {
    return new QFontMetrics(*param1);
}

void QFontMetrics_OperatorAssign(QFontMetrics* self, const QFontMetrics* param1) {
    self->operator=(*param1);
}

void QFontMetrics_Swap(QFontMetrics* self, QFontMetrics* other) {
    self->swap(*other);
}

int QFontMetrics_Ascent(const QFontMetrics* self) {
    return self->ascent();
}

int QFontMetrics_CapHeight(const QFontMetrics* self) {
    return self->capHeight();
}

int QFontMetrics_Descent(const QFontMetrics* self) {
    return self->descent();
}

int QFontMetrics_Height(const QFontMetrics* self) {
    return self->height();
}

int QFontMetrics_Leading(const QFontMetrics* self) {
    return self->leading();
}

int QFontMetrics_LineSpacing(const QFontMetrics* self) {
    return self->lineSpacing();
}

int QFontMetrics_MinLeftBearing(const QFontMetrics* self) {
    return self->minLeftBearing();
}

int QFontMetrics_MinRightBearing(const QFontMetrics* self) {
    return self->minRightBearing();
}

int QFontMetrics_MaxWidth(const QFontMetrics* self) {
    return self->maxWidth();
}

int QFontMetrics_XHeight(const QFontMetrics* self) {
    return self->xHeight();
}

int QFontMetrics_AverageCharWidth(const QFontMetrics* self) {
    return self->averageCharWidth();
}

bool QFontMetrics_InFont(const QFontMetrics* self, QChar* param1) {
    return self->inFont(*param1);
}

bool QFontMetrics_InFontUcs4(const QFontMetrics* self, unsigned int ucs4) {
    return self->inFontUcs4(static_cast<uint>(ucs4));
}

int QFontMetrics_LeftBearing(const QFontMetrics* self, QChar* param1) {
    return self->leftBearing(*param1);
}

int QFontMetrics_RightBearing(const QFontMetrics* self, QChar* param1) {
    return self->rightBearing(*param1);
}

int QFontMetrics_HorizontalAdvance(const QFontMetrics* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return self->horizontalAdvance(param1_QString);
}

int QFontMetrics_HorizontalAdvance2(const QFontMetrics* self, const libqt_string param1, const QTextOption* textOption) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return self->horizontalAdvance(param1_QString, *textOption);
}

int QFontMetrics_HorizontalAdvanceWithQChar(const QFontMetrics* self, QChar* param1) {
    return self->horizontalAdvance(*param1);
}

QRect* QFontMetrics_BoundingRect(const QFontMetrics* self, QChar* param1) {
    return new QRect(self->boundingRect(*param1));
}

QRect* QFontMetrics_BoundingRectWithText(const QFontMetrics* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(text_QString));
}

QRect* QFontMetrics_BoundingRect2(const QFontMetrics* self, const libqt_string text, const QTextOption* textOption) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(text_QString, *textOption));
}

QRect* QFontMetrics_BoundingRect3(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString));
}

QRect* QFontMetrics_BoundingRect4(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString));
}

QSize* QFontMetrics_Size(const QFontMetrics* self, int flags, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSize(self->size(static_cast<int>(flags), str_QString));
}

QRect* QFontMetrics_TightBoundingRect(const QFontMetrics* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->tightBoundingRect(text_QString));
}

QRect* QFontMetrics_TightBoundingRect2(const QFontMetrics* self, const libqt_string text, const QTextOption* textOption) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->tightBoundingRect(text_QString, *textOption));
}

libqt_string QFontMetrics_ElidedText(const QFontMetrics* self, const libqt_string text, int mode, int width) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QFontMetrics_UnderlinePos(const QFontMetrics* self) {
    return self->underlinePos();
}

int QFontMetrics_OverlinePos(const QFontMetrics* self) {
    return self->overlinePos();
}

int QFontMetrics_StrikeOutPos(const QFontMetrics* self) {
    return self->strikeOutPos();
}

int QFontMetrics_LineWidth(const QFontMetrics* self) {
    return self->lineWidth();
}

double QFontMetrics_FontDpi(const QFontMetrics* self) {
    return static_cast<double>(self->fontDpi());
}

bool QFontMetrics_OperatorEqual(const QFontMetrics* self, const QFontMetrics* other) {
    return (*self == *other);
}

bool QFontMetrics_OperatorNotEqual(const QFontMetrics* self, const QFontMetrics* other) {
    return (*self != *other);
}

int QFontMetrics_HorizontalAdvance22(const QFontMetrics* self, const libqt_string param1, int lenVal) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return self->horizontalAdvance(param1_QString, static_cast<int>(lenVal));
}

QRect* QFontMetrics_BoundingRect42(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text, int tabstops) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_BoundingRect5(const QFontMetrics* self, const QRect* r, int flags, const libqt_string text, int tabstops, int* tabarray) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QRect* QFontMetrics_BoundingRect7(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text, int tabstops) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_BoundingRect8(const QFontMetrics* self, int x, int y, int w, int h, int flags, const libqt_string text, int tabstops, int* tabarray) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QSize* QFontMetrics_Size3(const QFontMetrics* self, int flags, const libqt_string str, int tabstops) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSize* QFontMetrics_Size4(const QFontMetrics* self, int flags, const libqt_string str, int tabstops, int* tabarray) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

libqt_string QFontMetrics_ElidedText4(const QFontMetrics* self, const libqt_string text, int mode, int width, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width), static_cast<int>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontMetrics_Delete(QFontMetrics* self) {
    delete self;
}

QFontMetricsF* QFontMetricsF_new(const QFont* font) {
    return new QFontMetricsF(*font);
}

QFontMetricsF* QFontMetricsF_new2(const QFont* font, const QPaintDevice* pd) {
    return new QFontMetricsF(*font, pd);
}

QFontMetricsF* QFontMetricsF_new3(const QFontMetrics* param1) {
    return new QFontMetricsF(*param1);
}

QFontMetricsF* QFontMetricsF_new4(const QFontMetricsF* param1) {
    return new QFontMetricsF(*param1);
}

void QFontMetricsF_OperatorAssign(QFontMetricsF* self, const QFontMetricsF* param1) {
    self->operator=(*param1);
}

void QFontMetricsF_OperatorAssignWithQFontMetrics(QFontMetricsF* self, const QFontMetrics* param1) {
    self->operator=(*param1);
}

void QFontMetricsF_Swap(QFontMetricsF* self, QFontMetricsF* other) {
    self->swap(*other);
}

double QFontMetricsF_Ascent(const QFontMetricsF* self) {
    return static_cast<double>(self->ascent());
}

double QFontMetricsF_CapHeight(const QFontMetricsF* self) {
    return static_cast<double>(self->capHeight());
}

double QFontMetricsF_Descent(const QFontMetricsF* self) {
    return static_cast<double>(self->descent());
}

double QFontMetricsF_Height(const QFontMetricsF* self) {
    return static_cast<double>(self->height());
}

double QFontMetricsF_Leading(const QFontMetricsF* self) {
    return static_cast<double>(self->leading());
}

double QFontMetricsF_LineSpacing(const QFontMetricsF* self) {
    return static_cast<double>(self->lineSpacing());
}

double QFontMetricsF_MinLeftBearing(const QFontMetricsF* self) {
    return static_cast<double>(self->minLeftBearing());
}

double QFontMetricsF_MinRightBearing(const QFontMetricsF* self) {
    return static_cast<double>(self->minRightBearing());
}

double QFontMetricsF_MaxWidth(const QFontMetricsF* self) {
    return static_cast<double>(self->maxWidth());
}

double QFontMetricsF_XHeight(const QFontMetricsF* self) {
    return static_cast<double>(self->xHeight());
}

double QFontMetricsF_AverageCharWidth(const QFontMetricsF* self) {
    return static_cast<double>(self->averageCharWidth());
}

bool QFontMetricsF_InFont(const QFontMetricsF* self, QChar* param1) {
    return self->inFont(*param1);
}

bool QFontMetricsF_InFontUcs4(const QFontMetricsF* self, unsigned int ucs4) {
    return self->inFontUcs4(static_cast<uint>(ucs4));
}

double QFontMetricsF_LeftBearing(const QFontMetricsF* self, QChar* param1) {
    return static_cast<double>(self->leftBearing(*param1));
}

double QFontMetricsF_RightBearing(const QFontMetricsF* self, QChar* param1) {
    return static_cast<double>(self->rightBearing(*param1));
}

double QFontMetricsF_HorizontalAdvance(const QFontMetricsF* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return static_cast<double>(self->horizontalAdvance(stringVal_QString));
}

double QFontMetricsF_HorizontalAdvanceWithQChar(const QFontMetricsF* self, QChar* param1) {
    return static_cast<double>(self->horizontalAdvance(*param1));
}

double QFontMetricsF_HorizontalAdvance2(const QFontMetricsF* self, const libqt_string stringVal, const QTextOption* textOption) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return static_cast<double>(self->horizontalAdvance(stringVal_QString, *textOption));
}

QRectF* QFontMetricsF_BoundingRect(const QFontMetricsF* self, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QRectF(self->boundingRect(stringVal_QString));
}

QRectF* QFontMetricsF_BoundingRect2(const QFontMetricsF* self, const libqt_string text, const QTextOption* textOption) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRectF(self->boundingRect(text_QString, *textOption));
}

QRectF* QFontMetricsF_BoundingRectWithQChar(const QFontMetricsF* self, QChar* param1) {
    return new QRectF(self->boundingRect(*param1));
}

QRectF* QFontMetricsF_BoundingRect3(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QRectF(self->boundingRect(*r, static_cast<int>(flags), stringVal_QString));
}

QSizeF* QFontMetricsF_Size(const QFontMetricsF* self, int flags, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSizeF(self->size(static_cast<int>(flags), str_QString));
}

QRectF* QFontMetricsF_TightBoundingRect(const QFontMetricsF* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRectF(self->tightBoundingRect(text_QString));
}

QRectF* QFontMetricsF_TightBoundingRect2(const QFontMetricsF* self, const libqt_string text, const QTextOption* textOption) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QRectF(self->tightBoundingRect(text_QString, *textOption));
}

libqt_string QFontMetricsF_ElidedText(const QFontMetricsF* self, const libqt_string text, int mode, double width) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QFontMetricsF_UnderlinePos(const QFontMetricsF* self) {
    return static_cast<double>(self->underlinePos());
}

double QFontMetricsF_OverlinePos(const QFontMetricsF* self) {
    return static_cast<double>(self->overlinePos());
}

double QFontMetricsF_StrikeOutPos(const QFontMetricsF* self) {
    return static_cast<double>(self->strikeOutPos());
}

double QFontMetricsF_LineWidth(const QFontMetricsF* self) {
    return static_cast<double>(self->lineWidth());
}

double QFontMetricsF_FontDpi(const QFontMetricsF* self) {
    return static_cast<double>(self->fontDpi());
}

bool QFontMetricsF_OperatorEqual(const QFontMetricsF* self, const QFontMetricsF* other) {
    return (*self == *other);
}

bool QFontMetricsF_OperatorNotEqual(const QFontMetricsF* self, const QFontMetricsF* other) {
    return (*self != *other);
}

double QFontMetricsF_HorizontalAdvance22(const QFontMetricsF* self, const libqt_string stringVal, int length) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return static_cast<double>(self->horizontalAdvance(stringVal_QString, static_cast<int>(length)));
}

QRectF* QFontMetricsF_BoundingRect4(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal, int tabstops) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QRectF(self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops)));
}

QRectF* QFontMetricsF_BoundingRect5(const QFontMetricsF* self, const QRectF* r, int flags, const libqt_string stringVal, int tabstops, int* tabarray) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new QRectF(self->boundingRect(*r, static_cast<int>(flags), stringVal_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

QSizeF* QFontMetricsF_Size3(const QFontMetricsF* self, int flags, const libqt_string str, int tabstops) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSizeF* QFontMetricsF_Size4(const QFontMetricsF* self, int flags, const libqt_string str, int tabstops, int* tabarray) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), static_cast<int*>(tabarray)));
}

libqt_string QFontMetricsF_ElidedText4(const QFontMetricsF* self, const libqt_string text, int mode, double width, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width), static_cast<int>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontMetricsF_Delete(QFontMetricsF* self) {
    delete self;
}
