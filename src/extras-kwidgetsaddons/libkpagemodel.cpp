#include <KPageModel>
#include <QAbstractItemModel>
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
#include <QTimerEvent>
#include <QVariant>
#include <kpagemodel.h>
#include "libkpagemodel.h"
#include "libkpagemodel.hxx"

KPageModel* KPageModel_new() {
    return new VirtualKPageModel();
}

KPageModel* KPageModel_new2(QObject* parent) {
    return new VirtualKPageModel(parent);
}

QMetaObject* KPageModel_MetaObject(const KPageModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageModel_Metacast(KPageModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageModel_Metacall(KPageModel* self, int param1, int param2, void** param3) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageModel_Tr(const char* s) {
    QString _ret = KPageModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageModel_Tr2(const char* s, const char* c) {
    QString _ret = KPageModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPageModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KPageModel_QBaseMetacall(KPageModel* self, int param1, int param2, void** param3) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Metacall_IsBase(true);
        return vkpagemodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPageModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMetacall(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Metacall_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageModel_Index(const KPageModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QModelIndex(vkpagemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KPageModel_QBaseIndex(const KPageModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Index_IsBase(true);
        return new QModelIndex(vkpagemodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnIndex(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Index_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageModel_Parent(const KPageModel* self, const QModelIndex* child) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QModelIndex(vkpagemodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* KPageModel_QBaseParent(const KPageModel* self, const QModelIndex* child) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Parent_IsBase(true);
        return new QModelIndex(vkpagemodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnParent(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Parent_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageModel_Sibling(const KPageModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QModelIndex(vkpagemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KPageModel_QBaseSibling(const KPageModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sibling_IsBase(true);
        return new QModelIndex(vkpagemodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSibling(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sibling_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_RowCount(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->rowCount(*parent);
    } else {
        return ((VirtualKPageModel*)self)->rowCount(*parent);
    }
}

// Base class handler implementation
int KPageModel_QBaseRowCount(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RowCount_IsBase(true);
        return vkpagemodel->rowCount(*parent);
    } else {
        return ((VirtualKPageModel*)self)->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRowCount(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RowCount_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_ColumnCount(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->columnCount(*parent);
    } else {
        return ((VirtualKPageModel*)self)->columnCount(*parent);
    }
}

// Base class handler implementation
int KPageModel_QBaseColumnCount(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ColumnCount_IsBase(true);
        return vkpagemodel->columnCount(*parent);
    } else {
        return ((VirtualKPageModel*)self)->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnColumnCount(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ColumnCount_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_HasChildren(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->hasChildren(*parent);
    } else {
        return self->KPageModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseHasChildren(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_HasChildren_IsBase(true);
        return vkpagemodel->hasChildren(*parent);
    } else {
        return self->KPageModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnHasChildren(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_HasChildren_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageModel_Data(const KPageModel* self, const QModelIndex* index, int role) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QVariant(vkpagemodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KPageModel_QBaseData(const KPageModel* self, const QModelIndex* index, int role) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Data_IsBase(true);
        return new QVariant(vkpagemodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Data_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_SetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KPageModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KPageModel_QBaseSetData(KPageModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetData_IsBase(true);
        return vkpagemodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KPageModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageModel_HeaderData(const KPageModel* self, int section, int orientation, int role) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QVariant(vkpagemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KPageModel_QBaseHeaderData(const KPageModel* self, int section, int orientation, int role) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_HeaderData_IsBase(true);
        return new QVariant(vkpagemodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnHeaderData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_HeaderData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_SetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KPageModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KPageModel_QBaseSetHeaderData(KPageModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetHeaderData_IsBase(true);
        return vkpagemodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KPageModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetHeaderData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetHeaderData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KPageModel_ItemData(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        QMap<int, QVariant> _ret = vkpagemodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KPageModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KPageModel_QBaseItemData(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkpagemodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KPageModel::itemData(*index);
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
void KPageModel_OnItemData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ItemData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_SetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->setItemData(*index, roles_QMap);
    } else {
        return self->KPageModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KPageModel_QBaseSetItemData(KPageModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetItemData_IsBase(true);
        return vkpagemodel->setItemData(*index, roles_QMap);
    } else {
        return self->KPageModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSetItemData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SetItemData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_ClearItemData(KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->clearItemData(*index);
    } else {
        return self->KPageModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KPageModel_QBaseClearItemData(KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ClearItemData_IsBase(true);
        return vkpagemodel->clearItemData(*index);
    } else {
        return self->KPageModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnClearItemData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ClearItemData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KPageModel_MimeTypes(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        QList<QString> _ret = vkpagemodel->mimeTypes();
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
        QList<QString> _ret = self->KPageModel::mimeTypes();
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
libqt_list /* of libqt_string */ KPageModel_QBaseMimeTypes(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkpagemodel->mimeTypes();
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
        QList<QString> _ret = self->KPageModel::mimeTypes();
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
void KPageModel_OnMimeTypes(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MimeTypes_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KPageModel_MimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->mimeData(indexes_QList);
    } else {
        return self->KPageModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KPageModel_QBaseMimeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MimeData_IsBase(true);
        return vkpagemodel->mimeData(indexes_QList);
    } else {
        return self->KPageModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMimeData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MimeData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_CanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseCanDropMimeData(const KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CanDropMimeData_IsBase(true);
        return vkpagemodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCanDropMimeData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_DropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseDropMimeData(KPageModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DropMimeData_IsBase(true);
        return vkpagemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnDropMimeData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DropMimeData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_SupportedDropActions(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return static_cast<int>(vkpagemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KPageModel::supportedDropActions());
    }
}

// Base class handler implementation
int KPageModel_QBaseSupportedDropActions(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkpagemodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KPageModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSupportedDropActions(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_SupportedDragActions(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return static_cast<int>(vkpagemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KPageModel::supportedDragActions());
    }
}

// Base class handler implementation
int KPageModel_QBaseSupportedDragActions(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkpagemodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KPageModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSupportedDragActions(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_InsertRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseInsertRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_InsertRows_IsBase(true);
        return vkpagemodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnInsertRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_InsertRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_InsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseInsertColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_InsertColumns_IsBase(true);
        return vkpagemodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnInsertColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_InsertColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_RemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseRemoveRows(KPageModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RemoveRows_IsBase(true);
        return vkpagemodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRemoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RemoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_RemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseRemoveColumns(KPageModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RemoveColumns_IsBase(true);
        return vkpagemodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRemoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RemoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_MoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KPageModel_QBaseMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MoveRows_IsBase(true);
        return vkpagemodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_MoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KPageModel_QBaseMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MoveColumns_IsBase(true);
        return vkpagemodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_FetchMore(KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->fetchMore(*parent);
    } else {
        self->KPageModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KPageModel_QBaseFetchMore(KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_FetchMore_IsBase(true);
        vkpagemodel->fetchMore(*parent);
    } else {
        self->KPageModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnFetchMore(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_FetchMore_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_CanFetchMore(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->canFetchMore(*parent);
    } else {
        return self->KPageModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KPageModel_QBaseCanFetchMore(const KPageModel* self, const QModelIndex* parent) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CanFetchMore_IsBase(true);
        return vkpagemodel->canFetchMore(*parent);
    } else {
        return self->KPageModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCanFetchMore(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CanFetchMore_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_Flags(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return static_cast<int>(vkpagemodel->flags(*index));
    } else {
        return static_cast<int>(self->KPageModel::flags(*index));
    }
}

// Base class handler implementation
int KPageModel_QBaseFlags(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Flags_IsBase(true);
        return static_cast<int>(vkpagemodel->flags(*index));
    } else {
        return static_cast<int>(self->KPageModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnFlags(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Flags_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_Sort(KPageModel* self, int column, int order) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KPageModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KPageModel_QBaseSort(KPageModel* self, int column, int order) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sort_IsBase(true);
        vkpagemodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KPageModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSort(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sort_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageModel_Buddy(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QModelIndex(vkpagemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KPageModel_QBaseBuddy(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Buddy_IsBase(true);
        return new QModelIndex(vkpagemodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKPageModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBuddy(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Buddy_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageModel_Match(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        QList<QModelIndex> _ret = vkpagemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KPageModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KPageModel_QBaseMatch(const KPageModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkpagemodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KPageModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KPageModel_OnMatch(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Match_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageModel_Span(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QSize(vkpagemodel->span(*index));
    } else {
        return new QSize(((VirtualKPageModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KPageModel_QBaseSpan(const KPageModel* self, const QModelIndex* index) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Span_IsBase(true);
        return new QSize(vkpagemodel->span(*index));
    } else {
        return new QSize(((VirtualKPageModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSpan(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Span_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KPageModel_RoleNames(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        QHash<int, QByteArray> _ret = vkpagemodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KPageModel::roleNames();
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
libqt_map /* of int to libqt_string */ KPageModel_QBaseRoleNames(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkpagemodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KPageModel::roleNames();
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
void KPageModel_OnRoleNames(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_RoleNames_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_MultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->multiData(*index, *roleDataSpan);
    } else {
        self->KPageModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KPageModel_QBaseMultiData(const KPageModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MultiData_IsBase(true);
        vkpagemodel->multiData(*index, *roleDataSpan);
    } else {
        self->KPageModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnMultiData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_MultiData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_Submit(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->submit();
    } else {
        return self->KPageModel::submit();
    }
}

// Base class handler implementation
bool KPageModel_QBaseSubmit(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Submit_IsBase(true);
        return vkpagemodel->submit();
    } else {
        return self->KPageModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSubmit(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Submit_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_Revert(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->revert();
    } else {
        self->KPageModel::revert();
    }
}

// Base class handler implementation
void KPageModel_QBaseRevert(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Revert_IsBase(true);
        vkpagemodel->revert();
    } else {
        self->KPageModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnRevert(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Revert_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_ResetInternalData(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->resetInternalData();
    } else {
        ((VirtualKPageModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KPageModel_QBaseResetInternalData(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ResetInternalData_IsBase(true);
        vkpagemodel->resetInternalData();
    } else {
        ((VirtualKPageModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnResetInternalData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ResetInternalData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_Event(KPageModel* self, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->event(event);
    } else {
        return self->KPageModel::event(event);
    }
}

// Base class handler implementation
bool KPageModel_QBaseEvent(KPageModel* self, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Event_IsBase(true);
        return vkpagemodel->event(event);
    } else {
        return self->KPageModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEvent(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Event_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_EventFilter(KPageModel* self, QObject* watched, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->eventFilter(watched, event);
    } else {
        return self->KPageModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPageModel_QBaseEventFilter(KPageModel* self, QObject* watched, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EventFilter_IsBase(true);
        return vkpagemodel->eventFilter(watched, event);
    } else {
        return self->KPageModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEventFilter(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EventFilter_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_TimerEvent(KPageModel* self, QTimerEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->timerEvent(event);
    } else {
        ((VirtualKPageModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageModel_QBaseTimerEvent(KPageModel* self, QTimerEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_TimerEvent_IsBase(true);
        vkpagemodel->timerEvent(event);
    } else {
        ((VirtualKPageModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnTimerEvent(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_TimerEvent_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_ChildEvent(KPageModel* self, QChildEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->childEvent(event);
    } else {
        ((VirtualKPageModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageModel_QBaseChildEvent(KPageModel* self, QChildEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChildEvent_IsBase(true);
        vkpagemodel->childEvent(event);
    } else {
        ((VirtualKPageModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnChildEvent(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChildEvent_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_CustomEvent(KPageModel* self, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->customEvent(event);
    } else {
        ((VirtualKPageModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageModel_QBaseCustomEvent(KPageModel* self, QEvent* event) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CustomEvent_IsBase(true);
        vkpagemodel->customEvent(event);
    } else {
        ((VirtualKPageModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCustomEvent(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CustomEvent_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_ConnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->connectNotify(*signal);
    } else {
        ((VirtualKPageModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageModel_QBaseConnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ConnectNotify_IsBase(true);
        vkpagemodel->connectNotify(*signal);
    } else {
        ((VirtualKPageModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnConnectNotify(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ConnectNotify_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_DisconnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->disconnectNotify(*signal);
    } else {
        ((VirtualKPageModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageModel_QBaseDisconnectNotify(KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DisconnectNotify_IsBase(true);
        vkpagemodel->disconnectNotify(*signal);
    } else {
        ((VirtualKPageModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnDisconnectNotify(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageModel_CreateIndex(const KPageModel* self, int row, int column) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return new QModelIndex(vkpagemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KPageModel_QBaseCreateIndex(const KPageModel* self, int row, int column) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkpagemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnCreateIndex(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_CreateIndex_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKPageModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KPageModel_QBaseEncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EncodeData_IsBase(true);
        vkpagemodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKPageModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEncodeData(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EncodeData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_DecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKPageModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KPageModel_QBaseDecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DecodeData_IsBase(true);
        return vkpagemodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKPageModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnDecodeData(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_DecodeData_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_BeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageModel_QBaseBeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginInsertRows_IsBase(true);
        vkpagemodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginInsertRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndInsertRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endInsertRows();
    } else {
        ((VirtualKPageModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndInsertRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndInsertRows_IsBase(true);
        vkpagemodel->endInsertRows();
    } else {
        ((VirtualKPageModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndInsertRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndInsertRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_BeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageModel_QBaseBeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginRemoveRows_IsBase(true);
        vkpagemodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginRemoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndRemoveRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endRemoveRows();
    } else {
        ((VirtualKPageModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndRemoveRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndRemoveRows_IsBase(true);
        vkpagemodel->endRemoveRows();
    } else {
        ((VirtualKPageModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndRemoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_BeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKPageModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KPageModel_QBaseBeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginMoveRows_IsBase(true);
        return vkpagemodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKPageModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginMoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndMoveRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endMoveRows();
    } else {
        ((VirtualKPageModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndMoveRows(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndMoveRows_IsBase(true);
        vkpagemodel->endMoveRows();
    } else {
        ((VirtualKPageModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndMoveRows(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndMoveRows_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_BeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageModel_QBaseBeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginInsertColumns_IsBase(true);
        vkpagemodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginInsertColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndInsertColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endInsertColumns();
    } else {
        ((VirtualKPageModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndInsertColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndInsertColumns_IsBase(true);
        vkpagemodel->endInsertColumns();
    } else {
        ((VirtualKPageModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndInsertColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_BeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageModel_QBaseBeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginRemoveColumns_IsBase(true);
        vkpagemodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginRemoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndRemoveColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endRemoveColumns();
    } else {
        ((VirtualKPageModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndRemoveColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndRemoveColumns_IsBase(true);
        vkpagemodel->endRemoveColumns();
    } else {
        ((VirtualKPageModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndRemoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_BeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKPageModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KPageModel_QBaseBeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginMoveColumns_IsBase(true);
        return vkpagemodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKPageModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginMoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndMoveColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endMoveColumns();
    } else {
        ((VirtualKPageModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndMoveColumns(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndMoveColumns_IsBase(true);
        vkpagemodel->endMoveColumns();
    } else {
        ((VirtualKPageModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndMoveColumns(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_BeginResetModel(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->beginResetModel();
    } else {
        ((VirtualKPageModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KPageModel_QBaseBeginResetModel(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginResetModel_IsBase(true);
        vkpagemodel->beginResetModel();
    } else {
        ((VirtualKPageModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnBeginResetModel(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_BeginResetModel_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_EndResetModel(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->endResetModel();
    } else {
        ((VirtualKPageModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KPageModel_QBaseEndResetModel(KPageModel* self) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndResetModel_IsBase(true);
        vkpagemodel->endResetModel();
    } else {
        ((VirtualKPageModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnEndResetModel(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_EndResetModel_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_ChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKPageModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KPageModel_QBaseChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChangePersistentIndex_IsBase(true);
        vkpagemodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKPageModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnChangePersistentIndex(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageModel_ChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
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
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKPageModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KPageModel_QBaseChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
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
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChangePersistentIndexList_IsBase(true);
        vkpagemodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKPageModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnChangePersistentIndexList(KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = dynamic_cast<VirtualKPageModel*>(self);
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageModel_PersistentIndexList(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        QList<QModelIndex> _ret = vkpagemodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKPageModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KPageModel_QBasePersistentIndexList(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkpagemodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKPageModel*)self)->persistentIndexList();
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
void KPageModel_OnPersistentIndexList(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageModel_Sender(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->sender();
    } else {
        return ((VirtualKPageModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageModel_QBaseSender(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sender_IsBase(true);
        return vkpagemodel->sender();
    } else {
        return ((VirtualKPageModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSender(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Sender_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_SenderSignalIndex(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->senderSignalIndex();
    } else {
        return ((VirtualKPageModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageModel_QBaseSenderSignalIndex(const KPageModel* self) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SenderSignalIndex_IsBase(true);
        return vkpagemodel->senderSignalIndex();
    } else {
        return ((VirtualKPageModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnSenderSignalIndex(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageModel_Receivers(const KPageModel* self, const char* signal) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->receivers(signal);
    } else {
        return ((VirtualKPageModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageModel_QBaseReceivers(const KPageModel* self, const char* signal) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Receivers_IsBase(true);
        return vkpagemodel->receivers(signal);
    } else {
        return ((VirtualKPageModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnReceivers(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_Receivers_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageModel_IsSignalConnected(const KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        return vkpagemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageModel_QBaseIsSignalConnected(const KPageModel* self, const QMetaMethod* signal) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_IsSignalConnected_IsBase(true);
        return vkpagemodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageModel_OnIsSignalConnected(const KPageModel* self, intptr_t slot) {
    auto* vkpagemodel = const_cast<VirtualKPageModel*>(dynamic_cast<const VirtualKPageModel*>(self));
    if (vkpagemodel && vkpagemodel->isVirtualKPageModel) {
        vkpagemodel->setKPageModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageModel::KPageModel_IsSignalConnected_Callback>(slot));
    }
}

void KPageModel_Delete(KPageModel* self) {
    delete self;
}
