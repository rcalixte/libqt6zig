#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
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
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieSeries_OnMetacall(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Metacall_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieSeries_QBaseMetacall(QPieSeries* self, int param1, int param2, void** param3) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Metacall_IsBase(true);
        return vqpieseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPieSeries_Tr(const char* s) {
    QString _ret = QPieSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPieSeries_Type(const QPieSeries* self) {
    auto* vqpieseries = dynamic_cast<const VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPieSeries*)self)->type());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieSeries_OnType(const QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Type_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Type_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieSeries_QBaseType(const QPieSeries* self) {
    auto* vqpieseries = dynamic_cast<const VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Type_IsBase(true);
        return static_cast<int>(vqpieseries->type());
    } else {
        return static_cast<int>(((VirtualQPieSeries*)self)->type());
    }
}

bool QPieSeries_Append(QPieSeries* self, QPieSlice* slice) {
    return self->append(slice);
}

bool QPieSeries_Append2(QPieSeries* self, const libqt_list /* of QPieSlice* */ slices) {
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

QPieSlice* QPieSeries_Append3(QPieSeries* self, const libqt_string label, double value) {
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
    QPieSlice** _arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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

void QPieSeries_Added(QPieSeries* self, const libqt_list /* of QPieSlice* */ slices) {
    QList<QPieSlice*> slices_QList;
    slices_QList.reserve(slices.len);
    QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
    for (size_t i = 0; i < slices.len; ++i) {
        slices_QList.push_back(slices_arr[i]);
    }
    self->added(slices_QList);
}

void QPieSeries_Connect_Added(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice**) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice**)>(slot);
    QPieSeries::connect(self, &QPieSeries::added, [self, slotFunc](const QList<QPieSlice*>& slices) {
        const QList<QPieSlice*>& slices_ret = slices;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (slices_ret.size() + 1)));
        for (qsizetype i = 0; i < slices_ret.size(); ++i) {
            slices_arr[i] = slices_ret[i];
        }
        // Append sentinel value to the list
        slices_arr[slices_ret.size()] = nullptr;
        QPieSlice** sigval1 = slices_arr;
        slotFunc(self, sigval1);
        free(slices_arr);
    });
}

void QPieSeries_Removed(QPieSeries* self, const libqt_list /* of QPieSlice* */ slices) {
    QList<QPieSlice*> slices_QList;
    slices_QList.reserve(slices.len);
    QPieSlice** slices_arr = static_cast<QPieSlice**>(slices.data);
    for (size_t i = 0; i < slices.len; ++i) {
        slices_QList.push_back(slices_arr[i]);
    }
    self->removed(slices_QList);
}

void QPieSeries_Connect_Removed(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice**) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice**)>(slot);
    QPieSeries::connect(self, &QPieSeries::removed, [self, slotFunc](const QList<QPieSlice*>& slices) {
        const QList<QPieSlice*>& slices_ret = slices;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (slices_ret.size() + 1)));
        for (qsizetype i = 0; i < slices_ret.size(); ++i) {
            slices_arr[i] = slices_ret[i];
        }
        // Append sentinel value to the list
        slices_arr[slices_ret.size()] = nullptr;
        QPieSlice** sigval1 = slices_arr;
        slotFunc(self, sigval1);
        free(slices_arr);
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPieSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPieSeries_SetLabelsVisible1(QPieSeries* self, bool visible) {
    self->setLabelsVisible(visible);
}

// Derived class handler implementation
bool QPieSeries_Event(QPieSeries* self, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->event(event);
    } else {
        return self->QPieSeries::event(event);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseEvent(QPieSeries* self, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Event_IsBase(true);
        return vqpieseries->event(event);
    } else {
        return self->QPieSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEvent(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Event_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSeries_EventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->eventFilter(watched, event);
    } else {
        return self->QPieSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseEventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_EventFilter_IsBase(true);
        return vqpieseries->eventFilter(watched, event);
    } else {
        return self->QPieSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEventFilter(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_EventFilter_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_TimerEvent(QPieSeries* self, QTimerEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->timerEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseTimerEvent(QPieSeries* self, QTimerEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_TimerEvent_IsBase(true);
        vqpieseries->timerEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnTimerEvent(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_TimerEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_ChildEvent(QPieSeries* self, QChildEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->childEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseChildEvent(QPieSeries* self, QChildEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_ChildEvent_IsBase(true);
        vqpieseries->childEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnChildEvent(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_ChildEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_CustomEvent(QPieSeries* self, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->customEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPieSeries_QBaseCustomEvent(QPieSeries* self, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_CustomEvent_IsBase(true);
        vqpieseries->customEvent(event);
    } else {
        ((VirtualQPieSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnCustomEvent(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_CustomEvent_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_ConnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->connectNotify(*signal);
    } else {
        ((VirtualQPieSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSeries_QBaseConnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_ConnectNotify_IsBase(true);
        vqpieseries->connectNotify(*signal);
    } else {
        ((VirtualQPieSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnConnectNotify(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSeries_DisconnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->disconnectNotify(*signal);
    } else {
        ((VirtualQPieSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSeries_QBaseDisconnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_DisconnectNotify_IsBase(true);
        vqpieseries->disconnectNotify(*signal);
    } else {
        ((VirtualQPieSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnDisconnectNotify(QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPieSeries_Sender(const QPieSeries* self) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->sender();
    } else {
        return ((VirtualQPieSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPieSeries_QBaseSender(const QPieSeries* self) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Sender_IsBase(true);
        return vqpieseries->sender();
    } else {
        return ((VirtualQPieSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnSender(const QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Sender_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSeries_SenderSignalIndex(const QPieSeries* self) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->senderSignalIndex();
    } else {
        return ((VirtualQPieSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPieSeries_QBaseSenderSignalIndex(const QPieSeries* self) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_SenderSignalIndex_IsBase(true);
        return vqpieseries->senderSignalIndex();
    } else {
        return ((VirtualQPieSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnSenderSignalIndex(const QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSeries_Receivers(const QPieSeries* self, const char* signal) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->receivers(signal);
    } else {
        return ((VirtualQPieSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPieSeries_QBaseReceivers(const QPieSeries* self, const char* signal) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Receivers_IsBase(true);
        return vqpieseries->receivers(signal);
    } else {
        return ((VirtualQPieSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnReceivers(const QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_Receivers_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSeries_IsSignalConnected(const QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        return vqpieseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPieSeries_QBaseIsSignalConnected(const QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_IsSignalConnected_IsBase(true);
        return vqpieseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnIsSignalConnected(const QPieSeries* self, intptr_t slot) {
    auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self));
    if (vqpieseries && vqpieseries->isVirtualQPieSeries) {
        vqpieseries->setQPieSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQPieSeries::QPieSeries_IsSignalConnected_Callback>(slot));
    }
}

void QPieSeries_Delete(QPieSeries* self) {
    delete self;
}
