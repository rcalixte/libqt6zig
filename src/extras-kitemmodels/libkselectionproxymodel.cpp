#include <KSelectionProxyModel>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
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
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <kselectionproxymodel.h>
#include "libkselectionproxymodel.h"
#include "libkselectionproxymodel.hxx"

KSelectionProxyModel* KSelectionProxyModel_new(QItemSelectionModel* selectionModel) {
    return new VirtualKSelectionProxyModel(selectionModel);
}

KSelectionProxyModel* KSelectionProxyModel_new2() {
    return new VirtualKSelectionProxyModel();
}

KSelectionProxyModel* KSelectionProxyModel_new3(QItemSelectionModel* selectionModel, QObject* parent) {
    return new VirtualKSelectionProxyModel(selectionModel, parent);
}

QMetaObject* KSelectionProxyModel_MetaObject(const KSelectionProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectionProxyModel_Metacast(KSelectionProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectionProxyModel_Metacall(KSelectionProxyModel* self, int param1, int param2, void** param3) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSelectionProxyModel_Tr(const char* s) {
    QString _ret = KSelectionProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSelectionProxyModel_SetSourceModel(KSelectionProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        self->setSourceModel(sourceModel);
    } else {
        ((VirtualKSelectionProxyModel*)self)->setSourceModel(sourceModel);
    }
}

QItemSelectionModel* KSelectionProxyModel_SelectionModel(const KSelectionProxyModel* self) {
    return self->selectionModel();
}

void KSelectionProxyModel_SetSelectionModel(KSelectionProxyModel* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

void KSelectionProxyModel_SetFilterBehavior(KSelectionProxyModel* self, int behavior) {
    self->setFilterBehavior(static_cast<KSelectionProxyModel::FilterBehavior>(behavior));
}

int KSelectionProxyModel_FilterBehavior(const KSelectionProxyModel* self) {
    return static_cast<int>(self->filterBehavior());
}

QModelIndex* KSelectionProxyModel_MapFromSource(const KSelectionProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

QModelIndex* KSelectionProxyModel_MapToSource(const KSelectionProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

QItemSelection* KSelectionProxyModel_MapSelectionFromSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKSelectionProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

QItemSelection* KSelectionProxyModel_MapSelectionToSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKSelectionProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

int KSelectionProxyModel_Flags(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKSelectionProxyModel*)self)->flags(*index));
    }
}

QVariant* KSelectionProxyModel_Data(const KSelectionProxyModel* self, const QModelIndex* index, int role) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKSelectionProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int KSelectionProxyModel_RowCount(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->rowCount(*parent);
    }
}

QVariant* KSelectionProxyModel_HeaderData(const KSelectionProxyModel* self, int section, int orientation, int role) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKSelectionProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

QMimeData* KSelectionProxyModel_MimeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->mimeData(indexes_QList);
    }
}

libqt_list /* of libqt_string */ KSelectionProxyModel_MimeTypes(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QList<QString> _ret = self->mimeTypes();
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
        QList<QString> _ret = ((VirtualKSelectionProxyModel*)self)->mimeTypes();
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

int KSelectionProxyModel_SupportedDropActions(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKSelectionProxyModel*)self)->supportedDropActions());
    }
}

bool KSelectionProxyModel_DropMimeData(KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

bool KSelectionProxyModel_HasChildren(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->hasChildren(*parent);
    }
}

QModelIndex* KSelectionProxyModel_Index(const KSelectionProxyModel* self, int param1, int param2, const QModelIndex* param3) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(self->index(static_cast<int>(param1), static_cast<int>(param2), *param3));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->index(static_cast<int>(param1), static_cast<int>(param2), *param3));
    }
}

QModelIndex* KSelectionProxyModel_Parent(const KSelectionProxyModel* self, const QModelIndex* param1) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(self->parent(*param1));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->parent(*param1));
    }
}

int KSelectionProxyModel_ColumnCount(const KSelectionProxyModel* self, const QModelIndex* param1) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return self->columnCount(*param1);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->columnCount(*param1);
    }
}

