#include <QAbstractItemModel>
#include <QAbstractListModel>
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
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringListModel>
#include <QTimerEvent>
#include <QVariant>
#include <qstringlistmodel.h>
#include "libqstringlistmodel.h"
#include "libqstringlistmodel.hxx"

QStringListModel* QStringListModel_new() {
    return new VirtualQStringListModel();
}

QStringListModel* QStringListModel_new2(const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
    return new VirtualQStringListModel(parent);
}

QStringListModel* QStringListModel_new4(const libqt_list /* of libqt_string */ strings, QObject* parent) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList, parent);
}

QMetaObject* QStringListModel_MetaObject(const QStringListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStringListModel_Metacast(QStringListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStringListModel_Metacall(QStringListModel* self, int param1, int param2, void** param3) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStringListModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnMetacall(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Metacall_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStringListModel_QBaseMetacall(QStringListModel* self, int param1, int param2, void** param3) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Metacall_IsBase(true);
        return vqstringlistmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStringListModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStringListModel_Tr(const char* s) {
    QString _ret = QStringListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStringListModel_RowCount(const QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQStringListModel*)self)->rowCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnRowCount(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RowCount_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RowCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStringListModel_QBaseRowCount(const QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RowCount_IsBase(true);
        return vqstringlistmodel->rowCount(*parent);
    } else {
        return ((VirtualQStringListModel*)self)->rowCount(*parent);
    }
}

QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnSibling(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sibling_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sibling_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QStringListModel_QBaseSibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sibling_IsBase(true);
        return new QModelIndex(vqstringlistmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

QVariant* QStringListModel_Data(const QStringListModel* self, const QModelIndex* index, int role) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStringListModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Data_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Data_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QStringListModel_QBaseData(const QStringListModel* self, const QModelIndex* index, int role) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Data_IsBase(true);
        return new QVariant(vqstringlistmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStringListModel*)self)->data(*index, static_cast<int>(role)));
    }
}

bool QStringListModel_SetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQStringListModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseSetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetData_IsBase(true);
        return vqstringlistmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQStringListModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

bool QStringListModel_ClearItemData(QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->clearItemData(*index);
    } else {
        return ((VirtualQStringListModel*)self)->clearItemData(*index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ClearItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ClearItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseClearItemData(QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ClearItemData_IsBase(true);
        return vqstringlistmodel->clearItemData(*index);
    } else {
        return ((VirtualQStringListModel*)self)->clearItemData(*index);
    }
}

int QStringListModel_Flags(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualQStringListModel*)self)->flags(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnFlags(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Flags_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Flags_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStringListModel_QBaseFlags(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Flags_IsBase(true);
        return static_cast<int>(vqstringlistmodel->flags(*index));
    } else {
        return static_cast<int>(((VirtualQStringListModel*)self)->flags(*index));
    }
}

bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQStringListModel*)self)->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_InsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseInsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_InsertRows_IsBase(true);
        return vqstringlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQStringListModel*)self)->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQStringListModel*)self)->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseRemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RemoveRows_IsBase(true);
        return vqstringlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQStringListModel*)self)->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

bool QStringListModel_MoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQStringListModel*)self)->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MoveRows_IsBase(true);
        return vqstringlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQStringListModel*)self)->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

libqt_map /* of int to QVariant* */ QStringListModel_ItemData(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        QMap<int, QVariant> _ret = self->itemData(*index);
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
        QMap<int, QVariant> _ret = ((VirtualQStringListModel*)self)->itemData(*index);
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

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnItemData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to QVariant* */ QStringListModel_QBaseItemData(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqstringlistmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = ((VirtualQStringListModel*)self)->itemData(*index);
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

bool QStringListModel_SetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return self->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQStringListModel*)self)->setItemData(*index, roles_QMap);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStringListModel_QBaseSetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetItemData_IsBase(true);
        return vqstringlistmodel->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQStringListModel*)self)->setItemData(*index, roles_QMap);
    }
}

void QStringListModel_Sort(QStringListModel* self, int column, int order) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQStringListModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sort_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sort_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStringListModel_QBaseSort(QStringListModel* self, int column, int order) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sort_IsBase(true);
        vqstringlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQStringListModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

