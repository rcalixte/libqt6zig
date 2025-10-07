#include <KCheckableProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIdentityProxyModel>
#include <QItemSelection>
#include <QItemSelectionModel>
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
#include <kcheckableproxymodel.h>
#include "libkcheckableproxymodel.h"
#include "libkcheckableproxymodel.hxx"

KCheckableProxyModel* KCheckableProxyModel_new() {
    return new VirtualKCheckableProxyModel();
}

KCheckableProxyModel* KCheckableProxyModel_new2(QObject* parent) {
    return new VirtualKCheckableProxyModel(parent);
}

QMetaObject* KCheckableProxyModel_MetaObject(const KCheckableProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCheckableProxyModel_Metacast(KCheckableProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCheckableProxyModel_Metacall(KCheckableProxyModel* self, int param1, int param2, void** param3) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCheckableProxyModel_Tr(const char* s) {
    QString _ret = KCheckableProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCheckableProxyModel_SetSelectionModel(KCheckableProxyModel* self, QItemSelectionModel* itemSelectionModel) {
    self->setSelectionModel(itemSelectionModel);
}

QItemSelectionModel* KCheckableProxyModel_SelectionModel(const KCheckableProxyModel* self) {
    return self->selectionModel();
}

int KCheckableProxyModel_Flags(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = dynamic_cast<const VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKCheckableProxyModel*)self)->flags(*index));
    }
}

