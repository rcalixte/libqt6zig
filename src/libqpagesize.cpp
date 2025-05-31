#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpagesize.h>
#include "libqpagesize.h"
#include "libqpagesize.hxx"

QPageSize* QPageSize_new() {
    return new QPageSize();
}

QPageSize* QPageSize_new2(int pageSizeId) {
    return new QPageSize(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QPageSize* QPageSize_new3(const QSize* pointSize) {
    return new QPageSize(*pointSize);
}

QPageSize* QPageSize_new4(const QSizeF* size, int units) {
    return new QPageSize(*size, static_cast<QPageSize::Unit>(units));
}

QPageSize* QPageSize_new5(const QPageSize* other) {
    return new QPageSize(*other);
}

QPageSize* QPageSize_new6(const QSize* pointSize, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPageSize(*pointSize, name_QString);
}

QPageSize* QPageSize_new7(const QSize* pointSize, const libqt_string name, int matchPolicy) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPageSize(*pointSize, name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

QPageSize* QPageSize_new8(const QSizeF* size, int units, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString);
}

QPageSize* QPageSize_new9(const QSizeF* size, int units, const libqt_string name, int matchPolicy) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void QPageSize_OperatorAssign(QPageSize* self, const QPageSize* other) {
    self->operator=(*other);
}

void QPageSize_Swap(QPageSize* self, QPageSize* other) {
    self->swap(*other);
}

bool QPageSize_IsEquivalentTo(const QPageSize* self, const QPageSize* other) {
    return self->isEquivalentTo(*other);
}

bool QPageSize_IsValid(const QPageSize* self) {
    return self->isValid();
}

libqt_string QPageSize_Key(const QPageSize* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPageSize_Name(const QPageSize* self) {
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

int QPageSize_Id(const QPageSize* self) {
    return static_cast<int>(self->id());
}

int QPageSize_WindowsId(const QPageSize* self) {
    return self->windowsId();
}

QSizeF* QPageSize_DefinitionSize(const QPageSize* self) {
    return new QSizeF(self->definitionSize());
}

int QPageSize_DefinitionUnits(const QPageSize* self) {
    return static_cast<int>(self->definitionUnits());
}

QSizeF* QPageSize_Size(const QPageSize* self, int units) {
    return new QSizeF(self->size(static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_SizePoints(const QPageSize* self) {
    return new QSize(self->sizePoints());
}

QSize* QPageSize_SizePixels(const QPageSize* self, int resolution) {
    return new QSize(self->sizePixels(static_cast<int>(resolution)));
}

QRectF* QPageSize_Rect(const QPageSize* self, int units) {
    return new QRectF(self->rect(static_cast<QPageSize::Unit>(units)));
}

QRect* QPageSize_RectPoints(const QPageSize* self) {
    return new QRect(self->rectPoints());
}

QRect* QPageSize_RectPixels(const QPageSize* self, int resolution) {
    return new QRect(self->rectPixels(static_cast<int>(resolution)));
}

libqt_string QPageSize_KeyWithPageSizeId(int pageSizeId) {
    QString _ret = QPageSize::key(static_cast<QPageSize::PageSizeId>(pageSizeId));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPageSize_NameWithPageSizeId(int pageSizeId) {
    QString _ret = QPageSize::name(static_cast<QPageSize::PageSizeId>(pageSizeId));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QPageSize_IdWithPointSize(const QSize* pointSize) {
    return static_cast<int>(QPageSize::id(*pointSize));
}

int QPageSize_Id2(const QSizeF* size, int units) {
    return static_cast<int>(QPageSize::id(*size, static_cast<QPageSize::Unit>(units)));
}

int QPageSize_IdWithWindowsId(int windowsId) {
    return static_cast<int>(QPageSize::id(static_cast<int>(windowsId)));
}

int QPageSize_WindowsIdWithPageSizeId(int pageSizeId) {
    return QPageSize::windowsId(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QSizeF* QPageSize_DefinitionSizeWithPageSizeId(int pageSizeId) {
    return new QSizeF(QPageSize::definitionSize(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

int QPageSize_DefinitionUnitsWithPageSizeId(int pageSizeId) {
    return static_cast<int>(QPageSize::definitionUnits(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

QSizeF* QPageSize_Size2(int pageSizeId, int units) {
    return new QSizeF(QPageSize::size(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_SizePointsWithPageSizeId(int pageSizeId) {
    return new QSize(QPageSize::sizePoints(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

QSize* QPageSize_SizePixels2(int pageSizeId, int resolution) {
    return new QSize(QPageSize::sizePixels(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<int>(resolution)));
}

int QPageSize_Id22(const QSize* pointSize, int matchPolicy) {
    return static_cast<int>(QPageSize::id(*pointSize, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy)));
}

int QPageSize_Id3(const QSizeF* size, int units, int matchPolicy) {
    return static_cast<int>(QPageSize::id(*size, static_cast<QPageSize::Unit>(units), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy)));
}

void QPageSize_Delete(QPageSize* self) {
    delete self;
}
