#include <QMetaObject>
#include <QCoreApplication>
#include "libqt6zigthreading.h"

// Direct
void Threading_ExecNow(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, Qt::DirectConnection);
}

// Auto
void Threading_Exec(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, Qt::AutoConnection);
}

void Threading_ExecUnique(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::UniqueConnection));
}

void Threading_ExecOnce(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection));
}

// Queued
void Threading_Async(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, Qt::QueuedConnection);
}

void Threading_AsyncUnique(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::UniqueConnection));
}

void Threading_AsyncOnce(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::SingleShotConnection));
}

void Threading_AsyncUniqueOnce(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::UniqueConnection | Qt::SingleShotConnection));
}

// Blocking
void Threading_Sync(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, Qt::BlockingQueuedConnection);
}

void Threading_SyncUnique(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::UniqueConnection));
}

void Threading_SyncOnce(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::SingleShotConnection));
}

void Threading_SyncUniqueOnce(void* self, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(self); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::UniqueConnection | Qt::SingleShotConnection));
}
