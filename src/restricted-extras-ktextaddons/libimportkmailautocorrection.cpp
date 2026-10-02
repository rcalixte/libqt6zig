#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__ImportAbstractAutocorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__ImportKMailAutocorrection
#include <importkmailautocorrection.h>
#include "libimportkmailautocorrection.h"
#include "libimportkmailautocorrection.hxx"

TextAutoCorrectionCore__ImportKMailAutocorrection* TextAutoCorrectionCore__ImportKMailAutocorrection_new() {
    return new VirtualTextAutoCorrectionCoreImportKMailAutocorrection();
}

TextAutoCorrectionCore__ImportKMailAutocorrection* TextAutoCorrectionCore__ImportKMailAutocorrection_new2(const TextAutoCorrectionCore__ImportKMailAutocorrection* param1) {
    return new VirtualTextAutoCorrectionCoreImportKMailAutocorrection(*param1);
}

bool TextAutoCorrectionCore__ImportKMailAutocorrection_Import(TextAutoCorrectionCore__ImportKMailAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    return self->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
}

// Base class handler implementation
bool TextAutoCorrectionCore__ImportKMailAutocorrection_SuperImport(TextAutoCorrectionCore__ImportKMailAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    return self->TextAutoCorrectionCore::ImportKMailAutocorrection::import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionCore__ImportKMailAutocorrection_OnImport(TextAutoCorrectionCore__ImportKMailAutocorrection* self, intptr_t slot) {
    if (auto* vtextautocorrectioncoreimportkmailautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection*>(self))
        vtextautocorrectioncoreimportkmailautocorrection->textautocorrectioncore__importkmailautocorrection_import_callback = reinterpret_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection::TextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback>(slot);
}

void TextAutoCorrectionCore__ImportKMailAutocorrection_Delete(TextAutoCorrectionCore__ImportKMailAutocorrection* self) {
    delete self;
}
