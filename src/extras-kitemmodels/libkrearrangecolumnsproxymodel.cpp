#include <KRearrangeColumnsProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIdentityProxyModel>
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
#include <QVariant>
#include <krearrangecolumnsproxymodel.h>
#include "libkrearrangecolumnsproxymodel.h"
#include "libkrearrangecolumnsproxymodel.hxx"

KRearrangeColumnsProxyModel* KRearrangeColumnsProxyModel_new() {
    return new VirtualKRearrangeColumnsProxyModel();
}

KRearrangeColumnsProxyModel* KRearrangeColumnsProxyModel_new2(QObject* parent) {
    return new VirtualKRearrangeColumnsProxyModel(parent);
}

QMetaObject* KRearrangeColumnsProxyModel_MetaObject(const KRearrangeColumnsProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRearrangeColumnsProxyModel_Metacast(KRearrangeColumnsProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRearrangeColumnsProxyModel_Metacall(KRearrangeColumnsProxyModel* self, int param1, int param2, void** param3) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRearrangeColumnsProxyModel_Tr(const char* s) {
    QString _ret = KRearrangeColumnsProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRearrangeColumnsProxyModel_SetSourceColumns(KRearrangeColumnsProxyModel* self, const libqt_list /* of int */ columns) {
    QList<int> columns_QList;
    columns_QList.reserve(columns.len);
    int* columns_arr = static_cast<int*>(columns.data);
    for (size_t i = 0; i < columns.len; ++i) {
        columns_QList.push_back(static_cast<int>(columns_arr[i]));
    }
    self->setSourceColumns(columns_QList);
}

int KRearrangeColumnsProxyModel_ColumnCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->columnCount(*parent);
    }
}

int KRearrangeColumnsProxyModel_RowCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->rowCount(*parent);
    }
}

QModelIndex* KRearrangeColumnsProxyModel_Index(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QModelIndex* KRearrangeColumnsProxyModel_Parent(const KRearrangeColumnsProxyModel* self, const QModelIndex* child) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(self->parent(*child));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->parent(*child));
    }
}

QModelIndex* KRearrangeColumnsProxyModel_MapFromSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

QModelIndex* KRearrangeColumnsProxyModel_MapToSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

QVariant* KRearrangeColumnsProxyModel_HeaderData(const KRearrangeColumnsProxyModel* self, int section, int orientation, int role) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKRearrangeColumnsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

bool KRearrangeColumnsProxyModel_HasChildren(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->hasChildren(*parent);
    }
}

