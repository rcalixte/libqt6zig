#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineSettings>
#include <qwebenginesettings.h>
#include "libqwebenginesettings.h"
#include "libqwebenginesettings.hxx"

void QWebEngineSettings_SetFontFamily(QWebEngineSettings* self, int which, const libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    self->setFontFamily(static_cast<QWebEngineSettings::FontFamily>(which), family_QString);
}

libqt_string QWebEngineSettings_FontFamily(const QWebEngineSettings* self, int which) {
    QString _ret = self->fontFamily(static_cast<QWebEngineSettings::FontFamily>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineSettings_ResetFontFamily(QWebEngineSettings* self, int which) {
    self->resetFontFamily(static_cast<QWebEngineSettings::FontFamily>(which));
}

void QWebEngineSettings_SetFontSize(QWebEngineSettings* self, int typeVal, int size) {
    self->setFontSize(static_cast<QWebEngineSettings::FontSize>(typeVal), static_cast<int>(size));
}

int QWebEngineSettings_FontSize(const QWebEngineSettings* self, int typeVal) {
    return self->fontSize(static_cast<QWebEngineSettings::FontSize>(typeVal));
}

void QWebEngineSettings_ResetFontSize(QWebEngineSettings* self, int typeVal) {
    self->resetFontSize(static_cast<QWebEngineSettings::FontSize>(typeVal));
}

void QWebEngineSettings_SetAttribute(QWebEngineSettings* self, int attr, bool on) {
    self->setAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr), on);
}

bool QWebEngineSettings_TestAttribute(const QWebEngineSettings* self, int attr) {
    return self->testAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr));
}

void QWebEngineSettings_ResetAttribute(QWebEngineSettings* self, int attr) {
    self->resetAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr));
}

void QWebEngineSettings_SetDefaultTextEncoding(QWebEngineSettings* self, const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    self->setDefaultTextEncoding(encoding_QString);
}

libqt_string QWebEngineSettings_DefaultTextEncoding(const QWebEngineSettings* self) {
    QString _ret = self->defaultTextEncoding();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWebEngineSettings_UnknownUrlSchemePolicy(const QWebEngineSettings* self) {
    return static_cast<int>(self->unknownUrlSchemePolicy());
}

void QWebEngineSettings_SetUnknownUrlSchemePolicy(QWebEngineSettings* self, int policy) {
    self->setUnknownUrlSchemePolicy(static_cast<QWebEngineSettings::UnknownUrlSchemePolicy>(policy));
}

void QWebEngineSettings_ResetUnknownUrlSchemePolicy(QWebEngineSettings* self) {
    self->resetUnknownUrlSchemePolicy();
}

void QWebEngineSettings_Delete(QWebEngineSettings* self) {
    delete self;
}
