#include <QQmlAbstractUrlInterceptor>
#include <QUrl>
#include <qqmlabstracturlinterceptor.h>
#include "libqqmlabstracturlinterceptor.h"
#include "libqqmlabstracturlinterceptor.hxx"

QQmlAbstractUrlInterceptor* QQmlAbstractUrlInterceptor_new() {
    return new VirtualQQmlAbstractUrlInterceptor();
}

QUrl* QQmlAbstractUrlInterceptor_Intercept(QQmlAbstractUrlInterceptor* self, const QUrl* path, int typeVal) {
    return new QUrl(self->intercept(*path, static_cast<QQmlAbstractUrlInterceptor::DataType>(typeVal)));
}

void QQmlAbstractUrlInterceptor_OperatorAssign(QQmlAbstractUrlInterceptor* self, const QQmlAbstractUrlInterceptor* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlAbstractUrlInterceptor_OnIntercept(QQmlAbstractUrlInterceptor* self, intptr_t slot) {
    if (auto* vqqmlabstracturlinterceptor = dynamic_cast<VirtualQQmlAbstractUrlInterceptor*>(self))
        vqqmlabstracturlinterceptor->qqmlabstracturlinterceptor_intercept_callback = reinterpret_cast<VirtualQQmlAbstractUrlInterceptor::QQmlAbstractUrlInterceptor_Intercept_Callback>(slot);
}

void QQmlAbstractUrlInterceptor_Delete(QQmlAbstractUrlInterceptor* self) {
    delete self;
}
