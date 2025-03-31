#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEFINDTEXTRESULT_H
#define SRC_WEBENGINEC_LIBQWEBENGINEFINDTEXTRESULT_H

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
typedef struct QWebEngineFindTextResult QWebEngineFindTextResult;
#endif

#ifdef __cplusplus
typedef QWebEngineFindTextResult::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QWebEngineFindTextResult* QWebEngineFindTextResult_new();
QWebEngineFindTextResult* QWebEngineFindTextResult_new2(QWebEngineFindTextResult* other);
int QWebEngineFindTextResult_NumberOfMatches(const QWebEngineFindTextResult* self);
int QWebEngineFindTextResult_ActiveMatch(const QWebEngineFindTextResult* self);
void QWebEngineFindTextResult_OperatorAssign(QWebEngineFindTextResult* self, QWebEngineFindTextResult* other);
void QWebEngineFindTextResult_Delete(QWebEngineFindTextResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
