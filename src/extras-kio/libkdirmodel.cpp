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
#include <QByteArray>
#include <cstring>
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
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDirModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDirModel_Tr(const char* s) {
    QString _ret = KDirModel::tr(s);
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
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->canFetchMore(*parent);
    } else {
        return ((VirtualKDirModel*)self)->canFetchMore(*parent);
    }
}

int KDirModel_ColumnCount(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualKDirModel*)self)->columnCount(*parent);
    }
}

QVariant* KDirModel_Data(const KDirModel* self, const QModelIndex* index, int role) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirModel*)self)->data(*index, static_cast<int>(role)));
    }
}

bool KDirModel_DropMimeData(KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualKDirModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

void KDirModel_FetchMore(KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        self->fetchMore(*parent);
    } else {
        ((VirtualKDirModel*)self)->fetchMore(*parent);
    }
}

int KDirModel_Flags(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKDirModel*)self)->flags(*index));
    }
}

bool KDirModel_HasChildren(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualKDirModel*)self)->hasChildren(*parent);
    }
}

QVariant* KDirModel_HeaderData(const KDirModel* self, int section, int orientation, int role) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

QModelIndex* KDirModel_Index(const KDirModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QMimeData* KDirModel_MimeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualKDirModel*)self)->mimeData(indexes_QList);
    }
}

libqt_list /* of libqt_string */ KDirModel_MimeTypes(const KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
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
        QList<QString> _ret = ((VirtualKDirModel*)self)->mimeTypes();
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

QModelIndex* KDirModel_Parent(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QModelIndex(self->parent(*index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->parent(*index));
    }
}

QModelIndex* KDirModel_Sibling(const KDirModel* self, int row, int column, const QModelIndex* index) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *index));
    }
}

int KDirModel_RowCount(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKDirModel*)self)->rowCount(*parent);
    }
}

bool KDirModel_SetData(KDirModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualKDirModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

void KDirModel_Sort(KDirModel* self, int column, int order) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualKDirModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

libqt_map /* of int to libqt_string */ KDirModel_RoleNames(const KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKDirModel*)self)->roleNames();
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

libqt_list /* of QUrl* */ KDirModel_SimplifiedUrlList(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QList<QUrl> _ret = KDirModel::simplifiedUrlList(urls_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
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
    auto* vkdirmodel = dynamic_cast<const VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKDirModel*)self)->supportedDropActions());
    }
}

void KDirModel_Expand(KDirModel* self, const QModelIndex* index) {
    self->expand(*index);
}

