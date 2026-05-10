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

TextAutoCorrectionCore__TextAutoCorrectionSettings* TextAutoCorrectionCore__TextAutoCorrectionSettings_Self() {
    return TextAutoCorrectionCore::TextAutoCorrectionSettings::self();
}

void TextAutoCorrectionCore__TextAutoCorrectionSettings_RequestSync(TextAutoCorrectionCore__TextAutoCorrectionSettings* self) {
    self->requestSync();
}
