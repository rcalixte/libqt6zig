#include <QAbstractSeries>
#include <QBoxPlotSeries>
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
#include <qboxplotseries.h>
#include "libqboxplotseries.h"
#include "libqboxplotseries.hxx"

QBoxPlotSeries* QBoxPlotSeries_new() {
    return new VirtualQBoxPlotSeries();
}

QBoxPlotSeries* QBoxPlotSeries_new2(QObject* parent) {
    return new VirtualQBoxPlotSeries(parent);
}

QMetaObject* QBoxPlotSeries_MetaObject(const QBoxPlotSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxPlotSeries_Metacast(QBoxPlotSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxPlotSeries_Metacall(QBoxPlotSeries* self, int param1, int param2, void** param3) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBoxPlotSeries_OnMetacall(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Metacall_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBoxPlotSeries_QBaseMetacall(QBoxPlotSeries* self, int param1, int param2, void** param3) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Metacall_IsBase(true);
        return vqboxplotseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBoxPlotSeries_Tr(const char* s) {
    QString _ret = QBoxPlotSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QBoxPlotSeries_Append(QBoxPlotSeries* self, QBoxSet* box) {
    return self->append(box);
}

bool QBoxPlotSeries_Remove(QBoxPlotSeries* self, QBoxSet* box) {
    return self->remove(box);
}

bool QBoxPlotSeries_Take(QBoxPlotSeries* self, QBoxSet* box) {
    return self->take(box);
}

bool QBoxPlotSeries_Append2(QBoxPlotSeries* self, const libqt_list /* of QBoxSet* */ boxes) {
    QList<QBoxSet*> boxes_QList;
    boxes_QList.reserve(boxes.len);
    QBoxSet** boxes_arr = static_cast<QBoxSet**>(boxes.data);
    for (size_t i = 0; i < boxes.len; ++i) {
        boxes_QList.push_back(boxes_arr[i]);
    }
    return self->append(boxes_QList);
}

bool QBoxPlotSeries_Insert(QBoxPlotSeries* self, int index, QBoxSet* box) {
    return self->insert(static_cast<int>(index), box);
}

int QBoxPlotSeries_Count(const QBoxPlotSeries* self) {
    return self->count();
}

libqt_list /* of QBoxSet* */ QBoxPlotSeries_BoxSets(const QBoxPlotSeries* self) {
    QList<QBoxSet*> _ret = self->boxSets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBoxSet** _arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBoxPlotSeries_Clear(QBoxPlotSeries* self) {
    self->clear();
}

int QBoxPlotSeries_Type(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = dynamic_cast<const VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQBoxPlotSeries*)self)->type());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBoxPlotSeries_OnType(const QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Type_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Type_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBoxPlotSeries_QBaseType(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = dynamic_cast<const VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Type_IsBase(true);
        return static_cast<int>(vqboxplotseries->type());
    } else {
        return static_cast<int>(((VirtualQBoxPlotSeries*)self)->type());
    }
}

void QBoxPlotSeries_SetBoxOutlineVisible(QBoxPlotSeries* self, bool visible) {
    self->setBoxOutlineVisible(visible);
}

bool QBoxPlotSeries_BoxOutlineVisible(QBoxPlotSeries* self) {
    return self->boxOutlineVisible();
}

void QBoxPlotSeries_SetBoxWidth(QBoxPlotSeries* self, double width) {
    self->setBoxWidth(static_cast<qreal>(width));
}

double QBoxPlotSeries_BoxWidth(QBoxPlotSeries* self) {
    return static_cast<double>(self->boxWidth());
}

void QBoxPlotSeries_SetBrush(QBoxPlotSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QBoxPlotSeries_Brush(const QBoxPlotSeries* self) {
    return new QBrush(self->brush());
}

void QBoxPlotSeries_SetPen(QBoxPlotSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QBoxPlotSeries_Pen(const QBoxPlotSeries* self) {
    return new QPen(self->pen());
}

void QBoxPlotSeries_Clicked(QBoxPlotSeries* self, QBoxSet* boxset) {
    self->clicked(boxset);
}

void QBoxPlotSeries_Connect_Clicked(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::clicked, [self, slotFunc](QBoxSet* boxset) {
        QBoxSet* sigval1 = boxset;
        slotFunc(self, sigval1);
    });
}

void QBoxPlotSeries_Hovered(QBoxPlotSeries* self, bool status, QBoxSet* boxset) {
    self->hovered(status, boxset);
}

void QBoxPlotSeries_Connect_Hovered(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, bool, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, bool, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::hovered, [self, slotFunc](bool status, QBoxSet* boxset) {
        bool sigval1 = status;
        QBoxSet* sigval2 = boxset;
        slotFunc(self, sigval1, sigval2);
    });
}

void QBoxPlotSeries_Pressed(QBoxPlotSeries* self, QBoxSet* boxset) {
    self->pressed(boxset);
}

void QBoxPlotSeries_Connect_Pressed(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::pressed, [self, slotFunc](QBoxSet* boxset) {
        QBoxSet* sigval1 = boxset;
        slotFunc(self, sigval1);
    });
}

void QBoxPlotSeries_Released(QBoxPlotSeries* self, QBoxSet* boxset) {
    self->released(boxset);
}

void QBoxPlotSeries_Connect_Released(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::released, [self, slotFunc](QBoxSet* boxset) {
        QBoxSet* sigval1 = boxset;
        slotFunc(self, sigval1);
    });
}

void QBoxPlotSeries_DoubleClicked(QBoxPlotSeries* self, QBoxSet* boxset) {
    self->doubleClicked(boxset);
}

void QBoxPlotSeries_Connect_DoubleClicked(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet*) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::doubleClicked, [self, slotFunc](QBoxSet* boxset) {
        QBoxSet* sigval1 = boxset;
        slotFunc(self, sigval1);
    });
}

