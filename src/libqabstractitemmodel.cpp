#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleData>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractitemmodel.h>
#include "libqabstractitemmodel.h"
#include "libqabstractitemmodel.hxx"

QModelRoleData* QModelRoleData_new(int role) {
    return new QModelRoleData(static_cast<int>(role));
}

int QModelRoleData_Role(const QModelRoleData* self) {
    return self->role();
}

QVariant* QModelRoleData_Data(QModelRoleData* self) {
    QVariant& _ret = self->data();
    // Cast returned reference into pointer
    return &_ret;
}

QVariant* QModelRoleData_Data2(const QModelRoleData* self) {
    const QVariant& _ret = self->data();
    // Cast returned reference into pointer
    return const_cast<QVariant*>(&_ret);
}

void QModelRoleData_ClearData(QModelRoleData* self) {
    self->clearData();
}

void QModelRoleData_OperatorAssign(QModelRoleData* self, const QModelRoleData* param1) {
    self->operator=(*param1);
}

void QModelRoleData_Delete(QModelRoleData* self) {
    delete self;
}

QModelRoleDataSpan* QModelRoleDataSpan_new(const QModelRoleDataSpan* other) {
    return new QModelRoleDataSpan(*other);
}

QModelRoleDataSpan* QModelRoleDataSpan_new2(QModelRoleDataSpan* other) {
    return new QModelRoleDataSpan(std::move(*other));
}

QModelRoleDataSpan* QModelRoleDataSpan_new3() {
    return new QModelRoleDataSpan();
}

QModelRoleDataSpan* QModelRoleDataSpan_new4(QModelRoleData* modelRoleData) {
    return new QModelRoleDataSpan(*modelRoleData);
}

QModelRoleDataSpan* QModelRoleDataSpan_new5(QModelRoleData* modelRoleData, ptrdiff_t lenVal) {
    return new QModelRoleDataSpan(modelRoleData, (qsizetype)(lenVal));
}

QModelRoleDataSpan* QModelRoleDataSpan_new6(const QModelRoleDataSpan* param1) {
    return new QModelRoleDataSpan(*param1);
}

void QModelRoleDataSpan_CopyAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = *other;
}

void QModelRoleDataSpan_MoveAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = std::move(*other);
}

ptrdiff_t QModelRoleDataSpan_Size(const QModelRoleDataSpan* self) {
    return static_cast<ptrdiff_t>(self->size());
}

ptrdiff_t QModelRoleDataSpan_Length(const QModelRoleDataSpan* self) {
    return static_cast<ptrdiff_t>(self->length());
}

QModelRoleData* QModelRoleDataSpan_Data(const QModelRoleDataSpan* self) {
    return self->data();
}

QModelRoleData* QModelRoleDataSpan_Begin(const QModelRoleDataSpan* self) {
    return self->begin();
}

QModelRoleData* QModelRoleDataSpan_End(const QModelRoleDataSpan* self) {
    return self->end();
}

QModelRoleData* QModelRoleDataSpan_OperatorSubscript(const QModelRoleDataSpan* self, ptrdiff_t index) {
    QModelRoleData& _ret = self->operator[]((qsizetype)(index));
    // Cast returned reference into pointer
    return &_ret;
}

QVariant* QModelRoleDataSpan_DataForRole(const QModelRoleDataSpan* self, int role) {
    return self->dataForRole(static_cast<int>(role));
}

void QModelRoleDataSpan_Delete(QModelRoleDataSpan* self) {
    delete self;
}

QModelIndex* QModelIndex_new(const QModelIndex* other) {
    return new QModelIndex(*other);
}

QModelIndex* QModelIndex_new2(QModelIndex* other) {
    return new QModelIndex(std::move(*other));
}

QModelIndex* QModelIndex_new3() {
    return new QModelIndex();
}

QModelIndex* QModelIndex_new4(const QModelIndex* param1) {
    return new QModelIndex(*param1);
}

void QModelIndex_CopyAssign(QModelIndex* self, QModelIndex* other) {
    *self = *other;
}

void QModelIndex_MoveAssign(QModelIndex* self, QModelIndex* other) {
    *self = std::move(*other);
}

int QModelIndex_Row(const QModelIndex* self) {
    return self->row();
}

int QModelIndex_Column(const QModelIndex* self) {
    return self->column();
}

uintptr_t QModelIndex_InternalId(const QModelIndex* self) {
    return static_cast<uintptr_t>(self->internalId());
}

void* QModelIndex_InternalPointer(const QModelIndex* self) {
    return self->internalPointer();
}

const void* QModelIndex_ConstInternalPointer(const QModelIndex* self) {
    return (const void*)self->constInternalPointer();
}

QModelIndex* QModelIndex_Parent(const QModelIndex* self) {
    return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column) {
    return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row) {
    return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QVariant* QModelIndex_Data(const QModelIndex* self) {
    return new QVariant(self->data());
}

void QModelIndex_MultiData(const QModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*roleDataSpan);
}

int QModelIndex_Flags(const QModelIndex* self) {
    return static_cast<int>(self->flags());
}

QAbstractItemModel* QModelIndex_Model(const QModelIndex* self) {
    return (QAbstractItemModel*)self->model();
}

bool QModelIndex_IsValid(const QModelIndex* self) {
    return self->isValid();
}

QVariant* QModelIndex_Data1(const QModelIndex* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_Delete(QModelIndex* self) {
    delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
    return new QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(const QModelIndex* index) {
    return new QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(const QPersistentModelIndex* other) {
    return new QPersistentModelIndex(*other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, const QPersistentModelIndex* other) {
    self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
    self->swap(*other);
}

void QPersistentModelIndex_OperatorAssign2(QPersistentModelIndex* self, const QModelIndex* other) {
    self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_ToQModelIndex(const QPersistentModelIndex* self) {
    return new QModelIndex(self->operator QModelIndex());
}

int QPersistentModelIndex_Row(const QPersistentModelIndex* self) {
    return self->row();
}

int QPersistentModelIndex_Column(const QPersistentModelIndex* self) {
    return self->column();
}

void* QPersistentModelIndex_InternalPointer(const QPersistentModelIndex* self) {
    return self->internalPointer();
}

const void* QPersistentModelIndex_ConstInternalPointer(const QPersistentModelIndex* self) {
    return (const void*)self->constInternalPointer();
}

uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self) {
    return static_cast<uintptr_t>(self->internalId());
}

QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self) {
    return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self) {
    return new QVariant(self->data());
}

void QPersistentModelIndex_MultiData(const QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*roleDataSpan);
}

int QPersistentModelIndex_Flags(const QPersistentModelIndex* self) {
    return static_cast<int>(self->flags());
}

QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self) {
    return (QAbstractItemModel*)self->model();
}

bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self) {
    return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
    delete self;
}

