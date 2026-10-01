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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__ItemsModel_Tr(const char* s) {
    auto _ret = KNSCore::ItemsModel::tr(s);
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
    return self->rowCount(*parent);
}

QVariant* KNSCore__ItemsModel_Data(const KNSCore__ItemsModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
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
    KNSCore::ItemsModel::connect(self,
                                 static_cast<void (KNSCore::ItemsModel::*)(KJob*, const QString&)>(&KNSCore::ItemsModel::jobStarted),
                                 [self, slotFunc](KJob* param1, const QString& label) {
                                     KJob* sigval1 = param1;
                                     const auto label_ret = label;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray label_b = label_ret.toUtf8();
                                     auto label_str_len = label_b.length();
                                     const char* label_str = static_cast<const char*>(malloc(label_str_len + 1));
                                     memcpy((void*)label_str, label_b.data(), label_str_len);
                                     ((char*)label_str)[label_str_len] = '\0';
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
    KNSCore::ItemsModel::connect(self,
                                 static_cast<void (KNSCore::ItemsModel::*)(const KNSCore::Entry&, KNSCore::Entry::PreviewType)>(&KNSCore::ItemsModel::loadPreview),
                                 [self, slotFunc](const KNSCore::Entry& entry, KNSCore::Entry::PreviewType typeVal) {
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
    auto _ret = KNSCore::ItemsModel::tr(s, c);
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
    auto _ret = KNSCore::ItemsModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSCore__ItemsModel_SuperMetaObject(const KNSCore__ItemsModel* self) {
    return (QMetaObject*)self->KNSCore::ItemsModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMetaObject(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_metaobject_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSCore__ItemsModel_SuperMetacast(KNSCore__ItemsModel* self, const char* param1) {
    return self->KNSCore::ItemsModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMetacast(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_metacast_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSCore__ItemsModel_SuperMetacall(KNSCore__ItemsModel* self, int param1, int param2, void** param3) {
    return self->KNSCore::ItemsModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMetacall(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_metacall_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KNSCore__ItemsModel_SuperRowCount(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRowCount(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_rowcount_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KNSCore__ItemsModel_SuperData(const KNSCore__ItemsModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KNSCore::ItemsModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_data_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Data_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Index(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_SuperIndex(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KNSCore::ItemsModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnIndex(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_index_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Sibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_SuperSibling(const KNSCore__ItemsModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KNSCore::ItemsModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSibling(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_sibling_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_DropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperDropMimeData(KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnDropMimeData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_dropmimedata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ItemsModel_Flags(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KNSCore__ItemsModel_SuperFlags(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KNSCore::ItemsModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnFlags(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_flags_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperSetData(KNSCore__ItemsModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KNSCore::ItemsModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_setdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNSCore__ItemsModel_HeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KNSCore__ItemsModel_SuperHeaderData(const KNSCore__ItemsModel* self, int section, int orientation, int role) {
    return new QVariant(self->KNSCore::ItemsModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnHeaderData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_headerdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperSetHeaderData(KNSCore__ItemsModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KNSCore::ItemsModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetHeaderData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_setheaderdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_ItemData(const KNSCore__ItemsModel* self, const QModelIndex* index) {
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KNSCore__ItemsModel_SuperItemData(const KNSCore__ItemsModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnItemData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_itemdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_SetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperSetItemData(KNSCore__ItemsModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KNSCore::ItemsModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSetItemData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_setitemdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_ClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperClearItemData(KNSCore__ItemsModel* self, const QModelIndex* index) {
    return self->KNSCore::ItemsModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnClearItemData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_clearitemdata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNSCore__ItemsModel_MimeTypes(const KNSCore__ItemsModel* self) {
    QList<QString> _ret = self->mimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

// Base class handler implementation
libqt_list /* of libqt_string */ KNSCore__ItemsModel_SuperMimeTypes(const KNSCore__ItemsModel* self) {
    QList<QString> _ret = self->KNSCore::ItemsModel::mimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMimeTypes(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_mimetypes_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KNSCore__ItemsModel_MimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KNSCore__ItemsModel_SuperMimeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KNSCore::ItemsModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMimeData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_mimedata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_CanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperCanDropMimeData(const KNSCore__ItemsModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCanDropMimeData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_candropmimedata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ItemsModel_SupportedDropActions(const KNSCore__ItemsModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KNSCore__ItemsModel_SuperSupportedDropActions(const KNSCore__ItemsModel* self) {
    return static_cast<int>(self->KNSCore::ItemsModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSupportedDropActions(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_supporteddropactions_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KNSCore__ItemsModel_SupportedDragActions(const KNSCore__ItemsModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KNSCore__ItemsModel_SuperSupportedDragActions(const KNSCore__ItemsModel* self) {
    return static_cast<int>(self->KNSCore::ItemsModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSupportedDragActions(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_supporteddragactions_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_InsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperInsertRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnInsertRows(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_insertrows_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_InsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperInsertColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnInsertColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_insertcolumns_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_RemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperRemoveRows(KNSCore__ItemsModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRemoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_removerows_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_RemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperRemoveColumns(KNSCore__ItemsModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRemoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_removecolumns_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_MoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNSCore::ItemsModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMoveRows(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_moverows_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_MoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNSCore::ItemsModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMoveColumns(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_movecolumns_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_FetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperFetchMore(KNSCore__ItemsModel* self, const QModelIndex* parent) {
    self->KNSCore::ItemsModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnFetchMore(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_fetchmore_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_CanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperCanFetchMore(const KNSCore__ItemsModel* self, const QModelIndex* parent) {
    return self->KNSCore::ItemsModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCanFetchMore(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_canfetchmore_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_Sort(KNSCore__ItemsModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperSort(KNSCore__ItemsModel* self, int column, int order) {
    self->KNSCore::ItemsModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSort(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_sort_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_Buddy(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KNSCore__ItemsModel_SuperBuddy(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KNSCore::ItemsModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnBuddy(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_buddy_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_Match(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_SuperMatch(const KNSCore__ItemsModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KNSCore::ItemsModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMatch(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_match_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSCore__ItemsModel_Span(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KNSCore__ItemsModel_SuperSpan(const KNSCore__ItemsModel* self, const QModelIndex* index) {
    return new QSize(self->KNSCore::ItemsModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSpan(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_span_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_RoleNames(const KNSCore__ItemsModel* self) {
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
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KNSCore__ItemsModel_SuperRoleNames(const KNSCore__ItemsModel* self) {
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
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRoleNames(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_rolenames_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_MultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperMultiData(const KNSCore__ItemsModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KNSCore::ItemsModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnMultiData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        vknscoreitemsmodel->knscore__itemsmodel_multidata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_Submit(KNSCore__ItemsModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperSubmit(KNSCore__ItemsModel* self) {
    return self->KNSCore::ItemsModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnSubmit(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_submit_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_Revert(KNSCore__ItemsModel* self) {
    self->revert();
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperRevert(KNSCore__ItemsModel* self) {
    self->KNSCore::ItemsModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnRevert(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_revert_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_ResetInternalData(KNSCore__ItemsModel* self) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperResetInternalData(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnResetInternalData(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_resetinternaldata_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_Event(KNSCore__ItemsModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperEvent(KNSCore__ItemsModel* self, QEvent* event) {
    return self->KNSCore::ItemsModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_event_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__ItemsModel_EventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNSCore__ItemsModel_SuperEventFilter(KNSCore__ItemsModel* self, QObject* watched, QEvent* event) {
    return self->KNSCore::ItemsModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnEventFilter(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_eventfilter_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_TimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperTimerEvent(KNSCore__ItemsModel* self, QTimerEvent* event) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnTimerEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_timerevent_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_ChildEvent(KNSCore__ItemsModel* self, QChildEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperChildEvent(KNSCore__ItemsModel* self, QChildEvent* event) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnChildEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_childevent_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_CustomEvent(KNSCore__ItemsModel* self, QEvent* event) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperCustomEvent(KNSCore__ItemsModel* self, QEvent* event) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnCustomEvent(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_customevent_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_ConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperConnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnConnectNotify(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_connectnotify_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__ItemsModel_DisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self);
    if (vknscoreitemsmodel) {
        vknscoreitemsmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__ItemsModel_SuperDisconnectNotify(KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->KNSCore::ItemsModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::ItemsModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__ItemsModel_OnDisconnectNotify(KNSCore__ItemsModel* self, intptr_t slot) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self))
        vknscoreitemsmodel->knscore__itemsmodel_disconnectnotify_callback = reinterpret_cast<VirtualKNSCoreItemsModel::KNSCore__ItemsModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNSCore__ItemsModel_CreateIndex(const KNSCore__ItemsModel* self, int row, int column) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self)))
        return new QModelIndex(vknscoreitemsmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KNSCore::ItemsModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EncodeData(const KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ItemsModel_DecodeData(KNSCore__ItemsModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_BeginInsertRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndInsertRows(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endInsertRows();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_BeginRemoveRows(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndRemoveRows(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ItemsModel_BeginMoveRows(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndMoveRows(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endMoveRows();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_BeginInsertColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndInsertColumns(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_BeginRemoveColumns(KNSCore__ItemsModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndRemoveColumns(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ItemsModel_BeginMoveColumns(KNSCore__ItemsModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndMoveColumns(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_BeginResetModel(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::beginResetModel();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_EndResetModel(KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::endResetModel();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_ChangePersistentIndex(KNSCore__ItemsModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSCore__ItemsModel_ChangePersistentIndexList(KNSCore__ItemsModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vknscoreitemsmodel = dynamic_cast<VirtualKNSCoreItemsModel*>(self)) {
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
        vknscoreitemsmodel->VirtualKNSCoreItemsModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KNSCore__ItemsModel_PersistentIndexList(const KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        QList<QModelIndex> _ret = vknscoreitemsmodel->VirtualKNSCoreItemsModel::persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNSCore__ItemsModel_Sender(const KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::sender();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__ItemsModel_SenderSignalIndex(const KNSCore__ItemsModel* self) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__ItemsModel_Receivers(const KNSCore__ItemsModel* self, const char* signal) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::receivers(signal);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__ItemsModel_IsSignalConnected(const KNSCore__ItemsModel* self, const QMetaMethod* signal) {
    if (auto* vknscoreitemsmodel = const_cast<VirtualKNSCoreItemsModel*>(dynamic_cast<const VirtualKNSCoreItemsModel*>(self))) {
        return vknscoreitemsmodel->VirtualKNSCoreItemsModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSCore::ItemsModel::isSignalConnected called without a directly constructed type");
}

void KNSCore__ItemsModel_Delete(KNSCore__ItemsModel* self) {
    delete self;
}
