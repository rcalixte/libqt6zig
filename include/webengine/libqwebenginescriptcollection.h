#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINESCRIPTCOLLECTION_H
#define SRC_WEBENGINEC_LIBQWEBENGINESCRIPTCOLLECTION_H

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
typedef struct QWebEngineScript QWebEngineScript;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
#endif

bool QWebEngineScriptCollection_IsEmpty(const QWebEngineScriptCollection* self);
int QWebEngineScriptCollection_Count(const QWebEngineScriptCollection* self);
bool QWebEngineScriptCollection_Contains(const QWebEngineScriptCollection* self, const QWebEngineScript* value);
libqt_list /* of QWebEngineScript* */ QWebEngineScriptCollection_Find(const QWebEngineScriptCollection* self, const libqt_string name);
void QWebEngineScriptCollection_Insert(QWebEngineScriptCollection* self, const QWebEngineScript* param1);
void QWebEngineScriptCollection_Insert2(QWebEngineScriptCollection* self, const libqt_list /* of QWebEngineScript* */ list);
bool QWebEngineScriptCollection_Remove(QWebEngineScriptCollection* self, const QWebEngineScript* param1);
void QWebEngineScriptCollection_Clear(QWebEngineScriptCollection* self);
libqt_list /* of QWebEngineScript* */ QWebEngineScriptCollection_ToList(const QWebEngineScriptCollection* self);
void QWebEngineScriptCollection_Delete(QWebEngineScriptCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