libqt_list /* of libqt_string */ QStringListModel_StringList(const QStringListModel* self) {
    QList<QString> _ret = self->stringList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

void QStringListModel_SetStringList(QStringListModel* self, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    self->setStringList(strings_QList);
}

int QStringListModel_SupportedDropActions(const QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQStringListModel*)self)->supportedDropActions());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnSupportedDropActions(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDropActions_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStringListModel_QBaseSupportedDropActions(const QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqstringlistmodel->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQStringListModel*)self)->supportedDropActions());
    }
}

libqt_string QStringListModel_Tr2(const char* s, const char* c) {
    QString _ret = QStringListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStringListModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStringListModel::tr(s, c, static_cast<int>(n));
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
QModelIndex* QStringListModel_Index(const QStringListModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QModelIndex(vqstringlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseIndex(const QStringListModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Index_IsBase(true);
        return new QModelIndex(vqstringlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnIndex(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Index_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_DropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStringListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseDropMimeData(QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DropMimeData_IsBase(true);
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStringListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDropMimeData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DropMimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStringListModel_HeaderData(const QStringListModel* self, int section, int orientation, int role) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QVariant(vqstringlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStringListModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStringListModel_QBaseHeaderData(const QStringListModel* self, int section, int orientation, int role) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_HeaderData_IsBase(true);
        return new QVariant(vqstringlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQStringListModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnHeaderData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_HeaderData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_SetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QStringListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSetHeaderData(QStringListModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetHeaderData_IsBase(true);
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QStringListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetHeaderData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SetHeaderData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QStringListModel_MimeTypes(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        QList<QString> _ret = vqstringlistmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = self->QStringListModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
libqt_list /* of libqt_string */ QStringListModel_QBaseMimeTypes(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqstringlistmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = self->QStringListModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
void QStringListModel_OnMimeTypes(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MimeTypes_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QStringListModel_MimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->mimeData(indexes_QList);
    } else {
        return self->QStringListModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QStringListModel_QBaseMimeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MimeData_IsBase(true);
        return vqstringlistmodel->mimeData(indexes_QList);
    } else {
        return self->QStringListModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMimeData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_CanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStringListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseCanDropMimeData(const QStringListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CanDropMimeData_IsBase(true);
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QStringListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanDropMimeData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_SupportedDragActions(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QStringListModel::supportedDragActions());
    }
}

// Base class handler implementation
int QStringListModel_QBaseSupportedDragActions(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QStringListModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDragActions(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_InsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStringListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseInsertColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_InsertColumns_IsBase(true);
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStringListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_InsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_RemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStringListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseRemoveColumns(QStringListModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RemoveColumns_IsBase(true);
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QStringListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_MoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStringListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MoveColumns_IsBase(true);
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QStringListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_FetchMore(QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->fetchMore(*parent);
    } else {
        self->QStringListModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QStringListModel_QBaseFetchMore(QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_FetchMore_IsBase(true);
        vqstringlistmodel->fetchMore(*parent);
    } else {
        self->QStringListModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFetchMore(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_FetchMore_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_CanFetchMore(const QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->canFetchMore(*parent);
    } else {
        return self->QStringListModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseCanFetchMore(const QStringListModel* self, const QModelIndex* parent) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CanFetchMore_IsBase(true);
        return vqstringlistmodel->canFetchMore(*parent);
    } else {
        return self->QStringListModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanFetchMore(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CanFetchMore_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_Buddy(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QModelIndex(vqstringlistmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseBuddy(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Buddy_IsBase(true);
        return new QModelIndex(vqstringlistmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQStringListModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBuddy(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Buddy_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_Match(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        QList<QModelIndex> _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QStringListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
libqt_list /* of QModelIndex* */ QStringListModel_QBaseMatch(const QStringListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->QStringListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
void QStringListModel_OnMatch(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Match_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStringListModel_Span(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QSize(vqstringlistmodel->span(*index));
    } else {
        return new QSize(((VirtualQStringListModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QStringListModel_QBaseSpan(const QStringListModel* self, const QModelIndex* index) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Span_IsBase(true);
        return new QSize(vqstringlistmodel->span(*index));
    } else {
        return new QSize(((VirtualQStringListModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSpan(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Span_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QStringListModel_RoleNames(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QStringListModel::roleNames();
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
libqt_map /* of int to libqt_string */ QStringListModel_QBaseRoleNames(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QStringListModel::roleNames();
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
void QStringListModel_OnRoleNames(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_RoleNames_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_MultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QStringListModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QStringListModel_QBaseMultiData(const QStringListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MultiData_IsBase(true);
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QStringListModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMultiData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_MultiData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_Submit(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->submit();
    } else {
        return self->QStringListModel::submit();
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSubmit(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Submit_IsBase(true);
        return vqstringlistmodel->submit();
    } else {
        return self->QStringListModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSubmit(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Submit_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_Revert(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->revert();
    } else {
        self->QStringListModel::revert();
    }
}

// Base class handler implementation
void QStringListModel_QBaseRevert(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Revert_IsBase(true);
        vqstringlistmodel->revert();
    } else {
        self->QStringListModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRevert(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Revert_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ResetInternalData(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->resetInternalData();
    } else {
        ((VirtualQStringListModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QStringListModel_QBaseResetInternalData(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ResetInternalData_IsBase(true);
        vqstringlistmodel->resetInternalData();
    } else {
        ((VirtualQStringListModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnResetInternalData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ResetInternalData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_Event(QStringListModel* self, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->event(event);
    } else {
        return self->QStringListModel::event(event);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseEvent(QStringListModel* self, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Event_IsBase(true);
        return vqstringlistmodel->event(event);
    } else {
        return self->QStringListModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEvent(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Event_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_EventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->eventFilter(watched, event);
    } else {
        return self->QStringListModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseEventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EventFilter_IsBase(true);
        return vqstringlistmodel->eventFilter(watched, event);
    } else {
        return self->QStringListModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEventFilter(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EventFilter_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_TimerEvent(QStringListModel* self, QTimerEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->timerEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseTimerEvent(QStringListModel* self, QTimerEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_TimerEvent_IsBase(true);
        vqstringlistmodel->timerEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnTimerEvent(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_TimerEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChildEvent(QStringListModel* self, QChildEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->childEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChildEvent(QStringListModel* self, QChildEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChildEvent_IsBase(true);
        vqstringlistmodel->childEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChildEvent(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChildEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_CustomEvent(QStringListModel* self, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->customEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseCustomEvent(QStringListModel* self, QEvent* event) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CustomEvent_IsBase(true);
        vqstringlistmodel->customEvent(event);
    } else {
        ((VirtualQStringListModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCustomEvent(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CustomEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ConnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->connectNotify(*signal);
    } else {
        ((VirtualQStringListModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStringListModel_QBaseConnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ConnectNotify_IsBase(true);
        vqstringlistmodel->connectNotify(*signal);
    } else {
        ((VirtualQStringListModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnConnectNotify(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ConnectNotify_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_DisconnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQStringListModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStringListModel_QBaseDisconnectNotify(QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DisconnectNotify_IsBase(true);
        vqstringlistmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQStringListModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDisconnectNotify(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_CreateIndex(const QStringListModel* self, int row, int column) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return new QModelIndex(vqstringlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseCreateIndex(const QStringListModel* self, int row, int column) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqstringlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCreateIndex(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_CreateIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQStringListModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QStringListModel_QBaseEncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EncodeData_IsBase(true);
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQStringListModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEncodeData(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EncodeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_DecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQStringListModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseDecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DecodeData_IsBase(true);
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQStringListModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDecodeData(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_DecodeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginInsertRows_IsBase(true);
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginInsertRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndInsertRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endInsertRows();
    } else {
        ((VirtualQStringListModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndInsertRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndInsertRows_IsBase(true);
        vqstringlistmodel->endInsertRows();
    } else {
        ((VirtualQStringListModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndInsertRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndInsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginRemoveRows_IsBase(true);
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginRemoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndRemoveRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endRemoveRows();
    } else {
        ((VirtualQStringListModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndRemoveRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndRemoveRows_IsBase(true);
        vqstringlistmodel->endRemoveRows();
    } else {
        ((VirtualQStringListModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndRemoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_BeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQStringListModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseBeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginMoveRows_IsBase(true);
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQStringListModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginMoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndMoveRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endMoveRows();
    } else {
        ((VirtualQStringListModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndMoveRows(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndMoveRows_IsBase(true);
        vqstringlistmodel->endMoveRows();
    } else {
        ((VirtualQStringListModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndMoveRows(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndMoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginInsertColumns_IsBase(true);
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginInsertColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndInsertColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endInsertColumns();
    } else {
        ((VirtualQStringListModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndInsertColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndInsertColumns_IsBase(true);
        vqstringlistmodel->endInsertColumns();
    } else {
        ((VirtualQStringListModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndInsertColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginRemoveColumns_IsBase(true);
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQStringListModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginRemoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndRemoveColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endRemoveColumns();
    } else {
        ((VirtualQStringListModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndRemoveColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndRemoveColumns_IsBase(true);
        vqstringlistmodel->endRemoveColumns();
    } else {
        ((VirtualQStringListModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndRemoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_BeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQStringListModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseBeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginMoveColumns_IsBase(true);
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQStringListModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginMoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndMoveColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endMoveColumns();
    } else {
        ((VirtualQStringListModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndMoveColumns(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndMoveColumns_IsBase(true);
        vqstringlistmodel->endMoveColumns();
    } else {
        ((VirtualQStringListModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndMoveColumns(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginResetModel(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->beginResetModel();
    } else {
        ((VirtualQStringListModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginResetModel(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginResetModel_IsBase(true);
        vqstringlistmodel->beginResetModel();
    } else {
        ((VirtualQStringListModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginResetModel(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_BeginResetModel_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndResetModel(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->endResetModel();
    } else {
        ((VirtualQStringListModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndResetModel(QStringListModel* self) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndResetModel_IsBase(true);
        vqstringlistmodel->endResetModel();
    } else {
        ((VirtualQStringListModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndResetModel(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_EndResetModel_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQStringListModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndex_IsBase(true);
        vqstringlistmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQStringListModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChangePersistentIndex(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
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
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQStringListModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
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
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndexList_IsBase(true);
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQStringListModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChangePersistentIndexList(QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_PersistentIndexList(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        QList<QModelIndex> _ret = vqstringlistmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQStringListModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
libqt_list /* of QModelIndex* */ QStringListModel_QBasePersistentIndexList(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqstringlistmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQStringListModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
void QStringListModel_OnPersistentIndexList(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStringListModel_Sender(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->sender();
    } else {
        return ((VirtualQStringListModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStringListModel_QBaseSender(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sender_IsBase(true);
        return vqstringlistmodel->sender();
    } else {
        return ((VirtualQStringListModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSender(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Sender_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_SenderSignalIndex(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->senderSignalIndex();
    } else {
        return ((VirtualQStringListModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStringListModel_QBaseSenderSignalIndex(const QStringListModel* self) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SenderSignalIndex_IsBase(true);
        return vqstringlistmodel->senderSignalIndex();
    } else {
        return ((VirtualQStringListModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSenderSignalIndex(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_Receivers(const QStringListModel* self, const char* signal) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->receivers(signal);
    } else {
        return ((VirtualQStringListModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStringListModel_QBaseReceivers(const QStringListModel* self, const char* signal) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Receivers_IsBase(true);
        return vqstringlistmodel->receivers(signal);
    } else {
        return ((VirtualQStringListModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnReceivers(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_Receivers_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_IsSignalConnected(const QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        return vqstringlistmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQStringListModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseIsSignalConnected(const QStringListModel* self, const QMetaMethod* signal) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_IsSignalConnected_IsBase(true);
        return vqstringlistmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQStringListModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnIsSignalConnected(const QStringListModel* self, intptr_t slot) {
    auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self));
    if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
        vqstringlistmodel->setQStringListModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_IsSignalConnected_Callback>(slot));
    }
}

void QStringListModel_Delete(QStringListModel* self) {
    delete self;
}
