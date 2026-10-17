#include <QAbstract3DAxis>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QValue3DAxis>
#include <QValue3DAxisFormatter>
#include <qvalue3daxis.h>
#include "libqvalue3daxis.h"
#include "libqvalue3daxis.hxx"

QValue3DAxis* QValue3DAxis_new() {
    return new VirtualQValue3DAxis();
}

QValue3DAxis* QValue3DAxis_new2(QObject* parent) {
    return new VirtualQValue3DAxis(parent);
}

QMetaObject* QValue3DAxis_MetaObject(const QValue3DAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QValue3DAxis_Metacast(QValue3DAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QValue3DAxis_Metacall(QValue3DAxis* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QValue3DAxis_Tr(const char* s) {
    auto _ret = QValue3DAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QValue3DAxis_SetSegmentCount(QValue3DAxis* self, int count) {
    self->setSegmentCount(static_cast<int>(count));
}

int QValue3DAxis_SegmentCount(const QValue3DAxis* self) {
    return self->segmentCount();
}

void QValue3DAxis_SetSubSegmentCount(QValue3DAxis* self, int count) {
    self->setSubSegmentCount(static_cast<int>(count));
}

int QValue3DAxis_SubSegmentCount(const QValue3DAxis* self) {
    return self->subSegmentCount();
}

void QValue3DAxis_SetLabelFormat(QValue3DAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setLabelFormat(format_QString);
}

libqt_string QValue3DAxis_LabelFormat(const QValue3DAxis* self) {
    auto _ret = self->labelFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QValue3DAxis_SetFormatter(QValue3DAxis* self, QValue3DAxisFormatter* formatter) {
    self->setFormatter(formatter);
}

QValue3DAxisFormatter* QValue3DAxis_Formatter(const QValue3DAxis* self) {
    return self->formatter();
}

void QValue3DAxis_SetReversed(QValue3DAxis* self, bool enable) {
    self->setReversed(enable);
}

bool QValue3DAxis_Reversed(const QValue3DAxis* self) {
    return self->reversed();
}

void QValue3DAxis_SegmentCountChanged(QValue3DAxis* self, int count) {
    self->segmentCountChanged(static_cast<int>(count));
}

void QValue3DAxis_Connect_SegmentCountChanged(QValue3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QValue3DAxis*, int) = reinterpret_cast<void (*)(QValue3DAxis*, int)>(slot);
    QValue3DAxis::connect(self,
                          static_cast<void (QValue3DAxis::*)(int)>(&QValue3DAxis::segmentCountChanged),
                          [self, slotFunc](int count) {
                              int sigval1 = count;
                              slotFunc(self, sigval1);
                          });
}

void QValue3DAxis_SubSegmentCountChanged(QValue3DAxis* self, int count) {
    self->subSegmentCountChanged(static_cast<int>(count));
}

void QValue3DAxis_Connect_SubSegmentCountChanged(QValue3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QValue3DAxis*, int) = reinterpret_cast<void (*)(QValue3DAxis*, int)>(slot);
    QValue3DAxis::connect(self,
                          static_cast<void (QValue3DAxis::*)(int)>(&QValue3DAxis::subSegmentCountChanged),
                          [self, slotFunc](int count) {
                              int sigval1 = count;
                              slotFunc(self, sigval1);
                          });
}

void QValue3DAxis_LabelFormatChanged(QValue3DAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->labelFormatChanged(format_QString);
}

void QValue3DAxis_Connect_LabelFormatChanged(QValue3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QValue3DAxis*, const char*) = reinterpret_cast<void (*)(QValue3DAxis*, const char*)>(slot);
    QValue3DAxis::connect(self,
                          static_cast<void (QValue3DAxis::*)(const QString&)>(&QValue3DAxis::labelFormatChanged),
                          [self, slotFunc](const QString& format) {
                              const auto format_ret = format;
                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                              QByteArray format_b = format_ret.toUtf8();
                              auto format_str_len = format_b.length();
                              const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
                              memcpy((void*)format_str, format_b.data(), format_str_len);
                              ((char*)format_str)[format_str_len] = '\0';
                              const char* sigval1 = format_str;
                              slotFunc(self, sigval1);
                              libqt_free(format_str);
                          });
}

void QValue3DAxis_FormatterChanged(QValue3DAxis* self, QValue3DAxisFormatter* formatter) {
    self->formatterChanged(formatter);
}

void QValue3DAxis_Connect_FormatterChanged(QValue3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QValue3DAxis*, QValue3DAxisFormatter*) = reinterpret_cast<void (*)(QValue3DAxis*, QValue3DAxisFormatter*)>(slot);
    QValue3DAxis::connect(self,
                          static_cast<void (QValue3DAxis::*)(QValue3DAxisFormatter*)>(&QValue3DAxis::formatterChanged),
                          [self, slotFunc](QValue3DAxisFormatter* formatter) {
                              QValue3DAxisFormatter* sigval1 = formatter;
                              slotFunc(self, sigval1);
                          });
}

void QValue3DAxis_ReversedChanged(QValue3DAxis* self, bool enable) {
    self->reversedChanged(enable);
}

void QValue3DAxis_Connect_ReversedChanged(QValue3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QValue3DAxis*, bool) = reinterpret_cast<void (*)(QValue3DAxis*, bool)>(slot);
    QValue3DAxis::connect(self,
                          static_cast<void (QValue3DAxis::*)(bool)>(&QValue3DAxis::reversedChanged),
                          [self, slotFunc](bool enable) {
                              bool sigval1 = enable;
                              slotFunc(self, sigval1);
                          });
}

