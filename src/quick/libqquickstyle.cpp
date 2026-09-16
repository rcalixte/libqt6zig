#include <QQuickStyle>
#include <QString>
#include <qquickstyle.h>
#include "libqquickstyle.h"
#include "libqquickstyle.hxx"

QQuickStyle* QQuickStyle_new(const QQuickStyle* other) {
    return new QQuickStyle(*other);
}

QQuickStyle* QQuickStyle_new2(QQuickStyle* other) {
    return new QQuickStyle(std::move(*other));
}

void QQuickStyle_CopyAssign(QQuickStyle* self, QQuickStyle* other) {
    *self = *other;
}

void QQuickStyle_MoveAssign(QQuickStyle* self, QQuickStyle* other) {
    *self = std::move(*other);
}

libqt_string QQuickStyle_Name() {
    auto _ret = QQuickStyle::name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickStyle_SetStyle(const libqt_string style) {
    QString style_QString = QString::fromUtf8(style.data, style.len);
    QQuickStyle::setStyle(style_QString);
}

void QQuickStyle_SetFallbackStyle(const libqt_string style) {
    QString style_QString = QString::fromUtf8(style.data, style.len);
    QQuickStyle::setFallbackStyle(style_QString);
}

void QQuickStyle_Delete(QQuickStyle* self) {
    delete self;
}
