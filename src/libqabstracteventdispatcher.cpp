#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfoV2
#include <QAbstractEventDispatcherV2>
#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <QDeadlineTimer>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qabstracteventdispatcher.h>
#include "libqabstracteventdispatcher.h"
#include "libqabstracteventdispatcher.hxx"

QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractEventDispatcher_Metacast(QAbstractEventDispatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractEventDispatcher_Metacall(QAbstractEventDispatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractEventDispatcher_Tr(const char* s) {
    QString _ret = QAbstractEventDispatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance() {
    return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags) {
    return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
    self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
    self->unregisterSocketNotifier(notifier);
}

int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object) {
    return self->registerTimer(static_cast<qint64>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object) {
    self->registerTimer(static_cast<int>(timerId), static_cast<qint64>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId) {
    return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
    return self->unregisterTimers(object);
}

libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object) {
    QList<QAbstractEventDispatcher::TimerInfo> _ret = self->registeredTimers(object);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractEventDispatcher__TimerInfo** _arr = static_cast<QAbstractEventDispatcher__TimerInfo**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfo*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAbstractEventDispatcher::TimerInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId) {
    return self->remainingTime(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_UnregisterTimer2(QAbstractEventDispatcher* self, int timerId) {
    return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ QAbstractEventDispatcher_TimersForObject(const QAbstractEventDispatcher* self, QObject* object) {
    QList<QAbstractEventDispatcher::TimerInfoV2> _ret = self->timersForObject(object);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractEventDispatcher__TimerInfoV2** _arr = static_cast<QAbstractEventDispatcher__TimerInfoV2**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfoV2*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAbstractEventDispatcher::TimerInfoV2(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self) {
    self->wakeUp();
}

void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self) {
    self->interrupt();
}

void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self) {
    self->startingUp();
}

void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self) {
    self->closingDown();
}

void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
    self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
    self->removeNativeEventFilter(filterObj);
}

bool QAbstractEventDispatcher_FilterNativeEvent(QAbstractEventDispatcher* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    return self->filterNativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self) {
    self->aboutToBlock();
}

void QAbstractEventDispatcher_Connect_AboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
    void (*slotFunc)(QAbstractEventDispatcher*) = reinterpret_cast<void (*)(QAbstractEventDispatcher*)>(slot);
    QAbstractEventDispatcher::connect(self, &QAbstractEventDispatcher::aboutToBlock, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self) {
    self->awake();
}

void QAbstractEventDispatcher_Connect_Awake(QAbstractEventDispatcher* self, intptr_t slot) {
    void (*slotFunc)(QAbstractEventDispatcher*) = reinterpret_cast<void (*)(QAbstractEventDispatcher*)>(slot);
    QAbstractEventDispatcher::connect(self, &QAbstractEventDispatcher::awake, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAbstractEventDispatcher_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractEventDispatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread) {
    return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self) {
    delete self;
}

QMetaObject* QAbstractEventDispatcherV2_MetaObject(const QAbstractEventDispatcherV2* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractEventDispatcherV2_Metacast(QAbstractEventDispatcherV2* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractEventDispatcherV2_Metacall(QAbstractEventDispatcherV2* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractEventDispatcherV2_Tr(const char* s) {
    QString _ret = QAbstractEventDispatcherV2::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractEventDispatcherV2_UnregisterTimer(QAbstractEventDispatcherV2* self, int timerId) {
    return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ QAbstractEventDispatcherV2_TimersForObject(const QAbstractEventDispatcherV2* self, QObject* object) {
    QList<QAbstractEventDispatcher::TimerInfoV2> _ret = self->timersForObject(object);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractEventDispatcher__TimerInfoV2** _arr = static_cast<QAbstractEventDispatcher__TimerInfoV2**>(malloc(sizeof(QAbstractEventDispatcher__TimerInfoV2*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAbstractEventDispatcher::TimerInfoV2(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QAbstractEventDispatcherV2_ProcessEventsWithDeadline(QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline) {
    return self->processEventsWithDeadline(static_cast<QEventLoop::ProcessEventsFlags>(flags), *deadline);
}

libqt_string QAbstractEventDispatcherV2_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractEventDispatcherV2::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractEventDispatcherV2_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractEventDispatcherV2::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractEventDispatcherV2_Delete(QAbstractEventDispatcherV2* self) {
    delete self;
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(const QAbstractEventDispatcher__TimerInfo* other) {
    return new QAbstractEventDispatcher::TimerInfo(*other);
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new2(QAbstractEventDispatcher__TimerInfo* other) {
    return new QAbstractEventDispatcher::TimerInfo(std::move(*other));
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new3(int id, int i, int t) {
    return new QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new4(const QAbstractEventDispatcher__TimerInfo* param1) {
    return new QAbstractEventDispatcher::TimerInfo(*param1);
}

void QAbstractEventDispatcher__TimerInfo_CopyAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other) {
    *self = *other;
}

void QAbstractEventDispatcher__TimerInfo_MoveAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other) {
    *self = std::move(*other);
}

void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self) {
    delete self;
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new(const QAbstractEventDispatcher__TimerInfoV2* param1) {
    return new QAbstractEventDispatcher::TimerInfoV2(*param1);
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new2() {
    return new QAbstractEventDispatcher::TimerInfoV2();
}

void QAbstractEventDispatcher__TimerInfoV2_OperatorAssign(QAbstractEventDispatcher__TimerInfoV2* self, const QAbstractEventDispatcher__TimerInfoV2* param1) {
    self->operator=(*param1);
}

void QAbstractEventDispatcher__TimerInfoV2_Delete(QAbstractEventDispatcher__TimerInfoV2* self) {
    delete self;
}
