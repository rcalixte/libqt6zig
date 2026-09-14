#include <QDebug>
#include <QLoggingCategory>
#include <QMessageLogContext>
#include <QMessageLogger>
#include <QNoDebug>
#include <QString>
#include <qlogging.h>
#include "libqlogging.h"
#include "libqlogging.hxx"

QMessageLogContext* QMessageLogContext_new() {
    return new QMessageLogContext();
}

QMessageLogContext* QMessageLogContext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName) {
    return new QMessageLogContext(fileName, static_cast<int>(lineNumber), functionName, categoryName);
}

int QMessageLogContext_Version(const QMessageLogContext* self) {
    return self->version;
}

void QMessageLogContext_SetVersion(QMessageLogContext* self, int version) {
    self->version = static_cast<int>(version);
}

int QMessageLogContext_Line(const QMessageLogContext* self) {
    return self->line;
}

void QMessageLogContext_SetLine(QMessageLogContext* self, int line) {
    self->line = static_cast<int>(line);
}

const char* QMessageLogContext_File(const QMessageLogContext* self) {
    return (const char*)self->file;
}

void QMessageLogContext_SetFile(QMessageLogContext* self, const char* file) {
    self->file = file;
}

const char* QMessageLogContext_Function(const QMessageLogContext* self) {
    return (const char*)self->function;
}

void QMessageLogContext_SetFunction(QMessageLogContext* self, const char* function) {
    self->function = function;
}

const char* QMessageLogContext_Category(const QMessageLogContext* self) {
    return (const char*)self->category;
}

void QMessageLogContext_SetCategory(QMessageLogContext* self, const char* category) {
    self->category = category;
}

void QMessageLogContext_Delete(QMessageLogContext* self) {
    delete self;
}

QMessageLogger* QMessageLogger_new() {
    return new QMessageLogger();
}

QMessageLogger* QMessageLogger_new2(const char* file, int line, const char* function) {
    return new QMessageLogger(file, static_cast<int>(line), function);
}

QMessageLogger* QMessageLogger_new3(const char* file, int line, const char* function, const char* category) {
    return new QMessageLogger(file, static_cast<int>(line), function, category);
}

QDebug* QMessageLogger_Debug(const QMessageLogger* self) {
    return new QDebug(self->debug());
}

QDebug* QMessageLogger_Debug2(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->debug(*cat));
}

QDebug* QMessageLogger_Debug3(const QMessageLogger* self, intptr_t catFunc) {
    auto catFunc_func = reinterpret_cast<QMessageLogger::CategoryFunction>(catFunc);
    return new QDebug(self->debug(catFunc_func));
}

QDebug* QMessageLogger_Info(const QMessageLogger* self) {
    return new QDebug(self->info());
}

QDebug* QMessageLogger_Info2(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->info(*cat));
}

QDebug* QMessageLogger_Info3(const QMessageLogger* self, intptr_t catFunc) {
    auto catFunc_func = reinterpret_cast<QMessageLogger::CategoryFunction>(catFunc);
    return new QDebug(self->info(catFunc_func));
}

QDebug* QMessageLogger_Warning(const QMessageLogger* self) {
    return new QDebug(self->warning());
}

QDebug* QMessageLogger_Warning2(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->warning(*cat));
}

QDebug* QMessageLogger_Warning3(const QMessageLogger* self, intptr_t catFunc) {
    auto catFunc_func = reinterpret_cast<QMessageLogger::CategoryFunction>(catFunc);
    return new QDebug(self->warning(catFunc_func));
}

QDebug* QMessageLogger_Critical(const QMessageLogger* self) {
    return new QDebug(self->critical());
}

QDebug* QMessageLogger_Critical2(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->critical(*cat));
}

QDebug* QMessageLogger_Critical3(const QMessageLogger* self, intptr_t catFunc) {
    auto catFunc_func = reinterpret_cast<QMessageLogger::CategoryFunction>(catFunc);
    return new QDebug(self->critical(catFunc_func));
}

QDebug* QMessageLogger_Fatal(const QMessageLogger* self) {
    return new QDebug(self->fatal());
}

QDebug* QMessageLogger_Fatal2(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->fatal(*cat));
}

QDebug* QMessageLogger_Fatal3(const QMessageLogger* self, intptr_t catFunc) {
    auto catFunc_func = reinterpret_cast<QMessageLogger::CategoryFunction>(catFunc);
    return new QDebug(self->fatal(catFunc_func));
}

QNoDebug* QMessageLogger_NoDebug(const QMessageLogger* self) {
    return new QNoDebug(self->noDebug());
}

void QMessageLogger_Delete(QMessageLogger* self) {
    delete self;
}

libqt_string qlogging_h_ErrorString(int errorCode) {
    auto _ret = qt_error_string(static_cast<int>(errorCode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
