#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QItemSelectionRange>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qitemselectionmodel.h>
#include "libqitemselectionmodel.h"
#include "libqitemselectionmodel.hxx"

QItemSelectionRange* QItemSelectionRange_new() {
    return new QItemSelectionRange();
}

QItemSelectionRange* QItemSelectionRange_new2(const QModelIndex* topL, const QModelIndex* bottomR) {
    return new QItemSelectionRange(*topL, *bottomR);
}

QItemSelectionRange* QItemSelectionRange_new3(const QModelIndex* index) {
    return new QItemSelectionRange(*index);
}

QItemSelectionRange* QItemSelectionRange_new4(const QItemSelectionRange* param1) {
    return new QItemSelectionRange(*param1);
}

void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other) {
    self->swap(*other);
}

int QItemSelectionRange_Top(const QItemSelectionRange* self) {
    return self->top();
}

int QItemSelectionRange_Left(const QItemSelectionRange* self) {
    return self->left();
}

int QItemSelectionRange_Bottom(const QItemSelectionRange* self) {
    return self->bottom();
}

int QItemSelectionRange_Right(const QItemSelectionRange* self) {
    return self->right();
}

int QItemSelectionRange_Width(const QItemSelectionRange* self) {
    return self->width();
}

int QItemSelectionRange_Height(const QItemSelectionRange* self) {
    return self->height();
}

QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self) {
    const QPersistentModelIndex& _ret = self->topLeft();
    // Cast returned reference into pointer
    return const_cast<QPersistentModelIndex*>(&_ret);
}

QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self) {
    const QPersistentModelIndex& _ret = self->bottomRight();
    // Cast returned reference into pointer
    return const_cast<QPersistentModelIndex*>(&_ret);
}

QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self) {
    return new QModelIndex(self->parent());
}

QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self) {
    return (QAbstractItemModel*)self->model();
}

bool QItemSelectionRange_Contains(const QItemSelectionRange* self, const QModelIndex* index) {
    return self->contains(*index);
}

bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, const QModelIndex* parentIndex) {
    return self->contains(static_cast<int>(row), static_cast<int>(column), *parentIndex);
}

bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, const QItemSelectionRange* other) {
    return self->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, const QItemSelectionRange* other) {
    return new QItemSelectionRange(self->intersected(*other));
}

bool QItemSelectionRange_OperatorEqual(const QItemSelectionRange* self, const QItemSelectionRange* other) {
    return (*self == *other);
}

bool QItemSelectionRange_OperatorNotEqual(const QItemSelectionRange* self, const QItemSelectionRange* other) {
    return (*self != *other);
}

bool QItemSelectionRange_IsValid(const QItemSelectionRange* self) {
    return self->isValid();
}

bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self) {
    return self->isEmpty();
}

libqt_list /* of QModelIndex* */ QItemSelectionRange_Indexes(const QItemSelectionRange* self) {
    QModelIndexList _ret = self->indexes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QItemSelectionRange_Delete(QItemSelectionRange* self) {
    delete self;
}

QItemSelectionModel* QItemSelectionModel_new() {
    return new VirtualQItemSelectionModel();
}

QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent) {
    return new VirtualQItemSelectionModel(model, parent);
}

QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model) {
    return new VirtualQItemSelectionModel(model);
}

QMetaObject* QItemSelectionModel_MetaObject(const QItemSelectionModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QItemSelectionModel_Metacast(QItemSelectionModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QItemSelectionModel_Metacall(QItemSelectionModel* self, int param1, int param2, void** param3) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQItemSelectionModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QItemSelectionModel_OnMetacall(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Metacall_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QItemSelectionModel_QBaseMetacall(QItemSelectionModel* self, int param1, int param2, void** param3) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Metacall_IsBase(true);
        return vqitemselectionmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQItemSelectionModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QItemSelectionModel_Tr(const char* s) {
    QString _ret = QItemSelectionModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self) {
    return new QModelIndex(self->currentIndex());
}

bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, const QModelIndex* index) {
    return self->isSelected(*index);
}

bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row) {
    return self->isRowSelected(static_cast<int>(row));
}

bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column) {
    return self->isColumnSelected(static_cast<int>(column));
}

bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row) {
    return self->rowIntersectsSelection(static_cast<int>(row));
}

bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column) {
    return self->columnIntersectsSelection(static_cast<int>(column));
}

bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self) {
    return self->hasSelection();
}

libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self) {
    QModelIndexList _ret = self->selectedIndexes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedRows(const QItemSelectionModel* self) {
    QModelIndexList _ret = self->selectedRows();
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self) {
    QModelIndexList _ret = self->selectedColumns();
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QItemSelection* QItemSelectionModel_Selection(const QItemSelectionModel* self) {
    return new QItemSelection(self->selection());
}

QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self) {
    return (QAbstractItemModel*)self->model();
}

QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self) {
    return self->model();
}

void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void QItemSelectionModel_ClearSelection(QItemSelectionModel* self) {
    self->clearSelection();
}

void QItemSelectionModel_SelectionChanged(QItemSelectionModel* self, const QItemSelection* selected, const QItemSelection* deselected) {
    self->selectionChanged(*selected, *deselected);
}

void QItemSelectionModel_Connect_SelectionChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QItemSelection*, QItemSelection*) = reinterpret_cast<void (*)(QItemSelectionModel*, QItemSelection*, QItemSelection*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::selectionChanged, [self, slotFunc](const QItemSelection& selected, const QItemSelection& deselected) {
        const QItemSelection& selected_ret = selected;
        // Cast returned reference into pointer
        QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
        const QItemSelection& deselected_ret = deselected;
        // Cast returned reference into pointer
        QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
    self->currentChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, QModelIndex*, QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
        const QModelIndex& current_ret = current;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
        const QModelIndex& previous_ret = previous;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
    self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, QModelIndex*, QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentRowChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
        const QModelIndex& current_ret = current;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
        const QModelIndex& previous_ret = previous;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
    self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, QModelIndex*, QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentColumnChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
        const QModelIndex& current_ret = current;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
        const QModelIndex& previous_ret = previous;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
    self->modelChanged(model);
}

void QItemSelectionModel_Connect_ModelChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QAbstractItemModel*) = reinterpret_cast<void (*)(QItemSelectionModel*, QAbstractItemModel*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::modelChanged, [self, slotFunc](QAbstractItemModel* model) {
        QAbstractItemModel* sigval1 = model;
        slotFunc(self, sigval1);
    });
}

