#include <KConfigSkeleton>
#include <KCoreConfigSkeleton>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__TextAutoCorrectionSettings
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__TextAutoCorrectionSettingsBase
#include <textautocorrectionsettings.h>
#include "libtextautocorrectionsettings.h"
#include "libtextautocorrectionsettings.hxx"

QMetaObject* TextAutoCorrectionCore__TextAutoCorrectionSettings_MetaObject(const TextAutoCorrectionCore__TextAutoCorrectionSettings* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacast(TextAutoCorrectionCore__TextAutoCorrectionSettings* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacall(TextAutoCorrectionCore__TextAutoCorrectionSettings* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextAutoCorrectionCore__TextAutoCorrectionSettings_Tr(const char* s) {
    auto _ret = TextAutoCorrectionCore::TextAutoCorrectionSettings::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextAutoCorrectionCore__TextAutoCorrectionSettings* TextAutoCorrectionCore__TextAutoCorrectionSettings_Self() {
    return TextAutoCorrectionCore::TextAutoCorrectionSettings::self();
}

void TextAutoCorrectionCore__TextAutoCorrectionSettings_RequestSync(TextAutoCorrectionCore__TextAutoCorrectionSettings* self) {
    self->requestSync();
}

libqt_string TextAutoCorrectionCore__TextAutoCorrectionSettings_Tr2(const char* s, const char* c) {
    auto _ret = TextAutoCorrectionCore::TextAutoCorrectionSettings::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionCore__TextAutoCorrectionSettings_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextAutoCorrectionCore::TextAutoCorrectionSettings::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
