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
    auto* vtextautocorrectioncore__importkmailautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection*>(self);
    if (vtextautocorrectioncore__importkmailautocorrection && vtextautocorrectioncore__importkmailautocorrection->isVirtualTextAutoCorrectionCoreImportKMailAutocorrection) {
        return self->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    } else {
        return ((VirtualTextAutoCorrectionCoreImportKMailAutocorrection*)self)->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    }
}

void TextAutoCorrectionCore__ImportKMailAutocorrection_OperatorAssign(TextAutoCorrectionCore__ImportKMailAutocorrection* self, const TextAutoCorrectionCore__ImportKMailAutocorrection* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
bool TextAutoCorrectionCore__ImportKMailAutocorrection_SuperImport(TextAutoCorrectionCore__ImportKMailAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    auto* vtextautocorrectioncoreimportkmailautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    if (vtextautocorrectioncoreimportkmailautocorrection && vtextautocorrectioncoreimportkmailautocorrection->isVirtualTextAutoCorrectionCoreImportKMailAutocorrection) {
        vtextautocorrectioncoreimportkmailautocorrection->setTextAutoCorrectionCore__ImportKMailAutocorrection_Import_IsBase(true);
        return vtextautocorrectioncoreimportkmailautocorrection->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    } else {
        return self->TextAutoCorrectionCore::ImportKMailAutocorrection::import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionCore__ImportKMailAutocorrection_OnImport(TextAutoCorrectionCore__ImportKMailAutocorrection* self, intptr_t slot) {
    auto* vtextautocorrectioncoreimportkmailautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection*>(self);
    if (vtextautocorrectioncoreimportkmailautocorrection && vtextautocorrectioncoreimportkmailautocorrection->isVirtualTextAutoCorrectionCoreImportKMailAutocorrection) {
        vtextautocorrectioncoreimportkmailautocorrection->setTextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback(reinterpret_cast<VirtualTextAutoCorrectionCoreImportKMailAutocorrection::TextAutoCorrectionCore__ImportKMailAutocorrection_Import_Callback>(slot));
    }
}

void TextAutoCorrectionCore__ImportKMailAutocorrection_Delete(TextAutoCorrectionCore__ImportKMailAutocorrection* self) {
    delete self;
}
