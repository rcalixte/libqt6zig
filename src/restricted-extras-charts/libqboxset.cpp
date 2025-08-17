#include <QBoxSet>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qboxset.h>
#include "libqboxset.h"
#include "libqboxset.hxx"

QBoxSet* QBoxSet_new() {
    return new VirtualQBoxSet();
}

QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue) {
    return new VirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue));
}

QBoxSet* QBoxSet_new3(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBoxSet(label_QString);
}

QBoxSet* QBoxSet_new4(const libqt_string label, QObject* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBoxSet(label_QString, parent);
}

QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue), label_QString);
}

QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label, QObject* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue), label_QString, parent);
}

QMetaObject* QBoxSet_MetaObject(const QBoxSet* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxSet_Metacast(QBoxSet* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxSet_Metacall(QBoxSet* self, int param1, int param2, void** param3) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxSet*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBoxSet_OnMetacall(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Metacall_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBoxSet_QBaseMetacall(QBoxSet* self, int param1, int param2, void** param3) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Metacall_IsBase(true);
        return vqboxset->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxSet*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBoxSet_Tr(const char* s) {
    QString _ret = QBoxSet::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBoxSet_Append(QBoxSet* self, const double value) {
    self->append(static_cast<const qreal>(value));
}

void QBoxSet_Append2(QBoxSet* self, const libqt_list /* of double */ values) {
    QList<double> values_QList;
    values_QList.reserve(values.len);
    double* values_arr = static_cast<double*>(values.data);
    for (size_t i = 0; i < values.len; ++i) {
        values_QList.push_back(static_cast<double>(values_arr[i]));
    }
    self->append(values_QList);
}

void QBoxSet_Clear(QBoxSet* self) {
    self->clear();
}

void QBoxSet_SetLabel(QBoxSet* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string QBoxSet_Label(const QBoxSet* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QBoxSet* QBoxSet_OperatorShiftLeft(QBoxSet* self, const double* value) {
    QBoxSet& _ret = self->operator<<(static_cast<const qreal&>(*value));
    // Cast returned reference into pointer
    return &_ret;
}

void QBoxSet_SetValue(QBoxSet* self, const int index, const double value) {
    self->setValue(static_cast<const int>(index), static_cast<const qreal>(value));
}

double QBoxSet_At(const QBoxSet* self, const int index) {
    return static_cast<double>(self->at(static_cast<const int>(index)));
}

double QBoxSet_OperatorSubscript(const QBoxSet* self, const int index) {
    return static_cast<double>(self->operator[](static_cast<const int>(index)));
}

int QBoxSet_Count(const QBoxSet* self) {
    return self->count();
}

void QBoxSet_SetPen(QBoxSet* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QBoxSet_Pen(const QBoxSet* self) {
    return new QPen(self->pen());
}

void QBoxSet_SetBrush(QBoxSet* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QBoxSet_Brush(const QBoxSet* self) {
    return new QBrush(self->brush());
}

void QBoxSet_Clicked(QBoxSet* self) {
    self->clicked();
}

void QBoxSet_Connect_Clicked(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_Hovered(QBoxSet* self, bool status) {
    self->hovered(status);
}

void QBoxSet_Connect_Hovered(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*, bool) = reinterpret_cast<void (*)(QBoxSet*, bool)>(slot);
    QBoxSet::connect(self, &QBoxSet::hovered, [self, slotFunc](bool status) {
        bool sigval1 = status;
        slotFunc(self, sigval1);
    });
}

void QBoxSet_Pressed(QBoxSet* self) {
    self->pressed();
}

void QBoxSet_Connect_Pressed(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::pressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_Released(QBoxSet* self) {
    self->released();
}

void QBoxSet_Connect_Released(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::released, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_DoubleClicked(QBoxSet* self) {
    self->doubleClicked();
}

void QBoxSet_Connect_DoubleClicked(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::doubleClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_PenChanged(QBoxSet* self) {
    self->penChanged();
}

void QBoxSet_Connect_PenChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_BrushChanged(QBoxSet* self) {
    self->brushChanged();
}

void QBoxSet_Connect_BrushChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_ValuesChanged(QBoxSet* self) {
    self->valuesChanged();
}

void QBoxSet_Connect_ValuesChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::valuesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxSet_ValueChanged(QBoxSet* self, int index) {
    self->valueChanged(static_cast<int>(index));
}

void QBoxSet_Connect_ValueChanged(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*, int) = reinterpret_cast<void (*)(QBoxSet*, int)>(slot);
    QBoxSet::connect(self, &QBoxSet::valueChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBoxSet_Cleared(QBoxSet* self) {
    self->cleared();
}

void QBoxSet_Connect_Cleared(QBoxSet* self, intptr_t slot) {
    void (*slotFunc)(QBoxSet*) = reinterpret_cast<void (*)(QBoxSet*)>(slot);
    QBoxSet::connect(self, &QBoxSet::cleared, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QBoxSet_Tr2(const char* s, const char* c) {
    QString _ret = QBoxSet::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBoxSet_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBoxSet::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QBoxSet_Event(QBoxSet* self, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->event(event);
    } else {
        return self->QBoxSet::event(event);
    }
}

// Base class handler implementation
bool QBoxSet_QBaseEvent(QBoxSet* self, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Event_IsBase(true);
        return vqboxset->event(event);
    } else {
        return self->QBoxSet::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnEvent(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Event_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxSet_EventFilter(QBoxSet* self, QObject* watched, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->eventFilter(watched, event);
    } else {
        return self->QBoxSet::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBoxSet_QBaseEventFilter(QBoxSet* self, QObject* watched, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_EventFilter_IsBase(true);
        return vqboxset->eventFilter(watched, event);
    } else {
        return self->QBoxSet::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnEventFilter(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_EventFilter_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxSet_TimerEvent(QBoxSet* self, QTimerEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->timerEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBoxSet_QBaseTimerEvent(QBoxSet* self, QTimerEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_TimerEvent_IsBase(true);
        vqboxset->timerEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnTimerEvent(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_TimerEvent_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxSet_ChildEvent(QBoxSet* self, QChildEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->childEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBoxSet_QBaseChildEvent(QBoxSet* self, QChildEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_ChildEvent_IsBase(true);
        vqboxset->childEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnChildEvent(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_ChildEvent_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxSet_CustomEvent(QBoxSet* self, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->customEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBoxSet_QBaseCustomEvent(QBoxSet* self, QEvent* event) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_CustomEvent_IsBase(true);
        vqboxset->customEvent(event);
    } else {
        ((VirtualQBoxSet*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnCustomEvent(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_CustomEvent_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxSet_ConnectNotify(QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->connectNotify(*signal);
    } else {
        ((VirtualQBoxSet*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxSet_QBaseConnectNotify(QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_ConnectNotify_IsBase(true);
        vqboxset->connectNotify(*signal);
    } else {
        ((VirtualQBoxSet*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnConnectNotify(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_ConnectNotify_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxSet_DisconnectNotify(QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxSet*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxSet_QBaseDisconnectNotify(QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_DisconnectNotify_IsBase(true);
        vqboxset->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxSet*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnDisconnectNotify(QBoxSet* self, intptr_t slot) {
    auto* vqboxset = dynamic_cast<VirtualQBoxSet*>(self);
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_DisconnectNotify_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBoxSet_Sender(const QBoxSet* self) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->sender();
    } else {
        return ((VirtualQBoxSet*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBoxSet_QBaseSender(const QBoxSet* self) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Sender_IsBase(true);
        return vqboxset->sender();
    } else {
        return ((VirtualQBoxSet*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnSender(const QBoxSet* self, intptr_t slot) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Sender_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxSet_SenderSignalIndex(const QBoxSet* self) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->senderSignalIndex();
    } else {
        return ((VirtualQBoxSet*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBoxSet_QBaseSenderSignalIndex(const QBoxSet* self) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_SenderSignalIndex_IsBase(true);
        return vqboxset->senderSignalIndex();
    } else {
        return ((VirtualQBoxSet*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnSenderSignalIndex(const QBoxSet* self, intptr_t slot) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxSet_Receivers(const QBoxSet* self, const char* signal) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->receivers(signal);
    } else {
        return ((VirtualQBoxSet*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBoxSet_QBaseReceivers(const QBoxSet* self, const char* signal) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Receivers_IsBase(true);
        return vqboxset->receivers(signal);
    } else {
        return ((VirtualQBoxSet*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnReceivers(const QBoxSet* self, intptr_t slot) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_Receivers_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxSet_IsSignalConnected(const QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        return vqboxset->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxSet*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBoxSet_QBaseIsSignalConnected(const QBoxSet* self, const QMetaMethod* signal) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_IsSignalConnected_IsBase(true);
        return vqboxset->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxSet*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxSet_OnIsSignalConnected(const QBoxSet* self, intptr_t slot) {
    auto* vqboxset = const_cast<VirtualQBoxSet*>(dynamic_cast<const VirtualQBoxSet*>(self));
    if (vqboxset && vqboxset->isVirtualQBoxSet) {
        vqboxset->setQBoxSet_IsSignalConnected_Callback(reinterpret_cast<VirtualQBoxSet::QBoxSet_IsSignalConnected_Callback>(slot));
    }
}

void QBoxSet_Delete(QBoxSet* self) {
    delete self;
}
