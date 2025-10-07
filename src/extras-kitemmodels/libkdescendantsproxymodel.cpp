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
#include <QByteArray>
#include <cstring>
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
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDescendantsProxyModel_Tr(const char* s) {
    QString _ret = KDescendantsProxyModel::tr(s);
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
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        self->setSourceModel(model);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->setSourceModel(model);
    }
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
    QString _ret = self->ancestorSeparator();
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
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

QModelIndex* KDescendantsProxyModel_MapToSource(const KDescendantsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

int KDescendantsProxyModel_Flags(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKDescendantsProxyModel*)self)->flags(*index));
    }
}

QVariant* KDescendantsProxyModel_Data(const KDescendantsProxyModel* self, const QModelIndex* index, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDescendantsProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int KDescendantsProxyModel_RowCount(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->rowCount(*parent);
    }
}

QVariant* KDescendantsProxyModel_HeaderData(const KDescendantsProxyModel* self, int section, int orientation, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDescendantsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

QMimeData* KDescendantsProxyModel_MimeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->mimeData(indexes_QList);
    }
}

libqt_list /* of libqt_string */ KDescendantsProxyModel_MimeTypes(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
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
        QList<QString> _ret = ((VirtualKDescendantsProxyModel*)self)->mimeTypes();
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

bool KDescendantsProxyModel_HasChildren(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->hasChildren(*parent);
    }
}

QModelIndex* KDescendantsProxyModel_Index(const KDescendantsProxyModel* self, int param1, int param2, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(self->index(static_cast<int>(param1), static_cast<int>(param2), *parent));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->index(static_cast<int>(param1), static_cast<int>(param2), *parent));
    }
}

QModelIndex* KDescendantsProxyModel_Parent(const KDescendantsProxyModel* self, const QModelIndex* param1) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(self->parent(*param1));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->parent(*param1));
    }
}

int KDescendantsProxyModel_ColumnCount(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return self->columnCount(*index);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->columnCount(*index);
    }
}

libqt_map /* of int to libqt_string */ KDescendantsProxyModel_RoleNames(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKDescendantsProxyModel*)self)->roleNames();
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
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKDescendantsProxyModel*)self)->supportedDropActions());
    }
}

libqt_list /* of QModelIndex* */ KDescendantsProxyModel_Match(const KDescendantsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdescendantsproxymodel = dynamic_cast<const VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
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
        QList<QModelIndex> _ret = ((VirtualKDescendantsProxyModel*)self)->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

void KDescendantsProxyModel_SourceModelChanged(KDescendantsProxyModel* self) {
    self->sourceModelChanged();
}

void KDescendantsProxyModel_Connect_SourceModelChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::sourceModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KDescendantsProxyModel_DisplayAncestorDataChanged(KDescendantsProxyModel* self) {
    self->displayAncestorDataChanged();
}

void KDescendantsProxyModel_Connect_DisplayAncestorDataChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::displayAncestorDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KDescendantsProxyModel_AncestorSeparatorChanged(KDescendantsProxyModel* self) {
    self->ancestorSeparatorChanged();
}

void KDescendantsProxyModel_Connect_AncestorSeparatorChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*) = reinterpret_cast<void (*)(KDescendantsProxyModel*)>(slot);
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::ancestorSeparatorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KDescendantsProxyModel_ExpandsByDefaultChanged(KDescendantsProxyModel* self, bool expands) {
    self->expandsByDefaultChanged(expands);
}

void KDescendantsProxyModel_Connect_ExpandsByDefaultChanged(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*, bool) = reinterpret_cast<void (*)(KDescendantsProxyModel*, bool)>(slot);
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::expandsByDefaultChanged, [self, slotFunc](bool expands) {
        bool sigval1 = expands;
        slotFunc(self, sigval1);
    });
}

void KDescendantsProxyModel_SourceIndexExpanded(KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    self->sourceIndexExpanded(*sourceIndex);
}

