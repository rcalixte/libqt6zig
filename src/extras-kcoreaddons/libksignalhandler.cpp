#include <KSignalHandler>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ksignalhandler.h>
#include "libksignalhandler.h"
#include "libksignalhandler.hxx"

QMetaObject* KSignalHandler_MetaObject(const KSignalHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSignalHandler_Metacast(KSignalHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSignalHandler_Metacall(KSignalHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KSignalHandler_WatchSignal(KSignalHandler* self, int signal) {
    self->watchSignal(static_cast<int>(signal));
}

KSignalHandler* KSignalHandler_Self() {
    return KSignalHandler::self();
}

void KSignalHandler_SignalReceived(KSignalHandler* self, int signal) {
    self->signalReceived(static_cast<int>(signal));
}

void KSignalHandler_Connect_SignalReceived(KSignalHandler* self, intptr_t slot) {
    void (*slotFunc)(KSignalHandler*, int) = reinterpret_cast<void (*)(KSignalHandler*, int)>(slot);
    KSignalHandler::connect(self, &KSignalHandler::signalReceived, [self, slotFunc](int signal) {
        int sigval1 = signal;
        slotFunc(self, sigval1);
    });
}

void KSignalHandler_Delete(KSignalHandler* self) {
    delete self;
}
