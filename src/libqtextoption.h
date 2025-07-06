#pragma once
#ifndef SRCC_LIBQTEXTOPTION_H
#define SRCC_LIBQTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab)
typedef QTextOption::Tab QTextOption__Tab;
#endif
#else
typedef struct QChar QChar;
typedef struct QTextOption QTextOption;
typedef struct QTextOption__Tab QTextOption__Tab;
#endif

QTextOption* QTextOption_new();
QTextOption* QTextOption_new2(int alignment);
QTextOption* QTextOption_new3(const QTextOption* o);
void QTextOption_OperatorAssign(QTextOption* self, const QTextOption* o);
void QTextOption_SetAlignment(QTextOption* self, int alignment);
int QTextOption_Alignment(const QTextOption* self);
void QTextOption_SetTextDirection(QTextOption* self, int aDirection);
int QTextOption_TextDirection(const QTextOption* self);
void QTextOption_SetWrapMode(QTextOption* self, int wrap);
int QTextOption_WrapMode(const QTextOption* self);
void QTextOption_SetFlags(QTextOption* self, int flags);
int QTextOption_Flags(const QTextOption* self);
void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance);
double QTextOption_TabStopDistance(const QTextOption* self);
void QTextOption_SetTabArray(QTextOption* self, const libqt_list /* of double */ tabStops);
libqt_list /* of double */ QTextOption_TabArray(const QTextOption* self);
void QTextOption_SetTabs(QTextOption* self, const libqt_list /* of QTextOption__Tab* */ tabStops);
libqt_list /* of QTextOption__Tab* */ QTextOption_Tabs(const QTextOption* self);
void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b);
bool QTextOption_UseDesignMetrics(const QTextOption* self);
void QTextOption_Delete(QTextOption* self);

QTextOption__Tab* QTextOption__Tab_new(const QTextOption__Tab* other);
QTextOption__Tab* QTextOption__Tab_new2(QTextOption__Tab* other);
QTextOption__Tab* QTextOption__Tab_new3();
QTextOption__Tab* QTextOption__Tab_new4(double pos, int tabType);
QTextOption__Tab* QTextOption__Tab_new5(double pos, int tabType, QChar* delim);
void QTextOption__Tab_CopyAssign(QTextOption__Tab* self, QTextOption__Tab* other);
void QTextOption__Tab_MoveAssign(QTextOption__Tab* self, QTextOption__Tab* other);
bool QTextOption__Tab_OperatorEqual(const QTextOption__Tab* self, const QTextOption__Tab* other);
bool QTextOption__Tab_OperatorNotEqual(const QTextOption__Tab* self, const QTextOption__Tab* other);
void QTextOption__Tab_Delete(QTextOption__Tab* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
