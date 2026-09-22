#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QVirtualKeyboardTrace>
#include <qvirtualkeyboardtrace.h>
#include "libqvirtualkeyboardtrace.h"
#include "libqvirtualkeyboardtrace.hxx"

QVirtualKeyboardTrace* QVirtualKeyboardTrace_new() {
    return new VirtualQVirtualKeyboardTrace();
}

QVirtualKeyboardTrace* QVirtualKeyboardTrace_new2(QObject* parent) {
    return new VirtualQVirtualKeyboardTrace(parent);
}

QMetaObject* QVirtualKeyboardTrace_MetaObject(const QVirtualKeyboardTrace* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardTrace_Metacast(QVirtualKeyboardTrace* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardTrace_Metacall(QVirtualKeyboardTrace* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardTrace_Tr(const char* s) {
    auto _ret = QVirtualKeyboardTrace::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QVirtualKeyboardTrace_TraceId(const QVirtualKeyboardTrace* self) {
    return self->traceId();
}

void QVirtualKeyboardTrace_SetTraceId(QVirtualKeyboardTrace* self, int id) {
    self->setTraceId(static_cast<int>(id));
}

libqt_list /* of libqt_string */ QVirtualKeyboardTrace_Channels(const QVirtualKeyboardTrace* self) {
    QList<QString> _ret = self->channels();
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

void QVirtualKeyboardTrace_SetChannels(QVirtualKeyboardTrace* self, const libqt_list /* of libqt_string */ channels) {
    QList<QString> channels_QList;
    channels_QList.reserve(channels.len);
    libqt_string* channels_arr = static_cast<libqt_string*>(channels.data);
    for (size_t i = 0; i < channels.len; ++i) {
        QString channels_arr_i_QString = QString::fromUtf8(channels_arr[i].data, channels_arr[i].len);
        channels_QList.push_back(channels_arr_i_QString);
    }
    self->setChannels(channels_QList);
}

int QVirtualKeyboardTrace_Length(const QVirtualKeyboardTrace* self) {
    return self->length();
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points(const QVirtualKeyboardTrace* self) {
    QList<QVariant> _ret = self->points();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QVirtualKeyboardTrace_AddPoint(QVirtualKeyboardTrace* self, const QPointF* point) {
    return self->addPoint(*point);
}

void QVirtualKeyboardTrace_SetChannelData(QVirtualKeyboardTrace* self, const libqt_string channel, int index, const QVariant* data) {
    QString channel_QString = QString::fromUtf8(channel.data, channel.len);
    self->setChannelData(channel_QString, static_cast<int>(index), *data);
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData(const QVirtualKeyboardTrace* self, const libqt_string channel) {
    QString channel_QString = QString::fromUtf8(channel.data, channel.len);
    QList<QVariant> _ret = self->channelData(channel_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QVirtualKeyboardTrace_IsFinal(const QVirtualKeyboardTrace* self) {
    return self->isFinal();
}

void QVirtualKeyboardTrace_SetFinal(QVirtualKeyboardTrace* self, bool final) {
    self->setFinal(final);
}

bool QVirtualKeyboardTrace_IsCanceled(const QVirtualKeyboardTrace* self) {
    return self->isCanceled();
}

void QVirtualKeyboardTrace_SetCanceled(QVirtualKeyboardTrace* self, bool canceled) {
    self->setCanceled(canceled);
}

double QVirtualKeyboardTrace_Opacity(const QVirtualKeyboardTrace* self) {
    return static_cast<double>(self->opacity());
}

void QVirtualKeyboardTrace_SetOpacity(QVirtualKeyboardTrace* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

void QVirtualKeyboardTrace_StartHideTimer(QVirtualKeyboardTrace* self, int delayMs) {
    self->startHideTimer(static_cast<int>(delayMs));
}

void QVirtualKeyboardTrace_TimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->timerEvent(event);
    }
}

void QVirtualKeyboardTrace_TraceIdChanged(QVirtualKeyboardTrace* self, int traceId) {
    self->traceIdChanged(static_cast<int>(traceId));
}

void QVirtualKeyboardTrace_Connect_TraceIdChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*, int) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*, int)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::traceIdChanged, [self, slotFunc](int traceId) {
        int sigval1 = traceId;
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardTrace_ChannelsChanged(QVirtualKeyboardTrace* self) {
    self->channelsChanged();
}

void QVirtualKeyboardTrace_Connect_ChannelsChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::channelsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardTrace_LengthChanged(QVirtualKeyboardTrace* self, int length) {
    self->lengthChanged(static_cast<int>(length));
}

void QVirtualKeyboardTrace_Connect_LengthChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*, int) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*, int)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::lengthChanged, [self, slotFunc](int length) {
        int sigval1 = length;
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardTrace_FinalChanged(QVirtualKeyboardTrace* self, bool isFinal) {
    self->finalChanged(isFinal);
}

void QVirtualKeyboardTrace_Connect_FinalChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*, bool) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*, bool)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::finalChanged, [self, slotFunc](bool isFinal) {
        bool sigval1 = isFinal;
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardTrace_CanceledChanged(QVirtualKeyboardTrace* self, bool isCanceled) {
    self->canceledChanged(isCanceled);
}

void QVirtualKeyboardTrace_Connect_CanceledChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*, bool) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*, bool)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::canceledChanged, [self, slotFunc](bool isCanceled) {
        bool sigval1 = isCanceled;
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardTrace_OpacityChanged(QVirtualKeyboardTrace* self, double opacity) {
    self->opacityChanged(static_cast<qreal>(opacity));
}

void QVirtualKeyboardTrace_Connect_OpacityChanged(QVirtualKeyboardTrace* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardTrace*, double) = reinterpret_cast<void (*)(QVirtualKeyboardTrace*, double)>(slot);
    QVirtualKeyboardTrace::connect(self, &QVirtualKeyboardTrace::opacityChanged, [self, slotFunc](qreal opacity) {
        double sigval1 = static_cast<double>(opacity);
        slotFunc(self, sigval1);
    });
}

libqt_string QVirtualKeyboardTrace_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardTrace::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardTrace_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardTrace::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points1(const QVirtualKeyboardTrace* self, int pos) {
    QList<QVariant> _ret = self->points(static_cast<int>(pos));
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_Points2(const QVirtualKeyboardTrace* self, int pos, int count) {
    QList<QVariant> _ret = self->points(static_cast<int>(pos), static_cast<int>(count));
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData2(const QVirtualKeyboardTrace* self, const libqt_string channel, int pos) {
    QString channel_QString = QString::fromUtf8(channel.data, channel.len);
    QList<QVariant> _ret = self->channelData(channel_QString, static_cast<int>(pos));
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QVariant* */ QVirtualKeyboardTrace_ChannelData3(const QVirtualKeyboardTrace* self, const libqt_string channel, int pos, int count) {
    QString channel_QString = QString::fromUtf8(channel.data, channel.len);
    QList<QVariant> _ret = self->channelData(channel_QString, static_cast<int>(pos), static_cast<int>(count));
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
QMetaObject* QVirtualKeyboardTrace_SuperMetaObject(const QVirtualKeyboardTrace* self) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_MetaObject_IsBase(true);
        return (QMetaObject*)vqvirtualkeyboardtrace->metaObject();
    } else {
        return (QMetaObject*)self->QVirtualKeyboardTrace::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnMetaObject(const QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_MetaObject_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QVirtualKeyboardTrace_SuperMetacast(QVirtualKeyboardTrace* self, const char* param1) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Metacast_IsBase(true);
        return vqvirtualkeyboardtrace->qt_metacast(param1);
    } else {
        return self->QVirtualKeyboardTrace::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnMetacast(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Metacast_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_Metacast_Callback>(slot));
}

// Base class handler implementation
int QVirtualKeyboardTrace_SuperMetacall(QVirtualKeyboardTrace* self, int param1, int param2, void** param3) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Metacall_IsBase(true);
        return vqvirtualkeyboardtrace->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QVirtualKeyboardTrace::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnMetacall(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Metacall_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_Metacall_Callback>(slot));
}

// Base class handler implementation
void QVirtualKeyboardTrace_SuperTimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_TimerEvent_IsBase(true);
        vqvirtualkeyboardtrace->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnTimerEvent(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_TimerEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardTrace_Event(QVirtualKeyboardTrace* self, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->event(event);
    } else {
        return self->QVirtualKeyboardTrace::event(event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardTrace_SuperEvent(QVirtualKeyboardTrace* self, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Event_IsBase(true);
        return vqvirtualkeyboardtrace->event(event);
    } else {
        return self->QVirtualKeyboardTrace::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnEvent(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Event_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_Event_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardTrace_EventFilter(QVirtualKeyboardTrace* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardTrace::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardTrace_SuperEventFilter(QVirtualKeyboardTrace* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_EventFilter_IsBase(true);
        return vqvirtualkeyboardtrace->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardTrace::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnEventFilter(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_EventFilter_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardTrace_ChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardTrace_SuperChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_ChildEvent_IsBase(true);
        vqvirtualkeyboardtrace->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnChildEvent(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_ChildEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardTrace_CustomEvent(QVirtualKeyboardTrace* self, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardTrace_SuperCustomEvent(QVirtualKeyboardTrace* self, QEvent* event) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_CustomEvent_IsBase(true);
        vqvirtualkeyboardtrace->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnCustomEvent(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_CustomEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardTrace_ConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardTrace_SuperConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_ConnectNotify_IsBase(true);
        vqvirtualkeyboardtrace->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnConnectNotify(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_ConnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardTrace_DisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardTrace_SuperDisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_DisconnectNotify_IsBase(true);
        vqvirtualkeyboardtrace->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardTrace*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnDisconnectNotify(QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = dynamic_cast<VirtualQVirtualKeyboardTrace*>(self);
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_DisconnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QVirtualKeyboardTrace_Sender(const QVirtualKeyboardTrace* self) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->sender();
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVirtualKeyboardTrace_SuperSender(const QVirtualKeyboardTrace* self) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Sender_IsBase(true);
        return vqvirtualkeyboardtrace->sender();
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnSender(const QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Sender_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_Sender_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardTrace_SenderSignalIndex(const QVirtualKeyboardTrace* self) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVirtualKeyboardTrace_SuperSenderSignalIndex(const QVirtualKeyboardTrace* self) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_SenderSignalIndex_IsBase(true);
        return vqvirtualkeyboardtrace->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnSenderSignalIndex(const QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardTrace_Receivers(const QVirtualKeyboardTrace* self, const char* signal) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVirtualKeyboardTrace_SuperReceivers(const QVirtualKeyboardTrace* self, const char* signal) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Receivers_IsBase(true);
        return vqvirtualkeyboardtrace->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnReceivers(const QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_Receivers_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardTrace_IsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        return vqvirtualkeyboardtrace->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVirtualKeyboardTrace_SuperIsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace) {
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_IsSignalConnected_IsBase(true);
        return vqvirtualkeyboardtrace->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardTrace*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardTrace_OnIsSignalConnected(const QVirtualKeyboardTrace* self, intptr_t slot) {
    auto* vqvirtualkeyboardtrace = const_cast<VirtualQVirtualKeyboardTrace*>(dynamic_cast<const VirtualQVirtualKeyboardTrace*>(self));
    if (vqvirtualkeyboardtrace && vqvirtualkeyboardtrace->isVirtualQVirtualKeyboardTrace)
        vqvirtualkeyboardtrace->setQVirtualKeyboardTrace_IsSignalConnected_Callback(reinterpret_cast<VirtualQVirtualKeyboardTrace::QVirtualKeyboardTrace_IsSignalConnected_Callback>(slot));
}

void QVirtualKeyboardTrace_Delete(QVirtualKeyboardTrace* self) {
    delete self;
}
