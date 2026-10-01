#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "libqabstractnativeeventfilter.h"
#include "libqabstractnativeeventfilter.hxx"

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new() {
    return new VirtualQAbstractNativeEventFilter();
}

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    return self->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
}

// Auxiliary method to allow providing re-implementation
void QAbstractNativeEventFilter_OnNativeEventFilter(QAbstractNativeEventFilter* self, intptr_t slot) {
    if (auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self))
        vqabstractnativeeventfilter->qabstractnativeeventfilter_nativeeventfilter_callback = reinterpret_cast<VirtualQAbstractNativeEventFilter::QAbstractNativeEventFilter_NativeEventFilter_Callback>(slot);
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
    delete self;
}
