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
#include <QVariant>
#include <qabstractproxymodel.h>
#include "libqabstractproxymodel.h"
#include "libqabstractproxymodel.hxx"

QAbstractProxyModel* QAbstractProxyModel_new() {
    return new VirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
    return new VirtualQAbstractProxyModel(parent);
}

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractProxyModel_Metacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMetacall(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Metacall_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractProxyModel_QBaseMetacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Metacall_IsBase(true);
        return vqabstractproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractProxyModel_Tr(const char* s) {
    QString _ret = QAbstractProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        self->setSourceModel(sourceModel);
    } else {
        ((VirtualQAbstractProxyModel*)self)->setSourceModel(sourceModel);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QAbstractProxyModel_QBaseSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_IsBase(true);
        vqabstractproxymodel->setSourceModel(sourceModel);
    } else {
        ((VirtualQAbstractProxyModel*)self)->setSourceModel(sourceModel);
    }
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
    return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMapToSource(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapToSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMapFromSource(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapFromSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQAbstractProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMapSelectionToSource(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqabstractproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualQAbstractProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQAbstractProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMapSelectionFromSource(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Virtual base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqabstractproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualQAbstractProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->submit();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->submit();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Submit_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Submit_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseSubmit(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Submit_IsBase(true);
        return vqabstractproxymodel->submit();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->submit();
    }
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        self->revert();
    } else {
        ((VirtualQAbstractProxyModel*)self)->revert();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Revert_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Revert_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QAbstractProxyModel_QBaseRevert(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Revert_IsBase(true);
        vqabstractproxymodel->revert();
    } else {
        ((VirtualQAbstractProxyModel*)self)->revert();
    }
}

QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Data_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Data_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QAbstractProxyModel_QBaseData(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Data_IsBase(true);
        return new QVariant(vqabstractproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractProxyModel*)self)->data(*proxyIndex, static_cast<int>(role)));
    }
}

QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnHeaderData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HeaderData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QAbstractProxyModel_QBaseHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqabstractproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQAbstractProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

libqt_map /* of int to QVariant* */ QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
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
        QMap<int, QVariant> _ret = ((VirtualQAbstractProxyModel*)self)->itemData(*index);
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
void QAbstractProxyModel_OnItemData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractProxyModel_QBaseItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqabstractproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = ((VirtualQAbstractProxyModel*)self)->itemData(*index);
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

int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->flags(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnFlags(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Flags_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Flags_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractProxyModel_QBaseFlags(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->flags(*index));
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->flags(*index));
    }
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseSetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetData_IsBase(true);
        return vqabstractproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setItemData(*index, roles_QMap);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseSetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetItemData_IsBase(true);
        return vqabstractproxymodel->setItemData(*index, roles_QMap);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setItemData(*index, roles_QMap);
    }
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseSetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_IsBase(true);
        return vqabstractproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->clearItemData(*index);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->clearItemData(*index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ClearItemData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_IsBase(true);
        return vqabstractproxymodel->clearItemData(*index);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->clearItemData(*index);
    }
}

QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(self->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->buddy(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnBuddy(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Buddy_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseBuddy(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->buddy(*index));
    }
}

bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->canFetchMore(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->canFetchMore(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnCanFetchMore(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseCanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_IsBase(true);
        return vqabstractproxymodel->canFetchMore(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->canFetchMore(*parent);
    }
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        self->fetchMore(*parent);
    } else {
        ((VirtualQAbstractProxyModel*)self)->fetchMore(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_FetchMore_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QAbstractProxyModel_QBaseFetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_FetchMore_IsBase(true);
        vqabstractproxymodel->fetchMore(*parent);
    } else {
        ((VirtualQAbstractProxyModel*)self)->fetchMore(*parent);
    }
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQAbstractProxyModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sort_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sort_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QAbstractProxyModel_QBaseSort(QAbstractProxyModel* self, int column, int order) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sort_IsBase(true);
        vqabstractproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQAbstractProxyModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QSize(self->span(*index));
    } else {
        return new QSize(((VirtualQAbstractProxyModel*)self)->span(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSpan(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Span_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Span_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QAbstractProxyModel_QBaseSpan(const QAbstractProxyModel* self, const QModelIndex* index) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Span_IsBase(true);
        return new QSize(vqabstractproxymodel->span(*index));
    } else {
        return new QSize(((VirtualQAbstractProxyModel*)self)->span(*index));
    }
}

bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->hasChildren(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnHasChildren(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HasChildren_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseHasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_HasChildren_IsBase(true);
        return vqabstractproxymodel->hasChildren(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->hasChildren(*parent);
    }
}

QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSibling(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sibling_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseSibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->mimeData(indexes_QList);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMimeData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QMimeData* QAbstractProxyModel_QBaseMimeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeData_IsBase(true);
        return vqabstractproxymodel->mimeData(indexes_QList);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->mimeData(indexes_QList);
    }
}

bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnCanDropMimeData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseCanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_IsBase(true);
        return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DropMimeData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QAbstractProxyModel_QBaseDropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_IsBase(true);
        return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

libqt_list /* of libqt_string */ QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
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
        QList<QString> _ret = ((VirtualQAbstractProxyModel*)self)->mimeTypes();
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

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMimeTypes(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeTypes_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of libqt_string */ QAbstractProxyModel_QBaseMimeTypes(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqabstractproxymodel->mimeTypes();
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
        QList<QString> _ret = ((VirtualQAbstractProxyModel*)self)->mimeTypes();
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

int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return static_cast<int>(self->supportedDragActions());
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->supportedDragActions());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSupportedDragActions(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractProxyModel_QBaseSupportedDragActions(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->supportedDragActions());
    }
}

int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->supportedDropActions());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnSupportedDropActions(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractProxyModel_QBaseSupportedDropActions(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQAbstractProxyModel*)self)->supportedDropActions());
    }
}

libqt_map /* of int to libqt_string */ QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualQAbstractProxyModel*)self)->roleNames();
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

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnRoleNames(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RoleNames_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractProxyModel_QBaseRoleNames(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqabstractproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = ((VirtualQAbstractProxyModel*)self)->roleNames();
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

libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
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
QModelIndex* QAbstractProxyModel_Index(const QAbstractProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseIndex(const QAbstractProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Index_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnIndex(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Index_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Parent(const QAbstractProxyModel* self, const QModelIndex* child) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseParent(const QAbstractProxyModel* self, const QModelIndex* child) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQAbstractProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnParent(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Parent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_RowCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->rowCount(*parent);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseRowCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RowCount_IsBase(true);
        return vqabstractproxymodel->rowCount(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRowCount(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_ColumnCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->columnCount(*parent);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseColumnCount(const QAbstractProxyModel* self, const QModelIndex* parent) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ColumnCount_IsBase(true);
        return vqabstractproxymodel->columnCount(*parent);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnColumnCount(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseInsertRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertRows_IsBase(true);
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseInsertColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertColumns_IsBase(true);
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseRemoveRows(QAbstractProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveRows_IsBase(true);
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseRemoveColumns(QAbstractProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveColumns_IsBase(true);
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveRows_IsBase(true);
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveColumns_IsBase(true);
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_Match(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        QList<QModelIndex> _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QAbstractProxyModel_QBaseMatch(const QAbstractProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractProxyModel_OnMatch(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Match_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_MultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseMultiData(const QAbstractProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MultiData_IsBase(true);
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->QAbstractProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMultiData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ResetInternalData(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->resetInternalData();
    } else {
        ((VirtualQAbstractProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseResetInternalData(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ResetInternalData_IsBase(true);
        vqabstractproxymodel->resetInternalData();
    } else {
        ((VirtualQAbstractProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnResetInternalData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_Event(QAbstractProxyModel* self, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->event(event);
    } else {
        return self->QAbstractProxyModel::event(event);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseEvent(QAbstractProxyModel* self, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Event_IsBase(true);
        return vqabstractproxymodel->event(event);
    } else {
        return self->QAbstractProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEvent(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Event_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_EventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->eventFilter(watched, event);
    } else {
        return self->QAbstractProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseEventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EventFilter_IsBase(true);
        return vqabstractproxymodel->eventFilter(watched, event);
    } else {
        return self->QAbstractProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEventFilter(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_TimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->timerEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseTimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_TimerEvent_IsBase(true);
        vqabstractproxymodel->timerEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnTimerEvent(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->childEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChildEvent_IsBase(true);
        vqabstractproxymodel->childEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChildEvent(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_CustomEvent(QAbstractProxyModel* self, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->customEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseCustomEvent(QAbstractProxyModel* self, QEvent* event) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CustomEvent_IsBase(true);
        vqabstractproxymodel->customEvent(event);
    } else {
        ((VirtualQAbstractProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCustomEvent(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ConnectNotify_IsBase(true);
        vqabstractproxymodel->connectNotify(*signal);
    } else {
        ((VirtualQAbstractProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnConnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_DisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseDisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DisconnectNotify_IsBase(true);
        vqabstractproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDisconnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCreateSourceIndex(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateIndex(const QAbstractProxyModel* self, int row, int column) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return new QModelIndex(vqabstractproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseCreateIndex(const QAbstractProxyModel* self, int row, int column) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCreateIndex(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EncodeData_IsBase(true);
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQAbstractProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEncodeData(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_DecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseDecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DecodeData_IsBase(true);
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDecodeData(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertRows_IsBase(true);
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndInsertRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endInsertRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndInsertRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertRows_IsBase(true);
        vqabstractproxymodel->endInsertRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveRows_IsBase(true);
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndRemoveRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endRemoveRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndRemoveRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveRows_IsBase(true);
        vqabstractproxymodel->endRemoveRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_BeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseBeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveRows_IsBase(true);
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndMoveRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endMoveRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndMoveRows(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveRows_IsBase(true);
        vqabstractproxymodel->endMoveRows();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertColumns_IsBase(true);
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndInsertColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endInsertColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndInsertColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertColumns_IsBase(true);
        vqabstractproxymodel->endInsertColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveColumns_IsBase(true);
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndRemoveColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndRemoveColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveColumns_IsBase(true);
        vqabstractproxymodel->endRemoveColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_BeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseBeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveColumns_IsBase(true);
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQAbstractProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndMoveColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endMoveColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndMoveColumns(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveColumns_IsBase(true);
        vqabstractproxymodel->endMoveColumns();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginResetModel(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->beginResetModel();
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginResetModel(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginResetModel_IsBase(true);
        vqabstractproxymodel->beginResetModel();
    } else {
        ((VirtualQAbstractProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginResetModel(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndResetModel(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->endResetModel();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndResetModel(QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndResetModel_IsBase(true);
        vqabstractproxymodel->endResetModel();
    } else {
        ((VirtualQAbstractProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndResetModel(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndex_IsBase(true);
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQAbstractProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChangePersistentIndex(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
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
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
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
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndexList_IsBase(true);
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQAbstractProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChangePersistentIndexList(QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_PersistentIndexList(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        QList<QModelIndex> _ret = vqabstractproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQAbstractProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QAbstractProxyModel_QBasePersistentIndexList(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqabstractproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQAbstractProxyModel*)self)->persistentIndexList();
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
void QAbstractProxyModel_OnPersistentIndexList(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractProxyModel_Sender(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->sender();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractProxyModel_QBaseSender(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sender_IsBase(true);
        return vqabstractproxymodel->sender();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSender(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Sender_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_SenderSignalIndex(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSenderSignalIndex(const QAbstractProxyModel* self) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SenderSignalIndex_IsBase(true);
        return vqabstractproxymodel->senderSignalIndex();
    } else {
        return ((VirtualQAbstractProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSenderSignalIndex(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_Receivers(const QAbstractProxyModel* self, const char* signal) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->receivers(signal);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseReceivers(const QAbstractProxyModel* self, const char* signal) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Receivers_IsBase(true);
        return vqabstractproxymodel->receivers(signal);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnReceivers(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_Receivers_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_IsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        return vqabstractproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseIsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_IsSignalConnected_IsBase(true);
        return vqabstractproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnIsSignalConnected(const QAbstractProxyModel* self, intptr_t slot) {
    auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self));
    if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
        vqabstractproxymodel->setQAbstractProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractProxyModel_Connect_SourceModelChanged(QAbstractProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractProxyModel*) = reinterpret_cast<void (*)(QAbstractProxyModel*)>(slot);
    QAbstractProxyModel::connect(self, &QAbstractProxyModel::sourceModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
    delete self;
}