QModelIndex* KRearrangeColumnsProxyModel_Sibling(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

int KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn(const KRearrangeColumnsProxyModel* self, int sourceColumn) {
    return self->proxyColumnForSourceColumn(static_cast<int>(sourceColumn));
}

int KRearrangeColumnsProxyModel_SourceColumnForProxyColumn(const KRearrangeColumnsProxyModel* self, int proxyColumn) {
    return self->sourceColumnForProxyColumn(static_cast<int>(proxyColumn));
}

libqt_string KRearrangeColumnsProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KRearrangeColumnsProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRearrangeColumnsProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KRearrangeColumnsProxyModel::tr(s, c, static_cast<int>(n));
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
int KRearrangeColumnsProxyModel_QBaseMetacall(KRearrangeColumnsProxyModel* self, int param1, int param2, void** param3) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Metacall_IsBase(true);
        return vkrearrangecolumnsproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KRearrangeColumnsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMetacall(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Metacall_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseColumnCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ColumnCount_IsBase(true);
        return vkrearrangecolumnsproxymodel->columnCount(*parent);
    } else {
        return self->KRearrangeColumnsProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnColumnCount(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseRowCount(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RowCount_IsBase(true);
        return vkrearrangecolumnsproxymodel->rowCount(*parent);
    } else {
        return self->KRearrangeColumnsProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRowCount(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RowCount_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseIndex(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Index_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnIndex(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Index_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseParent(const KRearrangeColumnsProxyModel* self, const QModelIndex* child) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnParent(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Parent_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseMapFromSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapFromSource(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapFromSource_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseMapToSource(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapToSource(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapToSource_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KRearrangeColumnsProxyModel_QBaseHeaderData(const KRearrangeColumnsProxyModel* self, int section, int orientation, int role) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkrearrangecolumnsproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKRearrangeColumnsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnHeaderData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_HeaderData_Callback>(slot));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseHasChildren(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_HasChildren_IsBase(true);
        return vkrearrangecolumnsproxymodel->hasChildren(*parent);
    } else {
        return self->KRearrangeColumnsProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnHasChildren(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseSibling(const KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSibling(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sibling_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_DropMimeData(KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseDropMimeData(KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DropMimeData_IsBase(true);
        return vkrearrangecolumnsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnDropMimeData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_MapSelectionFromSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QItemSelection(vkrearrangecolumnsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKRearrangeColumnsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_QBaseMapSelectionFromSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkrearrangecolumnsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKRearrangeColumnsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapSelectionFromSource(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_MapSelectionToSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QItemSelection(vkrearrangecolumnsproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKRearrangeColumnsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KRearrangeColumnsProxyModel_QBaseMapSelectionToSource(const KRearrangeColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkrearrangecolumnsproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKRearrangeColumnsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMapSelectionToSource(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_Match(const KRearrangeColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        QList<QModelIndex> _ret = vkrearrangecolumnsproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KRearrangeColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_QBaseMatch(const KRearrangeColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkrearrangecolumnsproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KRearrangeColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KRearrangeColumnsProxyModel_OnMatch(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Match_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_SetSourceModel(KRearrangeColumnsProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setSourceModel(sourceModel);
    } else {
        self->KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseSetSourceModel(KRearrangeColumnsProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetSourceModel_IsBase(true);
        vkrearrangecolumnsproxymodel->setSourceModel(sourceModel);
    } else {
        self->KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetSourceModel(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_InsertColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseInsertColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_InsertColumns_IsBase(true);
        return vkrearrangecolumnsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnInsertColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_InsertRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseInsertRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_InsertRows_IsBase(true);
        return vkrearrangecolumnsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnInsertRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_RemoveColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseRemoveColumns(KRearrangeColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RemoveColumns_IsBase(true);
        return vkrearrangecolumnsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRemoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_RemoveRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseRemoveRows(KRearrangeColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RemoveRows_IsBase(true);
        return vkrearrangecolumnsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRemoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_MoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KRearrangeColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MoveRows_IsBase(true);
        return vkrearrangecolumnsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KRearrangeColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_MoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KRearrangeColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MoveColumns_IsBase(true);
        return vkrearrangecolumnsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KRearrangeColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_Submit(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->submit();
    } else {
        return self->KRearrangeColumnsProxyModel::submit();
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseSubmit(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Submit_IsBase(true);
        return vkrearrangecolumnsproxymodel->submit();
    } else {
        return self->KRearrangeColumnsProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSubmit(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Submit_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_Revert(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->revert();
    } else {
        self->KRearrangeColumnsProxyModel::revert();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseRevert(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Revert_IsBase(true);
        vkrearrangecolumnsproxymodel->revert();
    } else {
        self->KRearrangeColumnsProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnRevert(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Revert_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRearrangeColumnsProxyModel_Data(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QVariant(vkrearrangecolumnsproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKRearrangeColumnsProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KRearrangeColumnsProxyModel_QBaseData(const KRearrangeColumnsProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Data_IsBase(true);
        return new QVariant(vkrearrangecolumnsproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKRearrangeColumnsProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Data_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KRearrangeColumnsProxyModel_ItemData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        QMap<int, QVariant> _ret = vkrearrangecolumnsproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KRearrangeColumnsProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KRearrangeColumnsProxyModel_QBaseItemData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkrearrangecolumnsproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KRearrangeColumnsProxyModel::itemData(*index);
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
void KRearrangeColumnsProxyModel_OnItemData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ItemData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_Flags(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return static_cast<int>(vkrearrangecolumnsproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::flags(*index));
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseFlags(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkrearrangecolumnsproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnFlags(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Flags_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KRearrangeColumnsProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseSetData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetData_IsBase(true);
        return vkrearrangecolumnsproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KRearrangeColumnsProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KRearrangeColumnsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseSetItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetItemData_IsBase(true);
        return vkrearrangecolumnsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KRearrangeColumnsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetItemData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_SetHeaderData(KRearrangeColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KRearrangeColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseSetHeaderData(KRearrangeColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHeaderData_IsBase(true);
        return vkrearrangecolumnsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KRearrangeColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetHeaderData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_ClearItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->clearItemData(*index);
    } else {
        return self->KRearrangeColumnsProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseClearItemData(KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ClearItemData_IsBase(true);
        return vkrearrangecolumnsproxymodel->clearItemData(*index);
    } else {
        return self->KRearrangeColumnsProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnClearItemData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_Buddy(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(vkrearrangecolumnsproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseBuddy(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKRearrangeColumnsProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBuddy(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Buddy_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_CanFetchMore(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->canFetchMore(*parent);
    } else {
        return self->KRearrangeColumnsProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseCanFetchMore(const KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CanFetchMore_IsBase(true);
        return vkrearrangecolumnsproxymodel->canFetchMore(*parent);
    } else {
        return self->KRearrangeColumnsProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCanFetchMore(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_FetchMore(KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->fetchMore(*parent);
    } else {
        self->KRearrangeColumnsProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseFetchMore(KRearrangeColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_FetchMore_IsBase(true);
        vkrearrangecolumnsproxymodel->fetchMore(*parent);
    } else {
        self->KRearrangeColumnsProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnFetchMore(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_Sort(KRearrangeColumnsProxyModel* self, int column, int order) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KRearrangeColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseSort(KRearrangeColumnsProxyModel* self, int column, int order) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sort_IsBase(true);
        vkrearrangecolumnsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KRearrangeColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSort(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sort_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRearrangeColumnsProxyModel_Span(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QSize(vkrearrangecolumnsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKRearrangeColumnsProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KRearrangeColumnsProxyModel_QBaseSpan(const KRearrangeColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Span_IsBase(true);
        return new QSize(vkrearrangecolumnsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKRearrangeColumnsProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSpan(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Span_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KRearrangeColumnsProxyModel_MimeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->mimeData(indexes_QList);
    } else {
        return self->KRearrangeColumnsProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KRearrangeColumnsProxyModel_QBaseMimeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MimeData_IsBase(true);
        return vkrearrangecolumnsproxymodel->mimeData(indexes_QList);
    } else {
        return self->KRearrangeColumnsProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMimeData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MimeData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_CanDropMimeData(const KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseCanDropMimeData(const KRearrangeColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CanDropMimeData_IsBase(true);
        return vkrearrangecolumnsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KRearrangeColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCanDropMimeData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KRearrangeColumnsProxyModel_MimeTypes(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        QList<QString> _ret = vkrearrangecolumnsproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KRearrangeColumnsProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ KRearrangeColumnsProxyModel_QBaseMimeTypes(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkrearrangecolumnsproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KRearrangeColumnsProxyModel::mimeTypes();
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
void KRearrangeColumnsProxyModel_OnMimeTypes(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_SupportedDragActions(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return static_cast<int>(vkrearrangecolumnsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseSupportedDragActions(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkrearrangecolumnsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSupportedDragActions(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_SupportedDropActions(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return static_cast<int>(vkrearrangecolumnsproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseSupportedDropActions(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkrearrangecolumnsproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KRearrangeColumnsProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSupportedDropActions(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KRearrangeColumnsProxyModel_RoleNames(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        QHash<int, QByteArray> _ret = vkrearrangecolumnsproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KRearrangeColumnsProxyModel::roleNames();
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
libqt_map /* of int to libqt_string */ KRearrangeColumnsProxyModel_QBaseRoleNames(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkrearrangecolumnsproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KRearrangeColumnsProxyModel::roleNames();
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
void KRearrangeColumnsProxyModel_OnRoleNames(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_MultiData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KRearrangeColumnsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseMultiData(const KRearrangeColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MultiData_IsBase(true);
        vkrearrangecolumnsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KRearrangeColumnsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnMultiData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_MultiData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ResetInternalData(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->resetInternalData();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseResetInternalData(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ResetInternalData_IsBase(true);
        vkrearrangecolumnsproxymodel->resetInternalData();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnResetInternalData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_Event(KRearrangeColumnsProxyModel* self, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->event(event);
    } else {
        return self->KRearrangeColumnsProxyModel::event(event);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Event_IsBase(true);
        return vkrearrangecolumnsproxymodel->event(event);
    } else {
        return self->KRearrangeColumnsProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Event_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_EventFilter(KRearrangeColumnsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->eventFilter(watched, event);
    } else {
        return self->KRearrangeColumnsProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseEventFilter(KRearrangeColumnsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EventFilter_IsBase(true);
        return vkrearrangecolumnsproxymodel->eventFilter(watched, event);
    } else {
        return self->KRearrangeColumnsProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEventFilter(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_TimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->timerEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseTimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_TimerEvent_IsBase(true);
        vkrearrangecolumnsproxymodel->timerEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnTimerEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->childEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChildEvent_IsBase(true);
        vkrearrangecolumnsproxymodel->childEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnChildEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_CustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->customEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseCustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CustomEvent_IsBase(true);
        vkrearrangecolumnsproxymodel->customEvent(event);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCustomEvent(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ConnectNotify_IsBase(true);
        vkrearrangecolumnsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnConnectNotify(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_DisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseDisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DisconnectNotify_IsBase(true);
        vkrearrangecolumnsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnDisconnectNotify(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseSetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_IsBase(true);
        vkrearrangecolumnsproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetHandleSourceLayoutChanges(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_SetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseSetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHandleSourceDataChanges_IsBase(true);
        vkrearrangecolumnsproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSetHandleSourceDataChanges(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SetHandleSourceDataChanges_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_CreateSourceIndex(const KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(vkrearrangecolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseCreateSourceIndex(const KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCreateSourceIndex(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_CreateIndex(const KRearrangeColumnsProxyModel* self, int row, int column) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return new QModelIndex(vkrearrangecolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KRearrangeColumnsProxyModel_QBaseCreateIndex(const KRearrangeColumnsProxyModel* self, int row, int column) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkrearrangecolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnCreateIndex(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EncodeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEncodeData(const KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EncodeData_IsBase(true);
        vkrearrangecolumnsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEncodeData(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_DecodeData(KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseDecodeData(KRearrangeColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DecodeData_IsBase(true);
        return vkrearrangecolumnsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnDecodeData(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_BeginInsertRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseBeginInsertRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginInsertRows_IsBase(true);
        vkrearrangecolumnsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginInsertRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndInsertRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endInsertRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndInsertRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndInsertRows_IsBase(true);
        vkrearrangecolumnsproxymodel->endInsertRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndInsertRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_BeginRemoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseBeginRemoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginRemoveRows_IsBase(true);
        vkrearrangecolumnsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginRemoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndRemoveRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endRemoveRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndRemoveRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndRemoveRows_IsBase(true);
        vkrearrangecolumnsproxymodel->endRemoveRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndRemoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_BeginMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseBeginMoveRows(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginMoveRows_IsBase(true);
        return vkrearrangecolumnsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginMoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndMoveRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endMoveRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndMoveRows(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndMoveRows_IsBase(true);
        vkrearrangecolumnsproxymodel->endMoveRows();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndMoveRows(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_BeginInsertColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseBeginInsertColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginInsertColumns_IsBase(true);
        vkrearrangecolumnsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginInsertColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndInsertColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endInsertColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndInsertColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndInsertColumns_IsBase(true);
        vkrearrangecolumnsproxymodel->endInsertColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndInsertColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_BeginRemoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseBeginRemoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginRemoveColumns_IsBase(true);
        vkrearrangecolumnsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginRemoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndRemoveColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndRemoveColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndRemoveColumns_IsBase(true);
        vkrearrangecolumnsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndRemoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_BeginMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseBeginMoveColumns(KRearrangeColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginMoveColumns_IsBase(true);
        return vkrearrangecolumnsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginMoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndMoveColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endMoveColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndMoveColumns(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndMoveColumns_IsBase(true);
        vkrearrangecolumnsproxymodel->endMoveColumns();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndMoveColumns(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_BeginResetModel(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->beginResetModel();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseBeginResetModel(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginResetModel_IsBase(true);
        vkrearrangecolumnsproxymodel->beginResetModel();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnBeginResetModel(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_EndResetModel(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->endResetModel();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseEndResetModel(KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndResetModel_IsBase(true);
        vkrearrangecolumnsproxymodel->endResetModel();
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnEndResetModel(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ChangePersistentIndex(KRearrangeColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseChangePersistentIndex(KRearrangeColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChangePersistentIndex_IsBase(true);
        vkrearrangecolumnsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnChangePersistentIndex(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KRearrangeColumnsProxyModel_ChangePersistentIndexList(KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
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
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KRearrangeColumnsProxyModel_QBaseChangePersistentIndexList(KRearrangeColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
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
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChangePersistentIndexList_IsBase(true);
        vkrearrangecolumnsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKRearrangeColumnsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnChangePersistentIndexList(KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = dynamic_cast<VirtualKRearrangeColumnsProxyModel*>(self);
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_PersistentIndexList(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        QList<QModelIndex> _ret = vkrearrangecolumnsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKRearrangeColumnsProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KRearrangeColumnsProxyModel_QBasePersistentIndexList(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkrearrangecolumnsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKRearrangeColumnsProxyModel*)self)->persistentIndexList();
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
void KRearrangeColumnsProxyModel_OnPersistentIndexList(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRearrangeColumnsProxyModel_Sender(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->sender();
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRearrangeColumnsProxyModel_QBaseSender(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sender_IsBase(true);
        return vkrearrangecolumnsproxymodel->sender();
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSender(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Sender_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_SenderSignalIndex(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseSenderSignalIndex(const KRearrangeColumnsProxyModel* self) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SenderSignalIndex_IsBase(true);
        return vkrearrangecolumnsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnSenderSignalIndex(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRearrangeColumnsProxyModel_Receivers(const KRearrangeColumnsProxyModel* self, const char* signal) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->receivers(signal);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRearrangeColumnsProxyModel_QBaseReceivers(const KRearrangeColumnsProxyModel* self, const char* signal) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Receivers_IsBase(true);
        return vkrearrangecolumnsproxymodel->receivers(signal);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnReceivers(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_Receivers_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRearrangeColumnsProxyModel_IsSignalConnected(const KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        return vkrearrangecolumnsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRearrangeColumnsProxyModel_QBaseIsSignalConnected(const KRearrangeColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_IsSignalConnected_IsBase(true);
        return vkrearrangecolumnsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKRearrangeColumnsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRearrangeColumnsProxyModel_OnIsSignalConnected(const KRearrangeColumnsProxyModel* self, intptr_t slot) {
    auto* vkrearrangecolumnsproxymodel = const_cast<VirtualKRearrangeColumnsProxyModel*>(dynamic_cast<const VirtualKRearrangeColumnsProxyModel*>(self));
    if (vkrearrangecolumnsproxymodel && vkrearrangecolumnsproxymodel->isVirtualKRearrangeColumnsProxyModel) {
        vkrearrangecolumnsproxymodel->setKRearrangeColumnsProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKRearrangeColumnsProxyModel::KRearrangeColumnsProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KRearrangeColumnsProxyModel_Delete(KRearrangeColumnsProxyModel* self) {
    delete self;
}
