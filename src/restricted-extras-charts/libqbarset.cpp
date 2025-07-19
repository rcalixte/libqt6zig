#include <QBarSet>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarset.h>
#include "libqbarset.h"
#include "libqbarset.hxx"

QBarSet* QBarSet_new(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBarSet(label_QString);
}

QBarSet* QBarSet_new2(const libqt_string label, QObject* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQBarSet(label_QString, parent);
}

QMetaObject* QBarSet_MetaObject(const QBarSet* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarSet_Metacast(QBarSet* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarSet_Metacall(QBarSet* self, int param1, int param2, void** param3) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBarSet*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBarSet_OnMetacall(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Metacall_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBarSet_QBaseMetacall(QBarSet* self, int param1, int param2, void** param3) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Metacall_IsBase(true);
        return vqbarset->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBarSet*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBarSet_Tr(const char* s) {
    QString _ret = QBarSet::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarSet_SetLabel(QBarSet* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string QBarSet_Label(const QBarSet* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarSet_Append(QBarSet* self, const double value) {
    self->append(static_cast<const qreal>(value));
}

void QBarSet_Append2(QBarSet* self, const libqt_list /* of double */ values) {
    QList<double> values_QList;
    values_QList.reserve(values.len);
    double* values_arr = static_cast<double*>(values.data);
    for (size_t i = 0; i < values.len; ++i) {
        values_QList.push_back(static_cast<double>(values_arr[i]));
    }
    self->append(values_QList);
}

QBarSet* QBarSet_OperatorShiftLeft(QBarSet* self, const double* value) {
    QBarSet& _ret = self->operator<<(static_cast<const qreal&>(*value));
    // Cast returned reference into pointer
    return &_ret;
}

void QBarSet_Insert(QBarSet* self, const int index, const double value) {
    self->insert(static_cast<const int>(index), static_cast<const qreal>(value));
}

void QBarSet_Remove(QBarSet* self, const int index) {
    self->remove(static_cast<const int>(index));
}

void QBarSet_Replace(QBarSet* self, const int index, const double value) {
    self->replace(static_cast<const int>(index), static_cast<const qreal>(value));
}

double QBarSet_At(const QBarSet* self, const int index) {
    return static_cast<double>(self->at(static_cast<const int>(index)));
}

double QBarSet_OperatorSubscript(const QBarSet* self, const int index) {
    return static_cast<double>(self->operator[](static_cast<const int>(index)));
}

int QBarSet_Count(const QBarSet* self) {
    return self->count();
}

double QBarSet_Sum(const QBarSet* self) {
    return static_cast<double>(self->sum());
}

void QBarSet_SetPen(QBarSet* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QBarSet_Pen(const QBarSet* self) {
    return new QPen(self->pen());
}

void QBarSet_SetBrush(QBarSet* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QBarSet_Brush(const QBarSet* self) {
    return new QBrush(self->brush());
}

void QBarSet_SetLabelBrush(QBarSet* self, const QBrush* brush) {
    self->setLabelBrush(*brush);
}

QBrush* QBarSet_LabelBrush(const QBarSet* self) {
    return new QBrush(self->labelBrush());
}

void QBarSet_SetLabelFont(QBarSet* self, const QFont* font) {
    self->setLabelFont(*font);
}

QFont* QBarSet_LabelFont(const QBarSet* self) {
    return new QFont(self->labelFont());
}

QColor* QBarSet_Color(QBarSet* self) {
    return new QColor(self->color());
}

void QBarSet_SetColor(QBarSet* self, QColor* color) {
    self->setColor(*color);
}

QColor* QBarSet_BorderColor(QBarSet* self) {
    return new QColor(self->borderColor());
}

void QBarSet_SetBorderColor(QBarSet* self, QColor* color) {
    self->setBorderColor(*color);
}

QColor* QBarSet_LabelColor(QBarSet* self) {
    return new QColor(self->labelColor());
}

void QBarSet_SetLabelColor(QBarSet* self, QColor* color) {
    self->setLabelColor(*color);
}

QColor* QBarSet_SelectedColor(const QBarSet* self) {
    return new QColor(self->selectedColor());
}

void QBarSet_SetSelectedColor(QBarSet* self, const QColor* color) {
    self->setSelectedColor(*color);
}

bool QBarSet_IsBarSelected(const QBarSet* self, int index) {
    return self->isBarSelected(static_cast<int>(index));
}

void QBarSet_SelectBar(QBarSet* self, int index) {
    self->selectBar(static_cast<int>(index));
}

void QBarSet_DeselectBar(QBarSet* self, int index) {
    self->deselectBar(static_cast<int>(index));
}

void QBarSet_SetBarSelected(QBarSet* self, int index, bool selected) {
    self->setBarSelected(static_cast<int>(index), selected);
}

void QBarSet_SelectAllBars(QBarSet* self) {
    self->selectAllBars();
}

void QBarSet_DeselectAllBars(QBarSet* self) {
    self->deselectAllBars();
}

void QBarSet_SelectBars(QBarSet* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->selectBars(indexes_QList);
}

void QBarSet_DeselectBars(QBarSet* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->deselectBars(indexes_QList);
}

void QBarSet_ToggleSelection(QBarSet* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->toggleSelection(indexes_QList);
}

libqt_list /* of int */ QBarSet_SelectedBars(const QBarSet* self) {
    QList<int> _ret = self->selectedBars();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBarSet_Clicked(QBarSet* self, int index) {
    self->clicked(static_cast<int>(index));
}

void QBarSet_Connect_Clicked(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::clicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBarSet_Hovered(QBarSet* self, bool status, int index) {
    self->hovered(status, static_cast<int>(index));
}

void QBarSet_Connect_Hovered(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, bool, int) = reinterpret_cast<void (*)(QBarSet*, bool, int)>(slot);
    QBarSet::connect(self, &QBarSet::hovered, [self, slotFunc](bool status, int index) {
        bool sigval1 = status;
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

void QBarSet_Pressed(QBarSet* self, int index) {
    self->pressed(static_cast<int>(index));
}

void QBarSet_Connect_Pressed(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::pressed, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBarSet_Released(QBarSet* self, int index) {
    self->released(static_cast<int>(index));
}

void QBarSet_Connect_Released(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::released, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBarSet_DoubleClicked(QBarSet* self, int index) {
    self->doubleClicked(static_cast<int>(index));
}

void QBarSet_Connect_DoubleClicked(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::doubleClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBarSet_PenChanged(QBarSet* self) {
    self->penChanged();
}

void QBarSet_Connect_PenChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarSet_BrushChanged(QBarSet* self) {
    self->brushChanged();
}

void QBarSet_Connect_BrushChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarSet_LabelChanged(QBarSet* self) {
    self->labelChanged();
}

void QBarSet_Connect_LabelChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarSet_LabelBrushChanged(QBarSet* self) {
    self->labelBrushChanged();
}

void QBarSet_Connect_LabelBrushChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelBrushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarSet_LabelFontChanged(QBarSet* self) {
    self->labelFontChanged();
}

void QBarSet_Connect_LabelFontChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*) = reinterpret_cast<void (*)(QBarSet*)>(slot);
    QBarSet::connect(self, &QBarSet::labelFontChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarSet_ColorChanged(QBarSet* self, QColor* color) {
    self->colorChanged(*color);
}

void QBarSet_Connect_ColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QBarSet_BorderColorChanged(QBarSet* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QBarSet_Connect_BorderColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::borderColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QBarSet_LabelColorChanged(QBarSet* self, QColor* color) {
    self->labelColorChanged(*color);
}

void QBarSet_Connect_LabelColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::labelColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QBarSet_SelectedColorChanged(QBarSet* self, const QColor* color) {
    self->selectedColorChanged(*color);
}

void QBarSet_Connect_SelectedColorChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, QColor*) = reinterpret_cast<void (*)(QBarSet*, QColor*)>(slot);
    QBarSet::connect(self, &QBarSet::selectedColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QBarSet_ValuesAdded(QBarSet* self, int index, int count) {
    self->valuesAdded(static_cast<int>(index), static_cast<int>(count));
}

void QBarSet_Connect_ValuesAdded(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int, int) = reinterpret_cast<void (*)(QBarSet*, int, int)>(slot);
    QBarSet::connect(self, &QBarSet::valuesAdded, [self, slotFunc](int index, int count) {
        int sigval1 = index;
        int sigval2 = count;
        slotFunc(self, sigval1, sigval2);
    });
}

void QBarSet_ValuesRemoved(QBarSet* self, int index, int count) {
    self->valuesRemoved(static_cast<int>(index), static_cast<int>(count));
}

void QBarSet_Connect_ValuesRemoved(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int, int) = reinterpret_cast<void (*)(QBarSet*, int, int)>(slot);
    QBarSet::connect(self, &QBarSet::valuesRemoved, [self, slotFunc](int index, int count) {
        int sigval1 = index;
        int sigval2 = count;
        slotFunc(self, sigval1, sigval2);
    });
}

void QBarSet_ValueChanged(QBarSet* self, int index) {
    self->valueChanged(static_cast<int>(index));
}

void QBarSet_Connect_ValueChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, int) = reinterpret_cast<void (*)(QBarSet*, int)>(slot);
    QBarSet::connect(self, &QBarSet::valueChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QBarSet_SelectedBarsChanged(QBarSet* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->selectedBarsChanged(indexes_QList);
}

void QBarSet_Connect_SelectedBarsChanged(QBarSet* self, intptr_t slot) {
    void (*slotFunc)(QBarSet*, libqt_list /* of int */) = reinterpret_cast<void (*)(QBarSet*, libqt_list /* of int */)>(slot);
    QBarSet::connect(self, &QBarSet::selectedBarsChanged, [self, slotFunc](const QList<int>& indexes) {
        const QList<int>& indexes_ret = indexes;
        // Convert QList<> from C++ memory to manually-managed C memory
        int* indexes_arr = static_cast<int*>(malloc(sizeof(int) * indexes_ret.size()));
        for (size_t i = 0; i < indexes_ret.size(); ++i) {
            indexes_arr[i] = indexes_ret[i];
        }
        libqt_list indexes_out;
        indexes_out.len = indexes_ret.size();
        indexes_out.data = static_cast<void*>(indexes_arr);
        libqt_list /* of int */ sigval1 = indexes_out;
        slotFunc(self, sigval1);
    });
}

libqt_string QBarSet_Tr2(const char* s, const char* c) {
    QString _ret = QBarSet::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarSet_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBarSet::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarSet_Remove2(QBarSet* self, const int index, const int count) {
    self->remove(static_cast<const int>(index), static_cast<const int>(count));
}

// Derived class handler implementation
bool QBarSet_Event(QBarSet* self, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->event(event);
    } else {
        return self->QBarSet::event(event);
    }
}

// Base class handler implementation
bool QBarSet_QBaseEvent(QBarSet* self, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Event_IsBase(true);
        return vqbarset->event(event);
    } else {
        return self->QBarSet::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnEvent(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Event_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarSet_EventFilter(QBarSet* self, QObject* watched, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->eventFilter(watched, event);
    } else {
        return self->QBarSet::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBarSet_QBaseEventFilter(QBarSet* self, QObject* watched, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_EventFilter_IsBase(true);
        return vqbarset->eventFilter(watched, event);
    } else {
        return self->QBarSet::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnEventFilter(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_EventFilter_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSet_TimerEvent(QBarSet* self, QTimerEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->timerEvent(event);
    } else {
        ((VirtualQBarSet*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBarSet_QBaseTimerEvent(QBarSet* self, QTimerEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_TimerEvent_IsBase(true);
        vqbarset->timerEvent(event);
    } else {
        ((VirtualQBarSet*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnTimerEvent(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_TimerEvent_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSet_ChildEvent(QBarSet* self, QChildEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->childEvent(event);
    } else {
        ((VirtualQBarSet*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBarSet_QBaseChildEvent(QBarSet* self, QChildEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_ChildEvent_IsBase(true);
        vqbarset->childEvent(event);
    } else {
        ((VirtualQBarSet*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnChildEvent(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_ChildEvent_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSet_CustomEvent(QBarSet* self, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->customEvent(event);
    } else {
        ((VirtualQBarSet*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBarSet_QBaseCustomEvent(QBarSet* self, QEvent* event) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_CustomEvent_IsBase(true);
        vqbarset->customEvent(event);
    } else {
        ((VirtualQBarSet*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnCustomEvent(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_CustomEvent_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSet_ConnectNotify(QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->connectNotify(*signal);
    } else {
        ((VirtualQBarSet*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBarSet_QBaseConnectNotify(QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_ConnectNotify_IsBase(true);
        vqbarset->connectNotify(*signal);
    } else {
        ((VirtualQBarSet*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnConnectNotify(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_ConnectNotify_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSet_DisconnectNotify(QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->disconnectNotify(*signal);
    } else {
        ((VirtualQBarSet*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBarSet_QBaseDisconnectNotify(QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_DisconnectNotify_IsBase(true);
        vqbarset->disconnectNotify(*signal);
    } else {
        ((VirtualQBarSet*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnDisconnectNotify(QBarSet* self, intptr_t slot) {
    auto* vqbarset = dynamic_cast<VirtualQBarSet*>(self);
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_DisconnectNotify_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBarSet_Sender(const QBarSet* self) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->sender();
    } else {
        return ((VirtualQBarSet*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBarSet_QBaseSender(const QBarSet* self) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Sender_IsBase(true);
        return vqbarset->sender();
    } else {
        return ((VirtualQBarSet*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnSender(const QBarSet* self, intptr_t slot) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Sender_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarSet_SenderSignalIndex(const QBarSet* self) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->senderSignalIndex();
    } else {
        return ((VirtualQBarSet*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBarSet_QBaseSenderSignalIndex(const QBarSet* self) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_SenderSignalIndex_IsBase(true);
        return vqbarset->senderSignalIndex();
    } else {
        return ((VirtualQBarSet*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnSenderSignalIndex(const QBarSet* self, intptr_t slot) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarSet_Receivers(const QBarSet* self, const char* signal) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->receivers(signal);
    } else {
        return ((VirtualQBarSet*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBarSet_QBaseReceivers(const QBarSet* self, const char* signal) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Receivers_IsBase(true);
        return vqbarset->receivers(signal);
    } else {
        return ((VirtualQBarSet*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnReceivers(const QBarSet* self, intptr_t slot) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_Receivers_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarSet_IsSignalConnected(const QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        return vqbarset->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarSet*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBarSet_QBaseIsSignalConnected(const QBarSet* self, const QMetaMethod* signal) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_IsSignalConnected_IsBase(true);
        return vqbarset->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarSet*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSet_OnIsSignalConnected(const QBarSet* self, intptr_t slot) {
    auto* vqbarset = const_cast<VirtualQBarSet*>(dynamic_cast<const VirtualQBarSet*>(self));
    if (vqbarset && vqbarset->isVirtualQBarSet) {
        vqbarset->setQBarSet_IsSignalConnected_Callback(reinterpret_cast<VirtualQBarSet::QBarSet_IsSignalConnected_Callback>(slot));
    }
}

void QBarSet_Delete(QBarSet* self) {
    delete self;
}
