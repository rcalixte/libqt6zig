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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPieSeries_Tr(const char* s) {
    auto _ret = QPieSeries::tr(s);
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
    return static_cast<int>(self->type());
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
    QPieSlice** _arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (_ret.size())));
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
    void (*slotFunc)(QPieSeries*, libqt_list /* of QPieSlice* */) = reinterpret_cast<void (*)(QPieSeries*, libqt_list /* of QPieSlice* */)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(const QList<QPieSlice*>&)>(&QPieSeries::added),
                        [self, slotFunc](const QList<QPieSlice*>& slices) {
                            const QList<QPieSlice*>& slices_ret = slices;
                            // Convert QList<> from C++ memory to manually-managed C memory
                            QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (slices_ret.size())));
                            for (qsizetype i = 0; i < slices_ret.size(); ++i) {
                                slices_arr[i] = slices_ret[i];
                            }
                            libqt_list slices_out;
                            slices_out.len = slices_ret.size();
                            slices_out.data = static_cast<void*>(slices_arr);
                            libqt_list /* of QPieSlice* */ sigval1 = slices_out;
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
    void (*slotFunc)(QPieSeries*, libqt_list /* of QPieSlice* */) = reinterpret_cast<void (*)(QPieSeries*, libqt_list /* of QPieSlice* */)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(const QList<QPieSlice*>&)>(&QPieSeries::removed),
                        [self, slotFunc](const QList<QPieSlice*>& slices) {
                            const QList<QPieSlice*>& slices_ret = slices;
                            // Convert QList<> from C++ memory to manually-managed C memory
                            QPieSlice** slices_arr = static_cast<QPieSlice**>(malloc(sizeof(QPieSlice*) * (slices_ret.size())));
                            for (qsizetype i = 0; i < slices_ret.size(); ++i) {
                                slices_arr[i] = slices_ret[i];
                            }
                            libqt_list slices_out;
                            slices_out.len = slices_ret.size();
                            slices_out.data = static_cast<void*>(slices_arr);
                            libqt_list /* of QPieSlice* */ sigval1 = slices_out;
                            slotFunc(self, sigval1);
                            free(slices_arr);
                        });
}

void QPieSeries_Clicked(QPieSeries* self, QPieSlice* slice) {
    self->clicked(slice);
}

void QPieSeries_Connect_Clicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::clicked),
                        [self, slotFunc](QPieSlice* slice) {
                            QPieSlice* sigval1 = slice;
                            slotFunc(self, sigval1);
                        });
}

void QPieSeries_Hovered(QPieSeries* self, QPieSlice* slice, bool state) {
    self->hovered(slice, state);
}

void QPieSeries_Connect_Hovered(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*, bool) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*, bool)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(QPieSlice*, bool)>(&QPieSeries::hovered),
                        [self, slotFunc](QPieSlice* slice, bool state) {
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
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::pressed),
                        [self, slotFunc](QPieSlice* slice) {
                            QPieSlice* sigval1 = slice;
                            slotFunc(self, sigval1);
                        });
}

void QPieSeries_Released(QPieSeries* self, QPieSlice* slice) {
    self->released(slice);
}

void QPieSeries_Connect_Released(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::released),
                        [self, slotFunc](QPieSlice* slice) {
                            QPieSlice* sigval1 = slice;
                            slotFunc(self, sigval1);
                        });
}

void QPieSeries_DoubleClicked(QPieSeries* self, QPieSlice* slice) {
    self->doubleClicked(slice);
}

void QPieSeries_Connect_DoubleClicked(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*, QPieSlice*) = reinterpret_cast<void (*)(QPieSeries*, QPieSlice*)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)(QPieSlice*)>(&QPieSeries::doubleClicked),
                        [self, slotFunc](QPieSlice* slice) {
                            QPieSlice* sigval1 = slice;
                            slotFunc(self, sigval1);
                        });
}

