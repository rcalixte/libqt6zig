#pragma once
#ifndef SRCC_LIBQLOGGING_H
#define SRCC_LIBQLOGGING_H

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
typedef struct QDebug QDebug;
typedef struct QLoggingCategory QLoggingCategory;
typedef struct QMessageLogContext QMessageLogContext;
typedef struct QMessageLogger QMessageLogger;
typedef struct QNoDebug QNoDebug;
#endif

QMessageLogContext* QMessageLogContext_new();
QMessageLogContext* QMessageLogContext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName);
void QMessageLogContext_Delete(QMessageLogContext* self);

QMessageLogger* QMessageLogger_new();
QMessageLogger* QMessageLogger_new2(const char* file, int line, const char* function);
QMessageLogger* QMessageLogger_new3(const char* file, int line, const char* function, const char* category);
QDebug* QMessageLogger_Debug(const QMessageLogger* self);
QDebug* QMessageLogger_Debug2(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Info(const QMessageLogger* self);
QDebug* QMessageLogger_Info2(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Warning(const QMessageLogger* self);
QDebug* QMessageLogger_Warning2(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Critical(const QMessageLogger* self);
QDebug* QMessageLogger_Critical2(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Fatal(const QMessageLogger* self);
QDebug* QMessageLogger_Fatal2(const QMessageLogger* self, const QLoggingCategory* cat);
QNoDebug* QMessageLogger_NoDebug(const QMessageLogger* self);
void QMessageLogger_Delete(QMessageLogger* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
