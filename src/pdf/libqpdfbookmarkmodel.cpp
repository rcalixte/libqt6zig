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
#include <QPdfBookmarkModel>
#include <QPdfDocument>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfbookmarkmodel.h>
#include "libqpdfbookmarkmodel.h"
#include "libqpdfbookmarkmodel.hxx"

QPdfBookmarkModel* QPdfBookmarkModel_new() {
    return new VirtualQPdfBookmarkModel();
}

QPdfBookmarkModel* QPdfBookmarkModel_new2(QObject* parent) {
    return new VirtualQPdfBookmarkModel(parent);
}

QMetaObject* QPdfBookmarkModel_MetaObject(const QPdfBookmarkModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfBookmarkModel_Metacast(QPdfBookmarkModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfBookmarkModel_Metacall(QPdfBookmarkModel* self, int param1, int param2, void** param3) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfBookmarkModel_Tr(const char* s) {
    QString _ret = QPdfBookmarkModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPdfDocument* QPdfBookmarkModel_Document(const QPdfBookmarkModel* self) {
    return self->document();
}

void QPdfBookmarkModel_SetDocument(QPdfBookmarkModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

QVariant* QPdfBookmarkModel_Data(const QPdfBookmarkModel* self, const QModelIndex* index, int role) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfBookmarkModel*)self)->data(*index, static_cast<int>(role)));
    }
}

QModelIndex* QPdfBookmarkModel_Index(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QModelIndex* QPdfBookmarkModel_Parent(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QModelIndex(self->parent(*index));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->parent(*index));
    }
}

int QPdfBookmarkModel_RowCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->rowCount(*parent);
    }
}

int QPdfBookmarkModel_ColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->columnCount(*parent);
    }
}

libqt_map /* of int to libqt_string */ QPdfBookmarkModel_RoleNames(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<const VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualQPdfBookmarkModel*)self)->roleNames();
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

