#include <KDescendantsProxyModel>
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
#include <QTimerEvent>
#include <QVariant>
#include <kdescendantsproxymodel.h>
#include "libkdescendantsproxymodel.h"
#include "libkdescendantsproxymodel.hxx"

KDescendantsProxyModel* KDescendantsProxyModel_new() {
    return new VirtualKDescendantsProxyModel();
}

KDescendantsProxyModel* KDescendantsProxyModel_new2(QObject* parent) {
    return new VirtualKDescendantsProxyModel(parent);
}

QMetaObject* KDescendantsProxyModel_MetaObject(const KDescendantsProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDescendantsProxyModel_Metacast(KDescendantsProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDescendantsProxyModel_Metacall(KDescendantsProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDescendantsProxyModel_Tr(const char* s) {
    auto _ret = KDescendantsProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDescendantsProxyModel_SetSourceModel(KDescendantsProxyModel* self, QAbstractItemModel* model) {
    self->setSourceModel(model);
}

void KDescendantsProxyModel_SetDisplayAncestorData(KDescendantsProxyModel* self, bool display) {
    self->setDisplayAncestorData(display);
}

bool KDescendantsProxyModel_DisplayAncestorData(const KDescendantsProxyModel* self) {
    return self->displayAncestorData();
}

void KDescendantsProxyModel_SetAncestorSeparator(KDescendantsProxyModel* self, const libqt_string separator) {
    QString separator_QString = QString::fromUtf8(separator.data, separator.len);
    self->setAncestorSeparator(separator_QString);
}

libqt_string KDescendantsProxyModel_AncestorSeparator(const KDescendantsProxyModel* self) {
    auto _ret = self->ancestorSeparator();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QModelIndex* KDescendantsProxyModel_MapFromSource(const KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* KDescendantsProxyModel_MapToSource(const KDescendantsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

int KDescendantsProxyModel_Flags(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QVariant* KDescendantsProxyModel_Data(const KDescendantsProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

int KDescendantsProxyModel_RowCount(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* KDescendantsProxyModel_HeaderData(const KDescendantsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

QMimeData* KDescendantsProxyModel_MimeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

libqt_list /* of libqt_string */ KDescendantsProxyModel_MimeTypes(const KDescendantsProxyModel* self) {
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

bool KDescendantsProxyModel_HasChildren(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QModelIndex* KDescendantsProxyModel_Index(const KDescendantsProxyModel* self, int param1, int param2, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(param1), static_cast<int>(param2), *parent));
}

QModelIndex* KDescendantsProxyModel_Parent(const KDescendantsProxyModel* self, const QModelIndex* param1) {
    return new QModelIndex(self->parent(*param1));
}

int KDescendantsProxyModel_ColumnCount(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return self->columnCount(*index);
}

libqt_map /* of int to libqt_string */ KDescendantsProxyModel_RoleNames(const KDescendantsProxyModel* self) {
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

void KDescendantsProxyModel_SetExpandsByDefault(KDescendantsProxyModel* self, bool expand) {
    self->setExpandsByDefault(expand);
}

bool KDescendantsProxyModel_ExpandsByDefault(const KDescendantsProxyModel* self) {
    return self->expandsByDefault();
}

bool KDescendantsProxyModel_IsSourceIndexExpanded(const KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    return self->isSourceIndexExpanded(*sourceIndex);
}

bool KDescendantsProxyModel_IsSourceIndexVisible(const KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    return self->isSourceIndexVisible(*sourceIndex);
}

void KDescendantsProxyModel_ExpandSourceIndex(KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    self->expandSourceIndex(*sourceIndex);
}

void KDescendantsProxyModel_CollapseSourceIndex(KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    self->collapseSourceIndex(*sourceIndex);
}

int KDescendantsProxyModel_SupportedDropActions(const KDescendantsProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

libqt_list /* of QModelIndex* */ KDescendantsProxyModel_Match(const KDescendantsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

void KDescendantsProxyModel_SourceModelChanged(KDescendantsProxyModel* self) {
    self->sourceModelChanged();
}

void KDescendantsProxyModel_Connect_SourceModelChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)()>(&KDescendantsProxyModel::sourceModelChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void KDescendantsProxyModel_DisplayAncestorDataChanged(KDescendantsProxyModel* self) {
    self->displayAncestorDataChanged();
}

void KDescendantsProxyModel_Connect_DisplayAncestorDataChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)()>(&KDescendantsProxyModel::displayAncestorDataChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void KDescendantsProxyModel_AncestorSeparatorChanged(KDescendantsProxyModel* self) {
    self->ancestorSeparatorChanged();
}

void KDescendantsProxyModel_Connect_AncestorSeparatorChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)()>(&KDescendantsProxyModel::ancestorSeparatorChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void KDescendantsProxyModel_ExpandsByDefaultChanged(KDescendantsProxyModel* self, bool expands) {
    self->expandsByDefaultChanged(expands);
}

void KDescendantsProxyModel_Connect_ExpandsByDefaultChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*, bool) = reinterpret_cast<void (*)(KDescendantsProxyModel*, bool)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)(bool)>(&KDescendantsProxyModel::expandsByDefaultChanged),
                                    [self, slotFunc](bool expands) {
                                        bool sigval1 = expands;
                                        slotFunc(self, sigval1);
                                    });
}

void KDescendantsProxyModel_SourceIndexExpanded(KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    self->sourceIndexExpanded(*sourceIndex);
}

void KDescendantsProxyModel_Connect_SourceIndexExpanded(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KDescendantsProxyModel*, QModelIndex*)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)(const QModelIndex&)>(&KDescendantsProxyModel::sourceIndexExpanded),
                                    [self, slotFunc](const QModelIndex& sourceIndex) {
                                        const QModelIndex& sourceIndex_ret = sourceIndex;
                                        // Cast returned reference into pointer
                                        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void KDescendantsProxyModel_SourceIndexCollapsed(KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    self->sourceIndexCollapsed(*sourceIndex);
}

void KDescendantsProxyModel_Connect_SourceIndexCollapsed(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KDescendantsProxyModel*, QModelIndex*)>(slot);
    KDescendantsProxyModel::connect(self,
                                    static_cast<void (KDescendantsProxyModel::*)(const QModelIndex&)>(&KDescendantsProxyModel::sourceIndexCollapsed),
                                    [self, slotFunc](const QModelIndex& sourceIndex) {
                                        const QModelIndex& sourceIndex_ret = sourceIndex;
                                        // Cast returned reference into pointer
                                        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
                                        slotFunc(self, sigval1);
                                    });
}

libqt_string KDescendantsProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = KDescendantsProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDescendantsProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDescendantsProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDescendantsProxyModel_SuperMetaObject(const KDescendantsProxyModel* self) {
    return (QMetaObject*)self->KDescendantsProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMetaObject(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_metaobject_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDescendantsProxyModel_SuperMetacast(KDescendantsProxyModel* self, const char* param1) {
    return self->KDescendantsProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMetacast(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_metacast_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDescendantsProxyModel_SuperMetacall(KDescendantsProxyModel* self, int param1, int param2, void** param3) {
    return self->KDescendantsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMetacall(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_metacall_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KDescendantsProxyModel_SuperSetSourceModel(KDescendantsProxyModel* self, QAbstractItemModel* model) {
    self->KDescendantsProxyModel::setSourceModel(model);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetSourceModel(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetSourceModel_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperMapFromSource(const KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->KDescendantsProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapFromSource(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_mapfromsource_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapFromSource_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperMapToSource(const KDescendantsProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->KDescendantsProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapToSource(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_maptosource_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapToSource_Callback>(slot);
}

// Base class handler implementation
int KDescendantsProxyModel_SuperFlags(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KDescendantsProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnFlags(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_flags_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
QVariant* KDescendantsProxyModel_SuperData(const KDescendantsProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KDescendantsProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_data_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
int KDescendantsProxyModel_SuperRowCount(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRowCount(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_rowcount_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KDescendantsProxyModel_SuperHeaderData(const KDescendantsProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->KDescendantsProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnHeaderData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_headerdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
QMimeData* KDescendantsProxyModel_SuperMimeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KDescendantsProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMimeData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_mimedata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MimeData_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KDescendantsProxyModel_SuperMimeTypes(const KDescendantsProxyModel* self) {
    QList<QString> _ret = self->KDescendantsProxyModel::mimeTypes();
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
void KDescendantsProxyModel_OnMimeTypes(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_mimetypes_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperHasChildren(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnHasChildren(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_haschildren_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperIndex(const KDescendantsProxyModel* self, int param1, int param2, const QModelIndex* parent) {
    return new QModelIndex(self->KDescendantsProxyModel::index(static_cast<int>(param1), static_cast<int>(param2), *parent));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnIndex(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_index_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperParent(const KDescendantsProxyModel* self, const QModelIndex* param1) {
    return new QModelIndex(self->KDescendantsProxyModel::parent(*param1));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnParent(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_parent_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
int KDescendantsProxyModel_SuperColumnCount(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return self->KDescendantsProxyModel::columnCount(*index);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnColumnCount(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_columncount_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KDescendantsProxyModel_SuperRoleNames(const KDescendantsProxyModel* self) {
    QHash<int, QByteArray> _ret = self->KDescendantsProxyModel::roleNames();
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
void KDescendantsProxyModel_OnRoleNames(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_rolenames_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
int KDescendantsProxyModel_SuperSupportedDropActions(const KDescendantsProxyModel* self) {
    return static_cast<int>(self->KDescendantsProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSupportedDropActions(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KDescendantsProxyModel_SuperMatch(const KDescendantsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KDescendantsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDescendantsProxyModel_OnMatch(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_match_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KDescendantsProxyModel_MapSelectionToSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionToSource(*selection));
}

// Base class handler implementation
QItemSelection* KDescendantsProxyModel_SuperMapSelectionToSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KDescendantsProxyModel::mapSelectionToSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapSelectionToSource(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* KDescendantsProxyModel_MapSelectionFromSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->mapSelectionFromSource(*selection));
}

// Base class handler implementation
QItemSelection* KDescendantsProxyModel_SuperMapSelectionFromSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    return new QItemSelection(self->KDescendantsProxyModel::mapSelectionFromSource(*selection));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapSelectionFromSource(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_Submit(KDescendantsProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperSubmit(KDescendantsProxyModel* self) {
    return self->KDescendantsProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSubmit(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_submit_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_Revert(KDescendantsProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void KDescendantsProxyModel_SuperRevert(KDescendantsProxyModel* self) {
    self->KDescendantsProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRevert(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_revert_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDescendantsProxyModel_ItemData(const KDescendantsProxyModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KDescendantsProxyModel_SuperItemData(const KDescendantsProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KDescendantsProxyModel::itemData(*index);
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
void KDescendantsProxyModel_OnItemData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_itemdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetData(KDescendantsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperSetData(KDescendantsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KDescendantsProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_setdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetItemData(KDescendantsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperSetItemData(KDescendantsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KDescendantsProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetItemData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_setitemdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetHeaderData(KDescendantsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperSetHeaderData(KDescendantsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KDescendantsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetHeaderData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_setheaderdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_ClearItemData(KDescendantsProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperClearItemData(KDescendantsProxyModel* self, const QModelIndex* index) {
    return self->KDescendantsProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnClearItemData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_clearitemdata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_Buddy(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperBuddy(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KDescendantsProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBuddy(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_buddy_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_CanFetchMore(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperCanFetchMore(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCanFetchMore(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_canfetchmore_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_FetchMore(KDescendantsProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KDescendantsProxyModel_SuperFetchMore(KDescendantsProxyModel* self, const QModelIndex* parent) {
    self->KDescendantsProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnFetchMore(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_fetchmore_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_Sort(KDescendantsProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KDescendantsProxyModel_SuperSort(KDescendantsProxyModel* self, int column, int order) {
    self->KDescendantsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSort(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_sort_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QSize* KDescendantsProxyModel_Span(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KDescendantsProxyModel_SuperSpan(const KDescendantsProxyModel* self, const QModelIndex* index) {
    return new QSize(self->KDescendantsProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSpan(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_span_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_Sibling(const KDescendantsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_SuperSibling(const KDescendantsProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KDescendantsProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSibling(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_sibling_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_CanDropMimeData(const KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperCanDropMimeData(const KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCanDropMimeData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_candropmimedata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_DropMimeData(KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperDropMimeData(KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnDropMimeData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_dropmimedata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KDescendantsProxyModel_SupportedDragActions(const KDescendantsProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KDescendantsProxyModel_SuperSupportedDragActions(const KDescendantsProxyModel* self) {
    return static_cast<int>(self->KDescendantsProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSupportedDragActions(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_InsertRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperInsertRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnInsertRows(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_insertrows_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_InsertColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperInsertColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnInsertColumns(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_insertcolumns_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_RemoveRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperRemoveRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRemoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_removerows_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_RemoveColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperRemoveColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->KDescendantsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRemoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_removecolumns_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_MoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDescendantsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_moverows_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_MoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KDescendantsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_movecolumns_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_MultiData(const KDescendantsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KDescendantsProxyModel_SuperMultiData(const KDescendantsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KDescendantsProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMultiData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        vkdescendantsproxymodel->kdescendantsproxymodel_multidata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_ResetInternalData(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperResetInternalData(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnResetInternalData(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_Event(KDescendantsProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperEvent(KDescendantsProxyModel* self, QEvent* event) {
    return self->KDescendantsProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEvent(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_event_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDescendantsProxyModel_EventFilter(KDescendantsProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDescendantsProxyModel_SuperEventFilter(KDescendantsProxyModel* self, QObject* watched, QEvent* event) {
    return self->KDescendantsProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEventFilter(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_eventfilter_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_TimerEvent(KDescendantsProxyModel* self, QTimerEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperTimerEvent(KDescendantsProxyModel* self, QTimerEvent* event) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnTimerEvent(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_timerevent_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_ChildEvent(KDescendantsProxyModel* self, QChildEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperChildEvent(KDescendantsProxyModel* self, QChildEvent* event) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnChildEvent(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_childevent_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_CustomEvent(KDescendantsProxyModel* self, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperCustomEvent(KDescendantsProxyModel* self, QEvent* event) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCustomEvent(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_customevent_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_ConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnConnectNotify(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_connectnotify_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDescendantsProxyModel_DisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel) {
        vkdescendantsproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDescendantsProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDescendantsProxyModel_SuperDisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->KDescendantsProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDescendantsProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnDisconnectNotify(KDescendantsProxyModel* self, intptr_t slot) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self))
        vkdescendantsproxymodel->kdescendantsproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_CreateSourceIndex(const KDescendantsProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        return new QModelIndex(vkdescendantsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method KDescendantsProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_CreateIndex(const KDescendantsProxyModel* self, int row, int column) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self)))
        return new QModelIndex(vkdescendantsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KDescendantsProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EncodeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDescendantsProxyModel_DecodeData(KDescendantsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_BeginInsertRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndInsertRows(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_BeginRemoveRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndRemoveRows(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDescendantsProxyModel_BeginMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndMoveRows(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_BeginInsertColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndInsertColumns(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_BeginRemoveColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndRemoveColumns(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDescendantsProxyModel_BeginMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndMoveColumns(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_BeginResetModel(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_EndResetModel(KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_ChangePersistentIndex(KDescendantsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KDescendantsProxyModel_ChangePersistentIndexList(KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self)) {
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
        vkdescendantsproxymodel->VirtualKDescendantsProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KDescendantsProxyModel_PersistentIndexList(const KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        QList<QModelIndex> _ret = vkdescendantsproxymodel->VirtualKDescendantsProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method KDescendantsProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDescendantsProxyModel_Sender(const KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::sender();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDescendantsProxyModel_SenderSignalIndex(const KDescendantsProxyModel* self) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDescendantsProxyModel_Receivers(const KDescendantsProxyModel* self, const char* signal) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDescendantsProxyModel_IsSignalConnected(const KDescendantsProxyModel* self, const QMetaMethod* signal) {
    if (auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self))) {
        return vkdescendantsproxymodel->VirtualKDescendantsProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDescendantsProxyModel::isSignalConnected called without a directly constructed type");
}

void KDescendantsProxyModel_Delete(KDescendantsProxyModel* self) {
    delete self;
}