libqt_string QItemSelectionModel_Tr2(const char* s, const char* c) {
    QString _ret = QItemSelectionModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QItemSelectionModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, const QModelIndex* parent) {
    return self->isRowSelected(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, const QModelIndex* parent) {
    return self->isColumnSelected(static_cast<int>(column), *parent);
}

bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, const QModelIndex* parent) {
    return self->rowIntersectsSelection(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, const QModelIndex* parent) {
    return self->columnIntersectsSelection(static_cast<int>(column), *parent);
}

libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column) {
    QModelIndexList _ret = self->selectedRows(static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QModelIndex* */ QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row) {
    QModelIndexList _ret = self->selectedColumns(static_cast<int>(row));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseSetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_SetCurrentIndex_IsBase(true);
        vqitemselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSetCurrentIndex(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_SetCurrentIndex_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_SetCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_Select(QItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseSelect(QItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Select_IsBase(true);
        vqitemselectionmodel->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSelect(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Select_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Select_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_Select2(QItemSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseSelect2(QItemSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Select2_IsBase(true);
        vqitemselectionmodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->QItemSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSelect2(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Select2_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Select2_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_Clear(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->clear();
    } else {
        self->QItemSelectionModel::clear();
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseClear(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Clear_IsBase(true);
        vqitemselectionmodel->clear();
    } else {
        self->QItemSelectionModel::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnClear(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Clear_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_Reset(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->reset();
    } else {
        self->QItemSelectionModel::reset();
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseReset(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Reset_IsBase(true);
        vqitemselectionmodel->reset();
    } else {
        self->QItemSelectionModel::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnReset(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Reset_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->clearCurrentIndex();
    } else {
        self->QItemSelectionModel::clearCurrentIndex();
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseClearCurrentIndex(QItemSelectionModel* self) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ClearCurrentIndex_IsBase(true);
        vqitemselectionmodel->clearCurrentIndex();
    } else {
        self->QItemSelectionModel::clearCurrentIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnClearCurrentIndex(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ClearCurrentIndex_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_ClearCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemSelectionModel_Event(QItemSelectionModel* self, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->event(event);
    } else {
        return self->QItemSelectionModel::event(event);
    }
}

// Base class handler implementation
bool QItemSelectionModel_QBaseEvent(QItemSelectionModel* self, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Event_IsBase(true);
        return vqitemselectionmodel->event(event);
    } else {
        return self->QItemSelectionModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnEvent(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Event_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemSelectionModel_EventFilter(QItemSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->eventFilter(watched, event);
    } else {
        return self->QItemSelectionModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QItemSelectionModel_QBaseEventFilter(QItemSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_EventFilter_IsBase(true);
        return vqitemselectionmodel->eventFilter(watched, event);
    } else {
        return self->QItemSelectionModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnEventFilter(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_EventFilter_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_TimerEvent(QItemSelectionModel* self, QTimerEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->timerEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseTimerEvent(QItemSelectionModel* self, QTimerEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_TimerEvent_IsBase(true);
        vqitemselectionmodel->timerEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnTimerEvent(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_TimerEvent_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_ChildEvent(QItemSelectionModel* self, QChildEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->childEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseChildEvent(QItemSelectionModel* self, QChildEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ChildEvent_IsBase(true);
        vqitemselectionmodel->childEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnChildEvent(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ChildEvent_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_CustomEvent(QItemSelectionModel* self, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->customEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseCustomEvent(QItemSelectionModel* self, QEvent* event) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_CustomEvent_IsBase(true);
        vqitemselectionmodel->customEvent(event);
    } else {
        ((VirtualQItemSelectionModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnCustomEvent(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_CustomEvent_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_ConnectNotify(QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualQItemSelectionModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseConnectNotify(QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ConnectNotify_IsBase(true);
        vqitemselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualQItemSelectionModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnConnectNotify(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_ConnectNotify_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_DisconnectNotify(QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQItemSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseDisconnectNotify(QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_DisconnectNotify_IsBase(true);
        vqitemselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQItemSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnDisconnectNotify(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemSelectionModel_EmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualQItemSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Base class handler implementation
void QItemSelectionModel_QBaseEmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_EmitSelectionChanged_IsBase(true);
        vqitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualQItemSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnEmitSelectionChanged(QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_EmitSelectionChanged_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_EmitSelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QItemSelectionModel_Sender(const QItemSelectionModel* self) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->sender();
    } else {
        return ((VirtualQItemSelectionModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QItemSelectionModel_QBaseSender(const QItemSelectionModel* self) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Sender_IsBase(true);
        return vqitemselectionmodel->sender();
    } else {
        return ((VirtualQItemSelectionModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSender(const QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Sender_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QItemSelectionModel_SenderSignalIndex(const QItemSelectionModel* self) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualQItemSelectionModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QItemSelectionModel_QBaseSenderSignalIndex(const QItemSelectionModel* self) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_SenderSignalIndex_IsBase(true);
        return vqitemselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualQItemSelectionModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSenderSignalIndex(const QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QItemSelectionModel_Receivers(const QItemSelectionModel* self, const char* signal) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->receivers(signal);
    } else {
        return ((VirtualQItemSelectionModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QItemSelectionModel_QBaseReceivers(const QItemSelectionModel* self, const char* signal) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Receivers_IsBase(true);
        return vqitemselectionmodel->receivers(signal);
    } else {
        return ((VirtualQItemSelectionModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnReceivers(const QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_Receivers_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemSelectionModel_IsSignalConnected(const QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        return vqitemselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQItemSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QItemSelectionModel_QBaseIsSignalConnected(const QItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_IsSignalConnected_IsBase(true);
        return vqitemselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQItemSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnIsSignalConnected(const QItemSelectionModel* self, intptr_t slot) {
    auto* vqitemselectionmodel = const_cast<VirtualQItemSelectionModel*>(dynamic_cast<const VirtualQItemSelectionModel*>(self));
    if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
        vqitemselectionmodel->setQItemSelectionModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_IsSignalConnected_Callback>(slot));
    }
}

void QItemSelectionModel_Delete(QItemSelectionModel* self) {
    delete self;
}

QItemSelection* QItemSelection_new(const QModelIndex* topLeft, const QModelIndex* bottomRight) {
    return new QItemSelection(*topLeft, *bottomRight);
}

QItemSelection* QItemSelection_new2() {
    return new QItemSelection();
}

QItemSelection* QItemSelection_new3(const QItemSelection* param1) {
    return new QItemSelection(*param1);
}

void QItemSelection_Select(QItemSelection* self, const QModelIndex* topLeft, const QModelIndex* bottomRight) {
    self->select(*topLeft, *bottomRight);
}

bool QItemSelection_Contains(const QItemSelection* self, const QModelIndex* index) {
    return self->contains(*index);
}

libqt_list /* of QModelIndex* */ QItemSelection_Indexes(const QItemSelection* self) {
    QModelIndexList _ret = self->indexes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QItemSelection_Merge(QItemSelection* self, const QItemSelection* other, int command) {
    self->merge(*other, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelection_Split(const QItemSelectionRange* range, const QItemSelectionRange* other, QItemSelection* result) {
    QItemSelection::split(*range, *other, result);
}

void QItemSelection_Delete(QItemSelection* self) {
    delete self;
}
