#pragma once
#ifndef SRCC_LIBQCOMMANDLINEPARSER_H
#define SRCC_LIBQCOMMANDLINEPARSER_H

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
typedef struct QCommandLineParser QCommandLineParser;
typedef struct QCoreApplication QCoreApplication;
#endif

#ifdef __cplusplus
typedef QCommandLineParser::OptionsAfterPositionalArgumentsMode OptionsAfterPositionalArgumentsMode; // C++ enum
typedef QCommandLineParser::SingleDashWordOptionMode SingleDashWordOptionMode;                       // C++ enum
#else
typedef int OptionsAfterPositionalArgumentsMode; // C ABI enum
typedef int SingleDashWordOptionMode;            // C ABI enum
#endif

QCommandLineParser* QCommandLineParser_new();
libqt_string QCommandLineParser_Tr(const char* sourceText);
void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode);
void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode);
bool QCommandLineParser_AddOption(QCommandLineParser* self, QCommandLineOption* commandLineOption);
bool QCommandLineParser_AddOptions(QCommandLineParser* self, libqt_list /* of QCommandLineOption* */ options);
QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self);
QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self);
void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, libqt_string description);
libqt_string QCommandLineParser_ApplicationDescription(const QCommandLineParser* self);
void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, libqt_string name, libqt_string description);
void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self);
void QCommandLineParser_Process(QCommandLineParser* self, libqt_list /* of libqt_string */ arguments);
void QCommandLineParser_ProcessWithApp(QCommandLineParser* self, QCoreApplication* app);
bool QCommandLineParser_Parse(QCommandLineParser* self, libqt_list /* of libqt_string */ arguments);
libqt_string QCommandLineParser_ErrorText(const QCommandLineParser* self);
bool QCommandLineParser_IsSet(const QCommandLineParser* self, libqt_string name);
libqt_string QCommandLineParser_Value(const QCommandLineParser* self, libqt_string name);
libqt_list /* of libqt_string */ QCommandLineParser_Values(const QCommandLineParser* self, libqt_string name);
bool QCommandLineParser_IsSetWithOption(const QCommandLineParser* self, QCommandLineOption* option);
libqt_string QCommandLineParser_ValueWithOption(const QCommandLineParser* self, QCommandLineOption* option);
libqt_list /* of libqt_string */ QCommandLineParser_ValuesWithOption(const QCommandLineParser* self, QCommandLineOption* option);
libqt_list /* of libqt_string */ QCommandLineParser_PositionalArguments(const QCommandLineParser* self);
libqt_list /* of libqt_string */ QCommandLineParser_OptionNames(const QCommandLineParser* self);
libqt_list /* of libqt_string */ QCommandLineParser_UnknownOptionNames(const QCommandLineParser* self);
void QCommandLineParser_ShowVersion(QCommandLineParser* self);
void QCommandLineParser_ShowHelp(QCommandLineParser* self);
libqt_string QCommandLineParser_HelpText(const QCommandLineParser* self);
libqt_string QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation);
libqt_string QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n);
void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, libqt_string name, libqt_string description, libqt_string syntax);
void QCommandLineParser_ShowHelp1(QCommandLineParser* self, int exitCode);
void QCommandLineParser_Delete(QCommandLineParser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
