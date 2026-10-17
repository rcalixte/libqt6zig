#include <QAbstract3DAxis>
#include <QCategory3DAxis>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qcategory3daxis.h>
#include "libqcategory3daxis.h"
#include "libqcategory3daxis.hxx"

QCategory3DAxis* QCategory3DAxis_new() {
    return new VirtualQCategory3DAxis();
}

QCategory3DAxis* QCategory3DAxis_new2(QObject* parent) {
    return new VirtualQCategory3DAxis(parent);
}

QMetaObject* QCategory3DAxis_MetaObject(const QCategory3DAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCategory3DAxis_Metacast(QCategory3DAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCategory3DAxis_Metacall(QCategory3DAxis* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCategory3DAxis_Tr(const char* s) {
    auto _ret = QCategory3DAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCategory3DAxis_SetLabels(QCategory3DAxis* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setLabels(labels_QList);
}

libqt_list /* of libqt_string */ QCategory3DAxis_Labels(const QCategory3DAxis* self) {
    QList<QString> _ret = self->labels();
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

void QCategory3DAxis_LabelsChanged(QCategory3DAxis* self) {
    self->labelsChanged();
}

void QCategory3DAxis_Connect_LabelsChanged(QCategory3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategory3DAxis*) = reinterpret_cast<void (*)(QCategory3DAxis*)>(slot);
    QCategory3DAxis::connect(self,
                             static_cast<void (QCategory3DAxis::*)()>(&QCategory3DAxis::labelsChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

libqt_string QCategory3DAxis_Tr2(const char* s, const char* c) {
    auto _ret = QCategory3DAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCategory3DAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCategory3DAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCategory3DAxis_SuperMetaObject(const QCategory3DAxis* self) {
    return (QMetaObject*)self->QCategory3DAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnMetaObject(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = const_cast<VirtualQCategory3DAxis*>(dynamic_cast<const VirtualQCategory3DAxis*>(self)))
        vqcategory3daxis->qcategory3daxis_metaobject_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCategory3DAxis_SuperMetacast(QCategory3DAxis* self, const char* param1) {
    return self->QCategory3DAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnMetacast(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_metacast_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCategory3DAxis_SuperMetacall(QCategory3DAxis* self, int param1, int param2, void** param3) {
    return self->QCategory3DAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnMetacall(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_metacall_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QCategory3DAxis_Event(QCategory3DAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCategory3DAxis_SuperEvent(QCategory3DAxis* self, QEvent* event) {
    return self->QCategory3DAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnEvent(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_event_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCategory3DAxis_EventFilter(QCategory3DAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCategory3DAxis_SuperEventFilter(QCategory3DAxis* self, QObject* watched, QEvent* event) {
    return self->QCategory3DAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnEventFilter(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_eventfilter_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCategory3DAxis_TimerEvent(QCategory3DAxis* self, QTimerEvent* event) {
    auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self);
    if (vqcategory3daxis) {
        vqcategory3daxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategory3DAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategory3DAxis_SuperTimerEvent(QCategory3DAxis* self, QTimerEvent* event) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self)) {
        vqcategory3daxis->QCategory3DAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategory3DAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnTimerEvent(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_timerevent_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategory3DAxis_ChildEvent(QCategory3DAxis* self, QChildEvent* event) {
    auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self);
    if (vqcategory3daxis) {
        vqcategory3daxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategory3DAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategory3DAxis_SuperChildEvent(QCategory3DAxis* self, QChildEvent* event) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self)) {
        vqcategory3daxis->QCategory3DAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategory3DAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnChildEvent(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_childevent_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategory3DAxis_CustomEvent(QCategory3DAxis* self, QEvent* event) {
    auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self);
    if (vqcategory3daxis) {
        vqcategory3daxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategory3DAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategory3DAxis_SuperCustomEvent(QCategory3DAxis* self, QEvent* event) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self)) {
        vqcategory3daxis->QCategory3DAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategory3DAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnCustomEvent(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_customevent_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategory3DAxis_ConnectNotify(QCategory3DAxis* self, const QMetaMethod* signal) {
    auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self);
    if (vqcategory3daxis) {
        vqcategory3daxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCategory3DAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategory3DAxis_SuperConnectNotify(QCategory3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self)) {
        vqcategory3daxis->QCategory3DAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCategory3DAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnConnectNotify(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_connectnotify_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCategory3DAxis_DisconnectNotify(QCategory3DAxis* self, const QMetaMethod* signal) {
    auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self);
    if (vqcategory3daxis) {
        vqcategory3daxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCategory3DAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategory3DAxis_SuperDisconnectNotify(QCategory3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self)) {
        vqcategory3daxis->QCategory3DAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCategory3DAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategory3DAxis_OnDisconnectNotify(QCategory3DAxis* self, intptr_t slot) {
    if (auto* vqcategory3daxis = dynamic_cast<VirtualQCategory3DAxis*>(self))
        vqcategory3daxis->qcategory3daxis_disconnectnotify_callback = reinterpret_cast<VirtualQCategory3DAxis::QCategory3DAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCategory3DAxis_Sender(const QCategory3DAxis* self) {
    if (auto* vqcategory3daxis = const_cast<VirtualQCategory3DAxis*>(dynamic_cast<const VirtualQCategory3DAxis*>(self))) {
        return vqcategory3daxis->VirtualQCategory3DAxis::sender();
    } else
        qFatal("Error: Protected method QCategory3DAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCategory3DAxis_SenderSignalIndex(const QCategory3DAxis* self) {
    if (auto* vqcategory3daxis = const_cast<VirtualQCategory3DAxis*>(dynamic_cast<const VirtualQCategory3DAxis*>(self))) {
        return vqcategory3daxis->VirtualQCategory3DAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCategory3DAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCategory3DAxis_Receivers(const QCategory3DAxis* self, const char* signal) {
    if (auto* vqcategory3daxis = const_cast<VirtualQCategory3DAxis*>(dynamic_cast<const VirtualQCategory3DAxis*>(self))) {
        return vqcategory3daxis->VirtualQCategory3DAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QCategory3DAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCategory3DAxis_IsSignalConnected(const QCategory3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategory3daxis = const_cast<VirtualQCategory3DAxis*>(dynamic_cast<const VirtualQCategory3DAxis*>(self))) {
        return vqcategory3daxis->VirtualQCategory3DAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCategory3DAxis::isSignalConnected called without a directly constructed type");
}

void QCategory3DAxis_Delete(QCategory3DAxis* self) {
    delete self;
}
