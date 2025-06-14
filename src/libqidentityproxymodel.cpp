#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
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
#include <qidentityproxymodel.h>
#include "libqidentityproxymodel.h"
#include "libqidentityproxymodel.hxx"

QIdentityProxyModel* QIdentityProxyModel_new() {
    return new VirtualQIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
    return new VirtualQIdentityProxyModel(parent);
}

QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIdentityProxyModel_Metacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIdentityProxyModel_OnMetacall(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Metacall_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QIdentityProxyModel_QBaseMetacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Metacall_IsBase(true);
        return vqidentityproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QIdentityProxyModel_Tr(const char* s) {
    QString _ret = QIdentityProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QIdentityProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->columnCount(*parent);
    } else {
        return self->QIdentityProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_IsBase(true);
        return vqidentityproxymodel->columnCount(*parent);
    } else {
        return self->QIdentityProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnColumnCount(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseIndex(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Index_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIndex(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Index_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapFromSource(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapToSource(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, const QModelIndex* child) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseParent(const QIdentityProxyModel* self, const QModelIndex* child) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnParent(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Parent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->rowCount(*parent);
    } else {
        return self->QIdentityProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseRowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RowCount_IsBase(true);
        return vqidentityproxymodel->rowCount(*parent);
    } else {
        return self->QIdentityProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRowCount(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RowCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QVariant(vqidentityproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQIdentityProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QIdentityProxyModel_QBaseHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqidentityproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQIdentityProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHeaderData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QIdentityProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseDropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_IsBase(true);
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QIdentityProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseSibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSibling(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sibling_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QItemSelection(vqidentityproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQIdentityProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqidentityproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQIdentityProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionFromSource(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QItemSelection(vqidentityproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQIdentityProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqidentityproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQIdentityProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionToSource(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_Match(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = self->QIdentityProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBaseMatch(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Match_IsBase(true);
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = self->QIdentityProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMatch(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Match_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setSourceModel(sourceModel);
    } else {
        self->QIdentityProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_IsBase(true);
        vqidentityproxymodel->setSourceModel(sourceModel);
    } else {
        self->QIdentityProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_IsBase(true);
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertRows_IsBase(true);
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_IsBase(true);
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_IsBase(true);
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QIdentityProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QIdentityProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveRows_IsBase(true);
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QIdentityProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QIdentityProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_IsBase(true);
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QIdentityProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_Submit(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->submit();
    } else {
        return self->QIdentityProxyModel::submit();
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSubmit(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Submit_IsBase(true);
        return vqidentityproxymodel->submit();
    } else {
        return self->QIdentityProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSubmit(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Submit_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_Revert(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->revert();
    } else {
        self->QIdentityProxyModel::revert();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseRevert(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Revert_IsBase(true);
        vqidentityproxymodel->revert();
    } else {
        self->QIdentityProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRevert(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Revert_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QIdentityProxyModel_Data(const QIdentityProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QVariant(vqidentityproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQIdentityProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QIdentityProxyModel_QBaseData(const QIdentityProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Data_IsBase(true);
        return new QVariant(vqidentityproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQIdentityProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Data_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QIdentityProxyModel_ItemData(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QIdentityProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ QIdentityProxyModel_QBaseItemData(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QIdentityProxyModel::itemData(*index);
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
void QIdentityProxyModel_OnItemData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_Flags(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QIdentityProxyModel::flags(*index));
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseFlags(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->QIdentityProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFlags(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Flags_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetData(QIdentityProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QIdentityProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetData(QIdentityProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetData_IsBase(true);
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QIdentityProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetItemData(QIdentityProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QIdentityProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetItemData(QIdentityProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetItemData_IsBase(true);
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->QIdentityProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetItemData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetHeaderData(QIdentityProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QIdentityProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetHeaderData(QIdentityProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetHeaderData_IsBase(true);
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QIdentityProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetHeaderData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_ClearItemData(QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->clearItemData(*index);
    } else {
        return self->QIdentityProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseClearItemData(QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ClearItemData_IsBase(true);
        return vqidentityproxymodel->clearItemData(*index);
    } else {
        return self->QIdentityProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnClearItemData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Buddy(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseBuddy(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQIdentityProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBuddy(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Buddy_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_CanFetchMore(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->canFetchMore(*parent);
    } else {
        return self->QIdentityProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseCanFetchMore(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CanFetchMore_IsBase(true);
        return vqidentityproxymodel->canFetchMore(*parent);
    } else {
        return self->QIdentityProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanFetchMore(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_FetchMore(QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->fetchMore(*parent);
    } else {
        self->QIdentityProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseFetchMore(QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_FetchMore_IsBase(true);
        vqidentityproxymodel->fetchMore(*parent);
    } else {
        self->QIdentityProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFetchMore(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_Sort(QIdentityProxyModel* self, int column, int order) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QIdentityProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSort(QIdentityProxyModel* self, int column, int order) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sort_IsBase(true);
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QIdentityProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSort(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sort_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QIdentityProxyModel_Span(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QSize(vqidentityproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQIdentityProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QIdentityProxyModel_QBaseSpan(const QIdentityProxyModel* self, const QModelIndex* index) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Span_IsBase(true);
        return new QSize(vqidentityproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQIdentityProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSpan(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Span_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_HasChildren(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->hasChildren(*parent);
    } else {
        return self->QIdentityProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseHasChildren(const QIdentityProxyModel* self, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_HasChildren_IsBase(true);
        return vqidentityproxymodel->hasChildren(*parent);
    } else {
        return self->QIdentityProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHasChildren(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QIdentityProxyModel_MimeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->mimeData(indexes_QList);
    } else {
        return self->QIdentityProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QIdentityProxyModel_QBaseMimeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeData_IsBase(true);
        return vqidentityproxymodel->mimeData(indexes_QList);
    } else {
        return self->QIdentityProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMimeData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_CanDropMimeData(const QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QIdentityProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseCanDropMimeData(const QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CanDropMimeData_IsBase(true);
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QIdentityProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanDropMimeData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QIdentityProxyModel_MimeTypes(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        QStringList _ret = vqidentityproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QIdentityProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QIdentityProxyModel_QBaseMimeTypes(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeTypes_IsBase(true);
        QStringList _ret = vqidentityproxymodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QIdentityProxyModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMimeTypes(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDragActions(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QIdentityProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSupportedDragActions(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QIdentityProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDragActions(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDropActions(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QIdentityProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSupportedDropActions(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QIdentityProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDropActions(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QIdentityProxyModel_RoleNames(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
        QHash<int, QByteArray> _ret = self->QIdentityProxyModel::roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
libqt_map /* of int to libqt_string */ QIdentityProxyModel_QBaseRoleNames(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
        QHash<int, QByteArray> _ret = self->QIdentityProxyModel::roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
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
void QIdentityProxyModel_OnRoleNames(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_MultiData(const QIdentityProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QIdentityProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseMultiData(const QIdentityProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MultiData_IsBase(true);
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QIdentityProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMultiData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_MultiData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->resetInternalData();
    } else {
        ((VirtualQIdentityProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseResetInternalData(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ResetInternalData_IsBase(true);
        vqidentityproxymodel->resetInternalData();
    } else {
        ((VirtualQIdentityProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnResetInternalData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_Event(QIdentityProxyModel* self, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->event(event);
    } else {
        return self->QIdentityProxyModel::event(event);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseEvent(QIdentityProxyModel* self, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Event_IsBase(true);
        return vqidentityproxymodel->event(event);
    } else {
        return self->QIdentityProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEvent(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Event_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_EventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->eventFilter(watched, event);
    } else {
        return self->QIdentityProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseEventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EventFilter_IsBase(true);
        return vqidentityproxymodel->eventFilter(watched, event);
    } else {
        return self->QIdentityProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEventFilter(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->timerEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseTimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_TimerEvent_IsBase(true);
        vqidentityproxymodel->timerEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnTimerEvent(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->childEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChildEvent_IsBase(true);
        vqidentityproxymodel->childEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChildEvent(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->customEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseCustomEvent(QIdentityProxyModel* self, QEvent* event) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CustomEvent_IsBase(true);
        vqidentityproxymodel->customEvent(event);
    } else {
        ((VirtualQIdentityProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCustomEvent(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQIdentityProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ConnectNotify_IsBase(true);
        vqidentityproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQIdentityProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnConnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQIdentityProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseDisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DisconnectNotify_IsBase(true);
        vqidentityproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQIdentityProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDisconnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseCreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCreateSourceIndex(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return new QModelIndex(vqidentityproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseCreateIndex(const QIdentityProxyModel* self, int row, int column) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCreateIndex(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQIdentityProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EncodeData_IsBase(true);
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQIdentityProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEncodeData(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseDecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DecodeData_IsBase(true);
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDecodeData(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertRows_IsBase(true);
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endInsertRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndInsertRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertRows_IsBase(true);
        vqidentityproxymodel->endInsertRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveRows_IsBase(true);
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endRemoveRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndRemoveRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveRows_IsBase(true);
        vqidentityproxymodel->endRemoveRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQIdentityProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseBeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveRows_IsBase(true);
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQIdentityProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endMoveRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndMoveRows(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveRows_IsBase(true);
        vqidentityproxymodel->endMoveRows();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertColumns_IsBase(true);
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endInsertColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndInsertColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertColumns_IsBase(true);
        vqidentityproxymodel->endInsertColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveColumns_IsBase(true);
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endRemoveColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndRemoveColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveColumns_IsBase(true);
        vqidentityproxymodel->endRemoveColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQIdentityProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseBeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveColumns_IsBase(true);
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQIdentityProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endMoveColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndMoveColumns(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveColumns_IsBase(true);
        vqidentityproxymodel->endMoveColumns();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->beginResetModel();
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginResetModel(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginResetModel_IsBase(true);
        vqidentityproxymodel->beginResetModel();
    } else {
        ((VirtualQIdentityProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginResetModel(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->endResetModel();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndResetModel(QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndResetModel_IsBase(true);
        vqidentityproxymodel->endResetModel();
    } else {
        ((VirtualQIdentityProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndResetModel(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQIdentityProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndex_IsBase(true);
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQIdentityProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChangePersistentIndex(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQIdentityProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndexList_IsBase(true);
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQIdentityProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChangePersistentIndexList(QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = ((VirtualQIdentityProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBasePersistentIndexList(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = ((VirtualQIdentityProxyModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnPersistentIndexList(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->sender();
    } else {
        return ((VirtualQIdentityProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QIdentityProxyModel_QBaseSender(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sender_IsBase(true);
        return vqidentityproxymodel->sender();
    } else {
        return ((VirtualQIdentityProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSender(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Sender_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQIdentityProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSenderSignalIndex(const QIdentityProxyModel* self) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SenderSignalIndex_IsBase(true);
        return vqidentityproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQIdentityProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSenderSignalIndex(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->receivers(signal);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseReceivers(const QIdentityProxyModel* self, const char* signal) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Receivers_IsBase(true);
        return vqidentityproxymodel->receivers(signal);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnReceivers(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_Receivers_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        return vqidentityproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseIsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_IsSignalConnected_IsBase(true);
        return vqidentityproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQIdentityProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIsSignalConnected(const QIdentityProxyModel* self, intptr_t slot) {
    auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self));
    if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
        vqidentityproxymodel->setQIdentityProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self) {
    delete self;
}
