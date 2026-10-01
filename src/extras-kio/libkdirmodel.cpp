#include <KDirLister>
#include <KDirModel>
#include <KFileItem>
#include <QAbstractItemModel>
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
#include <QUrl>
#include <QVariant>
#include <kdirmodel.h>
#include "libkdirmodel.h"
#include "libkdirmodel.hxx"

KDirModel* KDirModel_new() {
    return new VirtualKDirModel();
}

KDirModel* KDirModel_new2(QObject* parent) {
    return new VirtualKDirModel(parent);
}

QMetaObject* KDirModel_MetaObject(const KDirModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirModel_Metacast(KDirModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirModel_Metacall(KDirModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDirModel_Tr(const char* s) {
    auto _ret = KDirModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirModel_OpenUrl(KDirModel* self, const QUrl* url) {
    self->openUrl(*url);
}

void KDirModel_SetDirLister(KDirModel* self, KDirLister* dirLister) {
    self->setDirLister(dirLister);
}

KDirLister* KDirModel_DirLister(const KDirModel* self) {
    return self->dirLister();
}

KFileItem* KDirModel_ItemForIndex(const KDirModel* self, const QModelIndex* index) {
    return new KFileItem(self->itemForIndex(*index));
}

QModelIndex* KDirModel_IndexForItem(const KDirModel* self, const KFileItem* param1) {
    return new QModelIndex(self->indexForItem(*param1));
}

QModelIndex* KDirModel_IndexForUrl(const KDirModel* self, const QUrl* url) {
    return new QModelIndex(self->indexForUrl(*url));
}

void KDirModel_ExpandToUrl(KDirModel* self, const QUrl* url) {
    self->expandToUrl(*url);
}

void KDirModel_ItemChanged(KDirModel* self, const QModelIndex* index) {
    self->itemChanged(*index);
}

void KDirModel_ClearAllPreviews(KDirModel* self) {
    self->clearAllPreviews();
}

void KDirModel_SetDropsAllowed(KDirModel* self, int dropsAllowed) {
    self->setDropsAllowed(static_cast<QFlags<KDirModel::DropsAllowedFlag>>(dropsAllowed));
}

bool KDirModel_CanFetchMore(const KDirModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

int KDirModel_ColumnCount(const KDirModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* KDirModel_Data(const KDirModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool KDirModel_DropMimeData(KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void KDirModel_FetchMore(KDirModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

int KDirModel_Flags(const KDirModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

bool KDirModel_HasChildren(const KDirModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QVariant* KDirModel_HeaderData(const KDirModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

QModelIndex* KDirModel_Index(const KDirModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QMimeData* KDirModel_MimeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

libqt_list /* of libqt_string */ KDirModel_MimeTypes(const KDirModel* self) {
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

QModelIndex* KDirModel_Parent(const KDirModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

QModelIndex* KDirModel_Sibling(const KDirModel* self, int row, int column, const QModelIndex* index) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *index));
}

int KDirModel_RowCount(const KDirModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

bool KDirModel_SetData(KDirModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

void KDirModel_Sort(KDirModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_map /* of int to libqt_string */ KDirModel_RoleNames(const KDirModel* self) {
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

libqt_list /* of QUrl* */ KDirModel_SimplifiedUrlList(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QList<QUrl> _ret = KDirModel::simplifiedUrlList(urls_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirModel_RequestSequenceIcon(KDirModel* self, const QModelIndex* index, int sequenceIndex) {
    self->requestSequenceIcon(*index, static_cast<int>(sequenceIndex));
}

void KDirModel_SetJobTransfersVisible(KDirModel* self, bool show) {
    self->setJobTransfersVisible(show);
}

bool KDirModel_JobTransfersVisible(const KDirModel* self) {
    return self->jobTransfersVisible();
}

int KDirModel_SupportedDropActions(const KDirModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

void KDirModel_Expand(KDirModel* self, const QModelIndex* index) {
    self->expand(*index);
}

void KDirModel_Connect_Expand(KDirModel* self, intptr_t slot) {
    void (*slotFunc)(KDirModel*, QModelIndex*) = reinterpret_cast<void (*)(KDirModel*, QModelIndex*)>(slot);
    KDirModel::connect(self,
                       static_cast<void (KDirModel::*)(const QModelIndex&)>(&KDirModel::expand),
                       [self, slotFunc](const QModelIndex& index) {
                           const QModelIndex& index_ret = index;
                           // Cast returned reference into pointer
                           QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                           slotFunc(self, sigval1);
                       });
}

void KDirModel_NeedSequenceIcon(KDirModel* self, const QModelIndex* index, int sequenceIndex) {
    self->needSequenceIcon(*index, static_cast<int>(sequenceIndex));
}

void KDirModel_Connect_NeedSequenceIcon(KDirModel* self, intptr_t slot) {
    void (*slotFunc)(KDirModel*, QModelIndex*, int) = reinterpret_cast<void (*)(KDirModel*, QModelIndex*, int)>(slot);
    KDirModel::connect(self,
                       static_cast<void (KDirModel::*)(const QModelIndex&, int)>(&KDirModel::needSequenceIcon),
                       [self, slotFunc](const QModelIndex& index, int sequenceIndex) {
                           const QModelIndex& index_ret = index;
                           // Cast returned reference into pointer
                           QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                           int sigval2 = sequenceIndex;
                           slotFunc(self, sigval1, sigval2);
                       });
}

libqt_string KDirModel_Tr2(const char* s, const char* c) {
    auto _ret = KDirModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDirModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirModel_OpenUrl2(KDirModel* self, const QUrl* url, int flags) {
    self->openUrl(*url, static_cast<KDirModel::OpenUrlFlags>(flags));
}

// Base class handler implementation
QMetaObject* KDirModel_SuperMetaObject(const KDirModel* self) {
    return (QMetaObject*)self->KDirModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMetaObject(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_metaobject_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDirModel_SuperMetacast(KDirModel* self, const char* param1) {
    return self->KDirModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMetacast(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_metacast_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDirModel_SuperMetacall(KDirModel* self, int param1, int param2, void** param3) {
    return self->KDirModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMetacall(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_metacall_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KDirModel_SuperCanFetchMore(const KDirModel* self, const QModelIndex* parent) {
    return self->KDirModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCanFetchMore(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_canfetchmore_callback = reinterpret_cast<VirtualKDirModel::KDirModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
int KDirModel_SuperColumnCount(const KDirModel* self, const QModelIndex* parent) {
    return self->KDirModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnColumnCount(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_columncount_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KDirModel_SuperData(const KDirModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KDirModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_data_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Data_Callback>(slot);
}

// Base class handler implementation
bool KDirModel_SuperDropMimeData(KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDirModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnDropMimeData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_dropmimedata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
void KDirModel_SuperFetchMore(KDirModel* self, const QModelIndex* parent) {
    self->KDirModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnFetchMore(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_fetchmore_callback = reinterpret_cast<VirtualKDirModel::KDirModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
int KDirModel_SuperFlags(const KDirModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KDirModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnFlags(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_flags_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Flags_Callback>(slot);
}

// Base class handler implementation
bool KDirModel_SuperHasChildren(const KDirModel* self, const QModelIndex* parent) {
    return self->KDirModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnHasChildren(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_haschildren_callback = reinterpret_cast<VirtualKDirModel::KDirModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QVariant* KDirModel_SuperHeaderData(const KDirModel* self, int section, int orientation, int role) {
    return new QVariant(self->KDirModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnHeaderData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_headerdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDirModel_SuperIndex(const KDirModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KDirModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnIndex(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_index_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Index_Callback>(slot);
}

// Base class handler implementation
QMimeData* KDirModel_SuperMimeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KDirModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMimeData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_mimedata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MimeData_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KDirModel_SuperMimeTypes(const KDirModel* self) {
    QList<QString> _ret = self->KDirModel::mimeTypes();
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
void KDirModel_OnMimeTypes(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_mimetypes_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDirModel_SuperParent(const KDirModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KDirModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnParent(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_parent_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDirModel_SuperSibling(const KDirModel* self, int row, int column, const QModelIndex* index) {
    return new QModelIndex(self->KDirModel::sibling(static_cast<int>(row), static_cast<int>(column), *index));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSibling(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_sibling_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Sibling_Callback>(slot);
}

// Base class handler implementation
int KDirModel_SuperRowCount(const KDirModel* self, const QModelIndex* parent) {
    return self->KDirModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnRowCount(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_rowcount_callback = reinterpret_cast<VirtualKDirModel::KDirModel_RowCount_Callback>(slot);
}

// Base class handler implementation
bool KDirModel_SuperSetData(KDirModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KDirModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_setdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_SetData_Callback>(slot);
}

// Base class handler implementation
void KDirModel_SuperSort(KDirModel* self, int column, int order) {
    self->KDirModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSort(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_sort_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Sort_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KDirModel_SuperRoleNames(const KDirModel* self) {
    QHash<int, QByteArray> _ret = self->KDirModel::roleNames();
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
void KDirModel_OnRoleNames(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_rolenames_callback = reinterpret_cast<VirtualKDirModel::KDirModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
int KDirModel_SuperSupportedDropActions(const KDirModel* self) {
    return static_cast<int>(self->KDirModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSupportedDropActions(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_supporteddropactions_callback = reinterpret_cast<VirtualKDirModel::KDirModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_SetHeaderData(KDirModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KDirModel_SuperSetHeaderData(KDirModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KDirModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetHeaderData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_setheaderdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDirModel_ItemData(const KDirModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KDirModel_SuperItemData(const KDirModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KDirModel::itemData(*index);
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
void KDirModel_OnItemData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_itemdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_SetItemData(KDirModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KDirModel_SuperSetItemData(KDirModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KDirModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetItemData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_setitemdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_ClearItemData(KDirModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KDirModel_SuperClearItemData(KDirModel* self, const QModelIndex* index) {
    return self->KDirModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnClearItemData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_clearitemdata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_CanDropMimeData(const KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KDirModel_SuperCanDropMimeData(const KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDirModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCanDropMimeData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_candropmimedata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KDirModel_SupportedDragActions(const KDirModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KDirModel_SuperSupportedDragActions(const KDirModel* self) {
    return static_cast<int>(self->KDirModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSupportedDragActions(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_supporteddragactions_callback = reinterpret_cast<VirtualKDirModel::KDirModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_MoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDirModel_SuperMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDirModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMoveRows(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_moverows_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_MoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDirModel_SuperMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDirModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMoveColumns(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_movecolumns_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirModel_Buddy(const KDirModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KDirModel_SuperBuddy(const KDirModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KDirModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBuddy(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_buddy_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirModel_Match(const KDirModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KDirModel_SuperMatch(const KDirModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KDirModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDirModel_OnMatch(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_match_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KDirModel_Span(const KDirModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KDirModel_SuperSpan(const KDirModel* self, const QModelIndex* index) {
    return new QSize(self->KDirModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSpan(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_span_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Span_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_MultiData(const KDirModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KDirModel_SuperMultiData(const KDirModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KDirModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMultiData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        vkdirmodel->kdirmodel_multidata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_Submit(KDirModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KDirModel_SuperSubmit(KDirModel* self) {
    return self->KDirModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSubmit(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_submit_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_Revert(KDirModel* self) {
    self->revert();
}

// Base class handler implementation
void KDirModel_SuperRevert(KDirModel* self) {
    self->KDirModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnRevert(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_revert_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_ResetInternalData(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KDirModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperResetInternalData(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KDirModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnResetInternalData(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_resetinternaldata_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_Event(KDirModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDirModel_SuperEvent(KDirModel* self, QEvent* event) {
    return self->KDirModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEvent(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_event_callback = reinterpret_cast<VirtualKDirModel::KDirModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDirModel_EventFilter(KDirModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDirModel_SuperEventFilter(KDirModel* self, QObject* watched, QEvent* event) {
    return self->KDirModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEventFilter(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_eventfilter_callback = reinterpret_cast<VirtualKDirModel::KDirModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_TimerEvent(KDirModel* self, QTimerEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperTimerEvent(KDirModel* self, QTimerEvent* event) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnTimerEvent(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_timerevent_callback = reinterpret_cast<VirtualKDirModel::KDirModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_ChildEvent(KDirModel* self, QChildEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperChildEvent(KDirModel* self, QChildEvent* event) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnChildEvent(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_childevent_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_CustomEvent(KDirModel* self, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperCustomEvent(KDirModel* self, QEvent* event) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCustomEvent(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_customevent_callback = reinterpret_cast<VirtualKDirModel::KDirModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_ConnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperConnectNotify(KDirModel* self, const QMetaMethod* signal) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnConnectNotify(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_connectnotify_callback = reinterpret_cast<VirtualKDirModel::KDirModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDirModel_DisconnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel) {
        vkdirmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirModel_SuperDisconnectNotify(KDirModel* self, const QMetaMethod* signal) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->KDirModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnDisconnectNotify(KDirModel* self, intptr_t slot) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self))
        vkdirmodel->kdirmodel_disconnectnotify_callback = reinterpret_cast<VirtualKDirModel::KDirModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDirModel_CreateIndex(const KDirModel* self, int row, int column) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self)))
        return new QModelIndex(vkdirmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KDirModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EncodeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkdirmodel->VirtualKDirModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KDirModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirModel_DecodeData(KDirModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        return vkdirmodel->VirtualKDirModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KDirModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_BeginInsertRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndInsertRows(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endInsertRows();
    } else
        qFatal("Error: Protected method KDirModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_BeginRemoveRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndRemoveRows(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KDirModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirModel_BeginMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        return vkdirmodel->VirtualKDirModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KDirModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndMoveRows(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endMoveRows();
    } else
        qFatal("Error: Protected method KDirModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_BeginInsertColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndInsertColumns(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KDirModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_BeginRemoveColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDirModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndRemoveColumns(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KDirModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirModel_BeginMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        return vkdirmodel->VirtualKDirModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KDirModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndMoveColumns(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KDirModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_BeginResetModel(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::beginResetModel();
    } else
        qFatal("Error: Protected method KDirModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_EndResetModel(KDirModel* self) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::endResetModel();
    } else
        qFatal("Error: Protected method KDirModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_ChangePersistentIndex(KDirModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
        vkdirmodel->VirtualKDirModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KDirModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirModel_ChangePersistentIndexList(KDirModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self)) {
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
        vkdirmodel->VirtualKDirModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KDirModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KDirModel_PersistentIndexList(const KDirModel* self) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        QList<QModelIndex> _ret = vkdirmodel->VirtualKDirModel::persistentIndexList();
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
        qFatal("Error: Protected method KDirModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDirModel_Sender(const KDirModel* self) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        return vkdirmodel->VirtualKDirModel::sender();
    } else
        qFatal("Error: Protected method KDirModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirModel_SenderSignalIndex(const KDirModel* self) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        return vkdirmodel->VirtualKDirModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDirModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirModel_Receivers(const KDirModel* self, const char* signal) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        return vkdirmodel->VirtualKDirModel::receivers(signal);
    } else
        qFatal("Error: Protected method KDirModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirModel_IsSignalConnected(const KDirModel* self, const QMetaMethod* signal) {
    if (auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self))) {
        return vkdirmodel->VirtualKDirModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDirModel::isSignalConnected called without a directly constructed type");
}

void KDirModel_Delete(KDirModel* self) {
    delete self;
}
