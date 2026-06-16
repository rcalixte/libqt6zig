#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__ImportAbstractAutocorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__ImportLibreOfficeAutocorrection
#include <importlibreofficeautocorrection.h>
#include "libimportlibreofficeautocorrection.h"
#include "libimportlibreofficeautocorrection.hxx"

TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_new() {
    return new VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection();
}

TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_new2(const TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* param1) {
    return new VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection(*param1);
}

bool TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    return self->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
}

// Base class handler implementation
bool TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_SuperImport(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* self, const libqt_string fileName, libqt_string errorMessage, int loadAttribute) {
    auto* vtextautocorrectioncoreimportlibreofficeautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    if (vtextautocorrectioncoreimportlibreofficeautocorrection && vtextautocorrectioncoreimportlibreofficeautocorrection->isVirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection) {
        vtextautocorrectioncoreimportlibreofficeautocorrection->setTextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_IsBase(true);
        return vtextautocorrectioncoreimportlibreofficeautocorrection->import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    } else {
        return self->TextAutoCorrectionCore::ImportLibreOfficeAutocorrection::import(fileName_QString, errorMessage_QString, static_cast<TextAutoCorrectionCore::ImportAbstractAutocorrection::LoadAttribute>(loadAttribute));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_OnImport(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* self, intptr_t slot) {
    auto* vtextautocorrectioncoreimportlibreofficeautocorrection = dynamic_cast<VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection*>(self);
    if (vtextautocorrectioncoreimportlibreofficeautocorrection && vtextautocorrectioncoreimportlibreofficeautocorrection->isVirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection) {
        vtextautocorrectioncoreimportlibreofficeautocorrection->setTextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback(reinterpret_cast<VirtualTextAutoCorrectionCoreImportLibreOfficeAutocorrection::TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import_Callback>(slot));
    }
}

void TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Delete(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* self) {
    delete self;
}