libqt_list /* of QModelIndex* */ KSelectionProxyModel_Match(const KSelectionProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkselectionproxymodel = dynamic_cast<const VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QList<QModelIndex> _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = ((VirtualKSelectionProxyModel*)self)->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

libqt_string KSelectionProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KSelectionProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelectionProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSelectionProxyModel::tr(s, c, static_cast<int>(n));
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
int KSelectionProxyModel_QBaseMetacall(KSelectionProxyModel* self, int param1, int param2, void** param3) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Metacall_IsBase(true);
        return vkselectionproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSelectionProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMetacall(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Metacall_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseSetSourceModel(KSelectionProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetSourceModel_IsBase(true);
        vkselectionproxymodel->setSourceModel(sourceModel);
    } else {
        self->KSelectionProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetSourceModel(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseMapFromSource(const KSelectionProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapFromSource(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapFromSource_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseMapToSource(const KSelectionProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapToSource(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapToSource_Callback>(slot));
    }
}

// Base class handler implementation
QItemSelection* KSelectionProxyModel_QBaseMapSelectionFromSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkselectionproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKSelectionProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapSelectionFromSource(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Base class handler implementation
QItemSelection* KSelectionProxyModel_QBaseMapSelectionToSource(const KSelectionProxyModel* self, const QItemSelection* selection) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkselectionproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKSelectionProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMapSelectionToSource(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseFlags(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkselectionproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KSelectionProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnFlags(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Flags_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KSelectionProxyModel_QBaseData(const KSelectionProxyModel* self, const QModelIndex* index, int role) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Data_IsBase(true);
        return new QVariant(vkselectionproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKSelectionProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Data_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseRowCount(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RowCount_IsBase(true);
        return vkselectionproxymodel->rowCount(*parent);
    } else {
        return self->KSelectionProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRowCount(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RowCount_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KSelectionProxyModel_QBaseHeaderData(const KSelectionProxyModel* self, int section, int orientation, int role) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkselectionproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKSelectionProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnHeaderData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_HeaderData_Callback>(slot));
    }
}

// Base class handler implementation
QMimeData* KSelectionProxyModel_QBaseMimeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MimeData_IsBase(true);
        return vkselectionproxymodel->mimeData(indexes_QList);
    } else {
        return self->KSelectionProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMimeData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MimeData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MimeData_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KSelectionProxyModel_QBaseMimeTypes(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkselectionproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KSelectionProxyModel::mimeTypes();
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
void KSelectionProxyModel_OnMimeTypes(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MimeTypes_Callback>(slot));
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseSupportedDropActions(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkselectionproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KSelectionProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSupportedDropActions(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseDropMimeData(KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DropMimeData_IsBase(true);
        return vkselectionproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KSelectionProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnDropMimeData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_DropMimeData_Callback>(slot));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseHasChildren(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_HasChildren_IsBase(true);
        return vkselectionproxymodel->hasChildren(*parent);
    } else {
        return self->KSelectionProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnHasChildren(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseIndex(const KSelectionProxyModel* self, int param1, int param2, const QModelIndex* param3) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Index_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->index(static_cast<int>(param1), static_cast<int>(param2), *param3));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->index(static_cast<int>(param1), static_cast<int>(param2), *param3));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnIndex(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Index_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseParent(const KSelectionProxyModel* self, const QModelIndex* param1) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->parent(*param1));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->parent(*param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnParent(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Parent_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseColumnCount(const KSelectionProxyModel* self, const QModelIndex* param1) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ColumnCount_IsBase(true);
        return vkselectionproxymodel->columnCount(*param1);
    } else {
        return self->KSelectionProxyModel::columnCount(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnColumnCount(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KSelectionProxyModel_QBaseMatch(const KSelectionProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkselectionproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KSelectionProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KSelectionProxyModel_OnMatch(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Match_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_Submit(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->submit();
    } else {
        return self->KSelectionProxyModel::submit();
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseSubmit(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Submit_IsBase(true);
        return vkselectionproxymodel->submit();
    } else {
        return self->KSelectionProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSubmit(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Submit_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_Revert(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->revert();
    } else {
        self->KSelectionProxyModel::revert();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseRevert(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Revert_IsBase(true);
        vkselectionproxymodel->revert();
    } else {
        self->KSelectionProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRevert(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Revert_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KSelectionProxyModel_ItemData(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QMap<int, QVariant> _ret = vkselectionproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KSelectionProxyModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KSelectionProxyModel_QBaseItemData(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkselectionproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KSelectionProxyModel::itemData(*index);
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
void KSelectionProxyModel_OnItemData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ItemData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_SetData(KSelectionProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KSelectionProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseSetData(KSelectionProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetData_IsBase(true);
        return vkselectionproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KSelectionProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_SetItemData(KSelectionProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KSelectionProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseSetItemData(KSelectionProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetItemData_IsBase(true);
        return vkselectionproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KSelectionProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetItemData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_SetHeaderData(KSelectionProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KSelectionProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseSetHeaderData(KSelectionProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetHeaderData_IsBase(true);
        return vkselectionproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KSelectionProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSetHeaderData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_ClearItemData(KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->clearItemData(*index);
    } else {
        return self->KSelectionProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseClearItemData(KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ClearItemData_IsBase(true);
        return vkselectionproxymodel->clearItemData(*index);
    } else {
        return self->KSelectionProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnClearItemData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_Buddy(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(vkselectionproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseBuddy(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBuddy(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Buddy_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_CanFetchMore(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->canFetchMore(*parent);
    } else {
        return self->KSelectionProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseCanFetchMore(const KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CanFetchMore_IsBase(true);
        return vkselectionproxymodel->canFetchMore(*parent);
    } else {
        return self->KSelectionProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCanFetchMore(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_FetchMore(KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->fetchMore(*parent);
    } else {
        self->KSelectionProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseFetchMore(KSelectionProxyModel* self, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_FetchMore_IsBase(true);
        vkselectionproxymodel->fetchMore(*parent);
    } else {
        self->KSelectionProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnFetchMore(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_Sort(KSelectionProxyModel* self, int column, int order) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KSelectionProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseSort(KSelectionProxyModel* self, int column, int order) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sort_IsBase(true);
        vkselectionproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KSelectionProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSort(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sort_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSelectionProxyModel_Span(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QSize(vkselectionproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKSelectionProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KSelectionProxyModel_QBaseSpan(const KSelectionProxyModel* self, const QModelIndex* index) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Span_IsBase(true);
        return new QSize(vkselectionproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKSelectionProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSpan(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Span_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_Sibling(const KSelectionProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(vkselectionproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseSibling(const KSelectionProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKSelectionProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSibling(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sibling_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_CanDropMimeData(const KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KSelectionProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseCanDropMimeData(const KSelectionProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CanDropMimeData_IsBase(true);
        return vkselectionproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KSelectionProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCanDropMimeData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionProxyModel_SupportedDragActions(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return static_cast<int>(vkselectionproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KSelectionProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseSupportedDragActions(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkselectionproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KSelectionProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSupportedDragActions(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KSelectionProxyModel_RoleNames(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QHash<int, QByteArray> _ret = vkselectionproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KSelectionProxyModel::roleNames();
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
libqt_map /* of int to libqt_string */ KSelectionProxyModel_QBaseRoleNames(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkselectionproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KSelectionProxyModel::roleNames();
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
void KSelectionProxyModel_OnRoleNames(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_InsertRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseInsertRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_InsertRows_IsBase(true);
        return vkselectionproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnInsertRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_InsertColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseInsertColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_InsertColumns_IsBase(true);
        return vkselectionproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnInsertColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_RemoveRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseRemoveRows(KSelectionProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RemoveRows_IsBase(true);
        return vkselectionproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRemoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_RemoveColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseRemoveColumns(KSelectionProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RemoveColumns_IsBase(true);
        return vkselectionproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KSelectionProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnRemoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_MoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KSelectionProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MoveRows_IsBase(true);
        return vkselectionproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KSelectionProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_MoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KSelectionProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MoveColumns_IsBase(true);
        return vkselectionproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KSelectionProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_MultiData(const KSelectionProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KSelectionProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseMultiData(const KSelectionProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MultiData_IsBase(true);
        vkselectionproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KSelectionProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnMultiData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_MultiData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_ResetInternalData(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->resetInternalData();
    } else {
        ((VirtualKSelectionProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseResetInternalData(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ResetInternalData_IsBase(true);
        vkselectionproxymodel->resetInternalData();
    } else {
        ((VirtualKSelectionProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnResetInternalData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_Event(KSelectionProxyModel* self, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->event(event);
    } else {
        return self->KSelectionProxyModel::event(event);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseEvent(KSelectionProxyModel* self, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Event_IsBase(true);
        return vkselectionproxymodel->event(event);
    } else {
        return self->KSelectionProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEvent(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Event_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_EventFilter(KSelectionProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->eventFilter(watched, event);
    } else {
        return self->KSelectionProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseEventFilter(KSelectionProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EventFilter_IsBase(true);
        return vkselectionproxymodel->eventFilter(watched, event);
    } else {
        return self->KSelectionProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEventFilter(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_TimerEvent(KSelectionProxyModel* self, QTimerEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->timerEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseTimerEvent(KSelectionProxyModel* self, QTimerEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_TimerEvent_IsBase(true);
        vkselectionproxymodel->timerEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnTimerEvent(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_ChildEvent(KSelectionProxyModel* self, QChildEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->childEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseChildEvent(KSelectionProxyModel* self, QChildEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChildEvent_IsBase(true);
        vkselectionproxymodel->childEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnChildEvent(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_CustomEvent(KSelectionProxyModel* self, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->customEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseCustomEvent(KSelectionProxyModel* self, QEvent* event) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CustomEvent_IsBase(true);
        vkselectionproxymodel->customEvent(event);
    } else {
        ((VirtualKSelectionProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCustomEvent(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_ConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKSelectionProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ConnectNotify_IsBase(true);
        vkselectionproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKSelectionProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnConnectNotify(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_DisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseDisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DisconnectNotify_IsBase(true);
        vkselectionproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnDisconnectNotify(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QPersistentModelIndex* */ KSelectionProxyModel_SourceRootIndexes(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QList<QPersistentModelIndex> _ret = vkselectionproxymodel->sourceRootIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** _arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPersistentModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPersistentModelIndex> _ret = ((VirtualKSelectionProxyModel*)self)->sourceRootIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** _arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPersistentModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QPersistentModelIndex* */ KSelectionProxyModel_QBaseSourceRootIndexes(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SourceRootIndexes_IsBase(true);
        QList<QPersistentModelIndex> _ret = vkselectionproxymodel->sourceRootIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** _arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPersistentModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPersistentModelIndex> _ret = ((VirtualKSelectionProxyModel*)self)->sourceRootIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QPersistentModelIndex** _arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPersistentModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSourceRootIndexes(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SourceRootIndexes_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SourceRootIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_CreateSourceIndex(const KSelectionProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(vkselectionproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseCreateSourceIndex(const KSelectionProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCreateSourceIndex(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KSelectionProxyModel_CreateIndex(const KSelectionProxyModel* self, int row, int column) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return new QModelIndex(vkselectionproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KSelectionProxyModel_QBaseCreateIndex(const KSelectionProxyModel* self, int row, int column) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkselectionproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnCreateIndex(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EncodeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKSelectionProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEncodeData(const KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EncodeData_IsBase(true);
        vkselectionproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKSelectionProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEncodeData(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_DecodeData(KSelectionProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseDecodeData(KSelectionProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DecodeData_IsBase(true);
        return vkselectionproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnDecodeData(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_BeginInsertRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseBeginInsertRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginInsertRows_IsBase(true);
        vkselectionproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginInsertRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndInsertRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endInsertRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndInsertRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndInsertRows_IsBase(true);
        vkselectionproxymodel->endInsertRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndInsertRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_BeginRemoveRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseBeginRemoveRows(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginRemoveRows_IsBase(true);
        vkselectionproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginRemoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndRemoveRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endRemoveRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndRemoveRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndRemoveRows_IsBase(true);
        vkselectionproxymodel->endRemoveRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndRemoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_BeginMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKSelectionProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseBeginMoveRows(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginMoveRows_IsBase(true);
        return vkselectionproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKSelectionProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginMoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndMoveRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endMoveRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndMoveRows(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndMoveRows_IsBase(true);
        vkselectionproxymodel->endMoveRows();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndMoveRows(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_BeginInsertColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseBeginInsertColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginInsertColumns_IsBase(true);
        vkselectionproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginInsertColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndInsertColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endInsertColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndInsertColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndInsertColumns_IsBase(true);
        vkselectionproxymodel->endInsertColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndInsertColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_BeginRemoveColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseBeginRemoveColumns(KSelectionProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginRemoveColumns_IsBase(true);
        vkselectionproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginRemoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndRemoveColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endRemoveColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndRemoveColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndRemoveColumns_IsBase(true);
        vkselectionproxymodel->endRemoveColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndRemoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_BeginMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKSelectionProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseBeginMoveColumns(KSelectionProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginMoveColumns_IsBase(true);
        return vkselectionproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKSelectionProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginMoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndMoveColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endMoveColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndMoveColumns(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndMoveColumns_IsBase(true);
        vkselectionproxymodel->endMoveColumns();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndMoveColumns(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_BeginResetModel(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->beginResetModel();
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseBeginResetModel(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginResetModel_IsBase(true);
        vkselectionproxymodel->beginResetModel();
    } else {
        ((VirtualKSelectionProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnBeginResetModel(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_EndResetModel(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->endResetModel();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseEndResetModel(KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndResetModel_IsBase(true);
        vkselectionproxymodel->endResetModel();
    } else {
        ((VirtualKSelectionProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnEndResetModel(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_ChangePersistentIndex(KSelectionProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKSelectionProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseChangePersistentIndex(KSelectionProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChangePersistentIndex_IsBase(true);
        vkselectionproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKSelectionProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnChangePersistentIndex(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionProxyModel_ChangePersistentIndexList(KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
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
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKSelectionProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KSelectionProxyModel_QBaseChangePersistentIndexList(KSelectionProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
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
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChangePersistentIndexList_IsBase(true);
        vkselectionproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKSelectionProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnChangePersistentIndexList(KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = dynamic_cast<VirtualKSelectionProxyModel*>(self);
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KSelectionProxyModel_PersistentIndexList(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        QList<QModelIndex> _ret = vkselectionproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKSelectionProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KSelectionProxyModel_QBasePersistentIndexList(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkselectionproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKSelectionProxyModel*)self)->persistentIndexList();
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
void KSelectionProxyModel_OnPersistentIndexList(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSelectionProxyModel_Sender(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->sender();
    } else {
        return ((VirtualKSelectionProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSelectionProxyModel_QBaseSender(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sender_IsBase(true);
        return vkselectionproxymodel->sender();
    } else {
        return ((VirtualKSelectionProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSender(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Sender_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionProxyModel_SenderSignalIndex(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKSelectionProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseSenderSignalIndex(const KSelectionProxyModel* self) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SenderSignalIndex_IsBase(true);
        return vkselectionproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKSelectionProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnSenderSignalIndex(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionProxyModel_Receivers(const KSelectionProxyModel* self, const char* signal) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->receivers(signal);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSelectionProxyModel_QBaseReceivers(const KSelectionProxyModel* self, const char* signal) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Receivers_IsBase(true);
        return vkselectionproxymodel->receivers(signal);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnReceivers(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_Receivers_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionProxyModel_IsSignalConnected(const KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        return vkselectionproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSelectionProxyModel_QBaseIsSignalConnected(const KSelectionProxyModel* self, const QMetaMethod* signal) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_IsSignalConnected_IsBase(true);
        return vkselectionproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionProxyModel_OnIsSignalConnected(const KSelectionProxyModel* self, intptr_t slot) {
    auto* vkselectionproxymodel = const_cast<VirtualKSelectionProxyModel*>(dynamic_cast<const VirtualKSelectionProxyModel*>(self));
    if (vkselectionproxymodel && vkselectionproxymodel->isVirtualKSelectionProxyModel) {
        vkselectionproxymodel->setKSelectionProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKSelectionProxyModel::KSelectionProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KSelectionProxyModel_Connect_RootIndexAboutToBeRemoved(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QModelIndex*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootIndexAboutToBeRemoved, [self, slotFunc](const QModelIndex& removeRootIndex) {
        const QModelIndex& removeRootIndex_ret = removeRootIndex;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&removeRootIndex_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootIndexAdded(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QModelIndex*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootIndexAdded, [self, slotFunc](const QModelIndex& newIndex) {
        const QModelIndex& newIndex_ret = newIndex;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&newIndex_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootSelectionAboutToBeRemoved(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QItemSelection*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QItemSelection*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootSelectionAboutToBeRemoved, [self, slotFunc](const QItemSelection& selection) {
        const QItemSelection& selection_ret = selection;
        // Cast returned reference into pointer
        QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_RootSelectionAdded(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*, QItemSelection*) = reinterpret_cast<void (*)(KSelectionProxyModel*, QItemSelection*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::rootSelectionAdded, [self, slotFunc](const QItemSelection& selection) {
        const QItemSelection& selection_ret = selection;
        // Cast returned reference into pointer
        QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
        slotFunc(self, sigval1);
    });
}

void KSelectionProxyModel_Connect_SelectionModelChanged(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*) = reinterpret_cast<void (*)(KSelectionProxyModel*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::selectionModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionProxyModel_Connect_FilterBehaviorChanged(KSelectionProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KSelectionProxyModel*) = reinterpret_cast<void (*)(KSelectionProxyModel*)>(slot);
    KSelectionProxyModel::connect(self, &KSelectionProxyModel::filterBehaviorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionProxyModel_Delete(KSelectionProxyModel* self) {
    delete self;
}
