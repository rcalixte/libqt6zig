#include <QAbstractSeries>
#include <QBrush>
#include <QCandlestickSeries>
#include <QCandlestickSet>
#include <QChildEvent>
#include <QColor>
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
#include <qcandlestickseries.h>
#include "libqcandlestickseries.h"
#include "libqcandlestickseries.hxx"

QCandlestickSeries* QCandlestickSeries_new() {
    return new VirtualQCandlestickSeries();
}

QCandlestickSeries* QCandlestickSeries_new2(QObject* parent) {
    return new VirtualQCandlestickSeries(parent);
}

QMetaObject* QCandlestickSeries_MetaObject(const QCandlestickSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCandlestickSeries_Metacast(QCandlestickSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCandlestickSeries_Metacall(QCandlestickSeries* self, int param1, int param2, void** param3) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCandlestickSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCandlestickSeries_OnMetacall(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Metacall_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCandlestickSeries_QBaseMetacall(QCandlestickSeries* self, int param1, int param2, void** param3) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Metacall_IsBase(true);
        return vqcandlestickseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCandlestickSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCandlestickSeries_Tr(const char* s) {
    QString _ret = QCandlestickSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QCandlestickSeries_Append(QCandlestickSeries* self, QCandlestickSet* set) {
    return self->append(set);
}

bool QCandlestickSeries_Remove(QCandlestickSeries* self, QCandlestickSet* set) {
    return self->remove(set);
}

bool QCandlestickSeries_Append2(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets) {
    QList<QCandlestickSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    return self->append(sets_QList);
}

bool QCandlestickSeries_Remove2(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets) {
    QList<QCandlestickSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    return self->remove(sets_QList);
}

bool QCandlestickSeries_Insert(QCandlestickSeries* self, int index, QCandlestickSet* set) {
    return self->insert(static_cast<int>(index), set);
}

bool QCandlestickSeries_Take(QCandlestickSeries* self, QCandlestickSet* set) {
    return self->take(set);
}

void QCandlestickSeries_Clear(QCandlestickSeries* self) {
    self->clear();
}

libqt_list /* of QCandlestickSet* */ QCandlestickSeries_Sets(const QCandlestickSeries* self) {
    QList<QCandlestickSet*> _ret = self->sets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCandlestickSet** _arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QCandlestickSeries_Count(const QCandlestickSeries* self) {
    return self->count();
}

void QCandlestickSeries_SetMaximumColumnWidth(QCandlestickSeries* self, double maximumColumnWidth) {
    self->setMaximumColumnWidth(static_cast<qreal>(maximumColumnWidth));
}

double QCandlestickSeries_MaximumColumnWidth(const QCandlestickSeries* self) {
    return static_cast<double>(self->maximumColumnWidth());
}

void QCandlestickSeries_SetMinimumColumnWidth(QCandlestickSeries* self, double minimumColumnWidth) {
    self->setMinimumColumnWidth(static_cast<qreal>(minimumColumnWidth));
}

double QCandlestickSeries_MinimumColumnWidth(const QCandlestickSeries* self) {
    return static_cast<double>(self->minimumColumnWidth());
}

void QCandlestickSeries_SetBodyWidth(QCandlestickSeries* self, double bodyWidth) {
    self->setBodyWidth(static_cast<qreal>(bodyWidth));
}

double QCandlestickSeries_BodyWidth(const QCandlestickSeries* self) {
    return static_cast<double>(self->bodyWidth());
}

void QCandlestickSeries_SetBodyOutlineVisible(QCandlestickSeries* self, bool bodyOutlineVisible) {
    self->setBodyOutlineVisible(bodyOutlineVisible);
}

bool QCandlestickSeries_BodyOutlineVisible(const QCandlestickSeries* self) {
    return self->bodyOutlineVisible();
}

void QCandlestickSeries_SetCapsWidth(QCandlestickSeries* self, double capsWidth) {
    self->setCapsWidth(static_cast<qreal>(capsWidth));
}

double QCandlestickSeries_CapsWidth(const QCandlestickSeries* self) {
    return static_cast<double>(self->capsWidth());
}

void QCandlestickSeries_SetCapsVisible(QCandlestickSeries* self, bool capsVisible) {
    self->setCapsVisible(capsVisible);
}

bool QCandlestickSeries_CapsVisible(const QCandlestickSeries* self) {
    return self->capsVisible();
}

void QCandlestickSeries_SetIncreasingColor(QCandlestickSeries* self, const QColor* increasingColor) {
    self->setIncreasingColor(*increasingColor);
}

QColor* QCandlestickSeries_IncreasingColor(const QCandlestickSeries* self) {
    return new QColor(self->increasingColor());
}

void QCandlestickSeries_SetDecreasingColor(QCandlestickSeries* self, const QColor* decreasingColor) {
    self->setDecreasingColor(*decreasingColor);
}

QColor* QCandlestickSeries_DecreasingColor(const QCandlestickSeries* self) {
    return new QColor(self->decreasingColor());
}

void QCandlestickSeries_SetBrush(QCandlestickSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QCandlestickSeries_Brush(const QCandlestickSeries* self) {
    return new QBrush(self->brush());
}

void QCandlestickSeries_SetPen(QCandlestickSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QCandlestickSeries_Pen(const QCandlestickSeries* self) {
    return new QPen(self->pen());
}

void QCandlestickSeries_Clicked(QCandlestickSeries* self, QCandlestickSet* set) {
    self->clicked(set);
}

void QCandlestickSeries_Connect_Clicked(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::clicked, [self, slotFunc](QCandlestickSet* set) {
        QCandlestickSet* sigval1 = set;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_Hovered(QCandlestickSeries* self, bool status, QCandlestickSet* set) {
    self->hovered(status, set);
}

void QCandlestickSeries_Connect_Hovered(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, bool, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, bool, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::hovered, [self, slotFunc](bool status, QCandlestickSet* set) {
        bool sigval1 = status;
        QCandlestickSet* sigval2 = set;
        slotFunc(self, sigval1, sigval2);
    });
}

void QCandlestickSeries_Pressed(QCandlestickSeries* self, QCandlestickSet* set) {
    self->pressed(set);
}

void QCandlestickSeries_Connect_Pressed(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::pressed, [self, slotFunc](QCandlestickSet* set) {
        QCandlestickSet* sigval1 = set;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_Released(QCandlestickSeries* self, QCandlestickSet* set) {
    self->released(set);
}

void QCandlestickSeries_Connect_Released(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::released, [self, slotFunc](QCandlestickSet* set) {
        QCandlestickSet* sigval1 = set;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_DoubleClicked(QCandlestickSeries* self, QCandlestickSet* set) {
    self->doubleClicked(set);
}

void QCandlestickSeries_Connect_DoubleClicked(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, QCandlestickSet*) = reinterpret_cast<void (*)(QCandlestickSeries*, QCandlestickSet*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::doubleClicked, [self, slotFunc](QCandlestickSet* set) {
        QCandlestickSet* sigval1 = set;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_CandlestickSetsAdded(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets) {
    QList<QCandlestickSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->candlestickSetsAdded(sets_QList);
}

void QCandlestickSeries_Connect_CandlestickSetsAdded(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */) = reinterpret_cast<void (*)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::candlestickSetsAdded, [self, slotFunc](const QList<QCandlestickSet*>& sets) {
        const QList<QCandlestickSet*>& sets_ret = sets;
        // Convert QList<> from C++ memory to manually-managed C memory
        QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * sets_ret.size()));
        for (qsizetype i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        libqt_list sets_out;
        sets_out.len = sets_ret.size();
        sets_out.data = static_cast<void*>(sets_arr);
        libqt_list /* of QCandlestickSet* */ sigval1 = sets_out;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_CandlestickSetsRemoved(QCandlestickSeries* self, const libqt_list /* of QCandlestickSet* */ sets) {
    QList<QCandlestickSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->candlestickSetsRemoved(sets_QList);
}

void QCandlestickSeries_Connect_CandlestickSetsRemoved(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */) = reinterpret_cast<void (*)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::candlestickSetsRemoved, [self, slotFunc](const QList<QCandlestickSet*>& sets) {
        const QList<QCandlestickSet*>& sets_ret = sets;
        // Convert QList<> from C++ memory to manually-managed C memory
        QCandlestickSet** sets_arr = static_cast<QCandlestickSet**>(malloc(sizeof(QCandlestickSet*) * sets_ret.size()));
        for (qsizetype i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        libqt_list sets_out;
        sets_out.len = sets_ret.size();
        sets_out.data = static_cast<void*>(sets_arr);
        libqt_list /* of QCandlestickSet* */ sigval1 = sets_out;
        slotFunc(self, sigval1);
    });
}

void QCandlestickSeries_CountChanged(QCandlestickSeries* self) {
    self->countChanged();
}

void QCandlestickSeries_Connect_CountChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_MaximumColumnWidthChanged(QCandlestickSeries* self) {
    self->maximumColumnWidthChanged();
}

void QCandlestickSeries_Connect_MaximumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::maximumColumnWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_MinimumColumnWidthChanged(QCandlestickSeries* self) {
    self->minimumColumnWidthChanged();
}

void QCandlestickSeries_Connect_MinimumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::minimumColumnWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_BodyWidthChanged(QCandlestickSeries* self) {
    self->bodyWidthChanged();
}

void QCandlestickSeries_Connect_BodyWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::bodyWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_BodyOutlineVisibilityChanged(QCandlestickSeries* self) {
    self->bodyOutlineVisibilityChanged();
}

void QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::bodyOutlineVisibilityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_CapsWidthChanged(QCandlestickSeries* self) {
    self->capsWidthChanged();
}

void QCandlestickSeries_Connect_CapsWidthChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::capsWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_CapsVisibilityChanged(QCandlestickSeries* self) {
    self->capsVisibilityChanged();
}

void QCandlestickSeries_Connect_CapsVisibilityChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::capsVisibilityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_IncreasingColorChanged(QCandlestickSeries* self) {
    self->increasingColorChanged();
}

void QCandlestickSeries_Connect_IncreasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::increasingColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_DecreasingColorChanged(QCandlestickSeries* self) {
    self->decreasingColorChanged();
}

void QCandlestickSeries_Connect_DecreasingColorChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::decreasingColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_BrushChanged(QCandlestickSeries* self) {
    self->brushChanged();
}

void QCandlestickSeries_Connect_BrushChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCandlestickSeries_PenChanged(QCandlestickSeries* self) {
    self->penChanged();
}

void QCandlestickSeries_Connect_PenChanged(QCandlestickSeries* self, intptr_t slot) {
    void (*slotFunc)(QCandlestickSeries*) = reinterpret_cast<void (*)(QCandlestickSeries*)>(slot);
    QCandlestickSeries::connect(self, &QCandlestickSeries::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QCandlestickSeries_Tr2(const char* s, const char* c) {
    QString _ret = QCandlestickSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCandlestickSeries::tr(s, c, static_cast<int>(n));
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
int QCandlestickSeries_Type(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return static_cast<int>(vqcandlestickseries->type());
    } else {
        return static_cast<int>(self->QCandlestickSeries::type());
    }
}

// Base class handler implementation
int QCandlestickSeries_QBaseType(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Type_IsBase(true);
        return static_cast<int>(vqcandlestickseries->type());
    } else {
        return static_cast<int>(self->QCandlestickSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnType(const QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Type_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickSeries_Event(QCandlestickSeries* self, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->event(event);
    } else {
        return self->QCandlestickSeries::event(event);
    }
}

// Base class handler implementation
bool QCandlestickSeries_QBaseEvent(QCandlestickSeries* self, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Event_IsBase(true);
        return vqcandlestickseries->event(event);
    } else {
        return self->QCandlestickSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnEvent(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Event_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickSeries_EventFilter(QCandlestickSeries* self, QObject* watched, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->eventFilter(watched, event);
    } else {
        return self->QCandlestickSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCandlestickSeries_QBaseEventFilter(QCandlestickSeries* self, QObject* watched, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_EventFilter_IsBase(true);
        return vqcandlestickseries->eventFilter(watched, event);
    } else {
        return self->QCandlestickSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnEventFilter(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_EventFilter_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSeries_TimerEvent(QCandlestickSeries* self, QTimerEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->timerEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSeries_QBaseTimerEvent(QCandlestickSeries* self, QTimerEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_TimerEvent_IsBase(true);
        vqcandlestickseries->timerEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnTimerEvent(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_TimerEvent_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSeries_ChildEvent(QCandlestickSeries* self, QChildEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->childEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSeries_QBaseChildEvent(QCandlestickSeries* self, QChildEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_ChildEvent_IsBase(true);
        vqcandlestickseries->childEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnChildEvent(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_ChildEvent_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSeries_CustomEvent(QCandlestickSeries* self, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->customEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCandlestickSeries_QBaseCustomEvent(QCandlestickSeries* self, QEvent* event) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_CustomEvent_IsBase(true);
        vqcandlestickseries->customEvent(event);
    } else {
        ((VirtualQCandlestickSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnCustomEvent(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_CustomEvent_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSeries_ConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickSeries_QBaseConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_ConnectNotify_IsBase(true);
        vqcandlestickseries->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnConnectNotify(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickSeries_DisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickSeries_QBaseDisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_DisconnectNotify_IsBase(true);
        vqcandlestickseries->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnDisconnectNotify(QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = dynamic_cast<VirtualQCandlestickSeries*>(self);
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCandlestickSeries_Sender(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->sender();
    } else {
        return ((VirtualQCandlestickSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCandlestickSeries_QBaseSender(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Sender_IsBase(true);
        return vqcandlestickseries->sender();
    } else {
        return ((VirtualQCandlestickSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnSender(const QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Sender_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickSeries_SenderSignalIndex(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCandlestickSeries_QBaseSenderSignalIndex(const QCandlestickSeries* self) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_SenderSignalIndex_IsBase(true);
        return vqcandlestickseries->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnSenderSignalIndex(const QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickSeries_Receivers(const QCandlestickSeries* self, const char* signal) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->receivers(signal);
    } else {
        return ((VirtualQCandlestickSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCandlestickSeries_QBaseReceivers(const QCandlestickSeries* self, const char* signal) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Receivers_IsBase(true);
        return vqcandlestickseries->receivers(signal);
    } else {
        return ((VirtualQCandlestickSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnReceivers(const QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_Receivers_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickSeries_IsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        return vqcandlestickseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCandlestickSeries_QBaseIsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_IsSignalConnected_IsBase(true);
        return vqcandlestickseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickSeries_OnIsSignalConnected(const QCandlestickSeries* self, intptr_t slot) {
    auto* vqcandlestickseries = const_cast<VirtualQCandlestickSeries*>(dynamic_cast<const VirtualQCandlestickSeries*>(self));
    if (vqcandlestickseries && vqcandlestickseries->isVirtualQCandlestickSeries) {
        vqcandlestickseries->setQCandlestickSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQCandlestickSeries::QCandlestickSeries_IsSignalConnected_Callback>(slot));
    }
}

void QCandlestickSeries_Delete(QCandlestickSeries* self) {
    delete self;
}
