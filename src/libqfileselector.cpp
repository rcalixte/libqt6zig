#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qfileselector.h>
#include "libqfileselector.h"
#include "libqfileselector.hxx"

QFileSelector* QFileSelector_new() {
    return new VirtualQFileSelector();
}

QFileSelector* QFileSelector_new2(QObject* parent) {
    return new VirtualQFileSelector(parent);
}

QMetaObject* QFileSelector_MetaObject(const QFileSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileSelector_Metacast(QFileSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileSelector_Metacall(QFileSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFileSelector_Tr(const char* s) {
    auto _ret = QFileSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileSelector_Select(const QFileSelector* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    auto _ret = self->select(filePath_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileSelector_Select2(const QFileSelector* self, const QUrl* filePath) {
    return new QUrl(self->select(*filePath));
}

libqt_list /* of libqt_string */ QFileSelector_ExtraSelectors(const QFileSelector* self) {
    QList<QString> _ret = self->extraSelectors();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileSelector_SetExtraSelectors(QFileSelector* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setExtraSelectors(list_QList);
}

libqt_list /* of libqt_string */ QFileSelector_AllSelectors(const QFileSelector* self) {
    QList<QString> _ret = self->allSelectors();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QFileSelector_Tr2(const char* s, const char* c) {
    auto _ret = QFileSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFileSelector::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QFileSelector_SuperMetaObject(const QFileSelector* self) {
    return (QMetaObject*)self->QFileSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnMetaObject(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self)))
        vqfileselector->qfileselector_metaobject_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFileSelector_SuperMetacast(QFileSelector* self, const char* param1) {
    return self->QFileSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnMetacast(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_metacast_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFileSelector_SuperMetacall(QFileSelector* self, int param1, int param2, void** param3) {
    return self->QFileSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnMetacall(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_metacall_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QFileSelector_Event(QFileSelector* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QFileSelector_SuperEvent(QFileSelector* self, QEvent* event) {
    return self->QFileSelector::event(event);
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_event_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFileSelector_EventFilter(QFileSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFileSelector_SuperEventFilter(QFileSelector* self, QObject* watched, QEvent* event) {
    return self->QFileSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnEventFilter(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_eventfilter_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFileSelector_TimerEvent(QFileSelector* self, QTimerEvent* event) {
    auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self);
    if (vqfileselector) {
        vqfileselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSelector_SuperTimerEvent(QFileSelector* self, QTimerEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->QFileSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnTimerEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_timerevent_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSelector_ChildEvent(QFileSelector* self, QChildEvent* event) {
    auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self);
    if (vqfileselector) {
        vqfileselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSelector_SuperChildEvent(QFileSelector* self, QChildEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->QFileSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnChildEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_childevent_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSelector_CustomEvent(QFileSelector* self, QEvent* event) {
    auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self);
    if (vqfileselector) {
        vqfileselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSelector_SuperCustomEvent(QFileSelector* self, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->QFileSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnCustomEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_customevent_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSelector_ConnectNotify(QFileSelector* self, const QMetaMethod* signal) {
    auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self);
    if (vqfileselector) {
        vqfileselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSelector_SuperConnectNotify(QFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->QFileSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnConnectNotify(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_connectnotify_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFileSelector_DisconnectNotify(QFileSelector* self, const QMetaMethod* signal) {
    auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self);
    if (vqfileselector) {
        vqfileselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSelector_SuperDisconnectNotify(QFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->QFileSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnDisconnectNotify(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self))
        vqfileselector->qfileselector_disconnectnotify_callback = reinterpret_cast<VirtualQFileSelector::QFileSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QFileSelector_Sender(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->VirtualQFileSelector::sender();
    } else
        qFatal("Error: Protected method QFileSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSelector_SenderSignalIndex(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->VirtualQFileSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFileSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSelector_Receivers(const QFileSelector* self, const char* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->VirtualQFileSelector::receivers(signal);
    } else
        qFatal("Error: Protected method QFileSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSelector_IsSignalConnected(const QFileSelector* self, const QMetaMethod* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->VirtualQFileSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFileSelector::isSignalConnected called without a directly constructed type");
}

void QFileSelector_Delete(QFileSelector* self) {
    delete self;
}
