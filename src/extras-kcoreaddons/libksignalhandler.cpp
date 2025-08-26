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

libqt_string KSignalHandler_Tr(const char* s) {
    QString _ret = KSignalHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string KSignalHandler_Tr2(const char* s, const char* c) {
    QString _ret = KSignalHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSignalHandler_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSignalHandler::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSignalHandler_Delete(KSignalHandler* self) {
    delete self;
}
