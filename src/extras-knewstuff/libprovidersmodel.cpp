#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProvidersModel
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
#include <providersmodel.h>
#include "libprovidersmodel.h"
#include "libprovidersmodel.hxx"

KNSCore__ProvidersModel* KNSCore__ProvidersModel_new() {
    return new VirtualKNSCoreProvidersModel();
}

KNSCore__ProvidersModel* KNSCore__ProvidersModel_new2(QObject* parent) {
    return new VirtualKNSCoreProvidersModel(parent);
}

QMetaObject* KNSCore__ProvidersModel_MetaObject(const KNSCore__ProvidersModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__ProvidersModel_Metacast(KNSCore__ProvidersModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__ProvidersModel_Metacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3) {
    auto* vknscore__providersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscore__providersmodel && vknscore__providersmodel->isVirtualKNSCoreProvidersModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__ProvidersModel_Tr(const char* s) {
    QString _ret = KNSCore::ProvidersModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_RoleNames(const KNSCore__ProvidersModel* self) {
    auto* vknscore__providersmodel = dynamic_cast<const VirtualKNSCoreProvidersModel*>(self);
    if (vknscore__providersmodel && vknscore__providersmodel->isVirtualKNSCoreProvidersModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKNSCoreProvidersModel*)self)->roleNames();
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

QVariant* KNSCore__ProvidersModel_Data(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role) {
    auto* vknscore__providersmodel = dynamic_cast<const VirtualKNSCoreProvidersModel*>(self);
    if (vknscore__providersmodel && vknscore__providersmodel->isVirtualKNSCoreProvidersModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreProvidersModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int KNSCore__ProvidersModel_RowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscore__providersmodel = dynamic_cast<const VirtualKNSCoreProvidersModel*>(self);
    if (vknscore__providersmodel && vknscore__providersmodel->isVirtualKNSCoreProvidersModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->rowCount(*parent);
    }
}

QObject* KNSCore__ProvidersModel_Engine(const KNSCore__ProvidersModel* self) {
    return self->engine();
}

void KNSCore__ProvidersModel_SetEngine(KNSCore__ProvidersModel* self, QObject* engine) {
    self->setEngine(engine);
}

void KNSCore__ProvidersModel_EngineChanged(KNSCore__ProvidersModel* self) {
    self->engineChanged();
}

libqt_string KNSCore__ProvidersModel_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::ProvidersModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ProvidersModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::ProvidersModel::tr(s, c, static_cast<int>(n));
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
int KNSCore__ProvidersModel_QBaseMetacall(KNSCore__ProvidersModel* self, int param1, int param2, void** param3) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Metacall_IsBase(true);
        return vknscoreprovidersmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::ProvidersModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMetacall(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Metacall_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KNSCore__ProvidersModel_QBaseRoleNames(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vknscoreprovidersmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KNSCore::ProvidersModel::roleNames();
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
void KNSCore__ProvidersModel_OnRoleNames(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RoleNames_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KNSCore__ProvidersModel_QBaseData(const KNSCore__ProvidersModel* self, const QModelIndex* index, int role) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Data_IsBase(true);
        return new QVariant(vknscoreprovidersmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreProvidersModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Data_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseRowCount(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RowCount_IsBase(true);
        return vknscoreprovidersmodel->rowCount(*parent);
    } else {
        return self->KNSCore::ProvidersModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRowCount(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RowCount_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Index(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QModelIndex(vknscoreprovidersmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_QBaseIndex(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Index_IsBase(true);
        return new QModelIndex(vknscoreprovidersmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnIndex(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Index_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Sibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QModelIndex(vknscoreprovidersmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_QBaseSibling(const KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sibling_IsBase(true);
        return new QModelIndex(vknscoreprovidersmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSibling(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sibling_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_DropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ProvidersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseDropMimeData(KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DropMimeData_IsBase(true);
        return vknscoreprovidersmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ProvidersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnDropMimeData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DropMimeData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ProvidersModel_Flags(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return static_cast<int>(vknscoreprovidersmodel->flags(*index));
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::flags(*index));
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseFlags(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Flags_IsBase(true);
        return static_cast<int>(vknscoreprovidersmodel->flags(*index));
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnFlags(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Flags_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ProvidersModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseSetData(KNSCore__ProvidersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetData_IsBase(true);
        return vknscoreprovidersmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ProvidersModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNSCore__ProvidersModel_HeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QVariant(vknscoreprovidersmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreProvidersModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KNSCore__ProvidersModel_QBaseHeaderData(const KNSCore__ProvidersModel* self, int section, int orientation, int role) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_HeaderData_IsBase(true);
        return new QVariant(vknscoreprovidersmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreProvidersModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnHeaderData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_HeaderData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ProvidersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseSetHeaderData(KNSCore__ProvidersModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetHeaderData_IsBase(true);
        return vknscoreprovidersmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ProvidersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetHeaderData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetHeaderData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_ItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        QMap<int, QVariant> _ret = vknscoreprovidersmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNSCore::ProvidersModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KNSCore__ProvidersModel_QBaseItemData(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vknscoreprovidersmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNSCore::ProvidersModel::itemData(*index);
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
void KNSCore__ProvidersModel_OnItemData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ItemData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_SetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNSCore::ProvidersModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseSetItemData(KNSCore__ProvidersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetItemData_IsBase(true);
        return vknscoreprovidersmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNSCore::ProvidersModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSetItemData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SetItemData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_ClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->clearItemData(*index);
    } else {
        return self->KNSCore::ProvidersModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseClearItemData(KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ClearItemData_IsBase(true);
        return vknscoreprovidersmodel->clearItemData(*index);
    } else {
        return self->KNSCore::ProvidersModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnClearItemData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ClearItemData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_MimeTypes(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        QList<QString> _ret = vknscoreprovidersmodel->mimeTypes();
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
        QList<QString> _ret = self->KNSCore::ProvidersModel::mimeTypes();
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
libqt_list /* of libqt_string */ KNSCore__ProvidersModel_QBaseMimeTypes(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vknscoreprovidersmodel->mimeTypes();
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
        QList<QString> _ret = self->KNSCore::ProvidersModel::mimeTypes();
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
void KNSCore__ProvidersModel_OnMimeTypes(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MimeTypes_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KNSCore__ProvidersModel_MimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->mimeData(indexes_QList);
    } else {
        return self->KNSCore::ProvidersModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KNSCore__ProvidersModel_QBaseMimeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MimeData_IsBase(true);
        return vknscoreprovidersmodel->mimeData(indexes_QList);
    } else {
        return self->KNSCore::ProvidersModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMimeData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MimeData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_CanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ProvidersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseCanDropMimeData(const KNSCore__ProvidersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CanDropMimeData_IsBase(true);
        return vknscoreprovidersmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ProvidersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCanDropMimeData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ProvidersModel_SupportedDropActions(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return static_cast<int>(vknscoreprovidersmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::supportedDropActions());
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseSupportedDropActions(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vknscoreprovidersmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSupportedDropActions(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ProvidersModel_SupportedDragActions(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return static_cast<int>(vknscoreprovidersmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::supportedDragActions());
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseSupportedDragActions(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vknscoreprovidersmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNSCore::ProvidersModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSupportedDragActions(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_InsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseInsertRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_InsertRows_IsBase(true);
        return vknscoreprovidersmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnInsertRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_InsertRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_InsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseInsertColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_InsertColumns_IsBase(true);
        return vknscoreprovidersmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_InsertColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_RemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseRemoveRows(KNSCore__ProvidersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RemoveRows_IsBase(true);
        return vknscoreprovidersmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RemoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_RemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseRemoveColumns(KNSCore__ProvidersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RemoveColumns_IsBase(true);
        return vknscoreprovidersmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ProvidersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_RemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_MoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ProvidersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MoveRows_IsBase(true);
        return vknscoreprovidersmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ProvidersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_MoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ProvidersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MoveColumns_IsBase(true);
        return vknscoreprovidersmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ProvidersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_FetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->fetchMore(*parent);
    } else {
        self->KNSCore::ProvidersModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseFetchMore(KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_FetchMore_IsBase(true);
        vknscoreprovidersmodel->fetchMore(*parent);
    } else {
        self->KNSCore::ProvidersModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnFetchMore(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_FetchMore_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_CanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->canFetchMore(*parent);
    } else {
        return self->KNSCore::ProvidersModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseCanFetchMore(const KNSCore__ProvidersModel* self, const QModelIndex* parent) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CanFetchMore_IsBase(true);
        return vknscoreprovidersmodel->canFetchMore(*parent);
    } else {
        return self->KNSCore::ProvidersModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCanFetchMore(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CanFetchMore_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_Sort(KNSCore__ProvidersModel* self, int column, int order) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNSCore::ProvidersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseSort(KNSCore__ProvidersModel* self, int column, int order) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sort_IsBase(true);
        vknscoreprovidersmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNSCore::ProvidersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSort(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sort_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_Buddy(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QModelIndex(vknscoreprovidersmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_QBaseBuddy(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Buddy_IsBase(true);
        return new QModelIndex(vknscoreprovidersmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNSCoreProvidersModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBuddy(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Buddy_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_Match(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        QList<QModelIndex> _ret = vknscoreprovidersmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNSCore::ProvidersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_QBaseMatch(const KNSCore__ProvidersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vknscoreprovidersmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNSCore::ProvidersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KNSCore__ProvidersModel_OnMatch(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Match_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSCore__ProvidersModel_Span(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QSize(vknscoreprovidersmodel->span(*index));
    } else {
        return new QSize(((VirtualKNSCoreProvidersModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KNSCore__ProvidersModel_QBaseSpan(const KNSCore__ProvidersModel* self, const QModelIndex* index) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Span_IsBase(true);
        return new QSize(vknscoreprovidersmodel->span(*index));
    } else {
        return new QSize(((VirtualKNSCoreProvidersModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSpan(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Span_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_MultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNSCore::ProvidersModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseMultiData(const KNSCore__ProvidersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MultiData_IsBase(true);
        vknscoreprovidersmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNSCore::ProvidersModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnMultiData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_MultiData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_Submit(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->submit();
    } else {
        return self->KNSCore::ProvidersModel::submit();
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseSubmit(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Submit_IsBase(true);
        return vknscoreprovidersmodel->submit();
    } else {
        return self->KNSCore::ProvidersModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSubmit(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Submit_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_Revert(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->revert();
    } else {
        self->KNSCore::ProvidersModel::revert();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseRevert(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Revert_IsBase(true);
        vknscoreprovidersmodel->revert();
    } else {
        self->KNSCore::ProvidersModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnRevert(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Revert_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ResetInternalData(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->resetInternalData();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseResetInternalData(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ResetInternalData_IsBase(true);
        vknscoreprovidersmodel->resetInternalData();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnResetInternalData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ResetInternalData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_Event(KNSCore__ProvidersModel* self, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->event(event);
    } else {
        return self->KNSCore::ProvidersModel::event(event);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Event_IsBase(true);
        return vknscoreprovidersmodel->event(event);
    } else {
        return self->KNSCore::ProvidersModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Event_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_EventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->eventFilter(watched, event);
    } else {
        return self->KNSCore::ProvidersModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseEventFilter(KNSCore__ProvidersModel* self, QObject* watched, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EventFilter_IsBase(true);
        return vknscoreprovidersmodel->eventFilter(watched, event);
    } else {
        return self->KNSCore::ProvidersModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEventFilter(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_TimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->timerEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseTimerEvent(KNSCore__ProvidersModel* self, QTimerEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_TimerEvent_IsBase(true);
        vknscoreprovidersmodel->timerEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnTimerEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->childEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseChildEvent(KNSCore__ProvidersModel* self, QChildEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChildEvent_IsBase(true);
        vknscoreprovidersmodel->childEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnChildEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_CustomEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->customEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseCustomEvent(KNSCore__ProvidersModel* self, QEvent* event) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CustomEvent_IsBase(true);
        vknscoreprovidersmodel->customEvent(event);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCustomEvent(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseConnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ConnectNotify_IsBase(true);
        vknscoreprovidersmodel->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnConnectNotify(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_DisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseDisconnectNotify(KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DisconnectNotify_IsBase(true);
        vknscoreprovidersmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnDisconnectNotify(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ProvidersModel_CreateIndex(const KNSCore__ProvidersModel* self, int row, int column) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return new QModelIndex(vknscoreprovidersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KNSCore__ProvidersModel_QBaseCreateIndex(const KNSCore__ProvidersModel* self, int row, int column) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CreateIndex_IsBase(true);
        return new QModelIndex(vknscoreprovidersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnCreateIndex(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_CreateIndex_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEncodeData(const KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EncodeData_IsBase(true);
        vknscoreprovidersmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEncodeData(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EncodeData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_DecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseDecodeData(KNSCore__ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DecodeData_IsBase(true);
        return vknscoreprovidersmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnDecodeData(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_DecodeData_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_BeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseBeginInsertRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginInsertRows_IsBase(true);
        vknscoreprovidersmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginInsertRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndInsertRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endInsertRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndInsertRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndInsertRows_IsBase(true);
        vknscoreprovidersmodel->endInsertRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndInsertRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndInsertRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_BeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseBeginRemoveRows(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginRemoveRows_IsBase(true);
        vknscoreprovidersmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndRemoveRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endRemoveRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndRemoveRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndRemoveRows_IsBase(true);
        vknscoreprovidersmodel->endRemoveRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndRemoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_BeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseBeginMoveRows(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginMoveRows_IsBase(true);
        return vknscoreprovidersmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginMoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndMoveRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endMoveRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndMoveRows(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndMoveRows_IsBase(true);
        vknscoreprovidersmodel->endMoveRows();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndMoveRows(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndMoveRows_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_BeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseBeginInsertColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginInsertColumns_IsBase(true);
        vknscoreprovidersmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndInsertColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endInsertColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndInsertColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndInsertColumns_IsBase(true);
        vknscoreprovidersmodel->endInsertColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndInsertColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_BeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseBeginRemoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginRemoveColumns_IsBase(true);
        vknscoreprovidersmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndRemoveColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endRemoveColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndRemoveColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndRemoveColumns_IsBase(true);
        vknscoreprovidersmodel->endRemoveColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndRemoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_BeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseBeginMoveColumns(KNSCore__ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginMoveColumns_IsBase(true);
        return vknscoreprovidersmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndMoveColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endMoveColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndMoveColumns(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndMoveColumns_IsBase(true);
        vknscoreprovidersmodel->endMoveColumns();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndMoveColumns(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_BeginResetModel(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->beginResetModel();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseBeginResetModel(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginResetModel_IsBase(true);
        vknscoreprovidersmodel->beginResetModel();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnBeginResetModel(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_BeginResetModel_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_EndResetModel(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->endResetModel();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseEndResetModel(KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndResetModel_IsBase(true);
        vknscoreprovidersmodel->endResetModel();
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnEndResetModel(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_EndResetModel_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseChangePersistentIndex(KNSCore__ProvidersModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChangePersistentIndex_IsBase(true);
        vknscoreprovidersmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnChangePersistentIndex(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ProvidersModel_ChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
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
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KNSCore__ProvidersModel_QBaseChangePersistentIndexList(KNSCore__ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
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
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChangePersistentIndexList_IsBase(true);
        vknscoreprovidersmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNSCoreProvidersModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnChangePersistentIndexList(KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = dynamic_cast<VirtualKNSCoreProvidersModel*>(self);
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_PersistentIndexList(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        QList<QModelIndex> _ret = vknscoreprovidersmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNSCoreProvidersModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_QBasePersistentIndexList(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vknscoreprovidersmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNSCoreProvidersModel*)self)->persistentIndexList();
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
void KNSCore__ProvidersModel_OnPersistentIndexList(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__ProvidersModel_Sender(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->sender();
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__ProvidersModel_QBaseSender(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sender_IsBase(true);
        return vknscoreprovidersmodel->sender();
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSender(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Sender_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ProvidersModel_SenderSignalIndex(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseSenderSignalIndex(const KNSCore__ProvidersModel* self) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SenderSignalIndex_IsBase(true);
        return vknscoreprovidersmodel->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnSenderSignalIndex(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ProvidersModel_Receivers(const KNSCore__ProvidersModel* self, const char* signal) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->receivers(signal);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__ProvidersModel_QBaseReceivers(const KNSCore__ProvidersModel* self, const char* signal) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Receivers_IsBase(true);
        return vknscoreprovidersmodel->receivers(signal);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnReceivers(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_Receivers_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ProvidersModel_IsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        return vknscoreprovidersmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__ProvidersModel_QBaseIsSignalConnected(const KNSCore__ProvidersModel* self, const QMetaMethod* signal) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_IsSignalConnected_IsBase(true);
        return vknscoreprovidersmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreProvidersModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ProvidersModel_OnIsSignalConnected(const KNSCore__ProvidersModel* self, intptr_t slot) {
    auto* vknscoreprovidersmodel = const_cast<VirtualKNSCoreProvidersModel*>(dynamic_cast<const VirtualKNSCoreProvidersModel*>(self));
    if (vknscoreprovidersmodel && vknscoreprovidersmodel->isVirtualKNSCoreProvidersModel) {
        vknscoreprovidersmodel->setKNSCore__ProvidersModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreProvidersModel::KNSCore__ProvidersModel_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__ProvidersModel_Delete(KNSCore__ProvidersModel* self) {
    delete self;
}
