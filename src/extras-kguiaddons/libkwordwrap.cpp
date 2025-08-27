#include <KWordWrap>
#include <QFontMetrics>
#include <QPainter>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kwordwrap.h>
#include "libkwordwrap.h"
#include "libkwordwrap.hxx"

KWordWrap* KWordWrap_new(const KWordWrap* other) {
    return new KWordWrap(*other);
}

KWordWrap* KWordWrap_FormatText(QFontMetrics* fm, const QRect* r, int flags, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new KWordWrap(KWordWrap::formatText(*fm, *r, static_cast<int>(flags), str_QString));
}

QRect* KWordWrap_BoundingRect(const KWordWrap* self) {
    return new QRect(self->boundingRect());
}

libqt_string KWordWrap_WrappedString(const KWordWrap* self) {
    QString _ret = self->wrappedString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWordWrap_TruncatedString(const KWordWrap* self) {
    QString _ret = self->truncatedString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KWordWrap_DrawText(const KWordWrap* self, QPainter* painter, int x, int y) {
    self->drawText(painter, static_cast<int>(x), static_cast<int>(y));
}

void KWordWrap_OperatorAssign(KWordWrap* self, const KWordWrap* other) {
    self->operator=(*other);
}

void KWordWrap_DrawFadeoutText(QPainter* p, int x, int y, int maxW, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    KWordWrap::drawFadeoutText(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(maxW), t_QString);
}

void KWordWrap_DrawTruncateText(QPainter* p, int x, int y, int maxW, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    KWordWrap::drawTruncateText(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(maxW), t_QString);
}

KWordWrap* KWordWrap_FormatText5(QFontMetrics* fm, const QRect* r, int flags, const libqt_string str, int lenVal) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new KWordWrap(KWordWrap::formatText(*fm, *r, static_cast<int>(flags), str_QString, static_cast<int>(lenVal)));
}

libqt_string KWordWrap_TruncatedString1(const KWordWrap* self, bool dots) {
    QString _ret = self->truncatedString(dots);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KWordWrap_DrawText4(const KWordWrap* self, QPainter* painter, int x, int y, int flags) {
    self->drawText(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(flags));
}

void KWordWrap_Delete(KWordWrap* self) {
    delete self;
}
