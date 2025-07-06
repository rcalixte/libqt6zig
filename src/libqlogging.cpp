#include <QDebug>
#include <QLoggingCategory>
#include <QMessageLogContext>
#include <QMessageLogger>
#include <QNoDebug>
#include <qlogging.h>
#include "libqlogging.h"
#include "libqlogging.hxx"

QMessageLogContext* QMessageLogContext_new() {
    return new QMessageLogContext();
}

QMessageLogContext* QMessageLogContext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName) {
    return new QMessageLogContext(fileName, static_cast<int>(lineNumber), functionName, categoryName);
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

QDebug* QMessageLogger_DebugWithCat(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->debug(*cat));
}

QDebug* QMessageLogger_Info(const QMessageLogger* self) {
    return new QDebug(self->info());
}

QDebug* QMessageLogger_InfoWithCat(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->info(*cat));
}

QDebug* QMessageLogger_Warning(const QMessageLogger* self) {
    return new QDebug(self->warning());
}

QDebug* QMessageLogger_WarningWithCat(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->warning(*cat));
}

QDebug* QMessageLogger_Critical(const QMessageLogger* self) {
    return new QDebug(self->critical());
}

QDebug* QMessageLogger_CriticalWithCat(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->critical(*cat));
}

QDebug* QMessageLogger_Fatal(const QMessageLogger* self) {
    return new QDebug(self->fatal());
}

QDebug* QMessageLogger_FatalWithCat(const QMessageLogger* self, const QLoggingCategory* cat) {
    return new QDebug(self->fatal(*cat));
}

QNoDebug* QMessageLogger_NoDebug(const QMessageLogger* self) {
    return new QNoDebug(self->noDebug());
}

void QMessageLogger_Delete(QMessageLogger* self) {
    delete self;
}