void KDescendantsProxyModel_Connect_SourceIndexExpanded(KDescendantsProxyModel* self, intptr_t slot) {
    void (*slotFunc)(KDescendantsProxyModel*, QModelIndex*) = reinterpret_cast<void (*)(KDescendantsProxyModel*, QModelIndex*)>(slot);
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::sourceIndexExpanded, [self, slotFunc](const QModelIndex& sourceIndex) {
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
    KDescendantsProxyModel::connect(self, &KDescendantsProxyModel::sourceIndexCollapsed, [self, slotFunc](const QModelIndex& sourceIndex) {
        const QModelIndex& sourceIndex_ret = sourceIndex;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KDescendantsProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = KDescendantsProxyModel::tr(s, c);
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
    QString _ret = KDescendantsProxyModel::tr(s, c, static_cast<int>(n));
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
int KDescendantsProxyModel_QBaseMetacall(KDescendantsProxyModel* self, int param1, int param2, void** param3) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Metacall_IsBase(true);
        return vkdescendantsproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDescendantsProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMetacall(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Metacall_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseSetSourceModel(KDescendantsProxyModel* self, QAbstractItemModel* model) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetSourceModel_IsBase(true);
        vkdescendantsproxymodel->setSourceModel(model);
    } else {
        self->KDescendantsProxyModel::setSourceModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetSourceModel(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseMapFromSource(const KDescendantsProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapFromSource(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapFromSource_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseMapToSource(const KDescendantsProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapToSource(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapToSource_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapToSource_Callback>(slot));
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseFlags(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Flags_IsBase(true);
        return static_cast<int>(vkdescendantsproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->KDescendantsProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnFlags(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Flags_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KDescendantsProxyModel_QBaseData(const KDescendantsProxyModel* self, const QModelIndex* index, int role) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Data_IsBase(true);
        return new QVariant(vkdescendantsproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDescendantsProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Data_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseRowCount(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RowCount_IsBase(true);
        return vkdescendantsproxymodel->rowCount(*parent);
    } else {
        return self->KDescendantsProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRowCount(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RowCount_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KDescendantsProxyModel_QBaseHeaderData(const KDescendantsProxyModel* self, int section, int orientation, int role) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_HeaderData_IsBase(true);
        return new QVariant(vkdescendantsproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKDescendantsProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnHeaderData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_HeaderData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_HeaderData_Callback>(slot));
    }
}

// Base class handler implementation
QMimeData* KDescendantsProxyModel_QBaseMimeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MimeData_IsBase(true);
        return vkdescendantsproxymodel->mimeData(indexes_QList);
    } else {
        return self->KDescendantsProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMimeData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MimeData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MimeData_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KDescendantsProxyModel_QBaseMimeTypes(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkdescendantsproxymodel->mimeTypes();
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
        QList<QString> _ret = self->KDescendantsProxyModel::mimeTypes();
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
void KDescendantsProxyModel_OnMimeTypes(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MimeTypes_Callback>(slot));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseHasChildren(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_HasChildren_IsBase(true);
        return vkdescendantsproxymodel->hasChildren(*parent);
    } else {
        return self->KDescendantsProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnHasChildren(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_HasChildren_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_HasChildren_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseIndex(const KDescendantsProxyModel* self, int param1, int param2, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Index_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->index(static_cast<int>(param1), static_cast<int>(param2), *parent));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->index(static_cast<int>(param1), static_cast<int>(param2), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnIndex(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Index_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseParent(const KDescendantsProxyModel* self, const QModelIndex* param1) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Parent_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->parent(*param1));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->parent(*param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnParent(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Parent_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseColumnCount(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ColumnCount_IsBase(true);
        return vkdescendantsproxymodel->columnCount(*index);
    } else {
        return self->KDescendantsProxyModel::columnCount(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnColumnCount(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KDescendantsProxyModel_QBaseRoleNames(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkdescendantsproxymodel->roleNames();
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
void KDescendantsProxyModel_OnRoleNames(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RoleNames_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseSupportedDropActions(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkdescendantsproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KDescendantsProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSupportedDropActions(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KDescendantsProxyModel_QBaseMatch(const KDescendantsProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkdescendantsproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KDescendantsProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KDescendantsProxyModel_OnMatch(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Match_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KDescendantsProxyModel_MapSelectionToSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QItemSelection(vkdescendantsproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKDescendantsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KDescendantsProxyModel_QBaseMapSelectionToSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vkdescendantsproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(((VirtualKDescendantsProxyModel*)self)->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapSelectionToSource(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* KDescendantsProxyModel_MapSelectionFromSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QItemSelection(vkdescendantsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKDescendantsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* KDescendantsProxyModel_QBaseMapSelectionFromSource(const KDescendantsProxyModel* self, const QItemSelection* selection) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vkdescendantsproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(((VirtualKDescendantsProxyModel*)self)->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMapSelectionFromSource(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_Submit(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->submit();
    } else {
        return self->KDescendantsProxyModel::submit();
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseSubmit(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Submit_IsBase(true);
        return vkdescendantsproxymodel->submit();
    } else {
        return self->KDescendantsProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSubmit(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Submit_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_Revert(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->revert();
    } else {
        self->KDescendantsProxyModel::revert();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseRevert(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Revert_IsBase(true);
        vkdescendantsproxymodel->revert();
    } else {
        self->KDescendantsProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRevert(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Revert_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KDescendantsProxyModel_ItemData(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        QMap<int, QVariant> _ret = vkdescendantsproxymodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KDescendantsProxyModel_QBaseItemData(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkdescendantsproxymodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnItemData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ItemData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetData(KDescendantsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KDescendantsProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseSetData(KDescendantsProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetData_IsBase(true);
        return vkdescendantsproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KDescendantsProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetItemData(KDescendantsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDescendantsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseSetItemData(KDescendantsProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetItemData_IsBase(true);
        return vkdescendantsproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->KDescendantsProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetItemData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetItemData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_SetHeaderData(KDescendantsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDescendantsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseSetHeaderData(KDescendantsProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetHeaderData_IsBase(true);
        return vkdescendantsproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KDescendantsProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSetHeaderData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_ClearItemData(KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->clearItemData(*index);
    } else {
        return self->KDescendantsProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseClearItemData(KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ClearItemData_IsBase(true);
        return vkdescendantsproxymodel->clearItemData(*index);
    } else {
        return self->KDescendantsProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnClearItemData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_Buddy(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(vkdescendantsproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseBuddy(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBuddy(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Buddy_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_CanFetchMore(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->canFetchMore(*parent);
    } else {
        return self->KDescendantsProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseCanFetchMore(const KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CanFetchMore_IsBase(true);
        return vkdescendantsproxymodel->canFetchMore(*parent);
    } else {
        return self->KDescendantsProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCanFetchMore(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_FetchMore(KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->fetchMore(*parent);
    } else {
        self->KDescendantsProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseFetchMore(KDescendantsProxyModel* self, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_FetchMore_IsBase(true);
        vkdescendantsproxymodel->fetchMore(*parent);
    } else {
        self->KDescendantsProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnFetchMore(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_FetchMore_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_Sort(KDescendantsProxyModel* self, int column, int order) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KDescendantsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseSort(KDescendantsProxyModel* self, int column, int order) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sort_IsBase(true);
        vkdescendantsproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KDescendantsProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSort(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sort_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDescendantsProxyModel_Span(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QSize(vkdescendantsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKDescendantsProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KDescendantsProxyModel_QBaseSpan(const KDescendantsProxyModel* self, const QModelIndex* index) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Span_IsBase(true);
        return new QSize(vkdescendantsproxymodel->span(*index));
    } else {
        return new QSize(((VirtualKDescendantsProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSpan(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Span_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_Sibling(const KDescendantsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(vkdescendantsproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseSibling(const KDescendantsProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKDescendantsProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSibling(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sibling_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_CanDropMimeData(const KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDescendantsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseCanDropMimeData(const KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CanDropMimeData_IsBase(true);
        return vkdescendantsproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDescendantsProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCanDropMimeData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_DropMimeData(KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDescendantsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseDropMimeData(KDescendantsProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DropMimeData_IsBase(true);
        return vkdescendantsproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KDescendantsProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnDropMimeData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KDescendantsProxyModel_SupportedDragActions(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return static_cast<int>(vkdescendantsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDescendantsProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseSupportedDragActions(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkdescendantsproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KDescendantsProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSupportedDragActions(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_InsertRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseInsertRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_InsertRows_IsBase(true);
        return vkdescendantsproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnInsertRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_InsertRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_InsertColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseInsertColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_InsertColumns_IsBase(true);
        return vkdescendantsproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnInsertColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_RemoveRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseRemoveRows(KDescendantsProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RemoveRows_IsBase(true);
        return vkdescendantsproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRemoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_RemoveColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseRemoveColumns(KDescendantsProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RemoveColumns_IsBase(true);
        return vkdescendantsproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KDescendantsProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnRemoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_MoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDescendantsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MoveRows_IsBase(true);
        return vkdescendantsproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDescendantsProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_MoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDescendantsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MoveColumns_IsBase(true);
        return vkdescendantsproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KDescendantsProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_MultiData(const KDescendantsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDescendantsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseMultiData(const KDescendantsProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MultiData_IsBase(true);
        vkdescendantsproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->KDescendantsProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnMultiData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_MultiData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_ResetInternalData(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->resetInternalData();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseResetInternalData(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ResetInternalData_IsBase(true);
        vkdescendantsproxymodel->resetInternalData();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnResetInternalData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_Event(KDescendantsProxyModel* self, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->event(event);
    } else {
        return self->KDescendantsProxyModel::event(event);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseEvent(KDescendantsProxyModel* self, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Event_IsBase(true);
        return vkdescendantsproxymodel->event(event);
    } else {
        return self->KDescendantsProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEvent(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Event_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_EventFilter(KDescendantsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->eventFilter(watched, event);
    } else {
        return self->KDescendantsProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseEventFilter(KDescendantsProxyModel* self, QObject* watched, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EventFilter_IsBase(true);
        return vkdescendantsproxymodel->eventFilter(watched, event);
    } else {
        return self->KDescendantsProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEventFilter(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EventFilter_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_TimerEvent(KDescendantsProxyModel* self, QTimerEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->timerEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseTimerEvent(KDescendantsProxyModel* self, QTimerEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_TimerEvent_IsBase(true);
        vkdescendantsproxymodel->timerEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnTimerEvent(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_ChildEvent(KDescendantsProxyModel* self, QChildEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->childEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseChildEvent(KDescendantsProxyModel* self, QChildEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChildEvent_IsBase(true);
        vkdescendantsproxymodel->childEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnChildEvent(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_CustomEvent(KDescendantsProxyModel* self, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->customEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseCustomEvent(KDescendantsProxyModel* self, QEvent* event) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CustomEvent_IsBase(true);
        vkdescendantsproxymodel->customEvent(event);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCustomEvent(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_ConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ConnectNotify_IsBase(true);
        vkdescendantsproxymodel->connectNotify(*signal);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnConnectNotify(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_DisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseDisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DisconnectNotify_IsBase(true);
        vkdescendantsproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnDisconnectNotify(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_CreateSourceIndex(const KDescendantsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(vkdescendantsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseCreateSourceIndex(const KDescendantsProxyModel* self, int row, int col, void* internalPtr) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCreateSourceIndex(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KDescendantsProxyModel_CreateIndex(const KDescendantsProxyModel* self, int row, int column) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return new QModelIndex(vkdescendantsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KDescendantsProxyModel_QBaseCreateIndex(const KDescendantsProxyModel* self, int row, int column) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkdescendantsproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnCreateIndex(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EncodeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEncodeData(const KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EncodeData_IsBase(true);
        vkdescendantsproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEncodeData(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EncodeData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_DecodeData(KDescendantsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseDecodeData(KDescendantsProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DecodeData_IsBase(true);
        return vkdescendantsproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnDecodeData(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_DecodeData_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_BeginInsertRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseBeginInsertRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginInsertRows_IsBase(true);
        vkdescendantsproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginInsertRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndInsertRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endInsertRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndInsertRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndInsertRows_IsBase(true);
        vkdescendantsproxymodel->endInsertRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndInsertRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_BeginRemoveRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseBeginRemoveRows(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginRemoveRows_IsBase(true);
        vkdescendantsproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginRemoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndRemoveRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endRemoveRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndRemoveRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndRemoveRows_IsBase(true);
        vkdescendantsproxymodel->endRemoveRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndRemoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_BeginMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseBeginMoveRows(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginMoveRows_IsBase(true);
        return vkdescendantsproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginMoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndMoveRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endMoveRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndMoveRows(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndMoveRows_IsBase(true);
        vkdescendantsproxymodel->endMoveRows();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndMoveRows(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_BeginInsertColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseBeginInsertColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginInsertColumns_IsBase(true);
        vkdescendantsproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginInsertColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndInsertColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endInsertColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndInsertColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndInsertColumns_IsBase(true);
        vkdescendantsproxymodel->endInsertColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndInsertColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_BeginRemoveColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseBeginRemoveColumns(KDescendantsProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginRemoveColumns_IsBase(true);
        vkdescendantsproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginRemoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndRemoveColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndRemoveColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndRemoveColumns_IsBase(true);
        vkdescendantsproxymodel->endRemoveColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndRemoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_BeginMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseBeginMoveColumns(KDescendantsProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginMoveColumns_IsBase(true);
        return vkdescendantsproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginMoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndMoveColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endMoveColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndMoveColumns(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndMoveColumns_IsBase(true);
        vkdescendantsproxymodel->endMoveColumns();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndMoveColumns(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_BeginResetModel(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->beginResetModel();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseBeginResetModel(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginResetModel_IsBase(true);
        vkdescendantsproxymodel->beginResetModel();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnBeginResetModel(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_EndResetModel(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->endResetModel();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseEndResetModel(KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndResetModel_IsBase(true);
        vkdescendantsproxymodel->endResetModel();
    } else {
        ((VirtualKDescendantsProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnEndResetModel(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_ChangePersistentIndex(KDescendantsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseChangePersistentIndex(KDescendantsProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChangePersistentIndex_IsBase(true);
        vkdescendantsproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnChangePersistentIndex(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KDescendantsProxyModel_ChangePersistentIndexList(KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
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
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KDescendantsProxyModel_QBaseChangePersistentIndexList(KDescendantsProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
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
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChangePersistentIndexList_IsBase(true);
        vkdescendantsproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKDescendantsProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnChangePersistentIndexList(KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = dynamic_cast<VirtualKDescendantsProxyModel*>(self);
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KDescendantsProxyModel_PersistentIndexList(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        QList<QModelIndex> _ret = vkdescendantsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDescendantsProxyModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KDescendantsProxyModel_QBasePersistentIndexList(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkdescendantsproxymodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKDescendantsProxyModel*)self)->persistentIndexList();
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
void KDescendantsProxyModel_OnPersistentIndexList(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDescendantsProxyModel_Sender(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->sender();
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDescendantsProxyModel_QBaseSender(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sender_IsBase(true);
        return vkdescendantsproxymodel->sender();
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSender(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Sender_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDescendantsProxyModel_SenderSignalIndex(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseSenderSignalIndex(const KDescendantsProxyModel* self) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SenderSignalIndex_IsBase(true);
        return vkdescendantsproxymodel->senderSignalIndex();
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnSenderSignalIndex(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDescendantsProxyModel_Receivers(const KDescendantsProxyModel* self, const char* signal) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->receivers(signal);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDescendantsProxyModel_QBaseReceivers(const KDescendantsProxyModel* self, const char* signal) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Receivers_IsBase(true);
        return vkdescendantsproxymodel->receivers(signal);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnReceivers(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_Receivers_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDescendantsProxyModel_IsSignalConnected(const KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        return vkdescendantsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDescendantsProxyModel_QBaseIsSignalConnected(const KDescendantsProxyModel* self, const QMetaMethod* signal) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_IsSignalConnected_IsBase(true);
        return vkdescendantsproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKDescendantsProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDescendantsProxyModel_OnIsSignalConnected(const KDescendantsProxyModel* self, intptr_t slot) {
    auto* vkdescendantsproxymodel = const_cast<VirtualKDescendantsProxyModel*>(dynamic_cast<const VirtualKDescendantsProxyModel*>(self));
    if (vkdescendantsproxymodel && vkdescendantsproxymodel->isVirtualKDescendantsProxyModel) {
        vkdescendantsproxymodel->setKDescendantsProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKDescendantsProxyModel::KDescendantsProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void KDescendantsProxyModel_Delete(KDescendantsProxyModel* self) {
    delete self;
}
