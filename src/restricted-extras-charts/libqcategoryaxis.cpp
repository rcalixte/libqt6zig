#include <QAbstractAxis>
#include <QCategoryAxis>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCategoryAxis_Tr(const char* s) {
    auto _ret = QCategoryAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QCategoryAxis_Type(const QCategoryAxis* self) {
    return static_cast<int>(self->type());
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
    QCategoryAxis::connect(self,
                           static_cast<void (QCategoryAxis::*)()>(&QCategoryAxis::categoriesChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QCategoryAxis_LabelsPositionChanged(QCategoryAxis* self, int position) {
    self->labelsPositionChanged(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_Connect_LabelsPositionChanged(QCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QCategoryAxis*, int) = reinterpret_cast<void (*)(QCategoryAxis*, int)>(slot);
    QCategoryAxis::connect(self,
                           static_cast<void (QCategoryAxis::*)(QCategoryAxis::AxisLabelsPosition)>(&QCategoryAxis::labelsPositionChanged),
                           [self, slotFunc](QCategoryAxis::AxisLabelsPosition position) {
                               int sigval1 = static_cast<int>(position);
                               slotFunc(self, sigval1);
                           });
}

libqt_string QCategoryAxis_Tr2(const char* s, const char* c) {
    auto _ret = QCategoryAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCategoryAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCategoryAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QCategoryAxis_StartValue1(const QCategoryAxis* self, const libqt_string categoryLabel) {
    QString categoryLabel_QString = QString::fromUtf8(categoryLabel.data, categoryLabel.len);
    return static_cast<double>(self->startValue(categoryLabel_QString));
}

// Base class handler implementation
QMetaObject* QCategoryAxis_SuperMetaObject(const QCategoryAxis* self) {
    return (QMetaObject*)self->QCategoryAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnMetaObject(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self)))
        vqcategoryaxis->qcategoryaxis_metaobject_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCategoryAxis_SuperMetacast(QCategoryAxis* self, const char* param1) {
    return self->QCategoryAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnMetacast(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_metacast_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCategoryAxis_SuperMetacall(QCategoryAxis* self, int param1, int param2, void** param3) {
    return self->QCategoryAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnMetacall(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_metacall_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QCategoryAxis_SuperType(const QCategoryAxis* self) {
    return static_cast<int>(self->QCategoryAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnType(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self)))
        vqcategoryaxis->qcategoryaxis_type_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QCategoryAxis_Event(QCategoryAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCategoryAxis_SuperEvent(QCategoryAxis* self, QEvent* event) {
    return self->QCategoryAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnEvent(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_event_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCategoryAxis_EventFilter(QCategoryAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCategoryAxis_SuperEventFilter(QCategoryAxis* self, QObject* watched, QEvent* event) {
    return self->QCategoryAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnEventFilter(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_eventfilter_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCategoryAxis_TimerEvent(QCategoryAxis* self, QTimerEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis) {
        vqcategoryaxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategoryAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategoryAxis_SuperTimerEvent(QCategoryAxis* self, QTimerEvent* event) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self)) {
        vqcategoryaxis->QCategoryAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategoryAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnTimerEvent(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_timerevent_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategoryAxis_ChildEvent(QCategoryAxis* self, QChildEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis) {
        vqcategoryaxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategoryAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategoryAxis_SuperChildEvent(QCategoryAxis* self, QChildEvent* event) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self)) {
        vqcategoryaxis->QCategoryAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategoryAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnChildEvent(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_childevent_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategoryAxis_CustomEvent(QCategoryAxis* self, QEvent* event) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis) {
        vqcategoryaxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCategoryAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategoryAxis_SuperCustomEvent(QCategoryAxis* self, QEvent* event) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self)) {
        vqcategoryaxis->QCategoryAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCategoryAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnCustomEvent(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_customevent_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCategoryAxis_ConnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis) {
        vqcategoryaxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCategoryAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategoryAxis_SuperConnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self)) {
        vqcategoryaxis->QCategoryAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCategoryAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnConnectNotify(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_connectnotify_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCategoryAxis_DisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self);
    if (vqcategoryaxis) {
        vqcategoryaxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCategoryAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCategoryAxis_SuperDisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self)) {
        vqcategoryaxis->QCategoryAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCategoryAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCategoryAxis_OnDisconnectNotify(QCategoryAxis* self, intptr_t slot) {
    if (auto* vqcategoryaxis = dynamic_cast<VirtualQCategoryAxis*>(self))
        vqcategoryaxis->qcategoryaxis_disconnectnotify_callback = reinterpret_cast<VirtualQCategoryAxis::QCategoryAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCategoryAxis_Sender(const QCategoryAxis* self) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self))) {
        return vqcategoryaxis->VirtualQCategoryAxis::sender();
    } else
        qFatal("Error: Protected method QCategoryAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCategoryAxis_SenderSignalIndex(const QCategoryAxis* self) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self))) {
        return vqcategoryaxis->VirtualQCategoryAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCategoryAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCategoryAxis_Receivers(const QCategoryAxis* self, const char* signal) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self))) {
        return vqcategoryaxis->VirtualQCategoryAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QCategoryAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCategoryAxis_IsSignalConnected(const QCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqcategoryaxis = const_cast<VirtualQCategoryAxis*>(dynamic_cast<const VirtualQCategoryAxis*>(self))) {
        return vqcategoryaxis->VirtualQCategoryAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCategoryAxis::isSignalConnected called without a directly constructed type");
}

void QCategoryAxis_Delete(QCategoryAxis* self) {
    delete self;
}
