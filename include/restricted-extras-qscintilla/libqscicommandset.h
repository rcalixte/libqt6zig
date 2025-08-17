#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCICOMMANDSET_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCICOMMANDSET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSettings QSettings;
typedef struct QsciCommand QsciCommand;
typedef struct QsciCommandSet QsciCommandSet;
#endif

bool QsciCommandSet_ReadSettings(QsciCommandSet* self, QSettings* qs);
bool QsciCommandSet_WriteSettings(QsciCommandSet* self, QSettings* qs);
libqt_list /* of QsciCommand* */ QsciCommandSet_Commands(QsciCommandSet* self);
void QsciCommandSet_ClearKeys(QsciCommandSet* self);
void QsciCommandSet_ClearAlternateKeys(QsciCommandSet* self);
QsciCommand* QsciCommandSet_BoundTo(const QsciCommandSet* self, int key);
QsciCommand* QsciCommandSet_Find(const QsciCommandSet* self, int command);
bool QsciCommandSet_ReadSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);
bool QsciCommandSet_WriteSettings2(QsciCommandSet* self, QSettings* qs, const char* prefix);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
