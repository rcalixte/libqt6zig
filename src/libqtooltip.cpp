#include <QFont>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolTip>
#include <QWidget>
#include <qtooltip.h>
#include "libqtooltip.h"
#include "libqtooltip.hxx"

QToolTip* QToolTip_new(const QToolTip* other) {
    return new QToolTip(*other);
}

QToolTip* QToolTip_new2(QToolTip* other) {
    return new QToolTip(std::move(*other));
}

void QToolTip_CopyAssign(QToolTip* self, QToolTip* other) {
    *self = *other;
}

void QToolTip_MoveAssign(QToolTip* self, QToolTip* other) {
    *self = std::move(*other);
}

void QToolTip_ShowText(const QPoint* pos, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QToolTip::showText(*pos, text_QString);
}

void QToolTip_HideText() {
    QToolTip::hideText();
}

bool QToolTip_IsVisible() {
    return QToolTip::isVisible();
}

libqt_string QToolTip_Text() {
    QString _ret = QToolTip::text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPalette* QToolTip_Palette() {
    return new QPalette(QToolTip::palette());
}

void QToolTip_SetPalette(const QPalette* palette) {
    QToolTip::setPalette(*palette);
}

QFont* QToolTip_Font() {
    return new QFont(QToolTip::font());
}

void QToolTip_SetFont(const QFont* font) {
    QToolTip::setFont(*font);
}

void QToolTip_ShowText3(const QPoint* pos, const libqt_string text, QWidget* w) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QToolTip::showText(*pos, text_QString, w);
}

void QToolTip_ShowText4(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QToolTip::showText(*pos, text_QString, w, *rect);
}

void QToolTip_ShowText5(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect, int msecShowTime) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QToolTip::showText(*pos, text_QString, w, *rect, static_cast<int>(msecShowTime));
}

void QToolTip_Delete(QToolTip* self) {
    delete self;
}
