#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEME_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLSCHEME_H

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
typedef struct QWebEngineUrlScheme QWebEngineUrlScheme;
#endif

#ifdef __cplusplus
typedef QWebEngineUrlScheme::Flag Flag;                     // C++ enum
typedef QWebEngineUrlScheme::Flags Flags;                   // C++ QFlags
typedef QWebEngineUrlScheme::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QWebEngineUrlScheme::SpecialPort SpecialPort;       // C++ enum
typedef QWebEngineUrlScheme::Syntax Syntax;                 // C++ enum
#else
typedef int Flag;            // C ABI enum
typedef int Flags;           // C ABI QFlags
typedef int SpecialPort;     // C ABI enum
typedef int Syntax;          // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QWebEngineUrlScheme* QWebEngineUrlScheme_new();
QWebEngineUrlScheme* QWebEngineUrlScheme_new2(libqt_string name);
QWebEngineUrlScheme* QWebEngineUrlScheme_new3(QWebEngineUrlScheme* that);
void QWebEngineUrlScheme_OperatorAssign(QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_OperatorEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_OperatorNotEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
libqt_string QWebEngineUrlScheme_Name(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetName(QWebEngineUrlScheme* self, libqt_string newValue);
int QWebEngineUrlScheme_Syntax(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetSyntax(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_DefaultPort(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetDefaultPort(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_Flags(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_SetFlags(QWebEngineUrlScheme* self, int newValue);
void QWebEngineUrlScheme_RegisterScheme(QWebEngineUrlScheme* scheme);
QWebEngineUrlScheme* QWebEngineUrlScheme_SchemeByName(libqt_string name);
void QWebEngineUrlScheme_Delete(QWebEngineUrlScheme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
