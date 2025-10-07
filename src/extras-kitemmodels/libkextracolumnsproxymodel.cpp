#include <KExtraColumnsProxyModel>
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
#include <kextracolumnsproxymodel.h>
#include "libkextracolumnsproxymodel.h"
#include "libkextracolumnsproxymodel.hxx"

KExtraColumnsProxyModel* KExtraColumnsProxyModel_new() {
    return new VirtualKExtraColumnsProxyModel();
}

KExtraColumnsProxyModel* KExtraColumnsProxyModel_new2(QObject* parent) {
    return new VirtualKExtraColumnsProxyModel(parent);
}

QMetaObject* KExtraColumnsProxyModel_MetaObject(const KExtraColumnsProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KExtraColumnsProxyModel_Metacast(KExtraColumnsProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KExtraColumnsProxyModel_Metacall(KExtraColumnsProxyModel* self, int param1, int param2, void** param3) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KExtraColumnsProxyModel_Tr(const char* s) {
    QString _ret = KExtraColumnsProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KExtraColumnsProxyModel_AppendColumn(KExtraColumnsProxyModel* self) {
    self->appendColumn();
}

void KExtraColumnsProxyModel_RemoveExtraColumn(KExtraColumnsProxyModel* self, int idx) {
    self->removeExtraColumn(static_cast<int>(idx));
}

QVariant* KExtraColumnsProxyModel_ExtraColumnData(const KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QVariant(vkextracolumnsproxymodel->extraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->extraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), static_cast<int>(role)));
    }
}

bool KExtraColumnsProxyModel_SetExtraColumnData(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const QVariant* data, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return self->setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
    }
}

void KExtraColumnsProxyModel_ExtraColumnDataChanged(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->extraColumnDataChanged(*parent, static_cast<int>(row), static_cast<int>(extraColumn), roles_QList);
}

int KExtraColumnsProxyModel_ExtraColumnForProxyColumn(const KExtraColumnsProxyModel* self, int proxyColumn) {
    return self->extraColumnForProxyColumn(static_cast<int>(proxyColumn));
}

int KExtraColumnsProxyModel_ProxyColumnForExtraColumn(const KExtraColumnsProxyModel* self, int extraColumn) {
    return self->proxyColumnForExtraColumn(static_cast<int>(extraColumn));
}

void KExtraColumnsProxyModel_SetSourceModel(KExtraColumnsProxyModel* self, QAbstractItemModel* model) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        self->setSourceModel(model);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->setSourceModel(model);
    }
}

QModelIndex* KExtraColumnsProxyModel_MapToSource(const KExtraColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

QItemSelection* KExtraColumnsProxyModel_MapSelectionToSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKExtraColumnsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

int KExtraColumnsProxyModel_ColumnCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->columnCount(*parent);
    }
}

QVariant* KExtraColumnsProxyModel_Data(const KExtraColumnsProxyModel* self, const QModelIndex* index, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

bool KExtraColumnsProxyModel_SetData(KExtraColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

QModelIndex* KExtraColumnsProxyModel_Sibling(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

QModelIndex* KExtraColumnsProxyModel_Buddy(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(self->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->buddy(*index));
    }
}

int KExtraColumnsProxyModel_Flags(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKExtraColumnsProxyModel*)self)->flags(*index));
    }
}

bool KExtraColumnsProxyModel_HasChildren(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return self->hasChildren(*index);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->hasChildren(*index);
    }
}

QVariant* KExtraColumnsProxyModel_HeaderData(const KExtraColumnsProxyModel* self, int section, int orientation, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

QModelIndex* KExtraColumnsProxyModel_Index(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QModelIndex* KExtraColumnsProxyModel_Parent(const KExtraColumnsProxyModel* self, const QModelIndex* child) {
    auto* vkextracolumnsproxymodel = dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(self->parent(*child));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->parent(*child));
    }
}

