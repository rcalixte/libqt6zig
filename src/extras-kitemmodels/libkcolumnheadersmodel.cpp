#include <KColumnHeadersModel>
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
#include <kcolumnheadersmodel.h>
#include "libkcolumnheadersmodel.h"
#include "libkcolumnheadersmodel.hxx"

KColumnHeadersModel* KColumnHeadersModel_new() {
    return new VirtualKColumnHeadersModel();
}

KColumnHeadersModel* KColumnHeadersModel_new2(QObject* parent) {
    return new VirtualKColumnHeadersModel(parent);
}

QMetaObject* KColumnHeadersModel_MetaObject(const KColumnHeadersModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColumnHeadersModel_Metacast(KColumnHeadersModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColumnHeadersModel_Metacall(KColumnHeadersModel* self, int param1, int param2, void** param3) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColumnHeadersModel_Tr(const char* s) {
    QString _ret = KColumnHeadersModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KColumnHeadersModel_RowCount(const KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<const VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->rowCount(*parent);
    }
}

QVariant* KColumnHeadersModel_Data(const KColumnHeadersModel* self, const QModelIndex* index, int role) {
    auto* vkcolumnheadersmodel = dynamic_cast<const VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColumnHeadersModel*)self)->data(*index, static_cast<int>(role)));
    }
}

libqt_map /* of int to libqt_string */ KColumnHeadersModel_RoleNames(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<const VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKColumnHeadersModel*)self)->roleNames();
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

QAbstractItemModel* KColumnHeadersModel_SourceModel(const KColumnHeadersModel* self) {
    return self->sourceModel();
}

void KColumnHeadersModel_SetSourceModel(KColumnHeadersModel* self, QAbstractItemModel* newSourceModel) {
    self->setSourceModel(newSourceModel);
}

int KColumnHeadersModel_SortColumn(const KColumnHeadersModel* self) {
    return self->sortColumn();
}

void KColumnHeadersModel_SetSortColumn(KColumnHeadersModel* self, int newSortColumn) {
    self->setSortColumn(static_cast<int>(newSortColumn));
}

int KColumnHeadersModel_SortOrder(const KColumnHeadersModel* self) {
    return static_cast<int>(self->sortOrder());
}

void KColumnHeadersModel_SetSortOrder(KColumnHeadersModel* self, int newSortOrder) {
    self->setSortOrder(static_cast<Qt::SortOrder>(newSortOrder));
}

void KColumnHeadersModel_SourceModelChanged(KColumnHeadersModel* self) {
    self->sourceModelChanged();
}

void KColumnHeadersModel_Connect_SourceModelChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self, &KColumnHeadersModel::sourceModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KColumnHeadersModel_SortColumnChanged(KColumnHeadersModel* self) {
    self->sortColumnChanged();
}

void KColumnHeadersModel_Connect_SortColumnChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self, &KColumnHeadersModel::sortColumnChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KColumnHeadersModel_SortOrderChanged(KColumnHeadersModel* self) {
    self->sortOrderChanged();
}

