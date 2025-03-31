#pragma once
#ifndef SRCC_LIBQCOMMANDLINEOPTION_H
#define SRCC_LIBQCOMMANDLINEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCommandLineOption QCommandLineOption;
#endif

#ifdef __cplusplus
typedef QCommandLineOption::Flag Flag;   // C++ enum
typedef QCommandLineOption::Flags Flags; // C++ QFlags
#else
typedef int Flag;  // C ABI enum
typedef int Flags; // C ABI QFlags
#endif

QCommandLineOption* QCommandLineOption_new(libqt_string name);
QCommandLineOption* QCommandLineOption_new2(libqt_list /* of libqt_string */ names);
QCommandLineOption* QCommandLineOption_new3(libqt_string name, libqt_string description);
QCommandLineOption* QCommandLineOption_new4(libqt_list /* of libqt_string */ names, libqt_string description);
QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other);
QCommandLineOption* QCommandLineOption_new6(libqt_string name, libqt_string description, libqt_string valueName);
QCommandLineOption* QCommandLineOption_new7(libqt_string name, libqt_string description, libqt_string valueName, libqt_string defaultValue);
QCommandLineOption* QCommandLineOption_new8(libqt_list /* of libqt_string */ names, libqt_string description, libqt_string valueName);
QCommandLineOption* QCommandLineOption_new9(libqt_list /* of libqt_string */ names, libqt_string description, libqt_string valueName, libqt_string defaultValue);
void QCommandLineOption_OperatorAssign(QCommandLineOption* self, QCommandLineOption* other);
void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other);
libqt_list /* of libqt_string */ QCommandLineOption_Names(const QCommandLineOption* self);
void QCommandLineOption_SetValueName(QCommandLineOption* self, libqt_string name);
libqt_string QCommandLineOption_ValueName(const QCommandLineOption* self);
void QCommandLineOption_SetDescription(QCommandLineOption* self, libqt_string description);
libqt_string QCommandLineOption_Description(const QCommandLineOption* self);
void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, libqt_string defaultValue);
void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, libqt_list /* of libqt_string */ defaultValues);
libqt_list /* of libqt_string */ QCommandLineOption_DefaultValues(const QCommandLineOption* self);
int QCommandLineOption_Flags(const QCommandLineOption* self);
void QCommandLineOption_SetFlags(QCommandLineOption* self, int aflags);
void QCommandLineOption_Delete(QCommandLineOption* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
