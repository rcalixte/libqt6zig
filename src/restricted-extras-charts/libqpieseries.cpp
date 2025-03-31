#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChart>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qpieseries.h>
#include "libqpieseries.h"
#include "libqpieseries.hxx"

QPieSeries* QPieSeries_new() {
    return new VirtualQPieSeries();
}

QPieSeries* QPieSeries_new2(QObject* parent) {
    return new VirtualQPieSeries(parent);
}

QMetaObject* QPieSeries_MetaObject(const QPieSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPieSeries_Metacast(QPieSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPieSeries_Metacall(QPieSeries* self, int param1, int param2, void** param3) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieSeries_OnMetacall(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_Metacall_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieSeries_QBaseMetacall(QPieSeries* self, int param1, int param2, void** param3) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_Metacall_IsBase(true);
        return vqpieseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPieSeries_Tr(const char* s) {
    QString _ret = QPieSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPieSeries_Append(QPieSeries* self, QPieSlice* slice) {
    return self->append(slice);
}

bool QPieSeries_AppendWithSlices(QPieSeries* self, libqt_list /* of QPieSlice* */ slices) {
    QList<QPieSlice*> slices_QList;
    slices_QList.reserve(slices.len);
    QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
    for (size_t i = 0; i < slices.len; ++i) {
        slices_QList.push_back(slices_arr[i]);
    }
    return self->append(slices_QList);
}

QPieSeries* QPieSeries_OperatorShiftLeft(QPieSeries* self, QPieSlice* slice) {
    QPieSeries& _ret = self->operator<<(slice);
    // Cast returned reference into pointer
    return &_ret;
}

QPieSlice* QPieSeries_Append2(QPieSeries* self, libqt_string label, double value) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->append(label_QString, static_cast<qreal>(value));
}

bool QPieSeries_Insert(QPieSeries* self, int index, QPieSlice* slice) {
    return self->insert(static_cast<int>(index), slice);
}

bool QPieSeries_Remove(QPieSeries* self, QPieSlice* slice) {
    return self->remove(slice);
}

bool QPieSeries_Take(QPieSeries* self, QPieSlice* slice) {
    return self->take(slice);
}

void QPieSeries_Clear(QPieSeries* self) {
    self->clear();
}

libqt_list /* of QPieSlice* */ QPieSeries_Slices(const QPieSeries* self) {
    QList<QPieSlice*> _ret = self->slices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPieSlice** _arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QPieSeries_Count(const QPieSeries* self) {
    return self->count();
}

bool QPieSeries_IsEmpty(const QPieSeries* self) {
    return self->isEmpty();
}

double QPieSeries_Sum(const QPieSeries* self) {
    return static_cast<double>(self->sum());
}

void QPieSeries_SetHoleSize(QPieSeries* self, double holeSize) {
    self->setHoleSize(static_cast<qreal>(holeSize));
}

double QPieSeries_HoleSize(const QPieSeries* self) {
    return static_cast<double>(self->holeSize());
}

void QPieSeries_SetHorizontalPosition(QPieSeries* self, double relativePosition) {
    self->setHorizontalPosition(static_cast<qreal>(relativePosition));
}

double QPieSeries_HorizontalPosition(const QPieSeries* self) {
    return static_cast<double>(self->horizontalPosition());
}

void QPieSeries_SetVerticalPosition(QPieSeries* self, double relativePosition) {
    self->setVerticalPosition(static_cast<qreal>(relativePosition));
}

double QPieSeries_VerticalPosition(const QPieSeries* self) {
    return static_cast<double>(self->verticalPosition());
}

void QPieSeries_SetPieSize(QPieSeries* self, double relativeSize) {
    self->setPieSize(static_cast<qreal>(relativeSize));
}

double QPieSeries_PieSize(const QPieSeries* self) {
    return static_cast<double>(self->pieSize());
}

void QPieSeries_SetPieStartAngle(QPieSeries* self, double startAngle) {
    self->setPieStartAngle(static_cast<qreal>(startAngle));
}

double QPieSeries_PieStartAngle(const QPieSeries* self) {
    return static_cast<double>(self->pieStartAngle());
}

void QPieSeries_SetPieEndAngle(QPieSeries* self, double endAngle) {
    self->setPieEndAngle(static_cast<qreal>(endAngle));
}

double QPieSeries_PieEndAngle(const QPieSeries* self) {
    return static_cast<double>(self->pieEndAngle());
}

void QPieSeries_SetLabelsVisible(QPieSeries* self) {
    self->setLabelsVisible();
}

void QPieSeries_SetLabelsPosition(QPieSeries* self, int position) {
    self->setLabelsPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSeries_Added(QPieSeries* self, libqt_list /* of QPieSlice* */ slices) {
    QList<QPieSlice*> slices_QList;
    slices_QList.reserve(slices.len);
    QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
    for (size_t i = 0; i < slices.len; ++i) {
        slices_QList.push_back(slices_arr[i]);
    }
    self->added(slices_QList);
}

void QPieSeries_Connect_Added(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, libqt_list /* of QPieSlice* */) = reinterpret_cast<void (*)(QPieSeries*, libqt_list /* of QPieSlice* */)>(slot);
    QPieSeries::connect(self, &QPieSeries::added, [self, slotFunc](const QList<QPieSlice*>& slices) {
        const QList<QPieSlice*>& slices_ret = slices;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * slices_ret.length()));
        for (size_t i = 0; i < slices_ret.length(); ++i) {
            slices_arr[i] = slices_ret[i];
        }
        libqt_list slices_out;
        slices_out.len = slices_ret.length();
        slices_out.data = static_cast<void*>(slices_arr);
        libqt_list /* of QPieSlice* */ sigval1 = slices_out;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_Removed(QPieSeries* self, libqt_list /* of QPieSlice* */ slices) {
    QList<QPieSlice*> slices_QList;
    slices_QList.reserve(slices.len);
    QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
    for (size_t i = 0; i < slices.len; ++i) {
        slices_QList.push_back(slices_arr[i]);
    }
    self->removed(slices_QList);
}

void QPieSeries_Connect_Removed(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, libqt_list /* of QPieSlice* */) = reinterpret_cast<void (*)(QPieSeries*, libqt_list /* of QPieSlice* */)>(slot);
    QPieSeries::connect(self, &QPieSeries::removed, [self, slotFunc](const QList<QPieSlice*>& slices) {
        const QList<QPieSlice*>& slices_ret = slices;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * slices_ret.length()));
        for (size_t i = 0; i < slices_ret.length(); ++i) {
            slices_arr[i] = slices_ret[i];
        }
        libqt_list slices_out;
        slices_out.len = slices_ret.length();
        slices_out.data = static_cast<void*>(slices_arr);
        libqt_list /* of QPieSlice* */ sigval1 = slices_out;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_Clicked(QPieSeries* self, QPieSlice* slice) {
    self->clicked(slice);
}

void QPieSeries_Connect_Clicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::clicked, [self, slotFunc](QPieSlice* slice) {
        QPieSlice* sigval1 = slice;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_Hovered(QPieSeries* self, QPieSlice* slice, bool state) {
    self->hovered(slice, state);
}

void QPieSeries_Connect_Hovered(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*, bool) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*, bool)>(slot);
    QPieSeries::connect(self, &QPieSeries::hovered, [self, slotFunc](QPieSlice* slice, bool state) {
        QPieSlice* sigval1 = slice;
        bool sigval2 = state;
        slotFunc(self, sigval1, sigval2);
    });
}

void QPieSeries_Pressed(QPieSeries* self, QPieSlice* slice) {
    self->pressed(slice);
}

void QPieSeries_Connect_Pressed(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::pressed, [self, slotFunc](QPieSlice* slice) {
        QPieSlice* sigval1 = slice;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_Released(QPieSeries* self, QPieSlice* slice) {
    self->released(slice);
}

void QPieSeries_Connect_Released(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::released, [self, slotFunc](QPieSlice* slice) {
        QPieSlice* sigval1 = slice;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_DoubleClicked(QPieSeries* self, QPieSlice* slice) {
    self->doubleClicked(slice);
}

void QPieSeries_Connect_DoubleClicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self, &QPieSeries::doubleClicked, [self, slotFunc](QPieSlice* slice) {
        QPieSlice* sigval1 = slice;
        slotFunc(self, sigval1);
    });
}

void QPieSeries_CountChanged(QPieSeries* self) {
    self->countChanged();
}

void QPieSeries_Connect_CountChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self, &QPieSeries::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSeries_SumChanged(QPieSeries* self) {
    self->sumChanged();
}

void QPieSeries_Connect_SumChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self, &QPieSeries::sumChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QPieSeries_Tr2(const char* s, const char* c) {
    QString _ret = QPieSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPieSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPieSeries_SetLabelsVisible1(QPieSeries* self, bool visible) {
    self->setLabelsVisible(visible);
}

// Derived class handler implementation
int QPieSeries_Type(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return static_cast<int>(vqpieseries->type());
    } else {
        return static_cast<int>(vqpieseries->type());
    }
}

// Base class handler implementation
int QPieSeries_QBaseType(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Type_IsBase(true);
        return static_cast<int>(vqpieseries->type());
    } else {
        return static_cast<int>(vqpieseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnType(const QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Type_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSeries_Event(QPieSeries* self, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        return vqpieseries->event(event);
    } else {
        return vqpieseries->event(event);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseEvent(QPieSeries* self, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_Event_IsBase(true);
        return vqpieseries->event(event);
    } else {
        return vqpieseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_Event_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSeries_EventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        return vqpieseries->eventFilter(watched, event);
    } else {
        return vqpieseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseEventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_EventFilter_IsBase(true);
        return vqpieseries->eventFilter(watched, event);
    } else {
        return vqpieseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEventFilter(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_EventFilter_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_TimerEvent(QPieSeries* self, QTimerEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->timerEvent(event);
    } else {
        vqpieseries->timerEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseTimerEvent(QPieSeries* self, QTimerEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_TimerEvent_IsBase(true);
        vqpieseries->timerEvent(event);
    } else {
        vqpieseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnTimerEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_TimerEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_ChildEvent(QPieSeries* self, QChildEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->childEvent(event);
    } else {
        vqpieseries->childEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseChildEvent(QPieSeries* self, QChildEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_ChildEvent_IsBase(true);
        vqpieseries->childEvent(event);
    } else {
        vqpieseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnChildEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_ChildEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_CustomEvent(QPieSeries* self, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->customEvent(event);
    } else {
        vqpieseries->customEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseCustomEvent(QPieSeries* self, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_CustomEvent_IsBase(true);
        vqpieseries->customEvent(event);
    } else {
        vqpieseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnCustomEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_CustomEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_ConnectNotify(QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->connectNotify(*signal);
    } else {
        vqpieseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSeries_QBaseConnectNotify(QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_ConnectNotify_IsBase(true);
        vqpieseries->connectNotify(*signal);
    } else {
        vqpieseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnConnectNotify(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_DisconnectNotify(QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->disconnectNotify(*signal);
    } else {
        vqpieseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSeries_QBaseDisconnectNotify(QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_DisconnectNotify_IsBase(true);
        vqpieseries->disconnectNotify(*signal);
    } else {
        vqpieseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnDisconnectNotify(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->setQPieSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPieSeries_Sender(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->sender();
    } else {
        return vqpieseries->sender();
    }
}

// Base class handler implementation
QObject* QPieSeries_QBaseSender(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Sender_IsBase(true);
        return vqpieseries->sender();
    } else {
        return vqpieseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnSender(const QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Sender_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSeries_SenderSignalIndex(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->senderSignalIndex();
    } else {
        return vqpieseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QPieSeries_QBaseSenderSignalIndex(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_SenderSignalIndex_IsBase(true);
        return vqpieseries->senderSignalIndex();
    } else {
        return vqpieseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnSenderSignalIndex(const QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSeries_Receivers(const QPieSeries* self, const char* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->receivers(signal);
    } else {
        return vqpieseries->receivers(signal);
    }
}

// Base class handler implementation
int QPieSeries_QBaseReceivers(const QPieSeries* self, const char* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Receivers_IsBase(true);
        return vqpieseries->receivers(signal);
    } else {
        return vqpieseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnReceivers(const QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_Receivers_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSeries_IsSignalConnected(const QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->isSignalConnected(*signal);
    } else {
        return vqpieseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseIsSignalConnected(const QPieSeries* self, QMetaMethod* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_IsSignalConnected_IsBase(true);
        return vqpieseries->isSignalConnected(*signal);
    } else {
        return vqpieseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnIsSignalConnected(const QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        vqpieseries->setQPieSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_IsSignalConnected_Callback>(slot));
    }
}

void QPieSeries_Delete(QPieSeries* self) {
    delete self;
}