QAbstractItemModel* QAbstractItemModel_new() {
    return new VirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
    return new VirtualQAbstractItemModel(parent);
}

QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemModel_Metacast(QAbstractItemModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemModel_Metacall(QAbstractItemModel* self, int param1, int param2, void** param3) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractItemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractItemModel_OnMetacall(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Metacall_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractItemModel_QBaseMetacall(QAbstractItemModel* self, int param1, int param2, void** param3) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Metacall_IsBase(true);
        return vqabstractitemmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractItemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractItemModel_Tr(const char* s) {
    QString _ret = QAbstractItemModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column) {
    return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row) {
    return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column) {
    return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row) {
    return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column) {
    return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, const QModelIndex* index) {
    return self->checkIndex(*index);
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight) {
    self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_Connect_DataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, QModelIndex*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::dataChanged, [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
        const QModelIndex& topLeft_ret = topLeft;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
        const QModelIndex& bottomRight_ret = bottomRight;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
    self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_Connect_HeaderDataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, int, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, int, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::headerDataChanged, [self, slotFunc](Qt::Orientation orientation, int first, int last) {
        int sigval1 = static_cast<int>(orientation);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self) {
    self->layoutChanged();
}

void QAbstractItemModel_Connect_LayoutChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self) {
    self->layoutAboutToBeChanged();
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAbstractItemModel_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractItemModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
    return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
    return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
    return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
    return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
    return self->removeColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, const QModelIndex* index, int options) {
    return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_Connect_DataChanged3(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::dataChanged, [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) {
        const QModelIndex& topLeft_ret = topLeft;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
        const QModelIndex& bottomRight_ret = bottomRight;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
        const QList<int>& roles_ret = roles;
        // Convert QList<> from C++ memory to manually-managed C memory
        int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
        for (qsizetype i = 0; i < roles_ret.size(); ++i) {
            roles_arr[i] = roles_ret[i];
        }
        libqt_list roles_out;
        roles_out.len = roles_ret.size();
        roles_out.data = static_cast<void*>(roles_arr);
        libqt_list /* of int */ sigval3 = roles_out;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutChanged(parents_QList);
}

void QAbstractItemModel_Connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
        const QList<QPersistentModelIndex>& parents_ret = parents;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.size()));
        for (qsizetype i = 0; i < parents_ret.size(); ++i) {
            parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
        }
        libqt_list parents_out;
        parents_out.len = parents_ret.size();
        parents_out.data = static_cast<void*>(parents_arr);
        libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents, int hint) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
        const QList<QPersistentModelIndex>& parents_ret = parents;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.size()));
        for (qsizetype i = 0; i < parents_ret.size(); ++i) {
            parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
        }
        libqt_list parents_out;
        parents_out.len = parents_ret.size();
        parents_out.data = static_cast<void*>(parents_arr);
        libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
        int sigval2 = static_cast<int>(hint);
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
        const QList<QPersistentModelIndex>& parents_ret = parents;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.size()));
        for (qsizetype i = 0; i < parents_ret.size(); ++i) {
            parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
        }
        libqt_list parents_out;
        parents_out.len = parents_ret.size();
        parents_out.data = static_cast<void*>(parents_arr);
        libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents, int hint) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
        const QList<QPersistentModelIndex>& parents_ret = parents;
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.size()));
        for (qsizetype i = 0; i < parents_ret.size(); ++i) {
            parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
        }
        libqt_list parents_out;
        parents_out.len = parents_ret.size();
        parents_out.data = static_cast<void*>(parents_arr);
        libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
        int sigval2 = static_cast<int>(hint);
        slotFunc(self, sigval1, sigval2);
    });
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseIndex(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Index_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnIndex(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Index_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, const QModelIndex* child) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseParent(const QAbstractItemModel* self, const QModelIndex* child) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Parent_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnParent(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Parent_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseSibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sibling_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSibling(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_RowCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractItemModel*)self)->rowCount(*parent);
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseRowCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RowCount_IsBase(true);
        return vqabstractitemmodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractItemModel*)self)->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRowCount(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractItemModel*)self)->columnCount(*parent);
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseColumnCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ColumnCount_IsBase(true);
        return vqabstractitemmodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractItemModel*)self)->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnColumnCount(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ColumnCount_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->hasChildren(*parent);
    } else {
        return self->QAbstractItemModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseHasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_HasChildren_IsBase(true);
        return vqabstractitemmodel->hasChildren(*parent);
    } else {
        return self->QAbstractItemModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHasChildren(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_HasChildren_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, const QModelIndex* index, int role) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QVariant(vqabstractitemmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractItemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractItemModel_QBaseData(const QAbstractItemModel* self, const QModelIndex* index, int role) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Data_IsBase(true);
        return new QVariant(vqabstractitemmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractItemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Data_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_SetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractItemModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetData_IsBase(true);
        return vqabstractitemmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractItemModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QVariant(vqabstractitemmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractItemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractItemModel_QBaseHeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_HeaderData_IsBase(true);
        return new QVariant(vqabstractitemmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractItemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHeaderData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetHeaderData_IsBase(true);
        return vqabstractitemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetHeaderData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractItemModel_ItemData(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        QMap<int, QVariant> _ret = vqabstractitemmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractItemModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractItemModel_QBaseItemData(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqabstractitemmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractItemModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnItemData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_SetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractItemModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetItemData_IsBase(true);
        return vqabstractitemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractItemModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetItemData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_ClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->clearItemData(*index);
    } else {
        return self->QAbstractItemModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ClearItemData_IsBase(true);
        return vqabstractitemmodel->clearItemData(*index);
    } else {
        return self->QAbstractItemModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnClearItemData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractItemModel_MimeTypes(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        QList<QString> _ret = vqabstractitemmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractItemModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAbstractItemModel_QBaseMimeTypes(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqabstractitemmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractItemModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMimeTypes(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractItemModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QAbstractItemModel_QBaseMimeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MimeData_IsBase(true);
        return vqabstractitemmodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractItemModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMimeData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseCanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CanDropMimeData_IsBase(true);
        return vqabstractitemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanDropMimeData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseDropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DropMimeData_IsBase(true);
        return vqabstractitemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDropMimeData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return static_cast<int>(vqabstractitemmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractItemModel::supportedDropActions());
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseSupportedDropActions(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqabstractitemmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractItemModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDropActions(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return static_cast<int>(vqabstractitemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractItemModel::supportedDragActions());
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseSupportedDragActions(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqabstractitemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractItemModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDragActions(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseInsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_InsertRows_IsBase(true);
        return vqabstractitemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseInsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_InsertColumns_IsBase(true);
        return vqabstractitemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseRemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RemoveRows_IsBase(true);
        return vqabstractitemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseRemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RemoveColumns_IsBase(true);
        return vqabstractitemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MoveRows_IsBase(true);
        return vqabstractitemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MoveColumns_IsBase(true);
        return vqabstractitemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_FetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->fetchMore(*parent);
    } else {
        self->QAbstractItemModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseFetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_FetchMore_IsBase(true);
        vqabstractitemmodel->fetchMore(*parent);
    } else {
        self->QAbstractItemModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFetchMore(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->canFetchMore(*parent);
    } else {
        return self->QAbstractItemModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseCanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CanFetchMore_IsBase(true);
        return vqabstractitemmodel->canFetchMore(*parent);
    } else {
        return self->QAbstractItemModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanFetchMore(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_Flags(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return static_cast<int>(vqabstractitemmodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractItemModel::flags(*index));
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseFlags(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Flags_IsBase(true);
        return static_cast<int>(vqabstractitemmodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractItemModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFlags(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Flags_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_Sort(QAbstractItemModel* self, int column, int order) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseSort(QAbstractItemModel* self, int column, int order) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sort_IsBase(true);
        vqabstractitemmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSort(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sort_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseBuddy(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Buddy_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractItemModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBuddy(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_Match(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        QList<QModelIndex> _ret = vqabstractitemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_QBaseMatch(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqabstractitemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMatch(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Match_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QSize(vqabstractitemmodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractItemModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QAbstractItemModel_QBaseSpan(const QAbstractItemModel* self, const QModelIndex* index) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Span_IsBase(true);
        return new QSize(vqabstractitemmodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractItemModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSpan(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Span_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractItemModel_RoleNames(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        QHash<int, QByteArray> _ret = vqabstractitemmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractItemModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractItemModel_QBaseRoleNames(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqabstractitemmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractItemModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRoleNames(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_MultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractItemModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseMultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MultiData_IsBase(true);
        vqabstractitemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractItemModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMultiData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->submit();
    } else {
        return self->QAbstractItemModel::submit();
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSubmit(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Submit_IsBase(true);
        return vqabstractitemmodel->submit();
    } else {
        return self->QAbstractItemModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSubmit(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Submit_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_Revert(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->revert();
    } else {
        self->QAbstractItemModel::revert();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseRevert(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Revert_IsBase(true);
        vqabstractitemmodel->revert();
    } else {
        self->QAbstractItemModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRevert(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Revert_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_ResetInternalData(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->resetInternalData();
    } else {
        ((VirtualQAbstractItemModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseResetInternalData(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ResetInternalData_IsBase(true);
        vqabstractitemmodel->resetInternalData();
    } else {
        ((VirtualQAbstractItemModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnResetInternalData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ResetInternalData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_Event(QAbstractItemModel* self, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->event(event);
    } else {
        return self->QAbstractItemModel::event(event);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseEvent(QAbstractItemModel* self, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Event_IsBase(true);
        return vqabstractitemmodel->event(event);
    } else {
        return self->QAbstractItemModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEvent(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Event_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_EventFilter(QAbstractItemModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->eventFilter(watched, event);
    } else {
        return self->QAbstractItemModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseEventFilter(QAbstractItemModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EventFilter_IsBase(true);
        return vqabstractitemmodel->eventFilter(watched, event);
    } else {
        return self->QAbstractItemModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEventFilter(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_TimerEvent(QAbstractItemModel* self, QTimerEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->timerEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseTimerEvent(QAbstractItemModel* self, QTimerEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_TimerEvent_IsBase(true);
        vqabstractitemmodel->timerEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnTimerEvent(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_ChildEvent(QAbstractItemModel* self, QChildEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->childEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseChildEvent(QAbstractItemModel* self, QChildEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChildEvent_IsBase(true);
        vqabstractitemmodel->childEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnChildEvent(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_CustomEvent(QAbstractItemModel* self, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->customEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseCustomEvent(QAbstractItemModel* self, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CustomEvent_IsBase(true);
        vqabstractitemmodel->customEvent(event);
    } else {
        ((VirtualQAbstractItemModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCustomEvent(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_ConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ConnectNotify_IsBase(true);
        vqabstractitemmodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnConnectNotify(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_DisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseDisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DisconnectNotify_IsBase(true);
        vqabstractitemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDisconnectNotify(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex(const QAbstractItemModel* self, int row, int column) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseCreateIndex(const QAbstractItemModel* self, int row, int column) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCreateIndex(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<quintptr>(id)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseCreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex2_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<quintptr>(id)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCreateIndex2(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex2_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CreateIndex2_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EncodeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractItemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEncodeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EncodeData_IsBase(true);
        vqabstractitemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractItemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEncodeData(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EncodeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_DecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractItemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseDecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DecodeData_IsBase(true);
        return vqabstractitemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractItemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDecodeData(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_DecodeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_BeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseBeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginInsertRows_IsBase(true);
        vqabstractitemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginInsertRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndInsertRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endInsertRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndInsertRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndInsertRows_IsBase(true);
        vqabstractitemmodel->endInsertRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndInsertRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndInsertRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_BeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseBeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginRemoveRows_IsBase(true);
        vqabstractitemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginRemoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndRemoveRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endRemoveRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndRemoveRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndRemoveRows_IsBase(true);
        vqabstractitemmodel->endRemoveRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndRemoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_BeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractItemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseBeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginMoveRows_IsBase(true);
        return vqabstractitemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractItemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginMoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndMoveRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endMoveRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndMoveRows(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndMoveRows_IsBase(true);
        vqabstractitemmodel->endMoveRows();
    } else {
        ((VirtualQAbstractItemModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndMoveRows(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndMoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_BeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseBeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginInsertColumns_IsBase(true);
        vqabstractitemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginInsertColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndInsertColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endInsertColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndInsertColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndInsertColumns_IsBase(true);
        vqabstractitemmodel->endInsertColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndInsertColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_BeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseBeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginRemoveColumns_IsBase(true);
        vqabstractitemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractItemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginRemoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndRemoveColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndRemoveColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndRemoveColumns_IsBase(true);
        vqabstractitemmodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndRemoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_BeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractItemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseBeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginMoveColumns_IsBase(true);
        return vqabstractitemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractItemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginMoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndMoveColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endMoveColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndMoveColumns(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndMoveColumns_IsBase(true);
        vqabstractitemmodel->endMoveColumns();
    } else {
        ((VirtualQAbstractItemModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndMoveColumns(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_BeginResetModel(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->beginResetModel();
    } else {
        ((VirtualQAbstractItemModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseBeginResetModel(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginResetModel_IsBase(true);
        vqabstractitemmodel->beginResetModel();
    } else {
        ((VirtualQAbstractItemModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBeginResetModel(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_BeginResetModel_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_EndResetModel(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->endResetModel();
    } else {
        ((VirtualQAbstractItemModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseEndResetModel(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndResetModel_IsBase(true);
        vqabstractitemmodel->endResetModel();
    } else {
        ((VirtualQAbstractItemModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEndResetModel(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_EndResetModel_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_ChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractItemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChangePersistentIndex_IsBase(true);
        vqabstractitemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractItemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnChangePersistentIndex(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemModel_ChangePersistentIndexList(QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractItemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QAbstractItemModel_QBaseChangePersistentIndexList(QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChangePersistentIndexList_IsBase(true);
        vqabstractitemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractItemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnChangePersistentIndexList(QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_PersistentIndexList(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        QList<QModelIndex> _ret = vqabstractitemmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractItemModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_QBasePersistentIndexList(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqabstractitemmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractItemModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnPersistentIndexList(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), data));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseCreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex3_IsBase(true);
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), data));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCreateIndex3(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_CreateIndex3_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CreateIndex3_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractItemModel_Sender(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->sender();
    } else {
        return ((VirtualQAbstractItemModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractItemModel_QBaseSender(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sender_IsBase(true);
        return vqabstractitemmodel->sender();
    } else {
        return ((VirtualQAbstractItemModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSender(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Sender_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_SenderSignalIndex(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseSenderSignalIndex(const QAbstractItemModel* self) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SenderSignalIndex_IsBase(true);
        return vqabstractitemmodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSenderSignalIndex(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemModel_Receivers(const QAbstractItemModel* self, const char* signal) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->receivers(signal);
    } else {
        return ((VirtualQAbstractItemModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractItemModel_QBaseReceivers(const QAbstractItemModel* self, const char* signal) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Receivers_IsBase(true);
        return vqabstractitemmodel->receivers(signal);
    } else {
        return ((VirtualQAbstractItemModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnReceivers(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_Receivers_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemModel_IsSignalConnected(const QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        return vqabstractitemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractItemModel_QBaseIsSignalConnected(const QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_IsSignalConnected_IsBase(true);
        return vqabstractitemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnIsSignalConnected(const QAbstractItemModel* self, intptr_t slot) {
    auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self));
    if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
        vqabstractitemmodel->setQAbstractItemModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractItemModel_Connect_RowsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ModelAboutToBeReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelAboutToBeReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemModel_Connect_ModelReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemModel_Connect_RowsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationRow;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_RowsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationRow;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationColumn;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_ColumnsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationColumn;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
    delete self;
}

QAbstractTableModel* QAbstractTableModel_new() {
    return new VirtualQAbstractTableModel();
}

QAbstractTableModel* QAbstractTableModel_new2(QObject* parent) {
    return new VirtualQAbstractTableModel(parent);
}

QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractTableModel_Metacast(QAbstractTableModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractTableModel_Metacall(QAbstractTableModel* self, int param1, int param2, void** param3) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractTableModel_OnMetacall(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Metacall_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractTableModel_QBaseMetacall(QAbstractTableModel* self, int param1, int param2, void** param3) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Metacall_IsBase(true);
        return vqabstracttablemodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractTableModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractTableModel_Tr(const char* s) {
    QString _ret = QAbstractTableModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTableModel_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractTableModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
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
QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QModelIndex(vqabstracttablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseIndex(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Index_IsBase(true);
        return new QModelIndex(vqabstracttablemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnIndex(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Index_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QModelIndex(vqabstracttablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseSibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sibling_IsBase(true);
        return new QModelIndex(vqabstracttablemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSibling(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseDropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DropMimeData_IsBase(true);
        return vqabstracttablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDropMimeData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_Flags(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return static_cast<int>(vqabstracttablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractTableModel::flags(*index));
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseFlags(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Flags_IsBase(true);
        return static_cast<int>(vqabstracttablemodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractTableModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnFlags(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Flags_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_RowCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractTableModel*)self)->rowCount(*parent);
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseRowCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RowCount_IsBase(true);
        return vqabstracttablemodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractTableModel*)self)->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRowCount(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_ColumnCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractTableModel*)self)->columnCount(*parent);
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseColumnCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ColumnCount_IsBase(true);
        return vqabstracttablemodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractTableModel*)self)->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnColumnCount(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ColumnCount_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractTableModel_Data(const QAbstractTableModel* self, const QModelIndex* index, int role) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QVariant(vqabstracttablemodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractTableModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractTableModel_QBaseData(const QAbstractTableModel* self, const QModelIndex* index, int role) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Data_IsBase(true);
        return new QVariant(vqabstracttablemodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractTableModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Data_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_SetData(QAbstractTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractTableModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseSetData(QAbstractTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetData_IsBase(true);
        return vqabstracttablemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractTableModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractTableModel_HeaderData(const QAbstractTableModel* self, int section, int orientation, int role) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QVariant(vqabstracttablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractTableModel_QBaseHeaderData(const QAbstractTableModel* self, int section, int orientation, int role) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_HeaderData_IsBase(true);
        return new QVariant(vqabstracttablemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractTableModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnHeaderData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_SetHeaderData(QAbstractTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseSetHeaderData(QAbstractTableModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetHeaderData_IsBase(true);
        return vqabstracttablemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetHeaderData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractTableModel_ItemData(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        QMap<int, QVariant> _ret = vqabstracttablemodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractTableModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractTableModel_QBaseItemData(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqabstracttablemodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractTableModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnItemData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_SetItemData(QAbstractTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractTableModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseSetItemData(QAbstractTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetItemData_IsBase(true);
        return vqabstracttablemodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractTableModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetItemData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_ClearItemData(QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->clearItemData(*index);
    } else {
        return self->QAbstractTableModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseClearItemData(QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ClearItemData_IsBase(true);
        return vqabstracttablemodel->clearItemData(*index);
    } else {
        return self->QAbstractTableModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnClearItemData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractTableModel_MimeTypes(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        QList<QString> _ret = vqabstracttablemodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractTableModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAbstractTableModel_QBaseMimeTypes(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqabstracttablemodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractTableModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMimeTypes(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QAbstractTableModel_MimeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractTableModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QAbstractTableModel_QBaseMimeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MimeData_IsBase(true);
        return vqabstracttablemodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractTableModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMimeData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_CanDropMimeData(const QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseCanDropMimeData(const QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CanDropMimeData_IsBase(true);
        return vqabstracttablemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCanDropMimeData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_SupportedDropActions(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return static_cast<int>(vqabstracttablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractTableModel::supportedDropActions());
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseSupportedDropActions(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqabstracttablemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractTableModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSupportedDropActions(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_SupportedDragActions(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return static_cast<int>(vqabstracttablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractTableModel::supportedDragActions());
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseSupportedDragActions(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqabstracttablemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractTableModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSupportedDragActions(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_InsertRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseInsertRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_InsertRows_IsBase(true);
        return vqabstracttablemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnInsertRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_InsertColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseInsertColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_InsertColumns_IsBase(true);
        return vqabstracttablemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnInsertColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_RemoveRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseRemoveRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RemoveRows_IsBase(true);
        return vqabstracttablemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRemoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_RemoveColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseRemoveColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RemoveColumns_IsBase(true);
        return vqabstracttablemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRemoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_MoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MoveRows_IsBase(true);
        return vqabstracttablemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_MoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MoveColumns_IsBase(true);
        return vqabstracttablemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_FetchMore(QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->fetchMore(*parent);
    } else {
        self->QAbstractTableModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseFetchMore(QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_FetchMore_IsBase(true);
        vqabstracttablemodel->fetchMore(*parent);
    } else {
        self->QAbstractTableModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnFetchMore(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_CanFetchMore(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->canFetchMore(*parent);
    } else {
        return self->QAbstractTableModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseCanFetchMore(const QAbstractTableModel* self, const QModelIndex* parent) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CanFetchMore_IsBase(true);
        return vqabstracttablemodel->canFetchMore(*parent);
    } else {
        return self->QAbstractTableModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCanFetchMore(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_Sort(QAbstractTableModel* self, int column, int order) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseSort(QAbstractTableModel* self, int column, int order) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sort_IsBase(true);
        vqabstracttablemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSort(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sort_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractTableModel_Buddy(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QModelIndex(vqabstracttablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseBuddy(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Buddy_IsBase(true);
        return new QModelIndex(vqabstracttablemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractTableModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBuddy(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_Match(const QAbstractTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        QList<QModelIndex> _ret = vqabstracttablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_QBaseMatch(const QAbstractTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqabstracttablemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMatch(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Match_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractTableModel_Span(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QSize(vqabstracttablemodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractTableModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QAbstractTableModel_QBaseSpan(const QAbstractTableModel* self, const QModelIndex* index) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Span_IsBase(true);
        return new QSize(vqabstracttablemodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractTableModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSpan(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Span_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractTableModel_RoleNames(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        QHash<int, QByteArray> _ret = vqabstracttablemodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractTableModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractTableModel_QBaseRoleNames(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqabstracttablemodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractTableModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRoleNames(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_MultiData(const QAbstractTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractTableModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseMultiData(const QAbstractTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MultiData_IsBase(true);
        vqabstracttablemodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractTableModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMultiData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_Submit(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->submit();
    } else {
        return self->QAbstractTableModel::submit();
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseSubmit(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Submit_IsBase(true);
        return vqabstracttablemodel->submit();
    } else {
        return self->QAbstractTableModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSubmit(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Submit_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_Revert(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->revert();
    } else {
        self->QAbstractTableModel::revert();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseRevert(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Revert_IsBase(true);
        vqabstracttablemodel->revert();
    } else {
        self->QAbstractTableModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRevert(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Revert_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_ResetInternalData(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->resetInternalData();
    } else {
        ((VirtualQAbstractTableModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseResetInternalData(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ResetInternalData_IsBase(true);
        vqabstracttablemodel->resetInternalData();
    } else {
        ((VirtualQAbstractTableModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnResetInternalData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ResetInternalData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_Event(QAbstractTableModel* self, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->event(event);
    } else {
        return self->QAbstractTableModel::event(event);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseEvent(QAbstractTableModel* self, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Event_IsBase(true);
        return vqabstracttablemodel->event(event);
    } else {
        return self->QAbstractTableModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEvent(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Event_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_EventFilter(QAbstractTableModel* self, QObject* watched, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->eventFilter(watched, event);
    } else {
        return self->QAbstractTableModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseEventFilter(QAbstractTableModel* self, QObject* watched, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EventFilter_IsBase(true);
        return vqabstracttablemodel->eventFilter(watched, event);
    } else {
        return self->QAbstractTableModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEventFilter(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EventFilter_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_TimerEvent(QAbstractTableModel* self, QTimerEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->timerEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseTimerEvent(QAbstractTableModel* self, QTimerEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_TimerEvent_IsBase(true);
        vqabstracttablemodel->timerEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnTimerEvent(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_ChildEvent(QAbstractTableModel* self, QChildEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->childEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseChildEvent(QAbstractTableModel* self, QChildEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChildEvent_IsBase(true);
        vqabstracttablemodel->childEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnChildEvent(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_CustomEvent(QAbstractTableModel* self, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->customEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseCustomEvent(QAbstractTableModel* self, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CustomEvent_IsBase(true);
        vqabstracttablemodel->customEvent(event);
    } else {
        ((VirtualQAbstractTableModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCustomEvent(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_ConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractTableModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ConnectNotify_IsBase(true);
        vqabstracttablemodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractTableModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnConnectNotify(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_DisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractTableModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseDisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DisconnectNotify_IsBase(true);
        vqabstracttablemodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractTableModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDisconnectNotify(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractTableModel_CreateIndex(const QAbstractTableModel* self, int row, int column) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return new QModelIndex(vqabstracttablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseCreateIndex(const QAbstractTableModel* self, int row, int column) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqabstracttablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCreateIndex(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_CreateIndex_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EncodeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEncodeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EncodeData_IsBase(true);
        vqabstracttablemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractTableModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEncodeData(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EncodeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_DecodeData(QAbstractTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseDecodeData(QAbstractTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DecodeData_IsBase(true);
        return vqabstracttablemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractTableModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDecodeData(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_DecodeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_BeginInsertRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseBeginInsertRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginInsertRows_IsBase(true);
        vqabstracttablemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginInsertRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndInsertRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endInsertRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndInsertRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndInsertRows_IsBase(true);
        vqabstracttablemodel->endInsertRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndInsertRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndInsertRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_BeginRemoveRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseBeginRemoveRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginRemoveRows_IsBase(true);
        vqabstracttablemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginRemoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndRemoveRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endRemoveRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndRemoveRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndRemoveRows_IsBase(true);
        vqabstracttablemodel->endRemoveRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndRemoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_BeginMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseBeginMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginMoveRows_IsBase(true);
        return vqabstracttablemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractTableModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginMoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndMoveRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endMoveRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndMoveRows(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndMoveRows_IsBase(true);
        vqabstracttablemodel->endMoveRows();
    } else {
        ((VirtualQAbstractTableModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndMoveRows(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndMoveRows_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_BeginInsertColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseBeginInsertColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginInsertColumns_IsBase(true);
        vqabstracttablemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginInsertColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndInsertColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endInsertColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndInsertColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndInsertColumns_IsBase(true);
        vqabstracttablemodel->endInsertColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndInsertColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_BeginRemoveColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseBeginRemoveColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginRemoveColumns_IsBase(true);
        vqabstracttablemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractTableModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginRemoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndRemoveColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndRemoveColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndRemoveColumns_IsBase(true);
        vqabstracttablemodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndRemoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_BeginMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseBeginMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginMoveColumns_IsBase(true);
        return vqabstracttablemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractTableModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginMoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndMoveColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endMoveColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndMoveColumns(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndMoveColumns_IsBase(true);
        vqabstracttablemodel->endMoveColumns();
    } else {
        ((VirtualQAbstractTableModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndMoveColumns(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_BeginResetModel(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->beginResetModel();
    } else {
        ((VirtualQAbstractTableModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseBeginResetModel(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginResetModel_IsBase(true);
        vqabstracttablemodel->beginResetModel();
    } else {
        ((VirtualQAbstractTableModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBeginResetModel(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_BeginResetModel_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_EndResetModel(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->endResetModel();
    } else {
        ((VirtualQAbstractTableModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseEndResetModel(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndResetModel_IsBase(true);
        vqabstracttablemodel->endResetModel();
    } else {
        ((VirtualQAbstractTableModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEndResetModel(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_EndResetModel_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_ChangePersistentIndex(QAbstractTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseChangePersistentIndex(QAbstractTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChangePersistentIndex_IsBase(true);
        vqabstracttablemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractTableModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnChangePersistentIndex(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTableModel_ChangePersistentIndexList(QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QAbstractTableModel_QBaseChangePersistentIndexList(QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChangePersistentIndexList_IsBase(true);
        vqabstracttablemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractTableModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnChangePersistentIndexList(QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_PersistentIndexList(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        QList<QModelIndex> _ret = vqabstracttablemodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractTableModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_QBasePersistentIndexList(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqabstracttablemodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractTableModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnPersistentIndexList(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractTableModel_Sender(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->sender();
    } else {
        return ((VirtualQAbstractTableModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractTableModel_QBaseSender(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sender_IsBase(true);
        return vqabstracttablemodel->sender();
    } else {
        return ((VirtualQAbstractTableModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSender(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Sender_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_SenderSignalIndex(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractTableModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseSenderSignalIndex(const QAbstractTableModel* self) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SenderSignalIndex_IsBase(true);
        return vqabstracttablemodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractTableModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSenderSignalIndex(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTableModel_Receivers(const QAbstractTableModel* self, const char* signal) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->receivers(signal);
    } else {
        return ((VirtualQAbstractTableModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractTableModel_QBaseReceivers(const QAbstractTableModel* self, const char* signal) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Receivers_IsBase(true);
        return vqabstracttablemodel->receivers(signal);
    } else {
        return ((VirtualQAbstractTableModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnReceivers(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_Receivers_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTableModel_IsSignalConnected(const QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        return vqabstracttablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractTableModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractTableModel_QBaseIsSignalConnected(const QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_IsSignalConnected_IsBase(true);
        return vqabstracttablemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractTableModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnIsSignalConnected(const QAbstractTableModel* self, intptr_t slot) {
    auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self));
    if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
        vqabstracttablemodel->setQAbstractTableModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
    delete self;
}

QAbstractListModel* QAbstractListModel_new() {
    return new VirtualQAbstractListModel();
}

QAbstractListModel* QAbstractListModel_new2(QObject* parent) {
    return new VirtualQAbstractListModel(parent);
}

QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractListModel_Metacast(QAbstractListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractListModel_Metacall(QAbstractListModel* self, int param1, int param2, void** param3) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractListModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractListModel_OnMetacall(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Metacall_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractListModel_QBaseMetacall(QAbstractListModel* self, int param1, int param2, void** param3) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Metacall_IsBase(true);
        return vqabstractlistmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractListModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractListModel_Tr(const char* s) {
    QString _ret = QAbstractListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractListModel_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
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
QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QModelIndex(vqabstractlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseIndex(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Index_IsBase(true);
        return new QModelIndex(vqabstractlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnIndex(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Index_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QModelIndex(vqabstractlistmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseSibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sibling_IsBase(true);
        return new QModelIndex(vqabstractlistmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSibling(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_DropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseDropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DropMimeData_IsBase(true);
        return vqabstractlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDropMimeData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_Flags(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return static_cast<int>(vqabstractlistmodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractListModel::flags(*index));
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseFlags(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Flags_IsBase(true);
        return static_cast<int>(vqabstractlistmodel->flags(*index));
    } else {
        return static_cast<int>(self->QAbstractListModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnFlags(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Flags_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_RowCount(const QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractListModel*)self)->rowCount(*parent);
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseRowCount(const QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RowCount_IsBase(true);
        return vqabstractlistmodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractListModel*)self)->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRowCount(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractListModel_Data(const QAbstractListModel* self, const QModelIndex* index, int role) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QVariant(vqabstractlistmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractListModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractListModel_QBaseData(const QAbstractListModel* self, const QModelIndex* index, int role) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Data_IsBase(true);
        return new QVariant(vqabstractlistmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractListModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Data_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_SetData(QAbstractListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractListModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseSetData(QAbstractListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetData_IsBase(true);
        return vqabstractlistmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QAbstractListModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractListModel_HeaderData(const QAbstractListModel* self, int section, int orientation, int role) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QVariant(vqabstractlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractListModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractListModel_QBaseHeaderData(const QAbstractListModel* self, int section, int orientation, int role) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_HeaderData_IsBase(true);
        return new QVariant(vqabstractlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractListModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnHeaderData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_SetHeaderData(QAbstractListModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseSetHeaderData(QAbstractListModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetHeaderData_IsBase(true);
        return vqabstractlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetHeaderData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractListModel_ItemData(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        QMap<int, QVariant> _ret = vqabstractlistmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractListModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractListModel_QBaseItemData(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqabstractlistmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->QAbstractListModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnItemData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_SetItemData(QAbstractListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractListModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseSetItemData(QAbstractListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetItemData_IsBase(true);
        return vqabstractlistmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QAbstractListModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetItemData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_ClearItemData(QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->clearItemData(*index);
    } else {
        return self->QAbstractListModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseClearItemData(QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ClearItemData_IsBase(true);
        return vqabstractlistmodel->clearItemData(*index);
    } else {
        return self->QAbstractListModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnClearItemData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractListModel_MimeTypes(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        QList<QString> _ret = vqabstractlistmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractListModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAbstractListModel_QBaseMimeTypes(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqabstractlistmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = self->QAbstractListModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMimeTypes(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QAbstractListModel_MimeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractListModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QAbstractListModel_QBaseMimeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MimeData_IsBase(true);
        return vqabstractlistmodel->mimeData(indexes_QList);
    } else {
        return self->QAbstractListModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMimeData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_CanDropMimeData(const QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseCanDropMimeData(const QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CanDropMimeData_IsBase(true);
        return vqabstractlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCanDropMimeData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_SupportedDropActions(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return static_cast<int>(vqabstractlistmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractListModel::supportedDropActions());
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseSupportedDropActions(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqabstractlistmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QAbstractListModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSupportedDropActions(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_SupportedDragActions(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return static_cast<int>(vqabstractlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractListModel::supportedDragActions());
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseSupportedDragActions(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqabstractlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QAbstractListModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSupportedDragActions(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_InsertRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseInsertRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_InsertRows_IsBase(true);
        return vqabstractlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnInsertRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_InsertColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseInsertColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_InsertColumns_IsBase(true);
        return vqabstractlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnInsertColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_RemoveRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseRemoveRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RemoveRows_IsBase(true);
        return vqabstractlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRemoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_RemoveColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseRemoveColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RemoveColumns_IsBase(true);
        return vqabstractlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRemoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_MoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MoveRows_IsBase(true);
        return vqabstractlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_MoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MoveColumns_IsBase(true);
        return vqabstractlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_FetchMore(QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->fetchMore(*parent);
    } else {
        self->QAbstractListModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseFetchMore(QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_FetchMore_IsBase(true);
        vqabstractlistmodel->fetchMore(*parent);
    } else {
        self->QAbstractListModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnFetchMore(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_CanFetchMore(const QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->canFetchMore(*parent);
    } else {
        return self->QAbstractListModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseCanFetchMore(const QAbstractListModel* self, const QModelIndex* parent) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CanFetchMore_IsBase(true);
        return vqabstractlistmodel->canFetchMore(*parent);
    } else {
        return self->QAbstractListModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCanFetchMore(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_Sort(QAbstractListModel* self, int column, int order) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseSort(QAbstractListModel* self, int column, int order) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sort_IsBase(true);
        vqabstractlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSort(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sort_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractListModel_Buddy(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QModelIndex(vqabstractlistmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseBuddy(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Buddy_IsBase(true);
        return new QModelIndex(vqabstractlistmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractListModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBuddy(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_Match(const QAbstractListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        QList<QModelIndex> _ret = vqabstractlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_QBaseMatch(const QAbstractListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqabstractlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QAbstractListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMatch(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Match_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractListModel_Span(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QSize(vqabstractlistmodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractListModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QAbstractListModel_QBaseSpan(const QAbstractListModel* self, const QModelIndex* index) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Span_IsBase(true);
        return new QSize(vqabstractlistmodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractListModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSpan(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Span_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractListModel_RoleNames(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        QHash<int, QByteArray> _ret = vqabstractlistmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractListModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractListModel_QBaseRoleNames(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqabstractlistmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->QAbstractListModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRoleNames(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_MultiData(const QAbstractListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractListModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseMultiData(const QAbstractListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MultiData_IsBase(true);
        vqabstractlistmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractListModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMultiData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_Submit(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->submit();
    } else {
        return self->QAbstractListModel::submit();
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseSubmit(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Submit_IsBase(true);
        return vqabstractlistmodel->submit();
    } else {
        return self->QAbstractListModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSubmit(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Submit_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_Revert(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->revert();
    } else {
        self->QAbstractListModel::revert();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseRevert(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Revert_IsBase(true);
        vqabstractlistmodel->revert();
    } else {
        self->QAbstractListModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRevert(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Revert_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_ResetInternalData(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->resetInternalData();
    } else {
        ((VirtualQAbstractListModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseResetInternalData(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ResetInternalData_IsBase(true);
        vqabstractlistmodel->resetInternalData();
    } else {
        ((VirtualQAbstractListModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnResetInternalData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ResetInternalData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_Event(QAbstractListModel* self, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->event(event);
    } else {
        return self->QAbstractListModel::event(event);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseEvent(QAbstractListModel* self, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Event_IsBase(true);
        return vqabstractlistmodel->event(event);
    } else {
        return self->QAbstractListModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEvent(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Event_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_EventFilter(QAbstractListModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->eventFilter(watched, event);
    } else {
        return self->QAbstractListModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseEventFilter(QAbstractListModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EventFilter_IsBase(true);
        return vqabstractlistmodel->eventFilter(watched, event);
    } else {
        return self->QAbstractListModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEventFilter(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EventFilter_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_TimerEvent(QAbstractListModel* self, QTimerEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->timerEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseTimerEvent(QAbstractListModel* self, QTimerEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_TimerEvent_IsBase(true);
        vqabstractlistmodel->timerEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnTimerEvent(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_ChildEvent(QAbstractListModel* self, QChildEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->childEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseChildEvent(QAbstractListModel* self, QChildEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChildEvent_IsBase(true);
        vqabstractlistmodel->childEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnChildEvent(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_CustomEvent(QAbstractListModel* self, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->customEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseCustomEvent(QAbstractListModel* self, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CustomEvent_IsBase(true);
        vqabstractlistmodel->customEvent(event);
    } else {
        ((VirtualQAbstractListModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCustomEvent(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_ConnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractListModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseConnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ConnectNotify_IsBase(true);
        vqabstractlistmodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractListModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnConnectNotify(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_DisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractListModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseDisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DisconnectNotify_IsBase(true);
        vqabstractlistmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractListModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDisconnectNotify(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractListModel_CreateIndex(const QAbstractListModel* self, int row, int column) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return new QModelIndex(vqabstractlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseCreateIndex(const QAbstractListModel* self, int row, int column) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqabstractlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCreateIndex(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_CreateIndex_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EncodeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractListModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEncodeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EncodeData_IsBase(true);
        vqabstractlistmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractListModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEncodeData(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EncodeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_DecodeData(QAbstractListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractListModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseDecodeData(QAbstractListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DecodeData_IsBase(true);
        return vqabstractlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractListModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDecodeData(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_DecodeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_BeginInsertRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseBeginInsertRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginInsertRows_IsBase(true);
        vqabstractlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginInsertRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndInsertRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endInsertRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndInsertRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndInsertRows_IsBase(true);
        vqabstractlistmodel->endInsertRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndInsertRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndInsertRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_BeginRemoveRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseBeginRemoveRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginRemoveRows_IsBase(true);
        vqabstractlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginRemoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndRemoveRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endRemoveRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndRemoveRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndRemoveRows_IsBase(true);
        vqabstractlistmodel->endRemoveRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndRemoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_BeginMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractListModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseBeginMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginMoveRows_IsBase(true);
        return vqabstractlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractListModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginMoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndMoveRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endMoveRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndMoveRows(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndMoveRows_IsBase(true);
        vqabstractlistmodel->endMoveRows();
    } else {
        ((VirtualQAbstractListModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndMoveRows(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndMoveRows_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_BeginInsertColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseBeginInsertColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginInsertColumns_IsBase(true);
        vqabstractlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginInsertColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndInsertColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endInsertColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndInsertColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndInsertColumns_IsBase(true);
        vqabstractlistmodel->endInsertColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndInsertColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_BeginRemoveColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseBeginRemoveColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginRemoveColumns_IsBase(true);
        vqabstractlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractListModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginRemoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndRemoveColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndRemoveColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndRemoveColumns_IsBase(true);
        vqabstractlistmodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndRemoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_BeginMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractListModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseBeginMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginMoveColumns_IsBase(true);
        return vqabstractlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractListModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginMoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndMoveColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endMoveColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndMoveColumns(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndMoveColumns_IsBase(true);
        vqabstractlistmodel->endMoveColumns();
    } else {
        ((VirtualQAbstractListModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndMoveColumns(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_BeginResetModel(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->beginResetModel();
    } else {
        ((VirtualQAbstractListModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseBeginResetModel(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginResetModel_IsBase(true);
        vqabstractlistmodel->beginResetModel();
    } else {
        ((VirtualQAbstractListModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBeginResetModel(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_BeginResetModel_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_EndResetModel(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->endResetModel();
    } else {
        ((VirtualQAbstractListModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseEndResetModel(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndResetModel_IsBase(true);
        vqabstractlistmodel->endResetModel();
    } else {
        ((VirtualQAbstractListModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEndResetModel(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_EndResetModel_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_ChangePersistentIndex(QAbstractListModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractListModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseChangePersistentIndex(QAbstractListModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChangePersistentIndex_IsBase(true);
        vqabstractlistmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractListModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnChangePersistentIndex(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractListModel_ChangePersistentIndexList(QAbstractListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractListModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QAbstractListModel_QBaseChangePersistentIndexList(QAbstractListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChangePersistentIndexList_IsBase(true);
        vqabstractlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractListModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnChangePersistentIndexList(QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_PersistentIndexList(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        QList<QModelIndex> _ret = vqabstractlistmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractListModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_QBasePersistentIndexList(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqabstractlistmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQAbstractListModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnPersistentIndexList(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractListModel_Sender(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->sender();
    } else {
        return ((VirtualQAbstractListModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractListModel_QBaseSender(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sender_IsBase(true);
        return vqabstractlistmodel->sender();
    } else {
        return ((VirtualQAbstractListModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSender(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Sender_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_SenderSignalIndex(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractListModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseSenderSignalIndex(const QAbstractListModel* self) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SenderSignalIndex_IsBase(true);
        return vqabstractlistmodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractListModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSenderSignalIndex(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractListModel_Receivers(const QAbstractListModel* self, const char* signal) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->receivers(signal);
    } else {
        return ((VirtualQAbstractListModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractListModel_QBaseReceivers(const QAbstractListModel* self, const char* signal) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Receivers_IsBase(true);
        return vqabstractlistmodel->receivers(signal);
    } else {
        return ((VirtualQAbstractListModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnReceivers(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_Receivers_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractListModel_IsSignalConnected(const QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        return vqabstractlistmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractListModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractListModel_QBaseIsSignalConnected(const QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_IsSignalConnected_IsBase(true);
        return vqabstractlistmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractListModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnIsSignalConnected(const QAbstractListModel* self, intptr_t slot) {
    auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self));
    if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
        vqabstractlistmodel->setQAbstractListModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
    delete self;
}