libqt_string KExtraColumnsProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KExtraColumnsProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KExtraColumnsProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KExtraColumnsProxyModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KExtraColumnsProxyModel_AppendColumn1(KExtraColumnsProxyModel* self, const libqt_string header) {
    QString header_QString = QString::fromUtf8(header.data, header.len);
    self->appendColumn(header_QString);
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseMetacall(KExtraColumnsProxyModel* self, int param1, int param2, void** param3) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Metacall_IsBase(true);
        return vkextracolumnsproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KExtraColumnsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMetacall(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Metacall_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KExtraColumnsProxyModel_QBaseExtraColumnData(const KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, int role) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ExtraColumnData_IsBase(true);
        return new QVariant(vkextracolumnsproxymodel->extraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->extraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnExtraColumnData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ExtraColumnData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ExtraColumnData_Callback>(slot));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseSetExtraColumnData(KExtraColumnsProxyModel* self, const QModelIndex* parent, int row, int extraColumn, const QVariant* data, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetExtraColumnData_IsBase(true);
        return vkextracolumnsproxymodel->setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
    } else {
        return self->KExtraColumnsProxyModel::setExtraColumnData(*parent, static_cast<int>(row), static_cast<int>(extraColumn), *data, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetExtraColumnData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetExtraColumnData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetExtraColumnData_Callback>(slot));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseSetSourceModel(KExtraColumnsProxyModel* self, QAbstractItemModel* model) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetSourceModel_IsBase(true);
        vkextracolumnsproxymodel->setSourceModel(model);
    } else {
        self->KExtraColumnsProxyModel::setSourceModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetSourceModel(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseMapToSource(const KExtraColumnsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapToSource(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapToSource_Callback>(slot));
    }
}

// Base class handler implementation
QItemSelection* KExtraColumnsProxyModel_QBaseMapSelectionToSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkextracolumnsproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKExtraColumnsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapSelectionToSource(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseColumnCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ColumnCount_IsBase(true);
        return vkextracolumnsproxymodel->columnCount(*parent);
    } else {
        return self->KExtraColumnsProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnColumnCount(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KExtraColumnsProxyModel_QBaseData(const KExtraColumnsProxyModel* self, const QModelIndex* index, int role) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Data_IsBase(true);
        return new QVariant(vkextracolumnsproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Data_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseSetData(KExtraColumnsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetData_IsBase(true);
        return vkextracolumnsproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KExtraColumnsProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetData_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseSibling(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSibling(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sibling_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Sibling_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseBuddy(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBuddy(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Buddy_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Buddy_Callback>(slot));
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseFlags(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkextracolumnsproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KExtraColumnsProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnFlags(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Flags_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseHasChildren(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_HasChildren_IsBase(true);
        return vkextracolumnsproxymodel->hasChildren(*index);
    } else {
        return self->KExtraColumnsProxyModel::hasChildren(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnHasChildren(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KExtraColumnsProxyModel_QBaseHeaderData(const KExtraColumnsProxyModel* self, int section, int orientation, int role) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkextracolumnsproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKExtraColumnsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnHeaderData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_HeaderData_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseIndex(const KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Index_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnIndex(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Index_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseParent(const KExtraColumnsProxyModel* self, const QModelIndex* child) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnParent(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Parent_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_MapFromSource(const KExtraColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(vkextracolumnsproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseMapFromSource(const KExtraColumnsProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKExtraColumnsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapFromSource(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtraColumnsProxyModel_RowCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->rowCount(*parent);
    } else {
        return self->KExtraColumnsProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseRowCount(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RowCount_IsBase(true);
        return vkextracolumnsproxymodel->rowCount(*parent);
    } else {
        return self->KExtraColumnsProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRowCount(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RowCount_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_DropMimeData(KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KExtraColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseDropMimeData(KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DropMimeData_IsBase(true);
        return vkextracolumnsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KExtraColumnsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnDropMimeData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KExtraColumnsProxyModel_MapSelectionFromSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QItemSelection(vkextracolumnsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKExtraColumnsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KExtraColumnsProxyModel_QBaseMapSelectionFromSource(const KExtraColumnsProxyModel* self, const QItemSelection* selection) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkextracolumnsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKExtraColumnsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMapSelectionFromSource(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_Match(const KExtraColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        QList<QModelIndex> _ret = vkextracolumnsproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KExtraColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_QBaseMatch(const KExtraColumnsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkextracolumnsproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KExtraColumnsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KExtraColumnsProxyModel_OnMatch(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Match_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_InsertColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseInsertColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_InsertColumns_IsBase(true);
        return vkextracolumnsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnInsertColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_InsertRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseInsertRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_InsertRows_IsBase(true);
        return vkextracolumnsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnInsertRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_RemoveColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseRemoveColumns(KExtraColumnsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RemoveColumns_IsBase(true);
        return vkextracolumnsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRemoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_RemoveRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseRemoveRows(KExtraColumnsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RemoveRows_IsBase(true);
        return vkextracolumnsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KExtraColumnsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRemoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_MoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KExtraColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MoveRows_IsBase(true);
        return vkextracolumnsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KExtraColumnsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_MoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KExtraColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MoveColumns_IsBase(true);
        return vkextracolumnsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KExtraColumnsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_Submit(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->submit();
    } else {
        return self->KExtraColumnsProxyModel::submit();
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseSubmit(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Submit_IsBase(true);
        return vkextracolumnsproxymodel->submit();
    } else {
        return self->KExtraColumnsProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSubmit(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Submit_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_Revert(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->revert();
    } else {
        self->KExtraColumnsProxyModel::revert();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseRevert(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Revert_IsBase(true);
        vkextracolumnsproxymodel->revert();
    } else {
        self->KExtraColumnsProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnRevert(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Revert_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KExtraColumnsProxyModel_ItemData(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        QMap<int, QVariant> _ret = vkextracolumnsproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KExtraColumnsProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KExtraColumnsProxyModel_QBaseItemData(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkextracolumnsproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KExtraColumnsProxyModel::itemData(*index);
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
void KExtraColumnsProxyModel_OnItemData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ItemData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_SetItemData(KExtraColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KExtraColumnsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseSetItemData(KExtraColumnsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetItemData_IsBase(true);
        return vkextracolumnsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KExtraColumnsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetItemData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_SetHeaderData(KExtraColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KExtraColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseSetHeaderData(KExtraColumnsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHeaderData_IsBase(true);
        return vkextracolumnsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KExtraColumnsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetHeaderData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_ClearItemData(KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->clearItemData(*index);
    } else {
        return self->KExtraColumnsProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseClearItemData(KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ClearItemData_IsBase(true);
        return vkextracolumnsproxymodel->clearItemData(*index);
    } else {
        return self->KExtraColumnsProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnClearItemData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_CanFetchMore(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->canFetchMore(*parent);
    } else {
        return self->KExtraColumnsProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseCanFetchMore(const KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CanFetchMore_IsBase(true);
        return vkextracolumnsproxymodel->canFetchMore(*parent);
    } else {
        return self->KExtraColumnsProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCanFetchMore(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_FetchMore(KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->fetchMore(*parent);
    } else {
        self->KExtraColumnsProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseFetchMore(KExtraColumnsProxyModel* self, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_FetchMore_IsBase(true);
        vkextracolumnsproxymodel->fetchMore(*parent);
    } else {
        self->KExtraColumnsProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnFetchMore(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_Sort(KExtraColumnsProxyModel* self, int column, int order) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KExtraColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseSort(KExtraColumnsProxyModel* self, int column, int order) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sort_IsBase(true);
        vkextracolumnsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KExtraColumnsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSort(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sort_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KExtraColumnsProxyModel_Span(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QSize(vkextracolumnsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKExtraColumnsProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KExtraColumnsProxyModel_QBaseSpan(const KExtraColumnsProxyModel* self, const QModelIndex* index) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Span_IsBase(true);
        return new QSize(vkextracolumnsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKExtraColumnsProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSpan(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Span_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KExtraColumnsProxyModel_MimeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->mimeData(indexes_QList);
    } else {
        return self->KExtraColumnsProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KExtraColumnsProxyModel_QBaseMimeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MimeData_IsBase(true);
        return vkextracolumnsproxymodel->mimeData(indexes_QList);
    } else {
        return self->KExtraColumnsProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMimeData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MimeData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_CanDropMimeData(const KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KExtraColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseCanDropMimeData(const KExtraColumnsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CanDropMimeData_IsBase(true);
        return vkextracolumnsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KExtraColumnsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCanDropMimeData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KExtraColumnsProxyModel_MimeTypes(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        QList<QString> _ret = vkextracolumnsproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KExtraColumnsProxyModel::mimeTypes();
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
libqt_list /* of libqt_string */ KExtraColumnsProxyModel_QBaseMimeTypes(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkextracolumnsproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KExtraColumnsProxyModel::mimeTypes();
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
void KExtraColumnsProxyModel_OnMimeTypes(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtraColumnsProxyModel_SupportedDragActions(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return static_cast<int>(vkextracolumnsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KExtraColumnsProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseSupportedDragActions(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkextracolumnsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KExtraColumnsProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSupportedDragActions(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtraColumnsProxyModel_SupportedDropActions(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return static_cast<int>(vkextracolumnsproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KExtraColumnsProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseSupportedDropActions(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkextracolumnsproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KExtraColumnsProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSupportedDropActions(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KExtraColumnsProxyModel_RoleNames(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        QHash<int, QByteArray> _ret = vkextracolumnsproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KExtraColumnsProxyModel::roleNames();
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
libqt_map /* of int to libqt_string */ KExtraColumnsProxyModel_QBaseRoleNames(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkextracolumnsproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KExtraColumnsProxyModel::roleNames();
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
void KExtraColumnsProxyModel_OnRoleNames(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_MultiData(const KExtraColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KExtraColumnsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseMultiData(const KExtraColumnsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MultiData_IsBase(true);
        vkextracolumnsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KExtraColumnsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnMultiData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_MultiData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ResetInternalData(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->resetInternalData();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseResetInternalData(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ResetInternalData_IsBase(true);
        vkextracolumnsproxymodel->resetInternalData();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnResetInternalData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_Event(KExtraColumnsProxyModel* self, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->event(event);
    } else {
        return self->KExtraColumnsProxyModel::event(event);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Event_IsBase(true);
        return vkextracolumnsproxymodel->event(event);
    } else {
        return self->KExtraColumnsProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Event_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_EventFilter(KExtraColumnsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->eventFilter(watched, event);
    } else {
        return self->KExtraColumnsProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseEventFilter(KExtraColumnsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EventFilter_IsBase(true);
        return vkextracolumnsproxymodel->eventFilter(watched, event);
    } else {
        return self->KExtraColumnsProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEventFilter(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_TimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->timerEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseTimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_TimerEvent_IsBase(true);
        vkextracolumnsproxymodel->timerEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnTimerEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->childEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChildEvent_IsBase(true);
        vkextracolumnsproxymodel->childEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnChildEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_CustomEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->customEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseCustomEvent(KExtraColumnsProxyModel* self, QEvent* event) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CustomEvent_IsBase(true);
        vkextracolumnsproxymodel->customEvent(event);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCustomEvent(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ConnectNotify_IsBase(true);
        vkextracolumnsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnConnectNotify(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_DisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseDisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DisconnectNotify_IsBase(true);
        vkextracolumnsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnDisconnectNotify(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_SetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseSetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHandleSourceLayoutChanges_IsBase(true);
        vkextracolumnsproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetHandleSourceLayoutChanges(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetHandleSourceLayoutChanges_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_SetHandleSourceDataChanges(KExtraColumnsProxyModel* self, bool handleSourceDataChanges) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseSetHandleSourceDataChanges(KExtraColumnsProxyModel* self, bool handleSourceDataChanges) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHandleSourceDataChanges_IsBase(true);
        vkextracolumnsproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->setHandleSourceDataChanges(handleSourceDataChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSetHandleSourceDataChanges(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SetHandleSourceDataChanges_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_CreateSourceIndex(const KExtraColumnsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(vkextracolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseCreateSourceIndex(const KExtraColumnsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCreateSourceIndex(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KExtraColumnsProxyModel_CreateIndex(const KExtraColumnsProxyModel* self, int row, int column) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return new QModelIndex(vkextracolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KExtraColumnsProxyModel_QBaseCreateIndex(const KExtraColumnsProxyModel* self, int row, int column) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkextracolumnsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnCreateIndex(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EncodeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEncodeData(const KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EncodeData_IsBase(true);
        vkextracolumnsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEncodeData(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_DecodeData(KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseDecodeData(KExtraColumnsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DecodeData_IsBase(true);
        return vkextracolumnsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnDecodeData(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_BeginInsertRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseBeginInsertRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginInsertRows_IsBase(true);
        vkextracolumnsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginInsertRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndInsertRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endInsertRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndInsertRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndInsertRows_IsBase(true);
        vkextracolumnsproxymodel->endInsertRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndInsertRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_BeginRemoveRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseBeginRemoveRows(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginRemoveRows_IsBase(true);
        vkextracolumnsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginRemoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndRemoveRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endRemoveRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndRemoveRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndRemoveRows_IsBase(true);
        vkextracolumnsproxymodel->endRemoveRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndRemoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_BeginMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseBeginMoveRows(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginMoveRows_IsBase(true);
        return vkextracolumnsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginMoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndMoveRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endMoveRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndMoveRows(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndMoveRows_IsBase(true);
        vkextracolumnsproxymodel->endMoveRows();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndMoveRows(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_BeginInsertColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseBeginInsertColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginInsertColumns_IsBase(true);
        vkextracolumnsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginInsertColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndInsertColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endInsertColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndInsertColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndInsertColumns_IsBase(true);
        vkextracolumnsproxymodel->endInsertColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndInsertColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_BeginRemoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseBeginRemoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginRemoveColumns_IsBase(true);
        vkextracolumnsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginRemoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndRemoveColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndRemoveColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndRemoveColumns_IsBase(true);
        vkextracolumnsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndRemoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_BeginMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseBeginMoveColumns(KExtraColumnsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginMoveColumns_IsBase(true);
        return vkextracolumnsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginMoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndMoveColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endMoveColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndMoveColumns(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndMoveColumns_IsBase(true);
        vkextracolumnsproxymodel->endMoveColumns();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndMoveColumns(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_BeginResetModel(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->beginResetModel();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseBeginResetModel(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginResetModel_IsBase(true);
        vkextracolumnsproxymodel->beginResetModel();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnBeginResetModel(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_EndResetModel(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->endResetModel();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseEndResetModel(KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndResetModel_IsBase(true);
        vkextracolumnsproxymodel->endResetModel();
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnEndResetModel(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ChangePersistentIndex(KExtraColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseChangePersistentIndex(KExtraColumnsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChangePersistentIndex_IsBase(true);
        vkextracolumnsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnChangePersistentIndex(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtraColumnsProxyModel_ChangePersistentIndexList(KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
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
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KExtraColumnsProxyModel_QBaseChangePersistentIndexList(KExtraColumnsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
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
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChangePersistentIndexList_IsBase(true);
        vkextracolumnsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKExtraColumnsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnChangePersistentIndexList(KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = dynamic_cast<VirtualKExtraColumnsProxyModel*>(self);
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_PersistentIndexList(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        QList<QModelIndex> _ret = vkextracolumnsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKExtraColumnsProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KExtraColumnsProxyModel_QBasePersistentIndexList(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkextracolumnsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKExtraColumnsProxyModel*)self)->persistentIndexList();
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
void KExtraColumnsProxyModel_OnPersistentIndexList(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KExtraColumnsProxyModel_Sender(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->sender();
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KExtraColumnsProxyModel_QBaseSender(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sender_IsBase(true);
        return vkextracolumnsproxymodel->sender();
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSender(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Sender_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtraColumnsProxyModel_SenderSignalIndex(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseSenderSignalIndex(const KExtraColumnsProxyModel* self) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SenderSignalIndex_IsBase(true);
        return vkextracolumnsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnSenderSignalIndex(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtraColumnsProxyModel_Receivers(const KExtraColumnsProxyModel* self, const char* signal) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->receivers(signal);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KExtraColumnsProxyModel_QBaseReceivers(const KExtraColumnsProxyModel* self, const char* signal) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Receivers_IsBase(true);
        return vkextracolumnsproxymodel->receivers(signal);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnReceivers(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_Receivers_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtraColumnsProxyModel_IsSignalConnected(const KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        return vkextracolumnsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KExtraColumnsProxyModel_QBaseIsSignalConnected(const KExtraColumnsProxyModel* self, const QMetaMethod* signal) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_IsSignalConnected_IsBase(true);
        return vkextracolumnsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKExtraColumnsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtraColumnsProxyModel_OnIsSignalConnected(const KExtraColumnsProxyModel* self, intptr_t slot) {
    auto* vkextracolumnsproxymodel = const_cast<VirtualKExtraColumnsProxyModel*>(dynamic_cast<const VirtualKExtraColumnsProxyModel*>(self));
    if (vkextracolumnsproxymodel && vkextracolumnsproxymodel->isVirtualKExtraColumnsProxyModel) {
        vkextracolumnsproxymodel->setKExtraColumnsProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKExtraColumnsProxyModel::KExtraColumnsProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KExtraColumnsProxyModel_Delete(KExtraColumnsProxyModel* self) {
    delete self;
}
