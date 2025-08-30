#include <KColorSchemeModel>
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
#include <QTimerEvent>
#include <QVariant>
#include <kcolorschememodel.h>
#include "libkcolorschememodel.h"
#include "libkcolorschememodel.hxx"

KColorSchemeModel* KColorSchemeModel_new() {
    return new VirtualKColorSchemeModel();
}

KColorSchemeModel* KColorSchemeModel_new2(QObject* parent) {
    return new VirtualKColorSchemeModel(parent);
}

QMetaObject* KColorSchemeModel_MetaObject(const KColorSchemeModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorSchemeModel_Metacast(KColorSchemeModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorSchemeModel_Metacall(KColorSchemeModel* self, int param1, int param2, void** param3) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorSchemeModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColorSchemeModel_Tr(const char* s) {
    QString _ret = KColorSchemeModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* KColorSchemeModel_Data(const KColorSchemeModel* self, const QModelIndex* index, int role) {
    auto* vkcolorschememodel = dynamic_cast<const VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColorSchemeModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int KColorSchemeModel_RowCount(const KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<const VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKColorSchemeModel*)self)->rowCount(*parent);
    }
}

libqt_string KColorSchemeModel_Tr2(const char* s, const char* c) {
    QString _ret = KColorSchemeModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorSchemeModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KColorSchemeModel::tr(s, c, static_cast<int>(n));
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
int KColorSchemeModel_QBaseMetacall(KColorSchemeModel* self, int param1, int param2, void** param3) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Metacall_IsBase(true);
        return vkcolorschememodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KColorSchemeModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMetacall(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Metacall_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KColorSchemeModel_QBaseData(const KColorSchemeModel* self, const QModelIndex* index, int role) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Data_IsBase(true);
        return new QVariant(vkcolorschememodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColorSchemeModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Data_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseRowCount(const KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RowCount_IsBase(true);
        return vkcolorschememodel->rowCount(*parent);
    } else {
        return self->KColorSchemeModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRowCount(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RowCount_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Index(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QModelIndex(vkcolorschememodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_QBaseIndex(const KColorSchemeModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Index_IsBase(true);
        return new QModelIndex(vkcolorschememodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnIndex(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Index_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Sibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QModelIndex(vkcolorschememodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_QBaseSibling(const KColorSchemeModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sibling_IsBase(true);
        return new QModelIndex(vkcolorschememodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSibling(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sibling_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_DropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColorSchemeModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseDropMimeData(KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DropMimeData_IsBase(true);
        return vkcolorschememodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColorSchemeModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnDropMimeData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DropMimeData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeModel_Flags(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return static_cast<int>(vkcolorschememodel->flags(*index));
    } else {
        return static_cast<int>(self->KColorSchemeModel::flags(*index));
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseFlags(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Flags_IsBase(true);
        return static_cast<int>(vkcolorschememodel->flags(*index));
    } else {
        return static_cast<int>(self->KColorSchemeModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnFlags(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Flags_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_SetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KColorSchemeModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseSetData(KColorSchemeModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetData_IsBase(true);
        return vkcolorschememodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KColorSchemeModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KColorSchemeModel_HeaderData(const KColorSchemeModel* self, int section, int orientation, int role) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QVariant(vkcolorschememodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColorSchemeModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KColorSchemeModel_QBaseHeaderData(const KColorSchemeModel* self, int section, int orientation, int role) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_HeaderData_IsBase(true);
        return new QVariant(vkcolorschememodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColorSchemeModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnHeaderData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_HeaderData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_SetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KColorSchemeModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseSetHeaderData(KColorSchemeModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetHeaderData_IsBase(true);
        return vkcolorschememodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KColorSchemeModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetHeaderData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetHeaderData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KColorSchemeModel_ItemData(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        QMap<int, QVariant> _ret = vkcolorschememodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KColorSchemeModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KColorSchemeModel_QBaseItemData(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkcolorschememodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KColorSchemeModel::itemData(*index);
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
void KColorSchemeModel_OnItemData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ItemData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_SetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->setItemData(*index, roles_QMap);
    } else {
        return self->KColorSchemeModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseSetItemData(KColorSchemeModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetItemData_IsBase(true);
        return vkcolorschememodel->setItemData(*index, roles_QMap);
    } else {
        return self->KColorSchemeModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSetItemData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SetItemData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_ClearItemData(KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->clearItemData(*index);
    } else {
        return self->KColorSchemeModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseClearItemData(KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ClearItemData_IsBase(true);
        return vkcolorschememodel->clearItemData(*index);
    } else {
        return self->KColorSchemeModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnClearItemData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ClearItemData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KColorSchemeModel_MimeTypes(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        QList<QString> _ret = vkcolorschememodel->mimeTypes();
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
        QList<QString> _ret = self->KColorSchemeModel::mimeTypes();
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
libqt_list /* of libqt_string */ KColorSchemeModel_QBaseMimeTypes(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkcolorschememodel->mimeTypes();
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
        QList<QString> _ret = self->KColorSchemeModel::mimeTypes();
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
void KColorSchemeModel_OnMimeTypes(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MimeTypes_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KColorSchemeModel_MimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->mimeData(indexes_QList);
    } else {
        return self->KColorSchemeModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KColorSchemeModel_QBaseMimeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MimeData_IsBase(true);
        return vkcolorschememodel->mimeData(indexes_QList);
    } else {
        return self->KColorSchemeModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMimeData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MimeData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_CanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColorSchemeModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseCanDropMimeData(const KColorSchemeModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CanDropMimeData_IsBase(true);
        return vkcolorschememodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColorSchemeModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCanDropMimeData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeModel_SupportedDropActions(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return static_cast<int>(vkcolorschememodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KColorSchemeModel::supportedDropActions());
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseSupportedDropActions(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkcolorschememodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KColorSchemeModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSupportedDropActions(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeModel_SupportedDragActions(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return static_cast<int>(vkcolorschememodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KColorSchemeModel::supportedDragActions());
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseSupportedDragActions(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkcolorschememodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KColorSchemeModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSupportedDragActions(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_InsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseInsertRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_InsertRows_IsBase(true);
        return vkcolorschememodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnInsertRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_InsertRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_InsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseInsertColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_InsertColumns_IsBase(true);
        return vkcolorschememodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnInsertColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_InsertColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_RemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseRemoveRows(KColorSchemeModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RemoveRows_IsBase(true);
        return vkcolorschememodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRemoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RemoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_RemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseRemoveColumns(KColorSchemeModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RemoveColumns_IsBase(true);
        return vkcolorschememodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColorSchemeModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRemoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RemoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_MoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColorSchemeModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MoveRows_IsBase(true);
        return vkcolorschememodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColorSchemeModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_MoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColorSchemeModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MoveColumns_IsBase(true);
        return vkcolorschememodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColorSchemeModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_FetchMore(KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->fetchMore(*parent);
    } else {
        self->KColorSchemeModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseFetchMore(KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_FetchMore_IsBase(true);
        vkcolorschememodel->fetchMore(*parent);
    } else {
        self->KColorSchemeModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnFetchMore(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_FetchMore_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_CanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->canFetchMore(*parent);
    } else {
        return self->KColorSchemeModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseCanFetchMore(const KColorSchemeModel* self, const QModelIndex* parent) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CanFetchMore_IsBase(true);
        return vkcolorschememodel->canFetchMore(*parent);
    } else {
        return self->KColorSchemeModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCanFetchMore(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CanFetchMore_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_Sort(KColorSchemeModel* self, int column, int order) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KColorSchemeModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseSort(KColorSchemeModel* self, int column, int order) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sort_IsBase(true);
        vkcolorschememodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KColorSchemeModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSort(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sort_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_Buddy(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QModelIndex(vkcolorschememodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_QBaseBuddy(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Buddy_IsBase(true);
        return new QModelIndex(vkcolorschememodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKColorSchemeModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBuddy(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Buddy_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColorSchemeModel_Match(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        QList<QModelIndex> _ret = vkcolorschememodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KColorSchemeModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KColorSchemeModel_QBaseMatch(const KColorSchemeModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkcolorschememodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KColorSchemeModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KColorSchemeModel_OnMatch(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Match_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KColorSchemeModel_Span(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QSize(vkcolorschememodel->span(*index));
    } else {
        return new QSize(((VirtualKColorSchemeModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KColorSchemeModel_QBaseSpan(const KColorSchemeModel* self, const QModelIndex* index) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Span_IsBase(true);
        return new QSize(vkcolorschememodel->span(*index));
    } else {
        return new QSize(((VirtualKColorSchemeModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSpan(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Span_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KColorSchemeModel_RoleNames(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        QHash<int, QByteArray> _ret = vkcolorschememodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KColorSchemeModel::roleNames();
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
libqt_map /* of int to libqt_string */ KColorSchemeModel_QBaseRoleNames(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkcolorschememodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KColorSchemeModel::roleNames();
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
void KColorSchemeModel_OnRoleNames(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_RoleNames_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_MultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->multiData(*index, *roleDataSpan);
    } else {
        self->KColorSchemeModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseMultiData(const KColorSchemeModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MultiData_IsBase(true);
        vkcolorschememodel->multiData(*index, *roleDataSpan);
    } else {
        self->KColorSchemeModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnMultiData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_MultiData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_Submit(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->submit();
    } else {
        return self->KColorSchemeModel::submit();
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseSubmit(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Submit_IsBase(true);
        return vkcolorschememodel->submit();
    } else {
        return self->KColorSchemeModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSubmit(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Submit_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_Revert(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->revert();
    } else {
        self->KColorSchemeModel::revert();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseRevert(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Revert_IsBase(true);
        vkcolorschememodel->revert();
    } else {
        self->KColorSchemeModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnRevert(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Revert_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_ResetInternalData(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->resetInternalData();
    } else {
        ((VirtualKColorSchemeModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseResetInternalData(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ResetInternalData_IsBase(true);
        vkcolorschememodel->resetInternalData();
    } else {
        ((VirtualKColorSchemeModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnResetInternalData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ResetInternalData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_Event(KColorSchemeModel* self, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->event(event);
    } else {
        return self->KColorSchemeModel::event(event);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseEvent(KColorSchemeModel* self, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Event_IsBase(true);
        return vkcolorschememodel->event(event);
    } else {
        return self->KColorSchemeModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEvent(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Event_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_EventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->eventFilter(watched, event);
    } else {
        return self->KColorSchemeModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseEventFilter(KColorSchemeModel* self, QObject* watched, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EventFilter_IsBase(true);
        return vkcolorschememodel->eventFilter(watched, event);
    } else {
        return self->KColorSchemeModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEventFilter(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EventFilter_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_TimerEvent(KColorSchemeModel* self, QTimerEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->timerEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseTimerEvent(KColorSchemeModel* self, QTimerEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_TimerEvent_IsBase(true);
        vkcolorschememodel->timerEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnTimerEvent(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_TimerEvent_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_ChildEvent(KColorSchemeModel* self, QChildEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->childEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseChildEvent(KColorSchemeModel* self, QChildEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChildEvent_IsBase(true);
        vkcolorschememodel->childEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnChildEvent(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChildEvent_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_CustomEvent(KColorSchemeModel* self, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->customEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseCustomEvent(KColorSchemeModel* self, QEvent* event) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CustomEvent_IsBase(true);
        vkcolorschememodel->customEvent(event);
    } else {
        ((VirtualKColorSchemeModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCustomEvent(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CustomEvent_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_ConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ConnectNotify_IsBase(true);
        vkcolorschememodel->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnConnectNotify(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ConnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_DisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseDisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DisconnectNotify_IsBase(true);
        vkcolorschememodel->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnDisconnectNotify(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColorSchemeModel_CreateIndex(const KColorSchemeModel* self, int row, int column) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return new QModelIndex(vkcolorschememodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KColorSchemeModel_QBaseCreateIndex(const KColorSchemeModel* self, int row, int column) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkcolorschememodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnCreateIndex(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_CreateIndex_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKColorSchemeModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EncodeData_IsBase(true);
        vkcolorschememodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKColorSchemeModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEncodeData(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EncodeData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_DecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKColorSchemeModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseDecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DecodeData_IsBase(true);
        return vkcolorschememodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKColorSchemeModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnDecodeData(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_DecodeData_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_BeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseBeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginInsertRows_IsBase(true);
        vkcolorschememodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginInsertRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndInsertRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endInsertRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndInsertRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndInsertRows_IsBase(true);
        vkcolorschememodel->endInsertRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndInsertRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndInsertRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_BeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseBeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginRemoveRows_IsBase(true);
        vkcolorschememodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginRemoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndRemoveRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endRemoveRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndRemoveRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndRemoveRows_IsBase(true);
        vkcolorschememodel->endRemoveRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndRemoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_BeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKColorSchemeModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseBeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginMoveRows_IsBase(true);
        return vkcolorschememodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKColorSchemeModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginMoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndMoveRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endMoveRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndMoveRows(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndMoveRows_IsBase(true);
        vkcolorschememodel->endMoveRows();
    } else {
        ((VirtualKColorSchemeModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndMoveRows(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndMoveRows_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_BeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseBeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginInsertColumns_IsBase(true);
        vkcolorschememodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginInsertColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndInsertColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endInsertColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndInsertColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndInsertColumns_IsBase(true);
        vkcolorschememodel->endInsertColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndInsertColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_BeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseBeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginRemoveColumns_IsBase(true);
        vkcolorschememodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColorSchemeModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginRemoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndRemoveColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endRemoveColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndRemoveColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndRemoveColumns_IsBase(true);
        vkcolorschememodel->endRemoveColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndRemoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_BeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKColorSchemeModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseBeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginMoveColumns_IsBase(true);
        return vkcolorschememodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKColorSchemeModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginMoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndMoveColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endMoveColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndMoveColumns(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndMoveColumns_IsBase(true);
        vkcolorschememodel->endMoveColumns();
    } else {
        ((VirtualKColorSchemeModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndMoveColumns(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_BeginResetModel(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->beginResetModel();
    } else {
        ((VirtualKColorSchemeModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseBeginResetModel(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginResetModel_IsBase(true);
        vkcolorschememodel->beginResetModel();
    } else {
        ((VirtualKColorSchemeModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnBeginResetModel(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_BeginResetModel_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_EndResetModel(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->endResetModel();
    } else {
        ((VirtualKColorSchemeModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseEndResetModel(KColorSchemeModel* self) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndResetModel_IsBase(true);
        vkcolorschememodel->endResetModel();
    } else {
        ((VirtualKColorSchemeModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnEndResetModel(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_EndResetModel_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_ChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKColorSchemeModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChangePersistentIndex_IsBase(true);
        vkcolorschememodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKColorSchemeModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnChangePersistentIndex(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeModel_ChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
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
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKColorSchemeModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KColorSchemeModel_QBaseChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
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
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChangePersistentIndexList_IsBase(true);
        vkcolorschememodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKColorSchemeModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnChangePersistentIndexList(KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = dynamic_cast<VirtualKColorSchemeModel*>(self);
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColorSchemeModel_PersistentIndexList(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        QList<QModelIndex> _ret = vkcolorschememodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKColorSchemeModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KColorSchemeModel_QBasePersistentIndexList(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkcolorschememodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKColorSchemeModel*)self)->persistentIndexList();
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
void KColorSchemeModel_OnPersistentIndexList(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColorSchemeModel_Sender(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->sender();
    } else {
        return ((VirtualKColorSchemeModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColorSchemeModel_QBaseSender(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sender_IsBase(true);
        return vkcolorschememodel->sender();
    } else {
        return ((VirtualKColorSchemeModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSender(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Sender_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeModel_SenderSignalIndex(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseSenderSignalIndex(const KColorSchemeModel* self) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SenderSignalIndex_IsBase(true);
        return vkcolorschememodel->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnSenderSignalIndex(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeModel_Receivers(const KColorSchemeModel* self, const char* signal) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->receivers(signal);
    } else {
        return ((VirtualKColorSchemeModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColorSchemeModel_QBaseReceivers(const KColorSchemeModel* self, const char* signal) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Receivers_IsBase(true);
        return vkcolorschememodel->receivers(signal);
    } else {
        return ((VirtualKColorSchemeModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnReceivers(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_Receivers_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeModel_IsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        return vkcolorschememodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColorSchemeModel_QBaseIsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_IsSignalConnected_IsBase(true);
        return vkcolorschememodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeModel_OnIsSignalConnected(const KColorSchemeModel* self, intptr_t slot) {
    auto* vkcolorschememodel = const_cast<VirtualKColorSchemeModel*>(dynamic_cast<const VirtualKColorSchemeModel*>(self));
    if (vkcolorschememodel && vkcolorschememodel->isVirtualKColorSchemeModel) {
        vkcolorschememodel->setKColorSchemeModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKColorSchemeModel::KColorSchemeModel_IsSignalConnected_Callback>(slot));
    }
}

void KColorSchemeModel_Delete(KColorSchemeModel* self) {
    delete self;
}