void QPieSeries_CountChanged(QPieSeries* self) {
    self->countChanged();
}

void QPieSeries_Connect_CountChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)()>(&QPieSeries::countChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QPieSeries_SumChanged(QPieSeries* self) {
    self->sumChanged();
}

void QPieSeries_Connect_SumChanged(QPieSeries* self, intptr_t slot) {
    void (*slotFunc)(QPieSeries*) = reinterpret_cast<void (*)(QPieSeries*)>(slot);
    QPieSeries::connect(self,
                        static_cast<void (QPieSeries::*)()>(&QPieSeries::sumChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

libqt_string QPieSeries_Tr2(const char* s, const char* c) {
    auto _ret = QPieSeries::tr(s, c);
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
    auto _ret = QPieSeries::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QPieSeries_SuperMetaObject(const QPieSeries* self) {
    return (QMetaObject*)self->QPieSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnMetaObject(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self)))
        vqpieseries->qpieseries_metaobject_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPieSeries_SuperMetacast(QPieSeries* self, const char* param1) {
    return self->QPieSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnMetacast(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_metacast_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPieSeries_SuperMetacall(QPieSeries* self, int param1, int param2, void** param3) {
    return self->QPieSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnMetacall(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_metacall_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPieSeries_SuperType(const QPieSeries* self) {
    return static_cast<int>(self->QPieSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnType(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self)))
        vqpieseries->qpieseries_type_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QPieSeries_Event(QPieSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPieSeries_SuperEvent(QPieSeries* self, QEvent* event) {
    return self->QPieSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_event_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPieSeries_EventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPieSeries_SuperEventFilter(QPieSeries* self, QObject* watched, QEvent* event) {
    return self->QPieSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnEventFilter(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_eventfilter_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPieSeries_TimerEvent(QPieSeries* self, QTimerEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries) {
        vqpieseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieSeries_SuperTimerEvent(QPieSeries* self, QTimerEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->QPieSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnTimerEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_timerevent_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieSeries_ChildEvent(QPieSeries* self, QChildEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries) {
        vqpieseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieSeries_SuperChildEvent(QPieSeries* self, QChildEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->QPieSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnChildEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_childevent_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieSeries_CustomEvent(QPieSeries* self, QEvent* event) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries) {
        vqpieseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieSeries_SuperCustomEvent(QPieSeries* self, QEvent* event) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->QPieSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnCustomEvent(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_customevent_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieSeries_ConnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries) {
        vqpieseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPieSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieSeries_SuperConnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->QPieSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPieSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnConnectNotify(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_connectnotify_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPieSeries_DisconnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self);
    if (vqpieseries) {
        vqpieseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPieSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieSeries_SuperDisconnectNotify(QPieSeries* self, const QMetaMethod* signal) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self)) {
        vqpieseries->QPieSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPieSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieSeries_OnDisconnectNotify(QPieSeries* self, intptr_t slot) {
    if (auto* vqpieseries = dynamic_cast<VirtualQPieSeries*>(self))
        vqpieseries->qpieseries_disconnectnotify_callback = reinterpret_cast<VirtualQPieSeries::QPieSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPieSeries_Sender(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->VirtualQPieSeries::sender();
    } else
        qFatal("Error: Protected method QPieSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPieSeries_SenderSignalIndex(const QPieSeries* self) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->VirtualQPieSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPieSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPieSeries_Receivers(const QPieSeries* self, const char* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->VirtualQPieSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QPieSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPieSeries_IsSignalConnected(const QPieSeries* self, const QMetaMethod* signal) {
    if (auto* vqpieseries = const_cast<VirtualQPieSeries*>(dynamic_cast<const VirtualQPieSeries*>(self))) {
        return vqpieseries->VirtualQPieSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPieSeries::isSignalConnected called without a directly constructed type");
}

void QPieSeries_Delete(QPieSeries* self) {
    delete self;
}
