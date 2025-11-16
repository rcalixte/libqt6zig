#include <KIdleTime>
#include <QHash>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kidletime.h>
#include "libkidletime.h"
#include "libkidletime.hxx"

QMetaObject* KIdleTime_MetaObject(const KIdleTime* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIdleTime_Metacast(KIdleTime* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIdleTime_Metacall(KIdleTime* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIdleTime_Tr(const char* s) {
    QString _ret = KIdleTime::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIdleTime* KIdleTime_Instance() {
    return KIdleTime::instance();
}

int KIdleTime_IdleTime(const KIdleTime* self) {
    return self->idleTime();
}

libqt_map /* of int to int */ KIdleTime_IdleTimeouts(const KIdleTime* self) {
    QHash<int, int> _ret = self->idleTimeouts();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    int* _varr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = _itr->second;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KIdleTime_SimulateUserActivity(KIdleTime* self) {
    self->simulateUserActivity();
}

int KIdleTime_AddIdleTimeout(KIdleTime* self, int msec) {
    return self->addIdleTimeout(static_cast<int>(msec));
}

void KIdleTime_RemoveIdleTimeout(KIdleTime* self, int identifier) {
    self->removeIdleTimeout(static_cast<int>(identifier));
}

void KIdleTime_RemoveAllIdleTimeouts(KIdleTime* self) {
    self->removeAllIdleTimeouts();
}

void KIdleTime_CatchNextResumeEvent(KIdleTime* self) {
    self->catchNextResumeEvent();
}

void KIdleTime_StopCatchingResumeEvent(KIdleTime* self) {
    self->stopCatchingResumeEvent();
}

void KIdleTime_ResumingFromIdle(KIdleTime* self) {
    self->resumingFromIdle();
}

void KIdleTime_Connect_ResumingFromIdle(KIdleTime* self, intptr_t slot) {
    void (*slotFunc)(KIdleTime*) = reinterpret_cast<void (*)(KIdleTime*)>(slot);
    KIdleTime::connect(self, &KIdleTime::resumingFromIdle, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KIdleTime_TimeoutReached(KIdleTime* self, int identifier, int msec) {
    self->timeoutReached(static_cast<int>(identifier), static_cast<int>(msec));
}

void KIdleTime_Connect_TimeoutReached(KIdleTime* self, intptr_t slot) {
    void (*slotFunc)(KIdleTime*, int, int) = reinterpret_cast<void (*)(KIdleTime*, int, int)>(slot);
    KIdleTime::connect(self, &KIdleTime::timeoutReached, [self, slotFunc](int identifier, int msec) {
        int sigval1 = identifier;
        int sigval2 = msec;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KIdleTime_Tr2(const char* s, const char* c) {
    QString _ret = KIdleTime::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIdleTime_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIdleTime::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIdleTime_Delete(KIdleTime* self) {
    delete self;
}
