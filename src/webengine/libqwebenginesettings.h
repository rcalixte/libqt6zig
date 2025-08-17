#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINESETTINGS_H
#define SRC_WEBENGINEC_LIBQWEBENGINESETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QWebEngineSettings QWebEngineSettings;
#endif

void QWebEngineSettings_SetFontFamily(QWebEngineSettings* self, int which, const libqt_string family);
libqt_string QWebEngineSettings_FontFamily(const QWebEngineSettings* self, int which);
void QWebEngineSettings_ResetFontFamily(QWebEngineSettings* self, int which);
void QWebEngineSettings_SetFontSize(QWebEngineSettings* self, int typeVal, int size);
int QWebEngineSettings_FontSize(const QWebEngineSettings* self, int typeVal);
void QWebEngineSettings_ResetFontSize(QWebEngineSettings* self, int typeVal);
void QWebEngineSettings_SetAttribute(QWebEngineSettings* self, int attr, bool on);
bool QWebEngineSettings_TestAttribute(const QWebEngineSettings* self, int attr);
void QWebEngineSettings_ResetAttribute(QWebEngineSettings* self, int attr);
void QWebEngineSettings_SetDefaultTextEncoding(QWebEngineSettings* self, const libqt_string encoding);
libqt_string QWebEngineSettings_DefaultTextEncoding(const QWebEngineSettings* self);
int QWebEngineSettings_UnknownUrlSchemePolicy(const QWebEngineSettings* self);
void QWebEngineSettings_SetUnknownUrlSchemePolicy(QWebEngineSettings* self, int policy);
void QWebEngineSettings_ResetUnknownUrlSchemePolicy(QWebEngineSettings* self);
void QWebEngineSettings_SetImageAnimationPolicy(QWebEngineSettings* self, uint8_t policy);
uint8_t QWebEngineSettings_ImageAnimationPolicy(const QWebEngineSettings* self);
void QWebEngineSettings_ResetImageAnimationPolicy(QWebEngineSettings* self);
void QWebEngineSettings_Delete(QWebEngineSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