void KDirModel_Connect_Expand(KDirModel* self, intptr_t slot) {
    void (*slotFunc)(KDirModel*, QModelIndex*) = reinterpret_cast<void (*)(KDirModel*, QModelIndex*)>(slot);
    KDirModel::connect(self, &KDirModel::expand, [self, slotFunc](const QModelIndex& index) {
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
    KDirModel::connect(self, &KDirModel::needSequenceIcon, [self, slotFunc](const QModelIndex& index, int sequenceIndex) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        int sigval2 = sequenceIndex;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KDirModel_Tr2(const char* s, const char* c) {
    QString _ret = KDirModel::tr(s, c);
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
    QString _ret = KDirModel::tr(s, c, static_cast<int>(n));
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
int KDirModel_QBaseMetacall(KDirModel* self, int param1, int param2, void** param3) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Metacall_IsBase(true);
        return vkdirmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDirModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMetacall(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Metacall_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirModel_QBaseCanFetchMore(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CanFetchMore_IsBase(true);
        return vkdirmodel->canFetchMore(*parent);
    } else {
        return self->KDirModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCanFetchMore(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CanFetchMore_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_CanFetchMore_Callback>(slot));
    }
}

// Base class handler implementation
int KDirModel_QBaseColumnCount(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ColumnCount_IsBase(true);
        return vkdirmodel->columnCount(*parent);
    } else {
        return self->KDirModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnColumnCount(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ColumnCount_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KDirModel_QBaseData(const KDirModel* self, const QModelIndex* index, int role) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Data_IsBase(true);
        return new QVariant(vkdirmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Data_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirModel_QBaseDropMimeData(KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DropMimeData_IsBase(true);
        return vkdirmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnDropMimeData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DropMimeData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_DropMimeData_Callback>(slot));
    }
}

// Base class handler implementation
void KDirModel_QBaseFetchMore(KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_FetchMore_IsBase(true);
        vkdirmodel->fetchMore(*parent);
    } else {
        self->KDirModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnFetchMore(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_FetchMore_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_FetchMore_Callback>(slot));
    }
}

// Base class handler implementation
int KDirModel_QBaseFlags(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Flags_IsBase(true);
        return static_cast<int>(vkdirmodel->flags(*index));
    } else {
        return static_cast<int>(self->KDirModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnFlags(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Flags_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirModel_QBaseHasChildren(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_HasChildren_IsBase(true);
        return vkdirmodel->hasChildren(*parent);
    } else {
        return self->KDirModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnHasChildren(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_HasChildren_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KDirModel_QBaseHeaderData(const KDirModel* self, int section, int orientation, int role) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_HeaderData_IsBase(true);
        return new QVariant(vkdirmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDirModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnHeaderData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_HeaderData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_HeaderData_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDirModel_QBaseIndex(const KDirModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Index_IsBase(true);
        return new QModelIndex(vkdirmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnIndex(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Index_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QMimeData* KDirModel_QBaseMimeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MimeData_IsBase(true);
        return vkdirmodel->mimeData(indexes_QList);
    } else {
        return self->KDirModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMimeData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MimeData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_MimeData_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KDirModel_QBaseMimeTypes(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkdirmodel->mimeTypes();
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
        QList<QString> _ret = self->KDirModel::mimeTypes();
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
void KDirModel_OnMimeTypes(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MimeTypes_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_MimeTypes_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDirModel_QBaseParent(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Parent_IsBase(true);
        return new QModelIndex(vkdirmodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnParent(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Parent_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDirModel_QBaseSibling(const KDirModel* self, int row, int column, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sibling_IsBase(true);
        return new QModelIndex(vkdirmodel->sibling(static_cast<int>(row), static_cast<int>(column), *index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSibling(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sibling_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Sibling_Callback>(slot));
    }
}

// Base class handler implementation
int KDirModel_QBaseRowCount(const KDirModel* self, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_RowCount_IsBase(true);
        return vkdirmodel->rowCount(*parent);
    } else {
        return self->KDirModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnRowCount(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_RowCount_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirModel_QBaseSetData(KDirModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetData_IsBase(true);
        return vkdirmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KDirModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SetData_Callback>(slot));
    }
}

// Base class handler implementation
void KDirModel_QBaseSort(KDirModel* self, int column, int order) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sort_IsBase(true);
        vkdirmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KDirModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSort(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sort_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Sort_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KDirModel_QBaseRoleNames(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkdirmodel->roleNames();
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
void KDirModel_OnRoleNames(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_RoleNames_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
int KDirModel_QBaseSupportedDropActions(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkdirmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KDirModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSupportedDropActions(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_SetHeaderData(KDirModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDirModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KDirModel_QBaseSetHeaderData(KDirModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetHeaderData_IsBase(true);
        return vkdirmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDirModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetHeaderData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetHeaderData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDirModel_ItemData(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        QMap<int, QVariant> _ret = vkdirmodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KDirModel_QBaseItemData(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkdirmodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnItemData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ItemData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_SetItemData(KDirModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDirModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KDirModel_QBaseSetItemData(KDirModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetItemData_IsBase(true);
        return vkdirmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDirModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSetItemData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SetItemData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_ClearItemData(KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->clearItemData(*index);
    } else {
        return self->KDirModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KDirModel_QBaseClearItemData(KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ClearItemData_IsBase(true);
        return vkdirmodel->clearItemData(*index);
    } else {
        return self->KDirModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnClearItemData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ClearItemData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_CanDropMimeData(const KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KDirModel_QBaseCanDropMimeData(const KDirModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CanDropMimeData_IsBase(true);
        return vkdirmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDirModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCanDropMimeData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirModel_SupportedDragActions(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return static_cast<int>(vkdirmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDirModel::supportedDragActions());
    }
}

// Base class handler implementation
int KDirModel_QBaseSupportedDragActions(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkdirmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDirModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSupportedDragActions(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_MoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDirModel_QBaseMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MoveRows_IsBase(true);
        return vkdirmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMoveRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MoveRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_MoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDirModel_QBaseMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MoveColumns_IsBase(true);
        return vkdirmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDirModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMoveColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MoveColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirModel_Buddy(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QModelIndex(vkdirmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KDirModel_QBaseBuddy(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Buddy_IsBase(true);
        return new QModelIndex(vkdirmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDirModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBuddy(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Buddy_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirModel_Match(const KDirModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        QList<QModelIndex> _ret = vkdirmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KDirModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KDirModel_QBaseMatch(const KDirModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkdirmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KDirModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDirModel_OnMatch(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Match_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDirModel_Span(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QSize(vkdirmodel->span(*index));
    } else {
        return new QSize(((VirtualKDirModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KDirModel_QBaseSpan(const KDirModel* self, const QModelIndex* index) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Span_IsBase(true);
        return new QSize(vkdirmodel->span(*index));
    } else {
        return new QSize(((VirtualKDirModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSpan(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Span_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_MultiData(const KDirModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDirModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KDirModel_QBaseMultiData(const KDirModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MultiData_IsBase(true);
        vkdirmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDirModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnMultiData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_MultiData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_Submit(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->submit();
    } else {
        return self->KDirModel::submit();
    }
}

// Base class handler implementation
bool KDirModel_QBaseSubmit(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Submit_IsBase(true);
        return vkdirmodel->submit();
    } else {
        return self->KDirModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSubmit(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Submit_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_Revert(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->revert();
    } else {
        self->KDirModel::revert();
    }
}

// Base class handler implementation
void KDirModel_QBaseRevert(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Revert_IsBase(true);
        vkdirmodel->revert();
    } else {
        self->KDirModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnRevert(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Revert_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_ResetInternalData(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->resetInternalData();
    } else {
        ((VirtualKDirModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KDirModel_QBaseResetInternalData(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ResetInternalData_IsBase(true);
        vkdirmodel->resetInternalData();
    } else {
        ((VirtualKDirModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnResetInternalData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ResetInternalData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_Event(KDirModel* self, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->event(event);
    } else {
        return self->KDirModel::event(event);
    }
}

// Base class handler implementation
bool KDirModel_QBaseEvent(KDirModel* self, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Event_IsBase(true);
        return vkdirmodel->event(event);
    } else {
        return self->KDirModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEvent(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Event_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_EventFilter(KDirModel* self, QObject* watched, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->eventFilter(watched, event);
    } else {
        return self->KDirModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDirModel_QBaseEventFilter(KDirModel* self, QObject* watched, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EventFilter_IsBase(true);
        return vkdirmodel->eventFilter(watched, event);
    } else {
        return self->KDirModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEventFilter(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EventFilter_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_TimerEvent(KDirModel* self, QTimerEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->timerEvent(event);
    } else {
        ((VirtualKDirModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDirModel_QBaseTimerEvent(KDirModel* self, QTimerEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_TimerEvent_IsBase(true);
        vkdirmodel->timerEvent(event);
    } else {
        ((VirtualKDirModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnTimerEvent(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_TimerEvent_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_ChildEvent(KDirModel* self, QChildEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->childEvent(event);
    } else {
        ((VirtualKDirModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDirModel_QBaseChildEvent(KDirModel* self, QChildEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChildEvent_IsBase(true);
        vkdirmodel->childEvent(event);
    } else {
        ((VirtualKDirModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnChildEvent(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChildEvent_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_CustomEvent(KDirModel* self, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->customEvent(event);
    } else {
        ((VirtualKDirModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDirModel_QBaseCustomEvent(KDirModel* self, QEvent* event) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CustomEvent_IsBase(true);
        vkdirmodel->customEvent(event);
    } else {
        ((VirtualKDirModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCustomEvent(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CustomEvent_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_ConnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->connectNotify(*signal);
    } else {
        ((VirtualKDirModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDirModel_QBaseConnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ConnectNotify_IsBase(true);
        vkdirmodel->connectNotify(*signal);
    } else {
        ((VirtualKDirModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnConnectNotify(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ConnectNotify_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_DisconnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDirModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDirModel_QBaseDisconnectNotify(KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DisconnectNotify_IsBase(true);
        vkdirmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDirModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnDisconnectNotify(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDirModel_CreateIndex(const KDirModel* self, int row, int column) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return new QModelIndex(vkdirmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KDirModel_QBaseCreateIndex(const KDirModel* self, int row, int column) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkdirmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnCreateIndex(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_CreateIndex_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EncodeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDirModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KDirModel_QBaseEncodeData(const KDirModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EncodeData_IsBase(true);
        vkdirmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDirModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEncodeData(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EncodeData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_DecodeData(KDirModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDirModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KDirModel_QBaseDecodeData(KDirModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DecodeData_IsBase(true);
        return vkdirmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDirModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnDecodeData(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_DecodeData_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_BeginInsertRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirModel_QBaseBeginInsertRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginInsertRows_IsBase(true);
        vkdirmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginInsertRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndInsertRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endInsertRows();
    } else {
        ((VirtualKDirModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndInsertRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndInsertRows_IsBase(true);
        vkdirmodel->endInsertRows();
    } else {
        ((VirtualKDirModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndInsertRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndInsertRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_BeginRemoveRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirModel_QBaseBeginRemoveRows(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginRemoveRows_IsBase(true);
        vkdirmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginRemoveRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndRemoveRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endRemoveRows();
    } else {
        ((VirtualKDirModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndRemoveRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndRemoveRows_IsBase(true);
        vkdirmodel->endRemoveRows();
    } else {
        ((VirtualKDirModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndRemoveRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_BeginMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDirModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KDirModel_QBaseBeginMoveRows(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginMoveRows_IsBase(true);
        return vkdirmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDirModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginMoveRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndMoveRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endMoveRows();
    } else {
        ((VirtualKDirModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndMoveRows(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndMoveRows_IsBase(true);
        vkdirmodel->endMoveRows();
    } else {
        ((VirtualKDirModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndMoveRows(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndMoveRows_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_BeginInsertColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirModel_QBaseBeginInsertColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginInsertColumns_IsBase(true);
        vkdirmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginInsertColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndInsertColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endInsertColumns();
    } else {
        ((VirtualKDirModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndInsertColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndInsertColumns_IsBase(true);
        vkdirmodel->endInsertColumns();
    } else {
        ((VirtualKDirModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndInsertColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_BeginRemoveColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDirModel_QBaseBeginRemoveColumns(KDirModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginRemoveColumns_IsBase(true);
        vkdirmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDirModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginRemoveColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndRemoveColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endRemoveColumns();
    } else {
        ((VirtualKDirModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndRemoveColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndRemoveColumns_IsBase(true);
        vkdirmodel->endRemoveColumns();
    } else {
        ((VirtualKDirModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndRemoveColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_BeginMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDirModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KDirModel_QBaseBeginMoveColumns(KDirModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginMoveColumns_IsBase(true);
        return vkdirmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDirModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginMoveColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndMoveColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endMoveColumns();
    } else {
        ((VirtualKDirModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndMoveColumns(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndMoveColumns_IsBase(true);
        vkdirmodel->endMoveColumns();
    } else {
        ((VirtualKDirModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndMoveColumns(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_BeginResetModel(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->beginResetModel();
    } else {
        ((VirtualKDirModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KDirModel_QBaseBeginResetModel(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginResetModel_IsBase(true);
        vkdirmodel->beginResetModel();
    } else {
        ((VirtualKDirModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnBeginResetModel(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_BeginResetModel_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_EndResetModel(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->endResetModel();
    } else {
        ((VirtualKDirModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KDirModel_QBaseEndResetModel(KDirModel* self) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndResetModel_IsBase(true);
        vkdirmodel->endResetModel();
    } else {
        ((VirtualKDirModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnEndResetModel(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_EndResetModel_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_ChangePersistentIndex(KDirModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDirModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KDirModel_QBaseChangePersistentIndex(KDirModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChangePersistentIndex_IsBase(true);
        vkdirmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDirModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnChangePersistentIndex(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirModel_ChangePersistentIndexList(KDirModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
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
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDirModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KDirModel_QBaseChangePersistentIndexList(KDirModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
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
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChangePersistentIndexList_IsBase(true);
        vkdirmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDirModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnChangePersistentIndexList(KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = dynamic_cast<VirtualKDirModel*>(self);
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDirModel_PersistentIndexList(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        QList<QModelIndex> _ret = vkdirmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDirModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KDirModel_QBasePersistentIndexList(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkdirmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDirModel*)self)->persistentIndexList();
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
void KDirModel_OnPersistentIndexList(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDirModel_Sender(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->sender();
    } else {
        return ((VirtualKDirModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDirModel_QBaseSender(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sender_IsBase(true);
        return vkdirmodel->sender();
    } else {
        return ((VirtualKDirModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSender(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Sender_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirModel_SenderSignalIndex(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->senderSignalIndex();
    } else {
        return ((VirtualKDirModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDirModel_QBaseSenderSignalIndex(const KDirModel* self) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SenderSignalIndex_IsBase(true);
        return vkdirmodel->senderSignalIndex();
    } else {
        return ((VirtualKDirModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnSenderSignalIndex(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirModel_Receivers(const KDirModel* self, const char* signal) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->receivers(signal);
    } else {
        return ((VirtualKDirModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDirModel_QBaseReceivers(const KDirModel* self, const char* signal) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Receivers_IsBase(true);
        return vkdirmodel->receivers(signal);
    } else {
        return ((VirtualKDirModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnReceivers(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_Receivers_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirModel_IsSignalConnected(const KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        return vkdirmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDirModel_QBaseIsSignalConnected(const KDirModel* self, const QMetaMethod* signal) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_IsSignalConnected_IsBase(true);
        return vkdirmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirModel_OnIsSignalConnected(const KDirModel* self, intptr_t slot) {
    auto* vkdirmodel = const_cast<VirtualKDirModel*>(dynamic_cast<const VirtualKDirModel*>(self));
    if (vkdirmodel && vkdirmodel->isVirtualKDirModel) {
        vkdirmodel->setKDirModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKDirModel::KDirModel_IsSignalConnected_Callback>(slot));
    }
}

void KDirModel_Delete(KDirModel* self) {
    delete self;
}