void KColumnHeadersModel_Connect_SortOrderChanged(KColumnHeadersModel* self, intptr_t slot) {
    void (*slotFunc)(KColumnHeadersModel*) = reinterpret_cast<void (*)(KColumnHeadersModel*)>(slot);
    KColumnHeadersModel::connect(self, &KColumnHeadersModel::sortOrderChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KColumnHeadersModel_Tr2(const char* s, const char* c) {
    QString _ret = KColumnHeadersModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColumnHeadersModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KColumnHeadersModel::tr(s, c, static_cast<int>(n));
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
int KColumnHeadersModel_QBaseMetacall(KColumnHeadersModel* self, int param1, int param2, void** param3) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Metacall_IsBase(true);
        return vkcolumnheadersmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KColumnHeadersModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMetacall(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Metacall_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseRowCount(const KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RowCount_IsBase(true);
        return vkcolumnheadersmodel->rowCount(*parent);
    } else {
        return self->KColumnHeadersModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRowCount(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RowCount_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KColumnHeadersModel_QBaseData(const KColumnHeadersModel* self, const QModelIndex* index, int role) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Data_IsBase(true);
        return new QVariant(vkcolumnheadersmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColumnHeadersModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Data_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KColumnHeadersModel_QBaseRoleNames(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkcolumnheadersmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KColumnHeadersModel::roleNames();
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
void KColumnHeadersModel_OnRoleNames(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RoleNames_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Index(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QModelIndex(vkcolumnheadersmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_QBaseIndex(const KColumnHeadersModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Index_IsBase(true);
        return new QModelIndex(vkcolumnheadersmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnIndex(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Index_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Sibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QModelIndex(vkcolumnheadersmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_QBaseSibling(const KColumnHeadersModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sibling_IsBase(true);
        return new QModelIndex(vkcolumnheadersmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSibling(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sibling_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_DropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColumnHeadersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseDropMimeData(KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DropMimeData_IsBase(true);
        return vkcolumnheadersmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColumnHeadersModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnDropMimeData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DropMimeData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnHeadersModel_Flags(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return static_cast<int>(vkcolumnheadersmodel->flags(*index));
    } else {
        return static_cast<int>(self->KColumnHeadersModel::flags(*index));
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseFlags(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Flags_IsBase(true);
        return static_cast<int>(vkcolumnheadersmodel->flags(*index));
    } else {
        return static_cast<int>(self->KColumnHeadersModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnFlags(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Flags_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_SetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KColumnHeadersModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseSetData(KColumnHeadersModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetData_IsBase(true);
        return vkcolumnheadersmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KColumnHeadersModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KColumnHeadersModel_HeaderData(const KColumnHeadersModel* self, int section, int orientation, int role) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QVariant(vkcolumnheadersmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColumnHeadersModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KColumnHeadersModel_QBaseHeaderData(const KColumnHeadersModel* self, int section, int orientation, int role) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_HeaderData_IsBase(true);
        return new QVariant(vkcolumnheadersmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKColumnHeadersModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnHeaderData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_HeaderData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_SetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KColumnHeadersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseSetHeaderData(KColumnHeadersModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetHeaderData_IsBase(true);
        return vkcolumnheadersmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KColumnHeadersModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetHeaderData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetHeaderData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KColumnHeadersModel_ItemData(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        QMap<int, QVariant> _ret = vkcolumnheadersmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KColumnHeadersModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KColumnHeadersModel_QBaseItemData(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkcolumnheadersmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KColumnHeadersModel::itemData(*index);
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
void KColumnHeadersModel_OnItemData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ItemData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_SetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KColumnHeadersModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseSetItemData(KColumnHeadersModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetItemData_IsBase(true);
        return vkcolumnheadersmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KColumnHeadersModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSetItemData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SetItemData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_ClearItemData(KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->clearItemData(*index);
    } else {
        return self->KColumnHeadersModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseClearItemData(KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ClearItemData_IsBase(true);
        return vkcolumnheadersmodel->clearItemData(*index);
    } else {
        return self->KColumnHeadersModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnClearItemData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ClearItemData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KColumnHeadersModel_MimeTypes(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        QList<QString> _ret = vkcolumnheadersmodel->mimeTypes();
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
        QList<QString> _ret = self->KColumnHeadersModel::mimeTypes();
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
libqt_list /* of libqt_string */ KColumnHeadersModel_QBaseMimeTypes(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkcolumnheadersmodel->mimeTypes();
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
        QList<QString> _ret = self->KColumnHeadersModel::mimeTypes();
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
void KColumnHeadersModel_OnMimeTypes(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MimeTypes_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KColumnHeadersModel_MimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->mimeData(indexes_QList);
    } else {
        return self->KColumnHeadersModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KColumnHeadersModel_QBaseMimeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MimeData_IsBase(true);
        return vkcolumnheadersmodel->mimeData(indexes_QList);
    } else {
        return self->KColumnHeadersModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMimeData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MimeData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_CanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColumnHeadersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseCanDropMimeData(const KColumnHeadersModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CanDropMimeData_IsBase(true);
        return vkcolumnheadersmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KColumnHeadersModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCanDropMimeData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnHeadersModel_SupportedDropActions(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return static_cast<int>(vkcolumnheadersmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KColumnHeadersModel::supportedDropActions());
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseSupportedDropActions(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkcolumnheadersmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KColumnHeadersModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSupportedDropActions(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnHeadersModel_SupportedDragActions(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return static_cast<int>(vkcolumnheadersmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KColumnHeadersModel::supportedDragActions());
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseSupportedDragActions(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkcolumnheadersmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KColumnHeadersModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSupportedDragActions(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_InsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseInsertRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_InsertRows_IsBase(true);
        return vkcolumnheadersmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnInsertRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_InsertRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_InsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseInsertColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_InsertColumns_IsBase(true);
        return vkcolumnheadersmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnInsertColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_InsertColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_RemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseRemoveRows(KColumnHeadersModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RemoveRows_IsBase(true);
        return vkcolumnheadersmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRemoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RemoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_RemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseRemoveColumns(KColumnHeadersModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RemoveColumns_IsBase(true);
        return vkcolumnheadersmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KColumnHeadersModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRemoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_RemoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_MoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColumnHeadersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MoveRows_IsBase(true);
        return vkcolumnheadersmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColumnHeadersModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_MoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColumnHeadersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MoveColumns_IsBase(true);
        return vkcolumnheadersmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KColumnHeadersModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_FetchMore(KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->fetchMore(*parent);
    } else {
        self->KColumnHeadersModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseFetchMore(KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_FetchMore_IsBase(true);
        vkcolumnheadersmodel->fetchMore(*parent);
    } else {
        self->KColumnHeadersModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnFetchMore(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_FetchMore_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_CanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->canFetchMore(*parent);
    } else {
        return self->KColumnHeadersModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseCanFetchMore(const KColumnHeadersModel* self, const QModelIndex* parent) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CanFetchMore_IsBase(true);
        return vkcolumnheadersmodel->canFetchMore(*parent);
    } else {
        return self->KColumnHeadersModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCanFetchMore(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CanFetchMore_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_Sort(KColumnHeadersModel* self, int column, int order) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KColumnHeadersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseSort(KColumnHeadersModel* self, int column, int order) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sort_IsBase(true);
        vkcolumnheadersmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KColumnHeadersModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSort(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sort_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_Buddy(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QModelIndex(vkcolumnheadersmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_QBaseBuddy(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Buddy_IsBase(true);
        return new QModelIndex(vkcolumnheadersmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKColumnHeadersModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBuddy(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Buddy_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColumnHeadersModel_Match(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        QList<QModelIndex> _ret = vkcolumnheadersmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KColumnHeadersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KColumnHeadersModel_QBaseMatch(const KColumnHeadersModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkcolumnheadersmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KColumnHeadersModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KColumnHeadersModel_OnMatch(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Match_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KColumnHeadersModel_Span(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QSize(vkcolumnheadersmodel->span(*index));
    } else {
        return new QSize(((VirtualKColumnHeadersModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KColumnHeadersModel_QBaseSpan(const KColumnHeadersModel* self, const QModelIndex* index) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Span_IsBase(true);
        return new QSize(vkcolumnheadersmodel->span(*index));
    } else {
        return new QSize(((VirtualKColumnHeadersModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSpan(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Span_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_MultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KColumnHeadersModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseMultiData(const KColumnHeadersModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MultiData_IsBase(true);
        vkcolumnheadersmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KColumnHeadersModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnMultiData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_MultiData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_Submit(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->submit();
    } else {
        return self->KColumnHeadersModel::submit();
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseSubmit(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Submit_IsBase(true);
        return vkcolumnheadersmodel->submit();
    } else {
        return self->KColumnHeadersModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSubmit(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Submit_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_Revert(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->revert();
    } else {
        self->KColumnHeadersModel::revert();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseRevert(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Revert_IsBase(true);
        vkcolumnheadersmodel->revert();
    } else {
        self->KColumnHeadersModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnRevert(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Revert_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_ResetInternalData(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->resetInternalData();
    } else {
        ((VirtualKColumnHeadersModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseResetInternalData(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ResetInternalData_IsBase(true);
        vkcolumnheadersmodel->resetInternalData();
    } else {
        ((VirtualKColumnHeadersModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnResetInternalData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ResetInternalData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_Event(KColumnHeadersModel* self, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->event(event);
    } else {
        return self->KColumnHeadersModel::event(event);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseEvent(KColumnHeadersModel* self, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Event_IsBase(true);
        return vkcolumnheadersmodel->event(event);
    } else {
        return self->KColumnHeadersModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEvent(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Event_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_EventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->eventFilter(watched, event);
    } else {
        return self->KColumnHeadersModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseEventFilter(KColumnHeadersModel* self, QObject* watched, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EventFilter_IsBase(true);
        return vkcolumnheadersmodel->eventFilter(watched, event);
    } else {
        return self->KColumnHeadersModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEventFilter(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EventFilter_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_TimerEvent(KColumnHeadersModel* self, QTimerEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->timerEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseTimerEvent(KColumnHeadersModel* self, QTimerEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_TimerEvent_IsBase(true);
        vkcolumnheadersmodel->timerEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnTimerEvent(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_TimerEvent_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_ChildEvent(KColumnHeadersModel* self, QChildEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->childEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseChildEvent(KColumnHeadersModel* self, QChildEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChildEvent_IsBase(true);
        vkcolumnheadersmodel->childEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnChildEvent(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChildEvent_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_CustomEvent(KColumnHeadersModel* self, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->customEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseCustomEvent(KColumnHeadersModel* self, QEvent* event) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CustomEvent_IsBase(true);
        vkcolumnheadersmodel->customEvent(event);
    } else {
        ((VirtualKColumnHeadersModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCustomEvent(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CustomEvent_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_ConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->connectNotify(*signal);
    } else {
        ((VirtualKColumnHeadersModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ConnectNotify_IsBase(true);
        vkcolumnheadersmodel->connectNotify(*signal);
    } else {
        ((VirtualKColumnHeadersModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnConnectNotify(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ConnectNotify_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_DisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKColumnHeadersModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseDisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DisconnectNotify_IsBase(true);
        vkcolumnheadersmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKColumnHeadersModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnDisconnectNotify(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KColumnHeadersModel_CreateIndex(const KColumnHeadersModel* self, int row, int column) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return new QModelIndex(vkcolumnheadersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KColumnHeadersModel_QBaseCreateIndex(const KColumnHeadersModel* self, int row, int column) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkcolumnheadersmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnCreateIndex(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_CreateIndex_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKColumnHeadersModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEncodeData(const KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EncodeData_IsBase(true);
        vkcolumnheadersmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKColumnHeadersModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEncodeData(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EncodeData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_DecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseDecodeData(KColumnHeadersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DecodeData_IsBase(true);
        return vkcolumnheadersmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnDecodeData(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_DecodeData_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_BeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseBeginInsertRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginInsertRows_IsBase(true);
        vkcolumnheadersmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginInsertRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndInsertRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endInsertRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndInsertRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndInsertRows_IsBase(true);
        vkcolumnheadersmodel->endInsertRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndInsertRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndInsertRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_BeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseBeginRemoveRows(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginRemoveRows_IsBase(true);
        vkcolumnheadersmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginRemoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndRemoveRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endRemoveRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndRemoveRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndRemoveRows_IsBase(true);
        vkcolumnheadersmodel->endRemoveRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndRemoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_BeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKColumnHeadersModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseBeginMoveRows(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginMoveRows_IsBase(true);
        return vkcolumnheadersmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKColumnHeadersModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginMoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndMoveRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endMoveRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndMoveRows(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndMoveRows_IsBase(true);
        vkcolumnheadersmodel->endMoveRows();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndMoveRows(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndMoveRows_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_BeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseBeginInsertColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginInsertColumns_IsBase(true);
        vkcolumnheadersmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginInsertColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndInsertColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endInsertColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndInsertColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndInsertColumns_IsBase(true);
        vkcolumnheadersmodel->endInsertColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndInsertColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_BeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseBeginRemoveColumns(KColumnHeadersModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginRemoveColumns_IsBase(true);
        vkcolumnheadersmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginRemoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndRemoveColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endRemoveColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndRemoveColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndRemoveColumns_IsBase(true);
        vkcolumnheadersmodel->endRemoveColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndRemoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_BeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKColumnHeadersModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseBeginMoveColumns(KColumnHeadersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginMoveColumns_IsBase(true);
        return vkcolumnheadersmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKColumnHeadersModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginMoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndMoveColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endMoveColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndMoveColumns(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndMoveColumns_IsBase(true);
        vkcolumnheadersmodel->endMoveColumns();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndMoveColumns(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_BeginResetModel(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->beginResetModel();
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseBeginResetModel(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginResetModel_IsBase(true);
        vkcolumnheadersmodel->beginResetModel();
    } else {
        ((VirtualKColumnHeadersModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnBeginResetModel(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_BeginResetModel_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_EndResetModel(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->endResetModel();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseEndResetModel(KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndResetModel_IsBase(true);
        vkcolumnheadersmodel->endResetModel();
    } else {
        ((VirtualKColumnHeadersModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnEndResetModel(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_EndResetModel_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_ChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKColumnHeadersModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseChangePersistentIndex(KColumnHeadersModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChangePersistentIndex_IsBase(true);
        vkcolumnheadersmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKColumnHeadersModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnChangePersistentIndex(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnHeadersModel_ChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
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
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKColumnHeadersModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KColumnHeadersModel_QBaseChangePersistentIndexList(KColumnHeadersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
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
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChangePersistentIndexList_IsBase(true);
        vkcolumnheadersmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKColumnHeadersModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnChangePersistentIndexList(KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = dynamic_cast<VirtualKColumnHeadersModel*>(self);
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KColumnHeadersModel_PersistentIndexList(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        QList<QModelIndex> _ret = vkcolumnheadersmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKColumnHeadersModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KColumnHeadersModel_QBasePersistentIndexList(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkcolumnheadersmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKColumnHeadersModel*)self)->persistentIndexList();
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
void KColumnHeadersModel_OnPersistentIndexList(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColumnHeadersModel_Sender(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->sender();
    } else {
        return ((VirtualKColumnHeadersModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColumnHeadersModel_QBaseSender(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sender_IsBase(true);
        return vkcolumnheadersmodel->sender();
    } else {
        return ((VirtualKColumnHeadersModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSender(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Sender_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnHeadersModel_SenderSignalIndex(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->senderSignalIndex();
    } else {
        return ((VirtualKColumnHeadersModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseSenderSignalIndex(const KColumnHeadersModel* self) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SenderSignalIndex_IsBase(true);
        return vkcolumnheadersmodel->senderSignalIndex();
    } else {
        return ((VirtualKColumnHeadersModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnSenderSignalIndex(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnHeadersModel_Receivers(const KColumnHeadersModel* self, const char* signal) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->receivers(signal);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColumnHeadersModel_QBaseReceivers(const KColumnHeadersModel* self, const char* signal) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Receivers_IsBase(true);
        return vkcolumnheadersmodel->receivers(signal);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnReceivers(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_Receivers_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnHeadersModel_IsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        return vkcolumnheadersmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColumnHeadersModel_QBaseIsSignalConnected(const KColumnHeadersModel* self, const QMetaMethod* signal) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_IsSignalConnected_IsBase(true);
        return vkcolumnheadersmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKColumnHeadersModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnHeadersModel_OnIsSignalConnected(const KColumnHeadersModel* self, intptr_t slot) {
    auto* vkcolumnheadersmodel = const_cast<VirtualKColumnHeadersModel*>(dynamic_cast<const VirtualKColumnHeadersModel*>(self));
    if (vkcolumnheadersmodel && vkcolumnheadersmodel->isVirtualKColumnHeadersModel) {
        vkcolumnheadersmodel->setKColumnHeadersModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKColumnHeadersModel::KColumnHeadersModel_IsSignalConnected_Callback>(slot));
    }
}

void KColumnHeadersModel_Delete(KColumnHeadersModel* self) {
    delete self;
}
