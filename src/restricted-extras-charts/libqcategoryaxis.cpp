#include <QAbstractAxis>
#include <QCategoryAxis>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValueAxis>
#include <qcategoryaxis.h>
#include "libqcategoryaxis.h"
#include "libqcategoryaxis.hxx"

QCategoryAxis* QCategoryAxis_new() {
    return new VirtualQCategoryAxis();
}

QCategoryAxis* QCategoryAxis_new2(QObject* parent) {
    return new VirtualQCategoryAxis(parent);
}

QMetaObject* QCategoryAxis_MetaObject(const QCategoryAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCategoryAxis_Metacast(QCategoryAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCategoryAxis_Metacall(QCategoryAxis* self, int param1, int param2, void** param3) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCategoryAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCategoryAxis_OnMetacall(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Metacall_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCategoryAxis_QBaseMetacall(QCategoryAxis* self, int param1, int param2, void** param3) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Metacall_IsBase(true);
        return vqcategoryaxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCategoryAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCategoryAxis_Tr(const char* s) {
    QString _ret = QCategoryAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCategoryAxis_Append(QCategoryAxis* self, const libqt_string label, double categoryEndValue) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->append(label_QString, static_cast<qreal>(categoryEndValue));
}

void QCategoryAxis_Remove(QCategoryAxis* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->remove(label_QString);
}

void QCategoryAxis_ReplaceLabel(QCategoryAxis* self, const libqt_string oldLabel, const libqt_string newLabel) {
    QString oldLabel_QString = QString::fromUtf8(oldLabel.data, oldLabel.len);
    QString newLabel_QString = QString::fromUtf8(newLabel.data, newLabel.len);
    self->replaceLabel(oldLabel_QString, newLabel_QString);
}

double QCategoryAxis_StartValue(const QCategoryAxis* self) {
    return static_cast<double>(self->startValue());
}

void QCategoryAxis_SetStartValue(QCategoryAxis* self, double min) {
    self->setStartValue(static_cast<qreal>(min));
}

double QCategoryAxis_EndValue(const QCategoryAxis* self, const libqt_string categoryLabel) {
    QString categoryLabel_QString = QString::fromUtf8(categoryLabel.data, categoryLabel.len);
    return static_cast<double>(self->endValue(categoryLabel_QString));
}

libqt_list /* of libqt_string */ QCategoryAxis_CategoriesLabels(QCategoryAxis* self) {
    QList<QString> _ret = self->categoriesLabels();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QCategoryAxis_Count(const QCategoryAxis* self) {
    return self->count();
}

int QCategoryAxis_LabelsPosition(const QCategoryAxis* self) {
    return static_cast<int>(self->labelsPosition());
}

void QCategoryAxis_SetLabelsPosition(QCategoryAxis* self, int position) {
    self->setLabelsPosition(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_CategoriesChanged(QCategoryAxis* self) {
    self->categoriesChanged();
}

void QCategoryAxis_Connect_CategoriesChanged(QCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategoryAxis*) = reinterpret_cast<void (*)(QCategoryAxis*)>(slot);
    QCategoryAxis::connect(self, &QCategoryAxis::categoriesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCategoryAxis_LabelsPositionChanged(QCategoryAxis* self, int position) {
    self->labelsPositionChanged(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_Connect_LabelsPositionChanged(QCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategoryAxis*, int) = reinterpret_cast<void (*)(QCategoryAxis*, int)>(slot);
    QCategoryAxis::connect(self, &QCategoryAxis::labelsPositionChanged, [self, slotFunc](QCategoryAxis::AxisLabelsPosition position) {
        int sigval1 = static_cast<int>(position);
        slotFunc(self, sigval1);
    });
}

libqt_string QCategoryAxis_Tr2(const char* s, const char* c) {
    QString _ret = QCategoryAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCategoryAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCategoryAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QCategoryAxis_StartValue1(const QCategoryAxis* self, const libqt_string categoryLabel) {
    QString categoryLabel_QString = QString::fromUtf8(categoryLabel.data, categoryLabel.len);
    return static_cast<double>(self->startValue(categoryLabel_QString));
}

// Derived class handler implementation
int QCategoryAxis_Type(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return static_cast<int>(vqcategoryaxis->type());
    } else {
        return static_cast<int>(self->QCategoryAxis::type());
    }
}

// Base class handler implementation
int QCategoryAxis_QBaseType(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Type_IsBase(true);
        return static_cast<int>(vqcategoryaxis->type());
    } else {
        return static_cast<int>(self->QCategoryAxis::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnType(const QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Type_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCategoryAxis_Event(QCategoryAxis* self, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->event(event);
    } else {
        return self->QCategoryAxis::event(event);
    }
}

// Base class handler implementation
bool QCategoryAxis_QBaseEvent(QCategoryAxis* self, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Event_IsBase(true);
        return vqcategoryaxis->event(event);
    } else {
        return self->QCategoryAxis::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnEvent(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Event_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCategoryAxis_EventFilter(QCategoryAxis* self, QObject* watched, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->eventFilter(watched, event);
    } else {
        return self->QCategoryAxis::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCategoryAxis_QBaseEventFilter(QCategoryAxis* self, QObject* watched, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_EventFilter_IsBase(true);
        return vqcategoryaxis->eventFilter(watched, event);
    } else {
        return self->QCategoryAxis::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnEventFilter(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_EventFilter_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCategoryAxis_TimerEvent(QCategoryAxis* self, QTimerEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->timerEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCategoryAxis_QBaseTimerEvent(QCategoryAxis* self, QTimerEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_TimerEvent_IsBase(true);
        vqcategoryaxis->timerEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnTimerEvent(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_TimerEvent_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCategoryAxis_ChildEvent(QCategoryAxis* self, QChildEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->childEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCategoryAxis_QBaseChildEvent(QCategoryAxis* self, QChildEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_ChildEvent_IsBase(true);
        vqcategoryaxis->childEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnChildEvent(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_ChildEvent_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCategoryAxis_CustomEvent(QCategoryAxis* self, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->customEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCategoryAxis_QBaseCustomEvent(QCategoryAxis* self, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_CustomEvent_IsBase(true);
        vqcategoryaxis->customEvent(event);
    } else {
        ((VirtualQCategoryAxis*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnCustomEvent(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_CustomEvent_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCategoryAxis_ConnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->connectNotify(*signal);
    } else {
        ((VirtualQCategoryAxis*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCategoryAxis_QBaseConnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_ConnectNotify_IsBase(true);
        vqcategoryaxis->connectNotify(*signal);
    } else {
        ((VirtualQCategoryAxis*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnConnectNotify(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCategoryAxis_DisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQCategoryAxis*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCategoryAxis_QBaseDisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_DisconnectNotify_IsBase(true);
        vqcategoryaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQCategoryAxis*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnDisconnectNotify(QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCategoryAxis_Sender(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->sender();
    } else {
        return ((VirtualQCategoryAxis*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCategoryAxis_QBaseSender(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Sender_IsBase(true);
        return vqcategoryaxis->sender();
    } else {
        return ((VirtualQCategoryAxis*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnSender(const QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Sender_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCategoryAxis_SenderSignalIndex(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->senderSignalIndex();
    } else {
        return ((VirtualQCategoryAxis*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCategoryAxis_QBaseSenderSignalIndex(const QCategoryAxis* self) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_SenderSignalIndex_IsBase(true);
        return vqcategoryaxis->senderSignalIndex();
    } else {
        return ((VirtualQCategoryAxis*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnSenderSignalIndex(const QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCategoryAxis_Receivers(const QCategoryAxis* self, const char* signal) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->receivers(signal);
    } else {
        return ((VirtualQCategoryAxis*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCategoryAxis_QBaseReceivers(const QCategoryAxis* self, const char* signal) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Receivers_IsBase(true);
        return vqcategoryaxis->receivers(signal);
    } else {
        return ((VirtualQCategoryAxis*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnReceivers(const QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_Receivers_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCategoryAxis_IsSignalConnected(const QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        return vqcategoryaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQCategoryAxis*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCategoryAxis_QBaseIsSignalConnected(const QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_IsSignalConnected_IsBase(true);
        return vqcategoryaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQCategoryAxis*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnIsSignalConnected(const QCategoryAxis* self, intptr_t slot) {
    auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self));
    if (vqcategoryaxis && vqcategoryaxis->isVirtualQCategoryAxis) {
        vqcategoryaxis->setQCategoryAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_IsSignalConnected_Callback>(slot));
    }
}

void QCategoryAxis_Delete(QCategoryAxis* self) {
    delete self;
}
