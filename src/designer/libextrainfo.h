#pragma once
#ifndef SRC_DESIGNERC_LIBEXTRAINFO_H
#define SRC_DESIGNERC_LIBEXTRAINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerExtraInfoExtension QDesignerExtraInfoExtension;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QWidget QWidget;
#endif

QDesignerFormEditorInterface* QDesignerExtraInfoExtension_Core(const QDesignerExtraInfoExtension* self);
QWidget* QDesignerExtraInfoExtension_Widget(const QDesignerExtraInfoExtension* self);
libqt_string QDesignerExtraInfoExtension_WorkingDirectory(const QDesignerExtraInfoExtension* self);
void QDesignerExtraInfoExtension_SetWorkingDirectory(QDesignerExtraInfoExtension* self, const libqt_string workingDirectory);
void QDesignerExtraInfoExtension_Delete(QDesignerExtraInfoExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
