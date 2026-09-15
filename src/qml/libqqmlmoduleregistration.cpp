#include <QQmlModuleRegistration>
#include <qqmlmoduleregistration.h>
#include "libqqmlmoduleregistration.h"
#include "libqqmlmoduleregistration.hxx"

QQmlModuleRegistration* QQmlModuleRegistration_new(const char* uri, intptr_t registerFunction) {
    auto registerFunction_func = reinterpret_cast<void (*)()>(registerFunction);
    return new QQmlModuleRegistration(uri, registerFunction_func);
}

QQmlModuleRegistration* QQmlModuleRegistration_new2(const char* uri, int majorVersion, intptr_t registerFunction) {
    auto registerFunction_func = reinterpret_cast<void (*)()>(registerFunction);
    return new QQmlModuleRegistration(uri, static_cast<int>(majorVersion), registerFunction_func);
}

void QQmlModuleRegistration_Delete(QQmlModuleRegistration* self) {
    delete self;
}
