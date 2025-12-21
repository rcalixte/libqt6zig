#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTLANGUAGE_H
#define SRC_DESIGNERC_LIBABSTRACTLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerLanguageExtension QDesignerLanguageExtension;
typedef struct QDesignerResourceBrowserInterface QDesignerResourceBrowserInterface;
typedef struct QDialog QDialog;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

libqt_string QDesignerLanguageExtension_Name(const QDesignerLanguageExtension* self);
QDialog* QDesignerLanguageExtension_CreateFormWindowSettingsDialog(QDesignerLanguageExtension* self, QDesignerFormWindowInterface* formWindow, QWidget* parentWidget);
QDesignerResourceBrowserInterface* QDesignerLanguageExtension_CreateResourceBrowser(QDesignerLanguageExtension* self, QWidget* parentWidget);
QDialog* QDesignerLanguageExtension_CreatePromotionDialog(QDesignerLanguageExtension* self, QDesignerFormEditorInterface* formEditor, QWidget* parentWidget);
bool QDesignerLanguageExtension_IsLanguageResource(const QDesignerLanguageExtension* self, const libqt_string path);
libqt_string QDesignerLanguageExtension_ClassNameOf(const QDesignerLanguageExtension* self, QObject* object);
bool QDesignerLanguageExtension_SignalMatchesSlot(const QDesignerLanguageExtension* self, const libqt_string signal, const libqt_string slot);
libqt_string QDesignerLanguageExtension_WidgetBoxContents(const QDesignerLanguageExtension* self);
libqt_string QDesignerLanguageExtension_UiExtension(const QDesignerLanguageExtension* self);
void QDesignerLanguageExtension_Delete(QDesignerLanguageExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