QVariant* KCheckableProxyModel_Data(const KCheckableProxyModel* self, const QModelIndex* index, int role) {
    auto* vkcheckableproxymodel = dynamic_cast<const VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCheckableProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

bool KCheckableProxyModel_SetData(KCheckableProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

void KCheckableProxyModel_SetSourceModel(KCheckableProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        self->setSourceModel(sourceModel);
    } else {
        ((VirtualKCheckableProxyModel*)self)->setSourceModel(sourceModel);
    }
}

libqt_map /* of int to libqt_string */ KCheckableProxyModel_RoleNames(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<const VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        QHash<int, QByteArray> _ret = self->roleNames();
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
        QHash<int, QByteArray> _ret = ((VirtualKCheckableProxyModel*)self)->roleNames();
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

bool KCheckableProxyModel_Select(KCheckableProxyModel* self, const QItemSelection* selection, int command) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
    return {};
}

libqt_string KCheckableProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KCheckableProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCheckableProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCheckableProxyModel::tr(s, c, static_cast<int>(n));
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
int KCheckableProxyModel_QBaseMetacall(KCheckableProxyModel* self, int param1, int param2, void** param3) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Metacall_IsBase(true);
        return vkcheckableproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCheckableProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMetacall(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Metacall_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseFlags(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkcheckableproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KCheckableProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnFlags(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Flags_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KCheckableProxyModel_QBaseData(const KCheckableProxyModel* self, const QModelIndex* index, int role) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Data_IsBase(true);
        return new QVariant(vkcheckableproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCheckableProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Data_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseSetData(KCheckableProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetData_IsBase(true);
        return vkcheckableproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KCheckableProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetData_Callback>(slot));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseSetSourceModel(KCheckableProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetSourceModel_IsBase(true);
        vkcheckableproxymodel->setSourceModel(sourceModel);
    } else {
        self->KCheckableProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetSourceModel(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KCheckableProxyModel_QBaseRoleNames(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkcheckableproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KCheckableProxyModel::roleNames();
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
void KCheckableProxyModel_OnRoleNames(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseSelect(KCheckableProxyModel* self, const QItemSelection* selection, int command) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Select_IsBase(true);
        return vkcheckableproxymodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSelect(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Select_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Select_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_ColumnCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->columnCount(*parent);
    } else {
        return self->KCheckableProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseColumnCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ColumnCount_IsBase(true);
        return vkcheckableproxymodel->columnCount(*parent);
    } else {
        return self->KCheckableProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnColumnCount(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Index(const KCheckableProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseIndex(const KCheckableProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Index_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnIndex(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Index_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_MapFromSource(const KCheckableProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseMapFromSource(const KCheckableProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapFromSource(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_MapToSource(const KCheckableProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseMapToSource(const KCheckableProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapToSource(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Parent(const KCheckableProxyModel* self, const QModelIndex* child) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseParent(const KCheckableProxyModel* self, const QModelIndex* child) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnParent(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Parent_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_RowCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->rowCount(*parent);
    } else {
        return self->KCheckableProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseRowCount(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RowCount_IsBase(true);
        return vkcheckableproxymodel->rowCount(*parent);
    } else {
        return self->KCheckableProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRowCount(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RowCount_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCheckableProxyModel_HeaderData(const KCheckableProxyModel* self, int section, int orientation, int role) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QVariant(vkcheckableproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCheckableProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KCheckableProxyModel_QBaseHeaderData(const KCheckableProxyModel* self, int section, int orientation, int role) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkcheckableproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKCheckableProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnHeaderData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_DropMimeData(KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCheckableProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseDropMimeData(KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DropMimeData_IsBase(true);
        return vkcheckableproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCheckableProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnDropMimeData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Sibling(const KCheckableProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseSibling(const KCheckableProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSibling(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sibling_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KCheckableProxyModel_MapSelectionFromSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QItemSelection(vkcheckableproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKCheckableProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KCheckableProxyModel_QBaseMapSelectionFromSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkcheckableproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKCheckableProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapSelectionFromSource(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KCheckableProxyModel_MapSelectionToSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QItemSelection(vkcheckableproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKCheckableProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KCheckableProxyModel_QBaseMapSelectionToSource(const KCheckableProxyModel* self, const QItemSelection* selection) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkcheckableproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKCheckableProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMapSelectionToSource(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCheckableProxyModel_Match(const KCheckableProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        QList<QModelIndex> _ret = vkcheckableproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KCheckableProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KCheckableProxyModel_QBaseMatch(const KCheckableProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkcheckableproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KCheckableProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KCheckableProxyModel_OnMatch(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Match_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_InsertColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseInsertColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_InsertColumns_IsBase(true);
        return vkcheckableproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnInsertColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_InsertRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseInsertRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_InsertRows_IsBase(true);
        return vkcheckableproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnInsertRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_RemoveColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseRemoveColumns(KCheckableProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RemoveColumns_IsBase(true);
        return vkcheckableproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRemoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_RemoveRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseRemoveRows(KCheckableProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RemoveRows_IsBase(true);
        return vkcheckableproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KCheckableProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRemoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_MoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCheckableProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MoveRows_IsBase(true);
        return vkcheckableproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCheckableProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_MoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCheckableProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MoveColumns_IsBase(true);
        return vkcheckableproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KCheckableProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_Submit(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->submit();
    } else {
        return self->KCheckableProxyModel::submit();
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseSubmit(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Submit_IsBase(true);
        return vkcheckableproxymodel->submit();
    } else {
        return self->KCheckableProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSubmit(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Submit_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_Revert(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->revert();
    } else {
        self->KCheckableProxyModel::revert();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseRevert(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Revert_IsBase(true);
        vkcheckableproxymodel->revert();
    } else {
        self->KCheckableProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnRevert(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Revert_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KCheckableProxyModel_ItemData(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        QMap<int, QVariant> _ret = vkcheckableproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KCheckableProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KCheckableProxyModel_QBaseItemData(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkcheckableproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KCheckableProxyModel::itemData(*index);
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
void KCheckableProxyModel_OnItemData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ItemData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_SetItemData(KCheckableProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KCheckableProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseSetItemData(KCheckableProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetItemData_IsBase(true);
        return vkcheckableproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KCheckableProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetItemData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_SetHeaderData(KCheckableProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KCheckableProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseSetHeaderData(KCheckableProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHeaderData_IsBase(true);
        return vkcheckableproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KCheckableProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetHeaderData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_ClearItemData(KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->clearItemData(*index);
    } else {
        return self->KCheckableProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseClearItemData(KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ClearItemData_IsBase(true);
        return vkcheckableproxymodel->clearItemData(*index);
    } else {
        return self->KCheckableProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnClearItemData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_Buddy(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseBuddy(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKCheckableProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBuddy(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Buddy_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_CanFetchMore(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->canFetchMore(*parent);
    } else {
        return self->KCheckableProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseCanFetchMore(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CanFetchMore_IsBase(true);
        return vkcheckableproxymodel->canFetchMore(*parent);
    } else {
        return self->KCheckableProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCanFetchMore(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_FetchMore(KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->fetchMore(*parent);
    } else {
        self->KCheckableProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseFetchMore(KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_FetchMore_IsBase(true);
        vkcheckableproxymodel->fetchMore(*parent);
    } else {
        self->KCheckableProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnFetchMore(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_Sort(KCheckableProxyModel* self, int column, int order) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KCheckableProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseSort(KCheckableProxyModel* self, int column, int order) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sort_IsBase(true);
        vkcheckableproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KCheckableProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSort(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sort_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCheckableProxyModel_Span(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QSize(vkcheckableproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKCheckableProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KCheckableProxyModel_QBaseSpan(const KCheckableProxyModel* self, const QModelIndex* index) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Span_IsBase(true);
        return new QSize(vkcheckableproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKCheckableProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSpan(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Span_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_HasChildren(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->hasChildren(*parent);
    } else {
        return self->KCheckableProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseHasChildren(const KCheckableProxyModel* self, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_HasChildren_IsBase(true);
        return vkcheckableproxymodel->hasChildren(*parent);
    } else {
        return self->KCheckableProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnHasChildren(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KCheckableProxyModel_MimeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->mimeData(indexes_QList);
    } else {
        return self->KCheckableProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KCheckableProxyModel_QBaseMimeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MimeData_IsBase(true);
        return vkcheckableproxymodel->mimeData(indexes_QList);
    } else {
        return self->KCheckableProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMimeData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MimeData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_CanDropMimeData(const KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCheckableProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseCanDropMimeData(const KCheckableProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CanDropMimeData_IsBase(true);
        return vkcheckableproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KCheckableProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCanDropMimeData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCheckableProxyModel_MimeTypes(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        QList<QString> _ret = vkcheckableproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KCheckableProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ KCheckableProxyModel_QBaseMimeTypes(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkcheckableproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KCheckableProxyModel::mimeTypes();
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
void KCheckableProxyModel_OnMimeTypes(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_SupportedDragActions(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return static_cast<int>(vkcheckableproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KCheckableProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseSupportedDragActions(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkcheckableproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KCheckableProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSupportedDragActions(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_SupportedDropActions(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return static_cast<int>(vkcheckableproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KCheckableProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseSupportedDropActions(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkcheckableproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KCheckableProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSupportedDropActions(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_MultiData(const KCheckableProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KCheckableProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseMultiData(const KCheckableProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MultiData_IsBase(true);
        vkcheckableproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KCheckableProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnMultiData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_MultiData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_ResetInternalData(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->resetInternalData();
    } else {
        ((VirtualKCheckableProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseResetInternalData(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ResetInternalData_IsBase(true);
        vkcheckableproxymodel->resetInternalData();
    } else {
        ((VirtualKCheckableProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnResetInternalData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_Event(KCheckableProxyModel* self, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->event(event);
    } else {
        return self->KCheckableProxyModel::event(event);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseEvent(KCheckableProxyModel* self, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Event_IsBase(true);
        return vkcheckableproxymodel->event(event);
    } else {
        return self->KCheckableProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEvent(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Event_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_EventFilter(KCheckableProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->eventFilter(watched, event);
    } else {
        return self->KCheckableProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseEventFilter(KCheckableProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EventFilter_IsBase(true);
        return vkcheckableproxymodel->eventFilter(watched, event);
    } else {
        return self->KCheckableProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEventFilter(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_TimerEvent(KCheckableProxyModel* self, QTimerEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->timerEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseTimerEvent(KCheckableProxyModel* self, QTimerEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_TimerEvent_IsBase(true);
        vkcheckableproxymodel->timerEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnTimerEvent(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_ChildEvent(KCheckableProxyModel* self, QChildEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->childEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseChildEvent(KCheckableProxyModel* self, QChildEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChildEvent_IsBase(true);
        vkcheckableproxymodel->childEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnChildEvent(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_CustomEvent(KCheckableProxyModel* self, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->customEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseCustomEvent(KCheckableProxyModel* self, QEvent* event) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CustomEvent_IsBase(true);
        vkcheckableproxymodel->customEvent(event);
    } else {
        ((VirtualKCheckableProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCustomEvent(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_ConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKCheckableProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ConnectNotify_IsBase(true);
        vkcheckableproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKCheckableProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnConnectNotify(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_DisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKCheckableProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseDisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DisconnectNotify_IsBase(true);
        vkcheckableproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKCheckableProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnDisconnectNotify(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_SetHandleSourceLayoutChanges(KCheckableProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKCheckableProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseSetHandleSourceLayoutChanges(KCheckableProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHandleSourceLayoutChanges_IsBase(true);
        vkcheckableproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKCheckableProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetHandleSourceLayoutChanges(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHandleSourceLayoutChanges_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetHandleSourceLayoutChanges_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_SetHandleSourceDataChanges(KCheckableProxyModel* self, bool handleSourceDataChanges) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKCheckableProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseSetHandleSourceDataChanges(KCheckableProxyModel* self, bool handleSourceDataChanges) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHandleSourceDataChanges_IsBase(true);
        vkcheckableproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKCheckableProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSetHandleSourceDataChanges(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SetHandleSourceDataChanges_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SetHandleSourceDataChanges_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_CreateSourceIndex(const KCheckableProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseCreateSourceIndex(const KCheckableProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCreateSourceIndex(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCheckableProxyModel_CreateIndex(const KCheckableProxyModel* self, int row, int column) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return new QModelIndex(vkcheckableproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCheckableProxyModel_QBaseCreateIndex(const KCheckableProxyModel* self, int row, int column) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkcheckableproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnCreateIndex(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EncodeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKCheckableProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEncodeData(const KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EncodeData_IsBase(true);
        vkcheckableproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKCheckableProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEncodeData(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_DecodeData(KCheckableProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseDecodeData(KCheckableProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DecodeData_IsBase(true);
        return vkcheckableproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnDecodeData(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_BeginInsertRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseBeginInsertRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginInsertRows_IsBase(true);
        vkcheckableproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginInsertRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndInsertRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endInsertRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndInsertRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndInsertRows_IsBase(true);
        vkcheckableproxymodel->endInsertRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndInsertRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_BeginRemoveRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseBeginRemoveRows(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginRemoveRows_IsBase(true);
        vkcheckableproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginRemoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndRemoveRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endRemoveRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndRemoveRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndRemoveRows_IsBase(true);
        vkcheckableproxymodel->endRemoveRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndRemoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_BeginMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseBeginMoveRows(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginMoveRows_IsBase(true);
        return vkcheckableproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginMoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndMoveRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endMoveRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndMoveRows(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndMoveRows_IsBase(true);
        vkcheckableproxymodel->endMoveRows();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndMoveRows(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_BeginInsertColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseBeginInsertColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginInsertColumns_IsBase(true);
        vkcheckableproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginInsertColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndInsertColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endInsertColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndInsertColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndInsertColumns_IsBase(true);
        vkcheckableproxymodel->endInsertColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndInsertColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_BeginRemoveColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseBeginRemoveColumns(KCheckableProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginRemoveColumns_IsBase(true);
        vkcheckableproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginRemoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndRemoveColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endRemoveColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndRemoveColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndRemoveColumns_IsBase(true);
        vkcheckableproxymodel->endRemoveColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndRemoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_BeginMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseBeginMoveColumns(KCheckableProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginMoveColumns_IsBase(true);
        return vkcheckableproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKCheckableProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginMoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndMoveColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endMoveColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndMoveColumns(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndMoveColumns_IsBase(true);
        vkcheckableproxymodel->endMoveColumns();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndMoveColumns(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_BeginResetModel(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->beginResetModel();
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseBeginResetModel(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginResetModel_IsBase(true);
        vkcheckableproxymodel->beginResetModel();
    } else {
        ((VirtualKCheckableProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnBeginResetModel(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_EndResetModel(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->endResetModel();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseEndResetModel(KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndResetModel_IsBase(true);
        vkcheckableproxymodel->endResetModel();
    } else {
        ((VirtualKCheckableProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnEndResetModel(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_ChangePersistentIndex(KCheckableProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKCheckableProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseChangePersistentIndex(KCheckableProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChangePersistentIndex_IsBase(true);
        vkcheckableproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKCheckableProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnChangePersistentIndex(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCheckableProxyModel_ChangePersistentIndexList(KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
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
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKCheckableProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KCheckableProxyModel_QBaseChangePersistentIndexList(KCheckableProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
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
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChangePersistentIndexList_IsBase(true);
        vkcheckableproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKCheckableProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnChangePersistentIndexList(KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = dynamic_cast<VirtualKCheckableProxyModel*>(self);
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCheckableProxyModel_PersistentIndexList(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        QList<QModelIndex> _ret = vkcheckableproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKCheckableProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KCheckableProxyModel_QBasePersistentIndexList(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkcheckableproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKCheckableProxyModel*)self)->persistentIndexList();
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
void KCheckableProxyModel_OnPersistentIndexList(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCheckableProxyModel_Sender(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->sender();
    } else {
        return ((VirtualKCheckableProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCheckableProxyModel_QBaseSender(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sender_IsBase(true);
        return vkcheckableproxymodel->sender();
    } else {
        return ((VirtualKCheckableProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSender(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Sender_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_SenderSignalIndex(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKCheckableProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseSenderSignalIndex(const KCheckableProxyModel* self) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SenderSignalIndex_IsBase(true);
        return vkcheckableproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKCheckableProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnSenderSignalIndex(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCheckableProxyModel_Receivers(const KCheckableProxyModel* self, const char* signal) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->receivers(signal);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCheckableProxyModel_QBaseReceivers(const KCheckableProxyModel* self, const char* signal) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Receivers_IsBase(true);
        return vkcheckableproxymodel->receivers(signal);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnReceivers(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_Receivers_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCheckableProxyModel_IsSignalConnected(const KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        return vkcheckableproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCheckableProxyModel_QBaseIsSignalConnected(const KCheckableProxyModel* self, const QMetaMethod* signal) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_IsSignalConnected_IsBase(true);
        return vkcheckableproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKCheckableProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCheckableProxyModel_OnIsSignalConnected(const KCheckableProxyModel* self, intptr_t slot) {
    auto* vkcheckableproxymodel = const_cast<VirtualKCheckableProxyModel*>(dynamic_cast<const VirtualKCheckableProxyModel*>(self));
    if (vkcheckableproxymodel && vkcheckableproxymodel->isVirtualKCheckableProxyModel) {
        vkcheckableproxymodel->setKCheckableProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKCheckableProxyModel::KCheckableProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KCheckableProxyModel_Delete(KCheckableProxyModel* self) {
    delete self;
}
