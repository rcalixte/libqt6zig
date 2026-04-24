#include <QMetaObject>
#include <QCoreApplication>
#include "libqt6zigthreading.h"

// Direct
void Threading_ExecNow(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, Qt::DirectConnection);
}

// Auto
void Threading_Exec(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, Qt::AutoConnection);
}

void Threading_ExecUnique(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::UniqueConnection));
}

void Threading_ExecOnce(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection));
}

// Queued
void Threading_Async(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, Qt::QueuedConnection);
}

void Threading_AsyncUnique(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::UniqueConnection));
}

void Threading_AsyncOnce(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::SingleShotConnection));
}

void Threading_AsyncUniqueOnce(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::QueuedConnection | Qt::UniqueConnection | Qt::SingleShotConnection));
}

// Blocking
void Threading_Sync(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, Qt::BlockingQueuedConnection);
}

void Threading_SyncUnique(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::UniqueConnection));
}

void Threading_SyncOnce(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::SingleShotConnection));
}

void Threading_SyncUniqueOnce(void* context, intptr_t cb) {
    void (*func)(void*) = reinterpret_cast<void (*)(void*)>(cb);
    QMetaObject::invokeMethod(qApp, [=] { func(context); }, static_cast<Qt::ConnectionType>(Qt::BlockingQueuedConnection | Qt::UniqueConnection | Qt::SingleShotConnection));
}
