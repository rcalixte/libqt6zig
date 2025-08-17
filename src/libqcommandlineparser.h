#pragma once
#ifndef SRCC_LIBQCOMMANDLINEPARSER_H
#define SRCC_LIBQCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCommandLineOption QCommandLineOption;
typedef struct QCommandLineParser QCommandLineParser;
typedef struct QCoreApplication QCoreApplication;
#endif

QCommandLineParser* QCommandLineParser_new();
libqt_string QCommandLineParser_Tr(const char* sourceText);
void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode);
void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode);
bool QCommandLineParser_AddOption(QCommandLineParser* self, const QCommandLineOption* commandLineOption);
bool QCommandLineParser_AddOptions(QCommandLineParser* self, const libqt_list /* of QCommandLineOption* */ options);
QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self);
QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self);
void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, const libqt_string description);
libqt_string QCommandLineParser_ApplicationDescription(const QCommandLineParser* self);
void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, const libqt_string name, const libqt_string description);
void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self);
void QCommandLineParser_Process(QCommandLineParser* self, const libqt_list /* of libqt_string */ arguments);
void QCommandLineParser_Process2(QCommandLineParser* self, const QCoreApplication* app);
bool QCommandLineParser_Parse(QCommandLineParser* self, const libqt_list /* of libqt_string */ arguments);
libqt_string QCommandLineParser_ErrorText(const QCommandLineParser* self);
bool QCommandLineParser_IsSet(const QCommandLineParser* self, const libqt_string name);
libqt_string QCommandLineParser_Value(const QCommandLineParser* self, const libqt_string name);
libqt_list /* of libqt_string */ QCommandLineParser_Values(const QCommandLineParser* self, const libqt_string name);
bool QCommandLineParser_IsSet2(const QCommandLineParser* self, const QCommandLineOption* option);
libqt_string QCommandLineParser_Value2(const QCommandLineParser* self, const QCommandLineOption* option);
libqt_list /* of libqt_string */ QCommandLineParser_Values2(const QCommandLineParser* self, const QCommandLineOption* option);
libqt_list /* of libqt_string */ QCommandLineParser_PositionalArguments(const QCommandLineParser* self);
libqt_list /* of libqt_string */ QCommandLineParser_OptionNames(const QCommandLineParser* self);
libqt_list /* of libqt_string */ QCommandLineParser_UnknownOptionNames(const QCommandLineParser* self);
void QCommandLineParser_ShowVersion(QCommandLineParser* self);
void QCommandLineParser_ShowHelp(QCommandLineParser* self);
libqt_string QCommandLineParser_HelpText(const QCommandLineParser* self);
libqt_string QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation);
libqt_string QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n);
void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, const libqt_string name, const libqt_string description, const libqt_string syntax);
void QCommandLineParser_ShowHelp1(QCommandLineParser* self, int exitCode);
void QCommandLineParser_Delete(QCommandLineParser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