libqt_string QValue3DAxis_Tr2(const char* s, const char* c) {
    auto _ret = QValue3DAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QValue3DAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QValue3DAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QValue3DAxis_SuperMetaObject(const QValue3DAxis* self) {
    return (QMetaObject*)self->QValue3DAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnMetaObject(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = const_cast<VirtualQValue3DAxis*>(dynamic_cast<const VirtualQValue3DAxis*>(self)))
        vqvalue3daxis->qvalue3daxis_metaobject_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QValue3DAxis_SuperMetacast(QValue3DAxis* self, const char* param1) {
    return self->QValue3DAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnMetacast(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_metacast_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QValue3DAxis_SuperMetacall(QValue3DAxis* self, int param1, int param2, void** param3) {
    return self->QValue3DAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnMetacall(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_metacall_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QValue3DAxis_Event(QValue3DAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QValue3DAxis_SuperEvent(QValue3DAxis* self, QEvent* event) {
    return self->QValue3DAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnEvent(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_event_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QValue3DAxis_EventFilter(QValue3DAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QValue3DAxis_SuperEventFilter(QValue3DAxis* self, QObject* watched, QEvent* event) {
    return self->QValue3DAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnEventFilter(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_eventfilter_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxis_TimerEvent(QValue3DAxis* self, QTimerEvent* event) {
    auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self);
    if (vqvalue3daxis) {
        vqvalue3daxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxis_SuperTimerEvent(QValue3DAxis* self, QTimerEvent* event) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self)) {
        vqvalue3daxis->QValue3DAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnTimerEvent(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_timerevent_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxis_ChildEvent(QValue3DAxis* self, QChildEvent* event) {
    auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self);
    if (vqvalue3daxis) {
        vqvalue3daxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxis_SuperChildEvent(QValue3DAxis* self, QChildEvent* event) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self)) {
        vqvalue3daxis->QValue3DAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnChildEvent(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_childevent_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxis_CustomEvent(QValue3DAxis* self, QEvent* event) {
    auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self);
    if (vqvalue3daxis) {
        vqvalue3daxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxis_SuperCustomEvent(QValue3DAxis* self, QEvent* event) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self)) {
        vqvalue3daxis->QValue3DAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnCustomEvent(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_customevent_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxis_ConnectNotify(QValue3DAxis* self, const QMetaMethod* signal) {
    auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self);
    if (vqvalue3daxis) {
        vqvalue3daxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxis_SuperConnectNotify(QValue3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self)) {
        vqvalue3daxis->QValue3DAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValue3DAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnConnectNotify(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_connectnotify_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxis_DisconnectNotify(QValue3DAxis* self, const QMetaMethod* signal) {
    auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self);
    if (vqvalue3daxis) {
        vqvalue3daxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxis_SuperDisconnectNotify(QValue3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self)) {
        vqvalue3daxis->QValue3DAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValue3DAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxis_OnDisconnectNotify(QValue3DAxis* self, intptr_t slot) {
    if (auto* vqvalue3daxis = dynamic_cast<VirtualQValue3DAxis*>(self))
        vqvalue3daxis->qvalue3daxis_disconnectnotify_callback = reinterpret_cast<VirtualQValue3DAxis::QValue3DAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QValue3DAxis_Sender(const QValue3DAxis* self) {
    if (auto* vqvalue3daxis = const_cast<VirtualQValue3DAxis*>(dynamic_cast<const VirtualQValue3DAxis*>(self))) {
        return vqvalue3daxis->VirtualQValue3DAxis::sender();
    } else
        qFatal("Error: Protected method QValue3DAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QValue3DAxis_SenderSignalIndex(const QValue3DAxis* self) {
    if (auto* vqvalue3daxis = const_cast<VirtualQValue3DAxis*>(dynamic_cast<const VirtualQValue3DAxis*>(self))) {
        return vqvalue3daxis->VirtualQValue3DAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QValue3DAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QValue3DAxis_Receivers(const QValue3DAxis* self, const char* signal) {
    if (auto* vqvalue3daxis = const_cast<VirtualQValue3DAxis*>(dynamic_cast<const VirtualQValue3DAxis*>(self))) {
        return vqvalue3daxis->VirtualQValue3DAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QValue3DAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValue3DAxis_IsSignalConnected(const QValue3DAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxis = const_cast<VirtualQValue3DAxis*>(dynamic_cast<const VirtualQValue3DAxis*>(self))) {
        return vqvalue3daxis->VirtualQValue3DAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QValue3DAxis::isSignalConnected called without a directly constructed type");
}

void QValue3DAxis_Delete(QValue3DAxis* self) {
    delete self;
}
