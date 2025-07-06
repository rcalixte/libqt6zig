#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINESCRIPT_H
#define SRC_WEBENGINEC_LIBQWEBENGINESCRIPT_H

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
typedef struct QUrl QUrl;
typedef struct QWebEngineScript QWebEngineScript;
#endif

QWebEngineScript* QWebEngineScript_new();
QWebEngineScript* QWebEngineScript_new2(const QWebEngineScript* other);
void QWebEngineScript_OperatorAssign(QWebEngineScript* self, const QWebEngineScript* other);
libqt_string QWebEngineScript_Name(const QWebEngineScript* self);
void QWebEngineScript_SetName(QWebEngineScript* self, const libqt_string name);
QUrl* QWebEngineScript_SourceUrl(const QWebEngineScript* self);
void QWebEngineScript_SetSourceUrl(QWebEngineScript* self, const QUrl* url);
libqt_string QWebEngineScript_SourceCode(const QWebEngineScript* self);
void QWebEngineScript_SetSourceCode(QWebEngineScript* self, const libqt_string sourceCode);
int QWebEngineScript_InjectionPoint(const QWebEngineScript* self);
void QWebEngineScript_SetInjectionPoint(QWebEngineScript* self, int injectionPoint);
unsigned int QWebEngineScript_WorldId(const QWebEngineScript* self);
void QWebEngineScript_SetWorldId(QWebEngineScript* self, unsigned int worldId);
bool QWebEngineScript_RunsOnSubFrames(const QWebEngineScript* self);
void QWebEngineScript_SetRunsOnSubFrames(QWebEngineScript* self, bool on);
bool QWebEngineScript_OperatorEqual(const QWebEngineScript* self, const QWebEngineScript* other);
bool QWebEngineScript_OperatorNotEqual(const QWebEngineScript* self, const QWebEngineScript* other);
void QWebEngineScript_Swap(QWebEngineScript* self, QWebEngineScript* other);
void QWebEngineScript_Delete(QWebEngineScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
