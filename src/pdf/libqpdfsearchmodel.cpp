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
#include <QPdfDocument>
#include <QPdfLink>
#include <QPdfSearchModel>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfsearchmodel.h>
#include "libqpdfsearchmodel.h"
#include "libqpdfsearchmodel.hxx"

QPdfSearchModel* QPdfSearchModel_new() {
    return new VirtualQPdfSearchModel();
}

QPdfSearchModel* QPdfSearchModel_new2(QObject* parent) {
    return new VirtualQPdfSearchModel(parent);
}

QMetaObject* QPdfSearchModel_MetaObject(const QPdfSearchModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfSearchModel_Metacast(QPdfSearchModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfSearchModel_Metacall(QPdfSearchModel* self, int param1, int param2, void** param3) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfSearchModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfSearchModel_Tr(const char* s) {
    QString _ret = QPdfSearchModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QPdfLink* */ QPdfSearchModel_ResultsOnPage(const QPdfSearchModel* self, int page) {
    QList<QPdfLink> _ret = self->resultsOnPage(static_cast<int>(page));
    // Convert QList<> from C++ memory to manually-managed C memory
    QPdfLink** _arr = static_cast<QPdfLink**>(malloc(sizeof(QPdfLink*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPdfLink(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPdfLink* QPdfSearchModel_ResultAtIndex(const QPdfSearchModel* self, int index) {
    return new QPdfLink(self->resultAtIndex(static_cast<int>(index)));
}

QPdfDocument* QPdfSearchModel_Document(const QPdfSearchModel* self) {
    return self->document();
}

libqt_string QPdfSearchModel_SearchString(const QPdfSearchModel* self) {
    QString _ret = self->searchString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of int to libqt_string */ QPdfSearchModel_RoleNames(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<const VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualQPdfSearchModel*)self)->roleNames();
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

int QPdfSearchModel_RowCount(const QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<const VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQPdfSearchModel*)self)->rowCount(*parent);
    }
}

QVariant* QPdfSearchModel_Data(const QPdfSearchModel* self, const QModelIndex* index, int role) {
    auto* vqpdfsearchmodel = dynamic_cast<const VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfSearchModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int QPdfSearchModel_Count(const QPdfSearchModel* self) {
    return self->count();
}

void QPdfSearchModel_SetSearchString(QPdfSearchModel* self, const libqt_string searchString) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    self->setSearchString(searchString_QString);
}

void QPdfSearchModel_SetDocument(QPdfSearchModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

void QPdfSearchModel_DocumentChanged(QPdfSearchModel* self) {
    self->documentChanged();
}

void QPdfSearchModel_Connect_DocumentChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self, &QPdfSearchModel::documentChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfSearchModel_SearchStringChanged(QPdfSearchModel* self) {
    self->searchStringChanged();
}

void QPdfSearchModel_Connect_SearchStringChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self, &QPdfSearchModel::searchStringChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfSearchModel_CountChanged(QPdfSearchModel* self) {
    self->countChanged();
}

void QPdfSearchModel_Connect_CountChanged(QPdfSearchModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfSearchModel*) = reinterpret_cast<void (*)(QPdfSearchModel*)>(slot);
    QPdfSearchModel::connect(self, &QPdfSearchModel::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfSearchModel_TimerEvent(QPdfSearchModel* self, QTimerEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->timerEvent(event);
    }
}

libqt_string QPdfSearchModel_Tr2(const char* s, const char* c) {
    QString _ret = QPdfSearchModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfSearchModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfSearchModel::tr(s, c, static_cast<int>(n));
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
int QPdfSearchModel_QBaseMetacall(QPdfSearchModel* self, int param1, int param2, void** param3) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Metacall_IsBase(true);
        return vqpdfsearchmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPdfSearchModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMetacall(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Metacall_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QPdfSearchModel_QBaseRoleNames(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqpdfsearchmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QPdfSearchModel::roleNames();
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
void QPdfSearchModel_OnRoleNames(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RoleNames_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseRowCount(const QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RowCount_IsBase(true);
        return vqpdfsearchmodel->rowCount(*parent);
    } else {
        return self->QPdfSearchModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRowCount(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RowCount_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QPdfSearchModel_QBaseData(const QPdfSearchModel* self, const QModelIndex* index, int role) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Data_IsBase(true);
        return new QVariant(vqpdfsearchmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfSearchModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Data_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseTimerEvent(QPdfSearchModel* self, QTimerEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_TimerEvent_IsBase(true);
        vqpdfsearchmodel->timerEvent(event);
    } else {
        ((VirtualQPdfSearchModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnTimerEvent(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_TimerEvent_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Index(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QModelIndex(vqpdfsearchmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_QBaseIndex(const QPdfSearchModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Index_IsBase(true);
        return new QModelIndex(vqpdfsearchmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnIndex(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Index_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Sibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QModelIndex(vqpdfsearchmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_QBaseSibling(const QPdfSearchModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sibling_IsBase(true);
        return new QModelIndex(vqpdfsearchmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSibling(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sibling_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_DropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfSearchModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseDropMimeData(QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DropMimeData_IsBase(true);
        return vqpdfsearchmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfSearchModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnDropMimeData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DropMimeData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfSearchModel_Flags(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return static_cast<int>(vqpdfsearchmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfSearchModel::flags(*index));
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseFlags(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Flags_IsBase(true);
        return static_cast<int>(vqpdfsearchmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfSearchModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnFlags(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Flags_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_SetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfSearchModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseSetData(QPdfSearchModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetData_IsBase(true);
        return vqpdfsearchmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfSearchModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfSearchModel_HeaderData(const QPdfSearchModel* self, int section, int orientation, int role) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QVariant(vqpdfsearchmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfSearchModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QPdfSearchModel_QBaseHeaderData(const QPdfSearchModel* self, int section, int orientation, int role) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_HeaderData_IsBase(true);
        return new QVariant(vqpdfsearchmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfSearchModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnHeaderData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_HeaderData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_SetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfSearchModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseSetHeaderData(QPdfSearchModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetHeaderData_IsBase(true);
        return vqpdfsearchmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfSearchModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetHeaderData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetHeaderData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfSearchModel_ItemData(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        QMap<int, QVariant> _ret = vqpdfsearchmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfSearchModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ QPdfSearchModel_QBaseItemData(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqpdfsearchmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfSearchModel::itemData(*index);
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
void QPdfSearchModel_OnItemData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ItemData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_SetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfSearchModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseSetItemData(QPdfSearchModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetItemData_IsBase(true);
        return vqpdfsearchmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfSearchModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSetItemData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SetItemData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_ClearItemData(QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->clearItemData(*index);
    } else {
        return self->QPdfSearchModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseClearItemData(QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ClearItemData_IsBase(true);
        return vqpdfsearchmodel->clearItemData(*index);
    } else {
        return self->QPdfSearchModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnClearItemData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ClearItemData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfSearchModel_MimeTypes(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        QList<QString> _ret = vqpdfsearchmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfSearchModel::mimeTypes();
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
libqt_list /* of libqt_string */ QPdfSearchModel_QBaseMimeTypes(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqpdfsearchmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfSearchModel::mimeTypes();
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
void QPdfSearchModel_OnMimeTypes(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MimeTypes_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QPdfSearchModel_MimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfSearchModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QPdfSearchModel_QBaseMimeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MimeData_IsBase(true);
        return vqpdfsearchmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfSearchModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMimeData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MimeData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_CanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfSearchModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseCanDropMimeData(const QPdfSearchModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CanDropMimeData_IsBase(true);
        return vqpdfsearchmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfSearchModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCanDropMimeData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfSearchModel_SupportedDropActions(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return static_cast<int>(vqpdfsearchmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfSearchModel::supportedDropActions());
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseSupportedDropActions(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqpdfsearchmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfSearchModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSupportedDropActions(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfSearchModel_SupportedDragActions(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return static_cast<int>(vqpdfsearchmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfSearchModel::supportedDragActions());
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseSupportedDragActions(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqpdfsearchmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfSearchModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSupportedDragActions(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_InsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseInsertRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_InsertRows_IsBase(true);
        return vqpdfsearchmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnInsertRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_InsertRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_InsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseInsertColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_InsertColumns_IsBase(true);
        return vqpdfsearchmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnInsertColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_InsertColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_RemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseRemoveRows(QPdfSearchModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RemoveRows_IsBase(true);
        return vqpdfsearchmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRemoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RemoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_RemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseRemoveColumns(QPdfSearchModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RemoveColumns_IsBase(true);
        return vqpdfsearchmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfSearchModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRemoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_RemoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_MoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfSearchModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MoveRows_IsBase(true);
        return vqpdfsearchmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfSearchModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_MoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfSearchModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MoveColumns_IsBase(true);
        return vqpdfsearchmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfSearchModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_FetchMore(QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->fetchMore(*parent);
    } else {
        self->QPdfSearchModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseFetchMore(QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_FetchMore_IsBase(true);
        vqpdfsearchmodel->fetchMore(*parent);
    } else {
        self->QPdfSearchModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnFetchMore(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_FetchMore_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_CanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->canFetchMore(*parent);
    } else {
        return self->QPdfSearchModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseCanFetchMore(const QPdfSearchModel* self, const QModelIndex* parent) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CanFetchMore_IsBase(true);
        return vqpdfsearchmodel->canFetchMore(*parent);
    } else {
        return self->QPdfSearchModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCanFetchMore(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CanFetchMore_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_Sort(QPdfSearchModel* self, int column, int order) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfSearchModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseSort(QPdfSearchModel* self, int column, int order) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sort_IsBase(true);
        vqpdfsearchmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfSearchModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSort(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sort_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_Buddy(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QModelIndex(vqpdfsearchmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_QBaseBuddy(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Buddy_IsBase(true);
        return new QModelIndex(vqpdfsearchmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfSearchModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBuddy(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Buddy_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfSearchModel_Match(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        QList<QModelIndex> _ret = vqpdfsearchmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfSearchModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QPdfSearchModel_QBaseMatch(const QPdfSearchModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqpdfsearchmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfSearchModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfSearchModel_OnMatch(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Match_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfSearchModel_Span(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QSize(vqpdfsearchmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfSearchModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QPdfSearchModel_QBaseSpan(const QPdfSearchModel* self, const QModelIndex* index) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Span_IsBase(true);
        return new QSize(vqpdfsearchmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfSearchModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSpan(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Span_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_MultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfSearchModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseMultiData(const QPdfSearchModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MultiData_IsBase(true);
        vqpdfsearchmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfSearchModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnMultiData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_MultiData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_Submit(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->submit();
    } else {
        return self->QPdfSearchModel::submit();
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseSubmit(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Submit_IsBase(true);
        return vqpdfsearchmodel->submit();
    } else {
        return self->QPdfSearchModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSubmit(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Submit_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_Revert(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->revert();
    } else {
        self->QPdfSearchModel::revert();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseRevert(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Revert_IsBase(true);
        vqpdfsearchmodel->revert();
    } else {
        self->QPdfSearchModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnRevert(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Revert_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_ResetInternalData(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->resetInternalData();
    } else {
        ((VirtualQPdfSearchModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseResetInternalData(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ResetInternalData_IsBase(true);
        vqpdfsearchmodel->resetInternalData();
    } else {
        ((VirtualQPdfSearchModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnResetInternalData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ResetInternalData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_Event(QPdfSearchModel* self, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->event(event);
    } else {
        return self->QPdfSearchModel::event(event);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseEvent(QPdfSearchModel* self, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Event_IsBase(true);
        return vqpdfsearchmodel->event(event);
    } else {
        return self->QPdfSearchModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEvent(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Event_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_EventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->eventFilter(watched, event);
    } else {
        return self->QPdfSearchModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseEventFilter(QPdfSearchModel* self, QObject* watched, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EventFilter_IsBase(true);
        return vqpdfsearchmodel->eventFilter(watched, event);
    } else {
        return self->QPdfSearchModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEventFilter(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EventFilter_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_ChildEvent(QPdfSearchModel* self, QChildEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->childEvent(event);
    } else {
        ((VirtualQPdfSearchModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseChildEvent(QPdfSearchModel* self, QChildEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChildEvent_IsBase(true);
        vqpdfsearchmodel->childEvent(event);
    } else {
        ((VirtualQPdfSearchModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnChildEvent(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChildEvent_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_CustomEvent(QPdfSearchModel* self, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->customEvent(event);
    } else {
        ((VirtualQPdfSearchModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseCustomEvent(QPdfSearchModel* self, QEvent* event) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CustomEvent_IsBase(true);
        vqpdfsearchmodel->customEvent(event);
    } else {
        ((VirtualQPdfSearchModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCustomEvent(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CustomEvent_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_ConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfSearchModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ConnectNotify_IsBase(true);
        vqpdfsearchmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfSearchModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnConnectNotify(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_DisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfSearchModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseDisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DisconnectNotify_IsBase(true);
        vqpdfsearchmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfSearchModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnDisconnectNotify(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_UpdatePage(QPdfSearchModel* self, int page) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->updatePage(static_cast<int>(page));
    } else {
        ((VirtualQPdfSearchModel*)self)->updatePage(static_cast<int>(page));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseUpdatePage(QPdfSearchModel* self, int page) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_UpdatePage_IsBase(true);
        vqpdfsearchmodel->updatePage(static_cast<int>(page));
    } else {
        ((VirtualQPdfSearchModel*)self)->updatePage(static_cast<int>(page));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnUpdatePage(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_UpdatePage_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_UpdatePage_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfSearchModel_CreateIndex(const QPdfSearchModel* self, int row, int column) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return new QModelIndex(vqpdfsearchmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QPdfSearchModel_QBaseCreateIndex(const QPdfSearchModel* self, int row, int column) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqpdfsearchmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnCreateIndex(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_CreateIndex_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfSearchModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEncodeData(const QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EncodeData_IsBase(true);
        vqpdfsearchmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfSearchModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEncodeData(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EncodeData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_DecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfSearchModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseDecodeData(QPdfSearchModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DecodeData_IsBase(true);
        return vqpdfsearchmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfSearchModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnDecodeData(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_DecodeData_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_BeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseBeginInsertRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginInsertRows_IsBase(true);
        vqpdfsearchmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginInsertRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndInsertRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endInsertRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndInsertRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndInsertRows_IsBase(true);
        vqpdfsearchmodel->endInsertRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndInsertRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndInsertRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_BeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseBeginRemoveRows(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginRemoveRows_IsBase(true);
        vqpdfsearchmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginRemoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndRemoveRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endRemoveRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndRemoveRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndRemoveRows_IsBase(true);
        vqpdfsearchmodel->endRemoveRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndRemoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_BeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfSearchModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseBeginMoveRows(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginMoveRows_IsBase(true);
        return vqpdfsearchmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfSearchModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginMoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndMoveRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endMoveRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndMoveRows(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndMoveRows_IsBase(true);
        vqpdfsearchmodel->endMoveRows();
    } else {
        ((VirtualQPdfSearchModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndMoveRows(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndMoveRows_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_BeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseBeginInsertColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginInsertColumns_IsBase(true);
        vqpdfsearchmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginInsertColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndInsertColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endInsertColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndInsertColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndInsertColumns_IsBase(true);
        vqpdfsearchmodel->endInsertColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndInsertColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_BeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseBeginRemoveColumns(QPdfSearchModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginRemoveColumns_IsBase(true);
        vqpdfsearchmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfSearchModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginRemoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndRemoveColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndRemoveColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndRemoveColumns_IsBase(true);
        vqpdfsearchmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndRemoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_BeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfSearchModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseBeginMoveColumns(QPdfSearchModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginMoveColumns_IsBase(true);
        return vqpdfsearchmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfSearchModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginMoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndMoveColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endMoveColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndMoveColumns(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndMoveColumns_IsBase(true);
        vqpdfsearchmodel->endMoveColumns();
    } else {
        ((VirtualQPdfSearchModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndMoveColumns(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_BeginResetModel(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->beginResetModel();
    } else {
        ((VirtualQPdfSearchModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseBeginResetModel(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginResetModel_IsBase(true);
        vqpdfsearchmodel->beginResetModel();
    } else {
        ((VirtualQPdfSearchModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnBeginResetModel(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_BeginResetModel_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_EndResetModel(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->endResetModel();
    } else {
        ((VirtualQPdfSearchModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseEndResetModel(QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndResetModel_IsBase(true);
        vqpdfsearchmodel->endResetModel();
    } else {
        ((VirtualQPdfSearchModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnEndResetModel(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_EndResetModel_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_ChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfSearchModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseChangePersistentIndex(QPdfSearchModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChangePersistentIndex_IsBase(true);
        vqpdfsearchmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfSearchModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnChangePersistentIndex(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfSearchModel_ChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
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
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfSearchModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QPdfSearchModel_QBaseChangePersistentIndexList(QPdfSearchModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
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
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChangePersistentIndexList_IsBase(true);
        vqpdfsearchmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfSearchModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnChangePersistentIndexList(QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = dynamic_cast<VirtualQPdfSearchModel*>(self);
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfSearchModel_PersistentIndexList(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        QList<QModelIndex> _ret = vqpdfsearchmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfSearchModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QPdfSearchModel_QBasePersistentIndexList(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqpdfsearchmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfSearchModel*)self)->persistentIndexList();
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
void QPdfSearchModel_OnPersistentIndexList(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfSearchModel_Sender(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->sender();
    } else {
        return ((VirtualQPdfSearchModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfSearchModel_QBaseSender(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sender_IsBase(true);
        return vqpdfsearchmodel->sender();
    } else {
        return ((VirtualQPdfSearchModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSender(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Sender_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfSearchModel_SenderSignalIndex(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfSearchModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseSenderSignalIndex(const QPdfSearchModel* self) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SenderSignalIndex_IsBase(true);
        return vqpdfsearchmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfSearchModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnSenderSignalIndex(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfSearchModel_Receivers(const QPdfSearchModel* self, const char* signal) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->receivers(signal);
    } else {
        return ((VirtualQPdfSearchModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfSearchModel_QBaseReceivers(const QPdfSearchModel* self, const char* signal) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Receivers_IsBase(true);
        return vqpdfsearchmodel->receivers(signal);
    } else {
        return ((VirtualQPdfSearchModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnReceivers(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_Receivers_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfSearchModel_IsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        return vqpdfsearchmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfSearchModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfSearchModel_QBaseIsSignalConnected(const QPdfSearchModel* self, const QMetaMethod* signal) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_IsSignalConnected_IsBase(true);
        return vqpdfsearchmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfSearchModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfSearchModel_OnIsSignalConnected(const QPdfSearchModel* self, intptr_t slot) {
    auto* vqpdfsearchmodel = const_cast<VirtualQPdfSearchModel*>(dynamic_cast<const VirtualQPdfSearchModel*>(self));
    if (vqpdfsearchmodel && vqpdfsearchmodel->isVirtualQPdfSearchModel) {
        vqpdfsearchmodel->setQPdfSearchModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfSearchModel::QPdfSearchModel_IsSignalConnected_Callback>(slot));
    }
}

void QPdfSearchModel_Delete(QPdfSearchModel* self) {
    delete self;
}
