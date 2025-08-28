#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QItemSelection>
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
#include <QTransposeProxyModel>
#include <QVariant>
#include <qtransposeproxymodel.h>
#include "libqtransposeproxymodel.h"
#include "libqtransposeproxymodel.hxx"

QTransposeProxyModel* QTransposeProxyModel_new() {
    return new VirtualQTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
    return new VirtualQTransposeProxyModel(parent);
}

QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTransposeProxyModel_Metacall(QTransposeProxyModel* self, int param1, int param2, void** param3) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnMetacall(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Metacall_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTransposeProxyModel_QBaseMetacall(QTransposeProxyModel* self, int param1, int param2, void** param3) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Metacall_IsBase(true);
        return vqtransposeproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTransposeProxyModel_Tr(const char* s) {
    QString _ret = QTransposeProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        self->setSourceModel(newSourceModel);
    } else {
        ((VirtualQTransposeProxyModel*)self)->setSourceModel(newSourceModel);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTransposeProxyModel_QBaseSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetSourceModel_IsBase(true);
        vqtransposeproxymodel->setSourceModel(newSourceModel);
    } else {
        ((VirtualQTransposeProxyModel*)self)->setSourceModel(newSourceModel);
    }
}

int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->rowCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnRowCount(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RowCount_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RowCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTransposeProxyModel_QBaseRowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RowCount_IsBase(true);
        return vqtransposeproxymodel->rowCount(*parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->rowCount(*parent);
    }
}

int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->columnCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnColumnCount(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ColumnCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTransposeProxyModel_QBaseColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ColumnCount_IsBase(true);
        return vqtransposeproxymodel->columnCount(*parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->columnCount(*parent);
    }
}

QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTransposeProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnHeaderData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_HeaderData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QTransposeProxyModel_QBaseHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqtransposeproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTransposeProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseSetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetHeaderData_IsBase(true);
        return vqtransposeproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->setItemData(*index, roles_QMap);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseSetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetItemData_IsBase(true);
        return vqtransposeproxymodel->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->setItemData(*index, roles_QMap);
    }
}

QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QSize(self->span(*index));
    } else {
        return new QSize(((VirtualQTransposeProxyModel*)self)->span(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnSpan(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Span_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Span_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTransposeProxyModel_QBaseSpan(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Span_IsBase(true);
        return new QSize(vqtransposeproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQTransposeProxyModel*)self)->span(*index));
    }
}

libqt_map /* of int to QVariant* */ QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
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
        QMap<int, QVariant> _ret = ((VirtualQTransposeProxyModel*)self)->itemData(*index);
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
void QTransposeProxyModel_OnItemData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ItemData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to QVariant* */ QTransposeProxyModel_QBaseItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqtransposeproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = ((VirtualQTransposeProxyModel*)self)->itemData(*index);
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

QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnMapFromSource(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapFromSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseMapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnMapToSource(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapToSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseMapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(self->parent(*index));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->parent(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnParent(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Parent_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Parent_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseParent(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->parent(*index));
    }
}

QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnIndex(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Index_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Index_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseIndex(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Index_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseInsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_InsertRows_IsBase(true);
        return vqtransposeproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseRemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RemoveRows_IsBase(true);
        return vqtransposeproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveRows_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MoveRows_IsBase(true);
        return vqtransposeproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertColumns_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseInsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_InsertColumns_IsBase(true);
        return vqtransposeproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseRemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RemoveColumns_IsBase(true);
        return vqtransposeproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveColumns_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTransposeProxyModel_QBaseMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MoveColumns_IsBase(true);
        return vqtransposeproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQTransposeProxyModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sort_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sort_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTransposeProxyModel_QBaseSort(QTransposeProxyModel* self, int column, int order) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sort_IsBase(true);
        vqtransposeproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQTransposeProxyModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QTransposeProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
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
QItemSelection* QTransposeProxyModel_MapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QItemSelection(vqtransposeproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQTransposeProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QTransposeProxyModel_QBaseMapSelectionToSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqtransposeproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQTransposeProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapSelectionToSource(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QTransposeProxyModel_MapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QItemSelection(vqtransposeproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQTransposeProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QTransposeProxyModel_QBaseMapSelectionFromSource(const QTransposeProxyModel* self, const QItemSelection* selection) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqtransposeproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQTransposeProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapSelectionFromSource(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_Submit(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->submit();
    } else {
        return self->QTransposeProxyModel::submit();
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseSubmit(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Submit_IsBase(true);
        return vqtransposeproxymodel->submit();
    } else {
        return self->QTransposeProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSubmit(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Submit_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_Revert(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->revert();
    } else {
        self->QTransposeProxyModel::revert();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseRevert(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Revert_IsBase(true);
        vqtransposeproxymodel->revert();
    } else {
        self->QTransposeProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRevert(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Revert_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTransposeProxyModel_Data(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QVariant(vqtransposeproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTransposeProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QTransposeProxyModel_QBaseData(const QTransposeProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Data_IsBase(true);
        return new QVariant(vqtransposeproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTransposeProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Data_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
int QTransposeProxyModel_Flags(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return static_cast<int>(vqtransposeproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QTransposeProxyModel::flags(*index));
    }
}

// Base class handler implementation
int QTransposeProxyModel_QBaseFlags(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqtransposeproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QTransposeProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnFlags(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Flags_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_SetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QTransposeProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseSetData(QTransposeProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetData_IsBase(true);
        return vqtransposeproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QTransposeProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SetData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_ClearItemData(QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->clearItemData(*index);
    } else {
        return self->QTransposeProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseClearItemData(QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ClearItemData_IsBase(true);
        return vqtransposeproxymodel->clearItemData(*index);
    } else {
        return self->QTransposeProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnClearItemData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_Buddy(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(vqtransposeproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseBuddy(const QTransposeProxyModel* self, const QModelIndex* index) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBuddy(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Buddy_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_CanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->canFetchMore(*parent);
    } else {
        return self->QTransposeProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseCanFetchMore(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CanFetchMore_IsBase(true);
        return vqtransposeproxymodel->canFetchMore(*parent);
    } else {
        return self->QTransposeProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCanFetchMore(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_FetchMore(QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->fetchMore(*parent);
    } else {
        self->QTransposeProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseFetchMore(QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_FetchMore_IsBase(true);
        vqtransposeproxymodel->fetchMore(*parent);
    } else {
        self->QTransposeProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnFetchMore(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_HasChildren(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->hasChildren(*parent);
    } else {
        return self->QTransposeProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseHasChildren(const QTransposeProxyModel* self, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_HasChildren_IsBase(true);
        return vqtransposeproxymodel->hasChildren(*parent);
    } else {
        return self->QTransposeProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnHasChildren(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_Sibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(vqtransposeproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseSibling(const QTransposeProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQTransposeProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSibling(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sibling_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTransposeProxyModel_MimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->mimeData(indexes_QList);
    } else {
        return self->QTransposeProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QTransposeProxyModel_QBaseMimeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MimeData_IsBase(true);
        return vqtransposeproxymodel->mimeData(indexes_QList);
    } else {
        return self->QTransposeProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMimeData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MimeData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_CanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QTransposeProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseCanDropMimeData(const QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CanDropMimeData_IsBase(true);
        return vqtransposeproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QTransposeProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCanDropMimeData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_DropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QTransposeProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseDropMimeData(QTransposeProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DropMimeData_IsBase(true);
        return vqtransposeproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QTransposeProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnDropMimeData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTransposeProxyModel_MimeTypes(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        QList<QString> _ret = vqtransposeproxymodel->mimeTypes();
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
        QList<QString> _ret = self->QTransposeProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ QTransposeProxyModel_QBaseMimeTypes(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqtransposeproxymodel->mimeTypes();
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
        QList<QString> _ret = self->QTransposeProxyModel::mimeTypes();
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
void QTransposeProxyModel_OnMimeTypes(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int QTransposeProxyModel_SupportedDragActions(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return static_cast<int>(vqtransposeproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QTransposeProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int QTransposeProxyModel_QBaseSupportedDragActions(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqtransposeproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QTransposeProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSupportedDragActions(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QTransposeProxyModel_SupportedDropActions(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return static_cast<int>(vqtransposeproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QTransposeProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int QTransposeProxyModel_QBaseSupportedDropActions(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqtransposeproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QTransposeProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSupportedDropActions(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QTransposeProxyModel_RoleNames(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        QHash<int, QByteArray> _ret = vqtransposeproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QTransposeProxyModel::roleNames();
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
libqt_map /* of int to libqt_string */ QTransposeProxyModel_QBaseRoleNames(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqtransposeproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QTransposeProxyModel::roleNames();
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
void QTransposeProxyModel_OnRoleNames(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTransposeProxyModel_Match(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        QList<QModelIndex> _ret = vqtransposeproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QTransposeProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QTransposeProxyModel_QBaseMatch(const QTransposeProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqtransposeproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QTransposeProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QTransposeProxyModel_OnMatch(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Match_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_MultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QTransposeProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseMultiData(const QTransposeProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MultiData_IsBase(true);
        vqtransposeproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QTransposeProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMultiData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_MultiData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->resetInternalData();
    } else {
        ((VirtualQTransposeProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseResetInternalData(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ResetInternalData_IsBase(true);
        vqtransposeproxymodel->resetInternalData();
    } else {
        ((VirtualQTransposeProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnResetInternalData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_Event(QTransposeProxyModel* self, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->event(event);
    } else {
        return self->QTransposeProxyModel::event(event);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseEvent(QTransposeProxyModel* self, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Event_IsBase(true);
        return vqtransposeproxymodel->event(event);
    } else {
        return self->QTransposeProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEvent(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Event_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_EventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->eventFilter(watched, event);
    } else {
        return self->QTransposeProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseEventFilter(QTransposeProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EventFilter_IsBase(true);
        return vqtransposeproxymodel->eventFilter(watched, event);
    } else {
        return self->QTransposeProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEventFilter(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->timerEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseTimerEvent(QTransposeProxyModel* self, QTimerEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_TimerEvent_IsBase(true);
        vqtransposeproxymodel->timerEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnTimerEvent(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->childEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseChildEvent(QTransposeProxyModel* self, QChildEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChildEvent_IsBase(true);
        vqtransposeproxymodel->childEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnChildEvent(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->customEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseCustomEvent(QTransposeProxyModel* self, QEvent* event) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CustomEvent_IsBase(true);
        vqtransposeproxymodel->customEvent(event);
    } else {
        ((VirtualQTransposeProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCustomEvent(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQTransposeProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ConnectNotify_IsBase(true);
        vqtransposeproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQTransposeProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnConnectNotify(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQTransposeProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DisconnectNotify_IsBase(true);
        vqtransposeproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQTransposeProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnDisconnectNotify(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(vqtransposeproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseCreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCreateSourceIndex(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return new QModelIndex(vqtransposeproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseCreateIndex(const QTransposeProxyModel* self, int row, int column) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqtransposeproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnCreateIndex(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQTransposeProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EncodeData_IsBase(true);
        vqtransposeproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQTransposeProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEncodeData(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseDecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DecodeData_IsBase(true);
        return vqtransposeproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnDecodeData(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseBeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginInsertRows_IsBase(true);
        vqtransposeproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginInsertRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endInsertRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndInsertRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndInsertRows_IsBase(true);
        vqtransposeproxymodel->endInsertRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndInsertRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseBeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginRemoveRows_IsBase(true);
        vqtransposeproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginRemoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endRemoveRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndRemoveRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndRemoveRows_IsBase(true);
        vqtransposeproxymodel->endRemoveRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndRemoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseBeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginMoveRows_IsBase(true);
        return vqtransposeproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginMoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endMoveRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndMoveRows(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndMoveRows_IsBase(true);
        vqtransposeproxymodel->endMoveRows();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndMoveRows(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseBeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginInsertColumns_IsBase(true);
        vqtransposeproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginInsertColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endInsertColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndInsertColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndInsertColumns_IsBase(true);
        vqtransposeproxymodel->endInsertColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndInsertColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseBeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginRemoveColumns_IsBase(true);
        vqtransposeproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginRemoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endRemoveColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndRemoveColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndRemoveColumns_IsBase(true);
        vqtransposeproxymodel->endRemoveColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndRemoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseBeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginMoveColumns_IsBase(true);
        return vqtransposeproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQTransposeProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginMoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endMoveColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndMoveColumns(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndMoveColumns_IsBase(true);
        vqtransposeproxymodel->endMoveColumns();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndMoveColumns(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->beginResetModel();
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseBeginResetModel(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginResetModel_IsBase(true);
        vqtransposeproxymodel->beginResetModel();
    } else {
        ((VirtualQTransposeProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnBeginResetModel(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->endResetModel();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseEndResetModel(QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndResetModel_IsBase(true);
        vqtransposeproxymodel->endResetModel();
    } else {
        ((VirtualQTransposeProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnEndResetModel(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQTransposeProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChangePersistentIndex_IsBase(true);
        vqtransposeproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQTransposeProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnChangePersistentIndex(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
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
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQTransposeProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QTransposeProxyModel_QBaseChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
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
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChangePersistentIndexList_IsBase(true);
        vqtransposeproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQTransposeProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnChangePersistentIndexList(QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        QList<QModelIndex> _ret = vqtransposeproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQTransposeProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QTransposeProxyModel_QBasePersistentIndexList(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqtransposeproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQTransposeProxyModel*)self)->persistentIndexList();
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
void QTransposeProxyModel_OnPersistentIndexList(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->sender();
    } else {
        return ((VirtualQTransposeProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTransposeProxyModel_QBaseSender(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sender_IsBase(true);
        return vqtransposeproxymodel->sender();
    } else {
        return ((VirtualQTransposeProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSender(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Sender_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQTransposeProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTransposeProxyModel_QBaseSenderSignalIndex(const QTransposeProxyModel* self) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SenderSignalIndex_IsBase(true);
        return vqtransposeproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQTransposeProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSenderSignalIndex(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->receivers(signal);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTransposeProxyModel_QBaseReceivers(const QTransposeProxyModel* self, const char* signal) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Receivers_IsBase(true);
        return vqtransposeproxymodel->receivers(signal);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnReceivers(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_Receivers_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        return vqtransposeproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseIsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_IsSignalConnected_IsBase(true);
        return vqtransposeproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQTransposeProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnIsSignalConnected(const QTransposeProxyModel* self, intptr_t slot) {
    auto* vqtransposeproxymodel = const_cast<VirtualQTransposeProxyModel*>(dynamic_cast<const VirtualQTransposeProxyModel*>(self));
    if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
        vqtransposeproxymodel->setQTransposeProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QTransposeProxyModel_Delete(QTransposeProxyModel* self) {
    delete self;
}
