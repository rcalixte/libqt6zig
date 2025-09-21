#include <KJob>
#include <KNSCore/EngineBase>
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ItemsModel
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
#include <itemsmodel.h>
#include "libitemsmodel.h"
#include "libitemsmodel.hxx"

KNSCore__ItemsModel* KNSCore__ItemsModel_new(KNSCore__EngineBase* engine) {
    return new VirtualKNSCoreItemsModel(engine);
}

KNSCore__ItemsModel* KNSCore__ItemsModel_new2(KNSCore__EngineBase* engine, QObject* parent) {
    return new VirtualKNSCoreItemsModel(engine, parent);
}

QMetaObject* KNSCore__ItemsModel_MetaObject(const KNSCore__ItemsModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__ItemsModel_Metacast(KNSCore__ItemsModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__ItemsModel_Metacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3) {
    auto* vknscore__itemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscore__itemsmodel && vknscore__itemsmodel->isVirtualKNSCoreItemsModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__ItemsModel_Tr(const char* s) {
    QString _ret = KNSCore::ItemsModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KNSCore__ItemsModel_RowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscore__itemsmodel = dynamic_cast<const VirtualKNSCoreItemsModel*>(self);
    if (vknscore__itemsmodel && vknscore__itemsmodel->isVirtualKNSCoreItemsModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->rowCount(*parent);
    }
}

QVariant* KNSCore__ItemsModel_Data(const KNSCore__ItemsModel* self, const QModelIndex* index, int role) {
    auto* vknscore__itemsmodel = dynamic_cast<const VirtualKNSCoreItemsModel*>(self);
    if (vknscore__itemsmodel && vknscore__itemsmodel->isVirtualKNSCoreItemsModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreItemsModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int KNSCore__ItemsModel_Row(const KNSCore__ItemsModel* self, const KNSCore__Entry* entry) {
    return self->row(*entry);
}

void KNSCore__ItemsModel_AddEntry(KNSCore__ItemsModel* self, const KNSCore__Entry* entry) {
    self->addEntry(*entry);
}

void KNSCore__ItemsModel_RemoveEntry(KNSCore__ItemsModel* self, const KNSCore__Entry* entry) {
    self->removeEntry(*entry);
}

bool KNSCore__ItemsModel_HasPreviewImages(const KNSCore__ItemsModel* self) {
    return self->hasPreviewImages();
}

void KNSCore__ItemsModel_JobStarted(KNSCore__ItemsModel* self, KJob* param1, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->jobStarted(param1, label_QString);
}

void KNSCore__ItemsModel_Connect_JobStarted(KNSCore__ItemsModel* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__ItemsModel*, KJob*, const char*) = reinterpret_cast<void (*)(KNSCore__ItemsModel*, KJob*, const char*)>(slot);
    KNSCore::ItemsModel::connect(self, &KNSCore::ItemsModel::jobStarted, [self, slotFunc](KJob* param1, const QString& label) {
        KJob* sigval1 = param1;
        const QString label_ret = label;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray label_b = label_ret.toUtf8();
        const char* label_str = static_cast<const char*>(malloc(label_b.length() + 1));
        memcpy((void*)label_str, label_b.data(), label_b.length());
        ((char*)label_str)[label_b.length()] = '\0';
        const char* sigval2 = label_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(label_str);
    });
}

void KNSCore__ItemsModel_LoadPreview(KNSCore__ItemsModel* self, const KNSCore__Entry* entry, int typeVal) {
    self->loadPreview(*entry, static_cast<KNSCore::Entry::PreviewType>(typeVal));
}

void KNSCore__ItemsModel_Connect_LoadPreview(KNSCore__ItemsModel* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__ItemsModel*, KNSCore__Entry*, int) = reinterpret_cast<void (*)(KNSCore__ItemsModel*, KNSCore__Entry*, int)>(slot);
    KNSCore::ItemsModel::connect(self, &KNSCore::ItemsModel::loadPreview, [self, slotFunc](const KNSCore::Entry& entry, KNSCore::Entry::PreviewType typeVal) {
        const KNSCore::Entry& entry_ret = entry;
        // Cast returned reference into pointer
        KNSCore__Entry* sigval1 = const_cast<KNSCore::Entry*>(&entry_ret);
        int sigval2 = static_cast<int>(typeVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void KNSCore__ItemsModel_SlotEntryChanged(KNSCore__ItemsModel* self, const KNSCore__Entry* entry) {
    self->slotEntryChanged(*entry);
}

void KNSCore__ItemsModel_SlotEntriesLoaded(KNSCore__ItemsModel* self, const libqt_list /* of KNSCore__Entry* */ entries) {
    QList<KNSCore::Entry> entries_QList;
    entries_QList.reserve(entries.len);
    KNSCore__Entry** entries_arr = static_cast<KNSCore__Entry**>(entries.data);
    for (size_t i = 0; i < entries.len; ++i) {
        entries_QList.push_back(*(entries_arr[i]));
    }
    self->slotEntriesLoaded(entries_QList);
}

void KNSCore__ItemsModel_ClearEntries(KNSCore__ItemsModel* self) {
    self->clearEntries();
}

void KNSCore__ItemsModel_SlotEntryPreviewLoaded(KNSCore__ItemsModel* self, const KNSCore__Entry* entry, int typeVal) {
    self->slotEntryPreviewLoaded(*entry, static_cast<KNSCore::Entry::PreviewType>(typeVal));
}

libqt_string KNSCore__ItemsModel_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::ItemsModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ItemsModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::ItemsModel::tr(s, c, static_cast<int>(n));
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
int KNSCore__ItemsModel_QBaseMetacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Metacall_IsBase(true);
        return vknscoreitemsmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::ItemsModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMetacall(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Metacall_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseRowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RowCount_IsBase(true);
        return vknscoreitemsmodel->rowCount(*parent);
    } else {
        return self->KNSCore::ItemsModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRowCount(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RowCount_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KNSCore__ItemsModel_QBaseData(const KNSCore__ItemsModel* self, const QModelIndex* index, int role) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Data_IsBase(true);
        return new QVariant(vknscoreitemsmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreItemsModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Data_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Index(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QModelIndex(vknscoreitemsmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_QBaseIndex(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Index_IsBase(true);
        return new QModelIndex(vknscoreitemsmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnIndex(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Index_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Sibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QModelIndex(vknscoreitemsmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_QBaseSibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sibling_IsBase(true);
        return new QModelIndex(vknscoreitemsmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSibling(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sibling_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_DropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ItemsModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseDropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DropMimeData_IsBase(true);
        return vknscoreitemsmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ItemsModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnDropMimeData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DropMimeData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ItemsModel_Flags(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return static_cast<int>(vknscoreitemsmodel->flags(*index));
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::flags(*index));
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseFlags(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Flags_IsBase(true);
        return static_cast<int>(vknscoreitemsmodel->flags(*index));
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnFlags(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Flags_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ItemsModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseSetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetData_IsBase(true);
        return vknscoreitemsmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ItemsModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNSCore__ItemsModel_HeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QVariant(vknscoreitemsmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreItemsModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KNSCore__ItemsModel_QBaseHeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_HeaderData_IsBase(true);
        return new QVariant(vknscoreitemsmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNSCoreItemsModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnHeaderData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_HeaderData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ItemsModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseSetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetHeaderData_IsBase(true);
        return vknscoreitemsmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNSCore::ItemsModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetHeaderData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetHeaderData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_ItemData(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        QMap<int, QVariant> _ret = vknscoreitemsmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNSCore::ItemsModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_QBaseItemData(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vknscoreitemsmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNSCore::ItemsModel::itemData(*index);
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
void KNSCore__ItemsModel_OnItemData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ItemData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNSCore::ItemsModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseSetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetItemData_IsBase(true);
        return vknscoreitemsmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNSCore::ItemsModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetItemData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SetItemData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_ClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->clearItemData(*index);
    } else {
        return self->KNSCore::ItemsModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ClearItemData_IsBase(true);
        return vknscoreitemsmodel->clearItemData(*index);
    } else {
        return self->KNSCore::ItemsModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnClearItemData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ClearItemData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNSCore__ItemsModel_MimeTypes(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        QList<QString> _ret = vknscoreitemsmodel->mimeTypes();
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
        QList<QString> _ret = self->KNSCore::ItemsModel::mimeTypes();
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
libqt_list /* of libqt_string */ KNSCore__ItemsModel_QBaseMimeTypes(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vknscoreitemsmodel->mimeTypes();
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
        QList<QString> _ret = self->KNSCore::ItemsModel::mimeTypes();
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
void KNSCore__ItemsModel_OnMimeTypes(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MimeTypes_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KNSCore__ItemsModel_MimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->mimeData(indexes_QList);
    } else {
        return self->KNSCore::ItemsModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KNSCore__ItemsModel_QBaseMimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MimeData_IsBase(true);
        return vknscoreitemsmodel->mimeData(indexes_QList);
    } else {
        return self->KNSCore::ItemsModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMimeData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MimeData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_CanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ItemsModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseCanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CanDropMimeData_IsBase(true);
        return vknscoreitemsmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNSCore::ItemsModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCanDropMimeData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ItemsModel_SupportedDropActions(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return static_cast<int>(vknscoreitemsmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::supportedDropActions());
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseSupportedDropActions(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vknscoreitemsmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSupportedDropActions(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ItemsModel_SupportedDragActions(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return static_cast<int>(vknscoreitemsmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::supportedDragActions());
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseSupportedDragActions(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vknscoreitemsmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNSCore::ItemsModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSupportedDragActions(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_InsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseInsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_InsertRows_IsBase(true);
        return vknscoreitemsmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnInsertRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_InsertRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_InsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseInsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_InsertColumns_IsBase(true);
        return vknscoreitemsmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnInsertColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_InsertColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_RemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseRemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RemoveRows_IsBase(true);
        return vknscoreitemsmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRemoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RemoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_RemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseRemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RemoveColumns_IsBase(true);
        return vknscoreitemsmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNSCore::ItemsModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_MoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ItemsModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MoveRows_IsBase(true);
        return vknscoreitemsmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ItemsModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_MoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ItemsModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MoveColumns_IsBase(true);
        return vknscoreitemsmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNSCore::ItemsModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_FetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->fetchMore(*parent);
    } else {
        self->KNSCore::ItemsModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseFetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_FetchMore_IsBase(true);
        vknscoreitemsmodel->fetchMore(*parent);
    } else {
        self->KNSCore::ItemsModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnFetchMore(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_FetchMore_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_CanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->canFetchMore(*parent);
    } else {
        return self->KNSCore::ItemsModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseCanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CanFetchMore_IsBase(true);
        return vknscoreitemsmodel->canFetchMore(*parent);
    } else {
        return self->KNSCore::ItemsModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCanFetchMore(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CanFetchMore_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_Sort(KNSCore__ItemsModel* self, int column, int order) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNSCore::ItemsModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseSort(KNSCore__ItemsModel* self, int column, int order) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sort_IsBase(true);
        vknscoreitemsmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNSCore::ItemsModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSort(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sort_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Buddy(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QModelIndex(vknscoreitemsmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_QBaseBuddy(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Buddy_IsBase(true);
        return new QModelIndex(vknscoreitemsmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNSCoreItemsModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBuddy(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Buddy_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_Match(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        QList<QModelIndex> _ret = vknscoreitemsmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNSCore::ItemsModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_QBaseMatch(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vknscoreitemsmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNSCore::ItemsModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KNSCore__ItemsModel_OnMatch(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Match_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSCore__ItemsModel_Span(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QSize(vknscoreitemsmodel->span(*index));
    } else {
        return new QSize(((VirtualKNSCoreItemsModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KNSCore__ItemsModel_QBaseSpan(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Span_IsBase(true);
        return new QSize(vknscoreitemsmodel->span(*index));
    } else {
        return new QSize(((VirtualKNSCoreItemsModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSpan(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Span_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_RoleNames(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        QHash<int, QByteArray> _ret = vknscoreitemsmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KNSCore::ItemsModel::roleNames();
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
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_QBaseRoleNames(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vknscoreitemsmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KNSCore::ItemsModel::roleNames();
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
void KNSCore__ItemsModel_OnRoleNames(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_RoleNames_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_MultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNSCore::ItemsModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseMultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MultiData_IsBase(true);
        vknscoreitemsmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNSCore::ItemsModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMultiData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_MultiData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_Submit(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->submit();
    } else {
        return self->KNSCore::ItemsModel::submit();
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseSubmit(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Submit_IsBase(true);
        return vknscoreitemsmodel->submit();
    } else {
        return self->KNSCore::ItemsModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSubmit(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Submit_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_Revert(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->revert();
    } else {
        self->KNSCore::ItemsModel::revert();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseRevert(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Revert_IsBase(true);
        vknscoreitemsmodel->revert();
    } else {
        self->KNSCore::ItemsModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRevert(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Revert_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_ResetInternalData(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->resetInternalData();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseResetInternalData(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ResetInternalData_IsBase(true);
        vknscoreitemsmodel->resetInternalData();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnResetInternalData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ResetInternalData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_Event(KNSCore__ItemsModel* self, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->event(event);
    } else {
        return self->KNSCore::ItemsModel::event(event);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseEvent(KNSCore__ItemsModel* self, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Event_IsBase(true);
        return vknscoreitemsmodel->event(event);
    } else {
        return self->KNSCore::ItemsModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Event_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_EventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->eventFilter(watched, event);
    } else {
        return self->KNSCore::ItemsModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseEventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EventFilter_IsBase(true);
        return vknscoreitemsmodel->eventFilter(watched, event);
    } else {
        return self->KNSCore::ItemsModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEventFilter(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_TimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->timerEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseTimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_TimerEvent_IsBase(true);
        vknscoreitemsmodel->timerEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnTimerEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_ChildEvent(KNSCore__ItemsModel* self, QChildEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->childEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseChildEvent(KNSCore__ItemsModel* self, QChildEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChildEvent_IsBase(true);
        vknscoreitemsmodel->childEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnChildEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_CustomEvent(KNSCore__ItemsModel* self, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->customEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseCustomEvent(KNSCore__ItemsModel* self, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CustomEvent_IsBase(true);
        vknscoreitemsmodel->customEvent(event);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCustomEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_ConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ConnectNotify_IsBase(true);
        vknscoreitemsmodel->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnConnectNotify(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_DisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseDisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DisconnectNotify_IsBase(true);
        vknscoreitemsmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnDisconnectNotify(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_CreateIndex(const KNSCore__ItemsModel* self, int row, int column) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return new QModelIndex(vknscoreitemsmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_QBaseCreateIndex(const KNSCore__ItemsModel* self, int row, int column) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CreateIndex_IsBase(true);
        return new QModelIndex(vknscoreitemsmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCreateIndex(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_CreateIndex_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EncodeData_IsBase(true);
        vknscoreitemsmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEncodeData(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EncodeData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_DecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseDecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DecodeData_IsBase(true);
        return vknscoreitemsmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnDecodeData(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_DecodeData_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_BeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseBeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginInsertRows_IsBase(true);
        vknscoreitemsmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginInsertRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndInsertRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endInsertRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndInsertRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndInsertRows_IsBase(true);
        vknscoreitemsmodel->endInsertRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndInsertRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndInsertRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_BeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseBeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginRemoveRows_IsBase(true);
        vknscoreitemsmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginRemoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndRemoveRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endRemoveRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndRemoveRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndRemoveRows_IsBase(true);
        vknscoreitemsmodel->endRemoveRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndRemoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_BeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseBeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginMoveRows_IsBase(true);
        return vknscoreitemsmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginMoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndMoveRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endMoveRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndMoveRows(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndMoveRows_IsBase(true);
        vknscoreitemsmodel->endMoveRows();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndMoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndMoveRows_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_BeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseBeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginInsertColumns_IsBase(true);
        vknscoreitemsmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginInsertColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndInsertColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endInsertColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndInsertColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndInsertColumns_IsBase(true);
        vknscoreitemsmodel->endInsertColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndInsertColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_BeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseBeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginRemoveColumns_IsBase(true);
        vknscoreitemsmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndRemoveColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endRemoveColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndRemoveColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndRemoveColumns_IsBase(true);
        vknscoreitemsmodel->endRemoveColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_BeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseBeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginMoveColumns_IsBase(true);
        return vknscoreitemsmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginMoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndMoveColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endMoveColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndMoveColumns(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndMoveColumns_IsBase(true);
        vknscoreitemsmodel->endMoveColumns();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndMoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_BeginResetModel(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->beginResetModel();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseBeginResetModel(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginResetModel_IsBase(true);
        vknscoreitemsmodel->beginResetModel();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBeginResetModel(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_BeginResetModel_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_EndResetModel(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->endResetModel();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseEndResetModel(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndResetModel_IsBase(true);
        vknscoreitemsmodel->endResetModel();
    } else {
        ((VirtualKNSCoreItemsModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEndResetModel(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_EndResetModel_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_ChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChangePersistentIndex_IsBase(true);
        vknscoreitemsmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnChangePersistentIndex(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__ItemsModel_ChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
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
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_QBaseChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
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
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChangePersistentIndexList_IsBase(true);
        vknscoreitemsmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNSCoreItemsModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnChangePersistentIndexList(KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_PersistentIndexList(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        QList<QModelIndex> _ret = vknscoreitemsmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNSCoreItemsModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_QBasePersistentIndexList(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vknscoreitemsmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNSCoreItemsModel*)self)->persistentIndexList();
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
void KNSCore__ItemsModel_OnPersistentIndexList(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__ItemsModel_Sender(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->sender();
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__ItemsModel_QBaseSender(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sender_IsBase(true);
        return vknscoreitemsmodel->sender();
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSender(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Sender_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ItemsModel_SenderSignalIndex(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseSenderSignalIndex(const KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SenderSignalIndex_IsBase(true);
        return vknscoreitemsmodel->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSenderSignalIndex(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__ItemsModel_Receivers(const KNSCore__ItemsModel* self, const char* signal) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->receivers(signal);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__ItemsModel_QBaseReceivers(const KNSCore__ItemsModel* self, const char* signal) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Receivers_IsBase(true);
        return vknscoreitemsmodel->receivers(signal);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnReceivers(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_Receivers_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__ItemsModel_IsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        return vknscoreitemsmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__ItemsModel_QBaseIsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_IsSignalConnected_IsBase(true);
        return vknscoreitemsmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreItemsModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnIsSignalConnected(const KNSCore__ItemsModel* self, intptr_t slot) {
    auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self));
    if (vknscoreitemsmodel && vknscoreitemsmodel->isVirtualKNSCoreItemsModel) {
        vknscoreitemsmodel->setKNSCore__ItemsModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__ItemsModel_Delete(KNSCore__ItemsModel* self) {
    delete self;
}
