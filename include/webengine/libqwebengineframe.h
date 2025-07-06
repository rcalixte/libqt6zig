#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEFRAME_H
#define SRC_WEBENGINEC_LIBQWEBENGINEFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSizeF QSizeF;
typedef struct QUrl QUrl;
typedef struct QWebEngineFrame QWebEngineFrame;
#endif

QWebEngineFrame* QWebEngineFrame_new(const QWebEngineFrame* param1);
bool QWebEngineFrame_IsValid(const QWebEngineFrame* self);
libqt_string QWebEngineFrame_Name(const QWebEngineFrame* self);
libqt_string QWebEngineFrame_HtmlName(const QWebEngineFrame* self);
libqt_list /* of QWebEngineFrame* */ QWebEngineFrame_Children(const QWebEngineFrame* self);
QUrl* QWebEngineFrame_Url(const QWebEngineFrame* self);
QSizeF* QWebEngineFrame_Size(const QWebEngineFrame* self);
bool QWebEngineFrame_IsMainFrame(const QWebEngineFrame* self);
void QWebEngineFrame_RunJavaScript(QWebEngineFrame* self, const libqt_string script);
void QWebEngineFrame_PrintToPdf(QWebEngineFrame* self, const libqt_string filePath);
void QWebEngineFrame_RunJavaScript22(QWebEngineFrame* self, const libqt_string script, unsigned int worldId);
void QWebEngineFrame_Delete(QWebEngineFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