void QBoxPlotSeries_CountChanged(QBoxPlotSeries* self) {
    self->countChanged();
}

void QBoxPlotSeries_Connect_CountChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxPlotSeries_PenChanged(QBoxPlotSeries* self) {
    self->penChanged();
}

void QBoxPlotSeries_Connect_PenChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxPlotSeries_BrushChanged(QBoxPlotSeries* self) {
    self->brushChanged();
}

void QBoxPlotSeries_Connect_BrushChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxPlotSeries_BoxOutlineVisibilityChanged(QBoxPlotSeries* self) {
    self->boxOutlineVisibilityChanged();
}

void QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxOutlineVisibilityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxPlotSeries_BoxWidthChanged(QBoxPlotSeries* self) {
    self->boxWidthChanged();
}

void QBoxPlotSeries_Connect_BoxWidthChanged(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*) = reinterpret_cast<void (*)(QBoxPlotSeries*)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBoxPlotSeries_BoxsetsAdded(QBoxPlotSeries* self, const libqt_list /* of QBoxSet* */ sets) {
    QList<QBoxSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QBoxSet** sets_arr = static_cast<QBoxSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->boxsetsAdded(sets_QList);
}

void QBoxPlotSeries_Connect_BoxsetsAdded(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet**) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet**)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxsetsAdded, [self, slotFunc](const QList<QBoxSet*>& sets) {
        const QList<QBoxSet*>& sets_ret = sets;
        // Convert QList<> from C++ memory to manually-managed C memory
        QBoxSet** sets_arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * (sets_ret.size() + 1)));
        for (qsizetype i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        // Append sentinel value to the list
        sets_arr[sets_ret.size()] = nullptr;
        QBoxSet** sigval1 = sets_arr;
        slotFunc(self, sigval1);
        free(sets_arr);
    });
}

void QBoxPlotSeries_BoxsetsRemoved(QBoxPlotSeries* self, const libqt_list /* of QBoxSet* */ sets) {
    QList<QBoxSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QBoxSet** sets_arr = static_cast<QBoxSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->boxsetsRemoved(sets_QList);
}

