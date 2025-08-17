#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QConcatenateTablesProxyModel>
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
#include <qconcatenatetablesproxymodel.h>
#include "libqconcatenatetablesproxymodel.h"
#include "libqconcatenatetablesproxymodel.hxx"

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
    return new VirtualQConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
    return new VirtualQConcatenateTablesProxyModel(parent);
}

QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QConcatenateTablesProxyModel_Metacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QConcatenateTablesProxyModel_OnMetacall(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Metacall_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QConcatenateTablesProxyModel_QBaseMetacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Metacall_IsBase(true);
        return vqconcatenatetablesproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QConcatenateTablesProxyModel_Tr(const char* s) {
    QString _ret = QConcatenateTablesProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAbstractItemModel* */ QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self) {
    QList<QAbstractItemModel*> _ret = self->sourceModels();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractItemModel** _arr = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QConcatenateTablesProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
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
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QVariant(vqconcatenatetablesproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQConcatenateTablesProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_IsBase(true);
        return new QVariant(vqconcatenatetablesproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQConcatenateTablesProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QConcatenateTablesProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_IsBase(true);
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QConcatenateTablesProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
        QMap<int, QVariant> _ret = self->QConcatenateTablesProxyModel::itemData(*proxyIndex);
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
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_QBaseItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
        QMap<int, QVariant> _ret = self->QConcatenateTablesProxyModel::itemData(*proxyIndex);
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
void QConcatenateTablesProxyModel_OnItemData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QConcatenateTablesProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_IsBase(true);
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QConcatenateTablesProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::flags(*index));
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseFlags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFlags(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QModelIndex(vqconcatenatetablesproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseIndex(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QModelIndex(vqconcatenatetablesproxymodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->parent(*index));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseParent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnParent(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseRowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_IsBase(true);
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRowCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QVariant(vqconcatenatetablesproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQConcatenateTablesProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqconcatenatetablesproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQConcatenateTablesProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHeaderData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_IsBase(true);
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnColumnCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        QList<QString> _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
        QList<QString> _ret = self->QConcatenateTablesProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_QBaseMimeTypes(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
        QList<QString> _ret = self->QConcatenateTablesProxyModel::mimeTypes();
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
void QConcatenateTablesProxyModel_OnMimeTypes(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    } else {
        return self->QConcatenateTablesProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QConcatenateTablesProxyModel_QBaseMimeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    } else {
        return self->QConcatenateTablesProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseCanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanDropMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseDropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QSize(vqconcatenatetablesproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQConcatenateTablesProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QConcatenateTablesProxyModel_QBaseSpan(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_IsBase(true);
        return new QSize(vqconcatenatetablesproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQConcatenateTablesProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSpan(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Sibling(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QModelIndex(vqconcatenatetablesproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseSibling(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSibling(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sibling_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_HasChildren(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseHasChildren(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HasChildren_IsBase(true);
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHasChildren(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QConcatenateTablesProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetHeaderData_IsBase(true);
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QConcatenateTablesProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetHeaderData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_ClearItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    } else {
        return self->QConcatenateTablesProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseClearItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ClearItemData_IsBase(true);
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    } else {
        return self->QConcatenateTablesProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnClearItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDropActions(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSupportedDropActions(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDropActions(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDragActions(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSupportedDragActions(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDragActions(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseInsertRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertRows_IsBase(true);
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseInsertColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseRemoveRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseRemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QConcatenateTablesProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QConcatenateTablesProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QConcatenateTablesProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QConcatenateTablesProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QConcatenateTablesProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_FetchMore(QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    } else {
        self->QConcatenateTablesProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseFetchMore(QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_FetchMore_IsBase(true);
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    } else {
        self->QConcatenateTablesProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFetchMore(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_CanFetchMore(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseCanFetchMore(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanFetchMore_IsBase(true);
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    } else {
        return self->QConcatenateTablesProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanFetchMore(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Sort(QConcatenateTablesProxyModel* self, int column, int order) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QConcatenateTablesProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseSort(QConcatenateTablesProxyModel* self, int column, int order) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sort_IsBase(true);
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QConcatenateTablesProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSort(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sort_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Buddy(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QModelIndex(vqconcatenatetablesproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseBuddy(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQConcatenateTablesProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBuddy(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Buddy_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_Match(const QConcatenateTablesProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        QList<QModelIndex> _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QConcatenateTablesProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBaseMatch(const QConcatenateTablesProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QConcatenateTablesProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QConcatenateTablesProxyModel_OnMatch(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Match_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_RoleNames(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QConcatenateTablesProxyModel::roleNames();
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
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_QBaseRoleNames(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QConcatenateTablesProxyModel::roleNames();
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
void QConcatenateTablesProxyModel_OnRoleNames(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_MultiData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QConcatenateTablesProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseMultiData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MultiData_IsBase(true);
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QConcatenateTablesProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMultiData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MultiData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Submit(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->submit();
    } else {
        return self->QConcatenateTablesProxyModel::submit();
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSubmit(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Submit_IsBase(true);
        return vqconcatenatetablesproxymodel->submit();
    } else {
        return self->QConcatenateTablesProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSubmit(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Submit_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Revert(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->revert();
    } else {
        self->QConcatenateTablesProxyModel::revert();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseRevert(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Revert_IsBase(true);
        vqconcatenatetablesproxymodel->revert();
    } else {
        self->QConcatenateTablesProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRevert(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Revert_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ResetInternalData(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->resetInternalData();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseResetInternalData(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ResetInternalData_IsBase(true);
        vqconcatenatetablesproxymodel->resetInternalData();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnResetInternalData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Event(QConcatenateTablesProxyModel* self, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->event(event);
    } else {
        return self->QConcatenateTablesProxyModel::event(event);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Event_IsBase(true);
        return vqconcatenatetablesproxymodel->event(event);
    } else {
        return self->QConcatenateTablesProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Event_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_EventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    } else {
        return self->QConcatenateTablesProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseEventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EventFilter_IsBase(true);
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    } else {
        return self->QConcatenateTablesProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEventFilter(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_TimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->timerEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_TimerEvent_IsBase(true);
        vqconcatenatetablesproxymodel->timerEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnTimerEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->childEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChildEvent_IsBase(true);
        vqconcatenatetablesproxymodel->childEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChildEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_CustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->customEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CustomEvent_IsBase(true);
        vqconcatenatetablesproxymodel->customEvent(event);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCustomEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ConnectNotify_IsBase(true);
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnConnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_DisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseDisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DisconnectNotify_IsBase(true);
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDisconnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_CreateIndex(const QConcatenateTablesProxyModel* self, int row, int column) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return new QModelIndex(vqconcatenatetablesproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseCreateIndex(const QConcatenateTablesProxyModel* self, int row, int column) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCreateIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EncodeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEncodeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EncodeData_IsBase(true);
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEncodeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_DecodeData(QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseDecodeData(QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DecodeData_IsBase(true);
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDecodeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginInsertRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginInsertRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertRows_IsBase(true);
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndInsertRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endInsertRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndInsertRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertRows_IsBase(true);
        vqconcatenatetablesproxymodel->endInsertRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginRemoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginRemoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndRemoveRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endRemoveRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndRemoveRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->endRemoveRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_BeginMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseBeginMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndMoveRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endMoveRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndMoveRows(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->endMoveRows();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginInsertColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginInsertColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertColumns_IsBase(true);
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndInsertColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endInsertColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndInsertColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endInsertColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginRemoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginRemoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndRemoveColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endRemoveColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndRemoveColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endRemoveColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_BeginMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseBeginMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndMoveColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endMoveColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndMoveColumns(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endMoveColumns();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginResetModel(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->beginResetModel();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginResetModel(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginResetModel_IsBase(true);
        vqconcatenatetablesproxymodel->beginResetModel();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginResetModel(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndResetModel(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->endResetModel();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndResetModel(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndResetModel_IsBase(true);
        vqconcatenatetablesproxymodel->endResetModel();
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndResetModel(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndex(QConcatenateTablesProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChangePersistentIndex(QConcatenateTablesProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndex_IsBase(true);
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChangePersistentIndex(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndexList(QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
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
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChangePersistentIndexList(QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
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
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndexList_IsBase(true);
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQConcatenateTablesProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChangePersistentIndexList(QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_PersistentIndexList(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        QList<QModelIndex> _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQConcatenateTablesProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBasePersistentIndexList(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQConcatenateTablesProxyModel*)self)->persistentIndexList();
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
void QConcatenateTablesProxyModel_OnPersistentIndexList(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QConcatenateTablesProxyModel_Sender(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->sender();
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QConcatenateTablesProxyModel_QBaseSender(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sender_IsBase(true);
        return vqconcatenatetablesproxymodel->sender();
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSender(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sender_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SenderSignalIndex(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSenderSignalIndex(const QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SenderSignalIndex_IsBase(true);
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSenderSignalIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_Receivers(const QConcatenateTablesProxyModel* self, const char* signal) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->receivers(signal);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseReceivers(const QConcatenateTablesProxyModel* self, const char* signal) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Receivers_IsBase(true);
        return vqconcatenatetablesproxymodel->receivers(signal);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnReceivers(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Receivers_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_IsSignalConnected(const QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseIsSignalConnected(const QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_IsSignalConnected_IsBase(true);
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQConcatenateTablesProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIsSignalConnected(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self));
    if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
    delete self;
}
