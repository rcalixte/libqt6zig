#include <QString>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrectionSettings
#include <autocorrection.h>
#include "libautocorrection.h"
#include "libautocorrection.hxx"

TextAutoCorrectionCore__AutoCorrection* TextAutoCorrectionCore__AutoCorrection_new() {
    return new TextAutoCorrectionCore::AutoCorrection();
}

void TextAutoCorrectionCore__AutoCorrection_WriteConfig(TextAutoCorrectionCore__AutoCorrection* self) {
    self->writeConfig();
}

void TextAutoCorrectionCore__AutoCorrection_ReadConfig(TextAutoCorrectionCore__AutoCorrection* self) {
    self->readConfig();
}

bool TextAutoCorrectionCore__AutoCorrection_Autocorrect(TextAutoCorrectionCore__AutoCorrection* self, bool htmlMode, QTextDocument* document, int* position) {
    return self->autocorrect(htmlMode, *document, static_cast<int&>(*position));
}

void TextAutoCorrectionCore__AutoCorrection_LoadGlobalFileName(TextAutoCorrectionCore__AutoCorrection* self, const libqt_string fname) {
    QString fname_QString = QString::fromUtf8(fname.data, fname.len);
    self->loadGlobalFileName(fname_QString);
}

TextAutoCorrectionCore__AutoCorrectionSettings* TextAutoCorrectionCore__AutoCorrection_AutoCorrectionSettings(const TextAutoCorrectionCore__AutoCorrection* self) {
    return self->autoCorrectionSettings();
}

void TextAutoCorrectionCore__AutoCorrection_SetAutoCorrectionSettings(TextAutoCorrectionCore__AutoCorrection* self, TextAutoCorrectionCore__AutoCorrectionSettings* newAutoCorrectionSettings) {
    self->setAutoCorrectionSettings(newAutoCorrectionSettings);
}

void TextAutoCorrectionCore__AutoCorrection_WriteAutoCorrectionXmlFile(TextAutoCorrectionCore__AutoCorrection* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->writeAutoCorrectionXmlFile(filename_QString);
}

void TextAutoCorrectionCore__AutoCorrection_Delete(TextAutoCorrectionCore__AutoCorrection* self) {
    delete self;
}