void QBoxPlotSeries_Connect_BoxsetsRemoved(QBoxPlotSeries* self, intptr_t slot) {
    void (*slotFunc)(QBoxPlotSeries*, QBoxSet**) = reinterpret_cast<void (*)(QBoxPlotSeries*, QBoxSet**)>(slot);
    QBoxPlotSeries::connect(self, &QBoxPlotSeries::boxsetsRemoved, [self, slotFunc](const QList<QBoxSet*>& sets) {
        const QList<QBoxSet*>& sets_ret = sets;
        // Convert QList<> from C++ memory to manually-managed C memory
        QBoxSet** sets_arr = static_cast<QBoxSet**>(malloc(sizeof(QBoxSet*) * (sets_ret.size() + 1)));
        for (qsizetype i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        // Append sentinel value to the list
        sets_arr[sets_ret.size()] = nullptr;
        QBoxSet** sigval1 = sets_arr;
        slotFunc(self, sigval1);
        free(sets_arr);
    });
}

libqt_string QBoxPlotSeries_Tr2(const char* s, const char* c) {
    QString _ret = QBoxPlotSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBoxPlotSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBoxPlotSeries::tr(s, c, static_cast<int>(n));
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
bool QBoxPlotSeries_Event(QBoxPlotSeries* self, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->event(event);
    } else {
        return self->QBoxPlotSeries::event(event);
    }
}

// Base class handler implementation
bool QBoxPlotSeries_QBaseEvent(QBoxPlotSeries* self, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Event_IsBase(true);
        return vqboxplotseries->event(event);
    } else {
        return self->QBoxPlotSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnEvent(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Event_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotSeries_EventFilter(QBoxPlotSeries* self, QObject* watched, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->eventFilter(watched, event);
    } else {
        return self->QBoxPlotSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBoxPlotSeries_QBaseEventFilter(QBoxPlotSeries* self, QObject* watched, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_EventFilter_IsBase(true);
        return vqboxplotseries->eventFilter(watched, event);
    } else {
        return self->QBoxPlotSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnEventFilter(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_EventFilter_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotSeries_TimerEvent(QBoxPlotSeries* self, QTimerEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->timerEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotSeries_QBaseTimerEvent(QBoxPlotSeries* self, QTimerEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_TimerEvent_IsBase(true);
        vqboxplotseries->timerEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnTimerEvent(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_TimerEvent_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotSeries_ChildEvent(QBoxPlotSeries* self, QChildEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->childEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotSeries_QBaseChildEvent(QBoxPlotSeries* self, QChildEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_ChildEvent_IsBase(true);
        vqboxplotseries->childEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnChildEvent(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_ChildEvent_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotSeries_CustomEvent(QBoxPlotSeries* self, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->customEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotSeries_QBaseCustomEvent(QBoxPlotSeries* self, QEvent* event) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_CustomEvent_IsBase(true);
        vqboxplotseries->customEvent(event);
    } else {
        ((VirtualQBoxPlotSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnCustomEvent(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_CustomEvent_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotSeries_ConnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->connectNotify(*signal);
    } else {
        ((VirtualQBoxPlotSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotSeries_QBaseConnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_ConnectNotify_IsBase(true);
        vqboxplotseries->connectNotify(*signal);
    } else {
        ((VirtualQBoxPlotSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnConnectNotify(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotSeries_DisconnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxPlotSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotSeries_QBaseDisconnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_DisconnectNotify_IsBase(true);
        vqboxplotseries->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxPlotSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnDisconnectNotify(QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = dynamic_cast<VirtualQBoxPlotSeries*>(self);
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBoxPlotSeries_Sender(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->sender();
    } else {
        return ((VirtualQBoxPlotSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBoxPlotSeries_QBaseSender(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Sender_IsBase(true);
        return vqboxplotseries->sender();
    } else {
        return ((VirtualQBoxPlotSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnSender(const QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Sender_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotSeries_SenderSignalIndex(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->senderSignalIndex();
    } else {
        return ((VirtualQBoxPlotSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBoxPlotSeries_QBaseSenderSignalIndex(const QBoxPlotSeries* self) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_SenderSignalIndex_IsBase(true);
        return vqboxplotseries->senderSignalIndex();
    } else {
        return ((VirtualQBoxPlotSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnSenderSignalIndex(const QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotSeries_Receivers(const QBoxPlotSeries* self, const char* signal) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->receivers(signal);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBoxPlotSeries_QBaseReceivers(const QBoxPlotSeries* self, const char* signal) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Receivers_IsBase(true);
        return vqboxplotseries->receivers(signal);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnReceivers(const QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_Receivers_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotSeries_IsSignalConnected(const QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        return vqboxplotseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBoxPlotSeries_QBaseIsSignalConnected(const QBoxPlotSeries* self, const QMetaMethod* signal) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_IsSignalConnected_IsBase(true);
        return vqboxplotseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxPlotSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotSeries_OnIsSignalConnected(const QBoxPlotSeries* self, intptr_t slot) {
    auto* vqboxplotseries = const_cast<VirtualQBoxPlotSeries*>(dynamic_cast<const VirtualQBoxPlotSeries*>(self));
    if (vqboxplotseries && vqboxplotseries->isVirtualQBoxPlotSeries) {
        vqboxplotseries->setQBoxPlotSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQBoxPlotSeries::QBoxPlotSeries_IsSignalConnected_Callback>(slot));
    }
}

void QBoxPlotSeries_Delete(QBoxPlotSeries* self) {
    delete self;
}