void QPdfBookmarkModel_DocumentChanged(QPdfBookmarkModel* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfBookmarkModel_Connect_DocumentChanged(QPdfBookmarkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfBookmarkModel*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfBookmarkModel*, QPdfDocument*)>(slot);
    QPdfBookmarkModel::connect(self, &QPdfBookmarkModel::documentChanged, [self, slotFunc](QPdfDocument* document) {
        QPdfDocument* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfBookmarkModel_Tr2(const char* s, const char* c) {
    QString _ret = QPdfBookmarkModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfBookmarkModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfBookmarkModel::tr(s, c, static_cast<int>(n));
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
int QPdfBookmarkModel_QBaseMetacall(QPdfBookmarkModel* self, int param1, int param2, void** param3) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Metacall_IsBase(true);
        return vqpdfbookmarkmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPdfBookmarkModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMetacall(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Metacall_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QPdfBookmarkModel_QBaseData(const QPdfBookmarkModel* self, const QModelIndex* index, int role) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Data_IsBase(true);
        return new QVariant(vqpdfbookmarkmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfBookmarkModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Data_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_QBaseIndex(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Index_IsBase(true);
        return new QModelIndex(vqpdfbookmarkmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnIndex(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Index_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_QBaseParent(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Parent_IsBase(true);
        return new QModelIndex(vqpdfbookmarkmodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnParent(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Parent_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseRowCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RowCount_IsBase(true);
        return vqpdfbookmarkmodel->rowCount(*parent);
    } else {
        return self->QPdfBookmarkModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRowCount(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RowCount_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseColumnCount(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ColumnCount_IsBase(true);
        return vqpdfbookmarkmodel->columnCount(*parent);
    } else {
        return self->QPdfBookmarkModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnColumnCount(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ColumnCount_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QPdfBookmarkModel_QBaseRoleNames(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqpdfbookmarkmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->QPdfBookmarkModel::roleNames();
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
void QPdfBookmarkModel_OnRoleNames(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RoleNames_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_Sibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QModelIndex(vqpdfbookmarkmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_QBaseSibling(const QPdfBookmarkModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sibling_IsBase(true);
        return new QModelIndex(vqpdfbookmarkmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSibling(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sibling_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_HasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->hasChildren(*parent);
    } else {
        return self->QPdfBookmarkModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseHasChildren(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_HasChildren_IsBase(true);
        return vqpdfbookmarkmodel->hasChildren(*parent);
    } else {
        return self->QPdfBookmarkModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnHasChildren(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_HasChildren_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfBookmarkModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseSetData(QPdfBookmarkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetData_IsBase(true);
        return vqpdfbookmarkmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfBookmarkModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfBookmarkModel_HeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QVariant(vqpdfbookmarkmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfBookmarkModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QPdfBookmarkModel_QBaseHeaderData(const QPdfBookmarkModel* self, int section, int orientation, int role) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_HeaderData_IsBase(true);
        return new QVariant(vqpdfbookmarkmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfBookmarkModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnHeaderData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_HeaderData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfBookmarkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseSetHeaderData(QPdfBookmarkModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetHeaderData_IsBase(true);
        return vqpdfbookmarkmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfBookmarkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetHeaderData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetHeaderData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_ItemData(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        QMap<int, QVariant> _ret = vqpdfbookmarkmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfBookmarkModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ QPdfBookmarkModel_QBaseItemData(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqpdfbookmarkmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfBookmarkModel::itemData(*index);
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
void QPdfBookmarkModel_OnItemData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ItemData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_SetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfBookmarkModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseSetItemData(QPdfBookmarkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetItemData_IsBase(true);
        return vqpdfbookmarkmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfBookmarkModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSetItemData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SetItemData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_ClearItemData(QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->clearItemData(*index);
    } else {
        return self->QPdfBookmarkModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseClearItemData(QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ClearItemData_IsBase(true);
        return vqpdfbookmarkmodel->clearItemData(*index);
    } else {
        return self->QPdfBookmarkModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnClearItemData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ClearItemData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfBookmarkModel_MimeTypes(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        QList<QString> _ret = vqpdfbookmarkmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfBookmarkModel::mimeTypes();
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
libqt_list /* of libqt_string */ QPdfBookmarkModel_QBaseMimeTypes(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqpdfbookmarkmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfBookmarkModel::mimeTypes();
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
void QPdfBookmarkModel_OnMimeTypes(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MimeTypes_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QPdfBookmarkModel_MimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfBookmarkModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QPdfBookmarkModel_QBaseMimeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MimeData_IsBase(true);
        return vqpdfbookmarkmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfBookmarkModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMimeData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MimeData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_CanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfBookmarkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseCanDropMimeData(const QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CanDropMimeData_IsBase(true);
        return vqpdfbookmarkmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfBookmarkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCanDropMimeData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_DropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfBookmarkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseDropMimeData(QPdfBookmarkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DropMimeData_IsBase(true);
        return vqpdfbookmarkmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfBookmarkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnDropMimeData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DropMimeData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfBookmarkModel_SupportedDropActions(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return static_cast<int>(vqpdfbookmarkmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::supportedDropActions());
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseSupportedDropActions(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqpdfbookmarkmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSupportedDropActions(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfBookmarkModel_SupportedDragActions(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return static_cast<int>(vqpdfbookmarkmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::supportedDragActions());
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseSupportedDragActions(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqpdfbookmarkmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSupportedDragActions(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_InsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseInsertRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_InsertRows_IsBase(true);
        return vqpdfbookmarkmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnInsertRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_InsertRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_InsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseInsertColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_InsertColumns_IsBase(true);
        return vqpdfbookmarkmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnInsertColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_InsertColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_RemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseRemoveRows(QPdfBookmarkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RemoveRows_IsBase(true);
        return vqpdfbookmarkmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRemoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RemoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_RemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseRemoveColumns(QPdfBookmarkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RemoveColumns_IsBase(true);
        return vqpdfbookmarkmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfBookmarkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRemoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_RemoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_MoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfBookmarkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MoveRows_IsBase(true);
        return vqpdfbookmarkmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfBookmarkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_MoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfBookmarkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MoveColumns_IsBase(true);
        return vqpdfbookmarkmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfBookmarkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_FetchMore(QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->fetchMore(*parent);
    } else {
        self->QPdfBookmarkModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseFetchMore(QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_FetchMore_IsBase(true);
        vqpdfbookmarkmodel->fetchMore(*parent);
    } else {
        self->QPdfBookmarkModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnFetchMore(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_FetchMore_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_CanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->canFetchMore(*parent);
    } else {
        return self->QPdfBookmarkModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseCanFetchMore(const QPdfBookmarkModel* self, const QModelIndex* parent) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CanFetchMore_IsBase(true);
        return vqpdfbookmarkmodel->canFetchMore(*parent);
    } else {
        return self->QPdfBookmarkModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCanFetchMore(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CanFetchMore_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfBookmarkModel_Flags(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return static_cast<int>(vqpdfbookmarkmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::flags(*index));
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseFlags(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Flags_IsBase(true);
        return static_cast<int>(vqpdfbookmarkmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfBookmarkModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnFlags(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Flags_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_Sort(QPdfBookmarkModel* self, int column, int order) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfBookmarkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseSort(QPdfBookmarkModel* self, int column, int order) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sort_IsBase(true);
        vqpdfbookmarkmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfBookmarkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSort(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sort_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_Buddy(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QModelIndex(vqpdfbookmarkmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_QBaseBuddy(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Buddy_IsBase(true);
        return new QModelIndex(vqpdfbookmarkmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfBookmarkModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBuddy(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Buddy_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_Match(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        QList<QModelIndex> _ret = vqpdfbookmarkmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfBookmarkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_QBaseMatch(const QPdfBookmarkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqpdfbookmarkmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfBookmarkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfBookmarkModel_OnMatch(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Match_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfBookmarkModel_Span(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QSize(vqpdfbookmarkmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfBookmarkModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QPdfBookmarkModel_QBaseSpan(const QPdfBookmarkModel* self, const QModelIndex* index) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Span_IsBase(true);
        return new QSize(vqpdfbookmarkmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfBookmarkModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSpan(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Span_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_MultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfBookmarkModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseMultiData(const QPdfBookmarkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MultiData_IsBase(true);
        vqpdfbookmarkmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfBookmarkModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnMultiData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_MultiData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_Submit(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->submit();
    } else {
        return self->QPdfBookmarkModel::submit();
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseSubmit(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Submit_IsBase(true);
        return vqpdfbookmarkmodel->submit();
    } else {
        return self->QPdfBookmarkModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSubmit(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Submit_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_Revert(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->revert();
    } else {
        self->QPdfBookmarkModel::revert();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseRevert(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Revert_IsBase(true);
        vqpdfbookmarkmodel->revert();
    } else {
        self->QPdfBookmarkModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnRevert(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Revert_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_ResetInternalData(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->resetInternalData();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseResetInternalData(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ResetInternalData_IsBase(true);
        vqpdfbookmarkmodel->resetInternalData();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnResetInternalData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ResetInternalData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_Event(QPdfBookmarkModel* self, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->event(event);
    } else {
        return self->QPdfBookmarkModel::event(event);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseEvent(QPdfBookmarkModel* self, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Event_IsBase(true);
        return vqpdfbookmarkmodel->event(event);
    } else {
        return self->QPdfBookmarkModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEvent(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Event_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_EventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->eventFilter(watched, event);
    } else {
        return self->QPdfBookmarkModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseEventFilter(QPdfBookmarkModel* self, QObject* watched, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EventFilter_IsBase(true);
        return vqpdfbookmarkmodel->eventFilter(watched, event);
    } else {
        return self->QPdfBookmarkModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEventFilter(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EventFilter_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_TimerEvent(QPdfBookmarkModel* self, QTimerEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->timerEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseTimerEvent(QPdfBookmarkModel* self, QTimerEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_TimerEvent_IsBase(true);
        vqpdfbookmarkmodel->timerEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnTimerEvent(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_TimerEvent_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_ChildEvent(QPdfBookmarkModel* self, QChildEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->childEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseChildEvent(QPdfBookmarkModel* self, QChildEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChildEvent_IsBase(true);
        vqpdfbookmarkmodel->childEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnChildEvent(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChildEvent_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_CustomEvent(QPdfBookmarkModel* self, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->customEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseCustomEvent(QPdfBookmarkModel* self, QEvent* event) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CustomEvent_IsBase(true);
        vqpdfbookmarkmodel->customEvent(event);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCustomEvent(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CustomEvent_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_ConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ConnectNotify_IsBase(true);
        vqpdfbookmarkmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnConnectNotify(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_DisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseDisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DisconnectNotify_IsBase(true);
        vqpdfbookmarkmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnDisconnectNotify(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfBookmarkModel_CreateIndex(const QPdfBookmarkModel* self, int row, int column) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return new QModelIndex(vqpdfbookmarkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QPdfBookmarkModel_QBaseCreateIndex(const QPdfBookmarkModel* self, int row, int column) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqpdfbookmarkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnCreateIndex(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_CreateIndex_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEncodeData(const QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EncodeData_IsBase(true);
        vqpdfbookmarkmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEncodeData(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EncodeData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_DecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseDecodeData(QPdfBookmarkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DecodeData_IsBase(true);
        return vqpdfbookmarkmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnDecodeData(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_DecodeData_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_BeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseBeginInsertRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginInsertRows_IsBase(true);
        vqpdfbookmarkmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginInsertRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndInsertRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endInsertRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndInsertRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndInsertRows_IsBase(true);
        vqpdfbookmarkmodel->endInsertRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndInsertRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndInsertRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_BeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseBeginRemoveRows(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginRemoveRows_IsBase(true);
        vqpdfbookmarkmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginRemoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndRemoveRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endRemoveRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndRemoveRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndRemoveRows_IsBase(true);
        vqpdfbookmarkmodel->endRemoveRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndRemoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_BeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseBeginMoveRows(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginMoveRows_IsBase(true);
        return vqpdfbookmarkmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginMoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndMoveRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endMoveRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndMoveRows(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndMoveRows_IsBase(true);
        vqpdfbookmarkmodel->endMoveRows();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndMoveRows(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndMoveRows_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_BeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseBeginInsertColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginInsertColumns_IsBase(true);
        vqpdfbookmarkmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginInsertColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndInsertColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endInsertColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndInsertColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndInsertColumns_IsBase(true);
        vqpdfbookmarkmodel->endInsertColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndInsertColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_BeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseBeginRemoveColumns(QPdfBookmarkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginRemoveColumns_IsBase(true);
        vqpdfbookmarkmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginRemoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndRemoveColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndRemoveColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndRemoveColumns_IsBase(true);
        vqpdfbookmarkmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndRemoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_BeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseBeginMoveColumns(QPdfBookmarkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginMoveColumns_IsBase(true);
        return vqpdfbookmarkmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginMoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndMoveColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endMoveColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndMoveColumns(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndMoveColumns_IsBase(true);
        vqpdfbookmarkmodel->endMoveColumns();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndMoveColumns(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_BeginResetModel(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->beginResetModel();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseBeginResetModel(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginResetModel_IsBase(true);
        vqpdfbookmarkmodel->beginResetModel();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnBeginResetModel(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_BeginResetModel_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_EndResetModel(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->endResetModel();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseEndResetModel(QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndResetModel_IsBase(true);
        vqpdfbookmarkmodel->endResetModel();
    } else {
        ((VirtualQPdfBookmarkModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnEndResetModel(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_EndResetModel_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_ChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseChangePersistentIndex(QPdfBookmarkModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChangePersistentIndex_IsBase(true);
        vqpdfbookmarkmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnChangePersistentIndex(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfBookmarkModel_ChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
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
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QPdfBookmarkModel_QBaseChangePersistentIndexList(QPdfBookmarkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
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
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChangePersistentIndexList_IsBase(true);
        vqpdfbookmarkmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfBookmarkModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnChangePersistentIndexList(QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = dynamic_cast<VirtualQPdfBookmarkModel*>(self);
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_PersistentIndexList(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        QList<QModelIndex> _ret = vqpdfbookmarkmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfBookmarkModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QPdfBookmarkModel_QBasePersistentIndexList(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqpdfbookmarkmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfBookmarkModel*)self)->persistentIndexList();
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
void QPdfBookmarkModel_OnPersistentIndexList(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfBookmarkModel_Sender(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->sender();
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfBookmarkModel_QBaseSender(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sender_IsBase(true);
        return vqpdfbookmarkmodel->sender();
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSender(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Sender_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfBookmarkModel_SenderSignalIndex(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseSenderSignalIndex(const QPdfBookmarkModel* self) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SenderSignalIndex_IsBase(true);
        return vqpdfbookmarkmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnSenderSignalIndex(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfBookmarkModel_Receivers(const QPdfBookmarkModel* self, const char* signal) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->receivers(signal);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfBookmarkModel_QBaseReceivers(const QPdfBookmarkModel* self, const char* signal) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Receivers_IsBase(true);
        return vqpdfbookmarkmodel->receivers(signal);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnReceivers(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_Receivers_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfBookmarkModel_IsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        return vqpdfbookmarkmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfBookmarkModel_QBaseIsSignalConnected(const QPdfBookmarkModel* self, const QMetaMethod* signal) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_IsSignalConnected_IsBase(true);
        return vqpdfbookmarkmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfBookmarkModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfBookmarkModel_OnIsSignalConnected(const QPdfBookmarkModel* self, intptr_t slot) {
    auto* vqpdfbookmarkmodel = const_cast<VirtualQPdfBookmarkModel*>(dynamic_cast<const VirtualQPdfBookmarkModel*>(self));
    if (vqpdfbookmarkmodel && vqpdfbookmarkmodel->isVirtualQPdfBookmarkModel) {
        vqpdfbookmarkmodel->setQPdfBookmarkModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfBookmarkModel::QPdfBookmarkModel_IsSignalConnected_Callback>(slot));
    }
}

void QPdfBookmarkModel_Delete(QPdfBookmarkModel* self) {
    delete self;
}
