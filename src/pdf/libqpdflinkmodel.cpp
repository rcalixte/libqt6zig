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
#include <QPdfLinkModel>
#include <QPointF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdflinkmodel.h>
#include "libqpdflinkmodel.h"
#include "libqpdflinkmodel.hxx"

QPdfLinkModel* QPdfLinkModel_new() {
    return new VirtualQPdfLinkModel();
}

QPdfLinkModel* QPdfLinkModel_new2(QObject* parent) {
    return new VirtualQPdfLinkModel(parent);
}

QMetaObject* QPdfLinkModel_MetaObject(const QPdfLinkModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfLinkModel_Metacast(QPdfLinkModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfLinkModel_Metacall(QPdfLinkModel* self, int param1, int param2, void** param3) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfLinkModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfLinkModel_OnMetacall(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Metacall_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfLinkModel_QBaseMetacall(QPdfLinkModel* self, int param1, int param2, void** param3) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Metacall_IsBase(true);
        return vqpdflinkmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfLinkModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfLinkModel_Tr(const char* s) {
    QString _ret = QPdfLinkModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPdfDocument* QPdfLinkModel_Document(const QPdfLinkModel* self) {
    return self->document();
}

libqt_map /* of int to libqt_string */ QPdfLinkModel_RoleNames(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualQPdfLinkModel*)self)->roleNames();
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
void QPdfLinkModel_OnRoleNames(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RoleNames_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RoleNames_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to libqt_string */ QPdfLinkModel_QBaseRoleNames(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqpdflinkmodel->roleNames();
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
        QHash<int, QByteArray> _ret = ((VirtualQPdfLinkModel*)self)->roleNames();
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

int QPdfLinkModel_RowCount(const QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQPdfLinkModel*)self)->rowCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfLinkModel_OnRowCount(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RowCount_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RowCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfLinkModel_QBaseRowCount(const QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RowCount_IsBase(true);
        return vqpdflinkmodel->rowCount(*parent);
    } else {
        return ((VirtualQPdfLinkModel*)self)->rowCount(*parent);
    }
}

QVariant* QPdfLinkModel_Data(const QPdfLinkModel* self, const QModelIndex* index, int role) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfLinkModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfLinkModel_OnData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Data_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Data_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QPdfLinkModel_QBaseData(const QPdfLinkModel* self, const QModelIndex* index, int role) {
    auto* vqpdflinkmodel = dynamic_cast<const VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Data_IsBase(true);
        return new QVariant(vqpdflinkmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfLinkModel*)self)->data(*index, static_cast<int>(role)));
    }
}

int QPdfLinkModel_Page(const QPdfLinkModel* self) {
    return self->page();
}

QPdfLink* QPdfLinkModel_LinkAt(const QPdfLinkModel* self, QPointF* point) {
    return new QPdfLink(self->linkAt(*point));
}

void QPdfLinkModel_SetDocument(QPdfLinkModel* self, QPdfDocument* document) {
    self->setDocument(document);
}

void QPdfLinkModel_SetPage(QPdfLinkModel* self, int page) {
    self->setPage(static_cast<int>(page));
}

void QPdfLinkModel_DocumentChanged(QPdfLinkModel* self) {
    self->documentChanged();
}

void QPdfLinkModel_Connect_DocumentChanged(QPdfLinkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfLinkModel*) = reinterpret_cast<void (*)(QPdfLinkModel*)>(slot);
    QPdfLinkModel::connect(self, &QPdfLinkModel::documentChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPdfLinkModel_PageChanged(QPdfLinkModel* self, int page) {
    self->pageChanged(static_cast<int>(page));
}

void QPdfLinkModel_Connect_PageChanged(QPdfLinkModel* self, intptr_t slot) {
    void (*slotFunc)(QPdfLinkModel*, int) = reinterpret_cast<void (*)(QPdfLinkModel*, int)>(slot);
    QPdfLinkModel::connect(self, &QPdfLinkModel::pageChanged, [self, slotFunc](int page) {
        int sigval1 = page;
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfLinkModel_Tr2(const char* s, const char* c) {
    QString _ret = QPdfLinkModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfLinkModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfLinkModel::tr(s, c, static_cast<int>(n));
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
QModelIndex* QPdfLinkModel_Index(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QModelIndex(vqpdflinkmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_QBaseIndex(const QPdfLinkModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Index_IsBase(true);
        return new QModelIndex(vqpdflinkmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnIndex(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Index_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_Sibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QModelIndex(vqpdflinkmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_QBaseSibling(const QPdfLinkModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sibling_IsBase(true);
        return new QModelIndex(vqpdflinkmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSibling(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sibling_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_DropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfLinkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseDropMimeData(QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DropMimeData_IsBase(true);
        return vqpdflinkmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfLinkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnDropMimeData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DropMimeData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfLinkModel_Flags(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return static_cast<int>(vqpdflinkmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfLinkModel::flags(*index));
    }
}

// Base class handler implementation
int QPdfLinkModel_QBaseFlags(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Flags_IsBase(true);
        return static_cast<int>(vqpdflinkmodel->flags(*index));
    } else {
        return static_cast<int>(self->QPdfLinkModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnFlags(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Flags_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_SetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfLinkModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseSetData(QPdfLinkModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetData_IsBase(true);
        return vqpdflinkmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->QPdfLinkModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfLinkModel_HeaderData(const QPdfLinkModel* self, int section, int orientation, int role) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QVariant(vqpdflinkmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfLinkModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QPdfLinkModel_QBaseHeaderData(const QPdfLinkModel* self, int section, int orientation, int role) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_HeaderData_IsBase(true);
        return new QVariant(vqpdflinkmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQPdfLinkModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnHeaderData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_HeaderData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_SetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfLinkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseSetHeaderData(QPdfLinkModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetHeaderData_IsBase(true);
        return vqpdflinkmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QPdfLinkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetHeaderData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetHeaderData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QPdfLinkModel_ItemData(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        QMap<int, QVariant> _ret = vqpdflinkmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfLinkModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ QPdfLinkModel_QBaseItemData(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqpdflinkmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->QPdfLinkModel::itemData(*index);
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
void QPdfLinkModel_OnItemData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ItemData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_SetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfLinkModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseSetItemData(QPdfLinkModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetItemData_IsBase(true);
        return vqpdflinkmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QPdfLinkModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSetItemData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SetItemData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_ClearItemData(QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->clearItemData(*index);
    } else {
        return self->QPdfLinkModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseClearItemData(QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ClearItemData_IsBase(true);
        return vqpdflinkmodel->clearItemData(*index);
    } else {
        return self->QPdfLinkModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnClearItemData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ClearItemData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QPdfLinkModel_MimeTypes(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        QList<QString> _ret = vqpdflinkmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfLinkModel::mimeTypes();
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
libqt_list /* of libqt_string */ QPdfLinkModel_QBaseMimeTypes(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqpdflinkmodel->mimeTypes();
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
        QList<QString> _ret = self->QPdfLinkModel::mimeTypes();
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
void QPdfLinkModel_OnMimeTypes(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MimeTypes_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QPdfLinkModel_MimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfLinkModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QPdfLinkModel_QBaseMimeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MimeData_IsBase(true);
        return vqpdflinkmodel->mimeData(indexes_QList);
    } else {
        return self->QPdfLinkModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMimeData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MimeData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_CanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfLinkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseCanDropMimeData(const QPdfLinkModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CanDropMimeData_IsBase(true);
        return vqpdflinkmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QPdfLinkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCanDropMimeData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfLinkModel_SupportedDropActions(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return static_cast<int>(vqpdflinkmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfLinkModel::supportedDropActions());
    }
}

// Base class handler implementation
int QPdfLinkModel_QBaseSupportedDropActions(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqpdflinkmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->QPdfLinkModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSupportedDropActions(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfLinkModel_SupportedDragActions(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return static_cast<int>(vqpdflinkmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfLinkModel::supportedDragActions());
    }
}

// Base class handler implementation
int QPdfLinkModel_QBaseSupportedDragActions(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqpdflinkmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QPdfLinkModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSupportedDragActions(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_InsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseInsertRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_InsertRows_IsBase(true);
        return vqpdflinkmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnInsertRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_InsertRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_InsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseInsertColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_InsertColumns_IsBase(true);
        return vqpdflinkmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnInsertColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_InsertColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_RemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseRemoveRows(QPdfLinkModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RemoveRows_IsBase(true);
        return vqpdflinkmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRemoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RemoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_RemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseRemoveColumns(QPdfLinkModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RemoveColumns_IsBase(true);
        return vqpdflinkmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QPdfLinkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRemoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_RemoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_MoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfLinkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MoveRows_IsBase(true);
        return vqpdflinkmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfLinkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_MoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfLinkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MoveColumns_IsBase(true);
        return vqpdflinkmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QPdfLinkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_FetchMore(QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->fetchMore(*parent);
    } else {
        self->QPdfLinkModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseFetchMore(QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_FetchMore_IsBase(true);
        vqpdflinkmodel->fetchMore(*parent);
    } else {
        self->QPdfLinkModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnFetchMore(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_FetchMore_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_CanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->canFetchMore(*parent);
    } else {
        return self->QPdfLinkModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseCanFetchMore(const QPdfLinkModel* self, const QModelIndex* parent) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CanFetchMore_IsBase(true);
        return vqpdflinkmodel->canFetchMore(*parent);
    } else {
        return self->QPdfLinkModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCanFetchMore(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CanFetchMore_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_Sort(QPdfLinkModel* self, int column, int order) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfLinkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseSort(QPdfLinkModel* self, int column, int order) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sort_IsBase(true);
        vqpdflinkmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->QPdfLinkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSort(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sort_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_Buddy(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QModelIndex(vqpdflinkmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_QBaseBuddy(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Buddy_IsBase(true);
        return new QModelIndex(vqpdflinkmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQPdfLinkModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBuddy(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Buddy_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfLinkModel_Match(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        QList<QModelIndex> _ret = vqpdflinkmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfLinkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QPdfLinkModel_QBaseMatch(const QPdfLinkModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqpdflinkmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QPdfLinkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QPdfLinkModel_OnMatch(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Match_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfLinkModel_Span(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QSize(vqpdflinkmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfLinkModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QPdfLinkModel_QBaseSpan(const QPdfLinkModel* self, const QModelIndex* index) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Span_IsBase(true);
        return new QSize(vqpdflinkmodel->span(*index));
    } else {
        return new QSize(((VirtualQPdfLinkModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSpan(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Span_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_MultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfLinkModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseMultiData(const QPdfLinkModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MultiData_IsBase(true);
        vqpdflinkmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QPdfLinkModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnMultiData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_MultiData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_Submit(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->submit();
    } else {
        return self->QPdfLinkModel::submit();
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseSubmit(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Submit_IsBase(true);
        return vqpdflinkmodel->submit();
    } else {
        return self->QPdfLinkModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSubmit(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Submit_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_Revert(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->revert();
    } else {
        self->QPdfLinkModel::revert();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseRevert(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Revert_IsBase(true);
        vqpdflinkmodel->revert();
    } else {
        self->QPdfLinkModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnRevert(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Revert_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_ResetInternalData(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->resetInternalData();
    } else {
        ((VirtualQPdfLinkModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseResetInternalData(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ResetInternalData_IsBase(true);
        vqpdflinkmodel->resetInternalData();
    } else {
        ((VirtualQPdfLinkModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnResetInternalData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ResetInternalData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_Event(QPdfLinkModel* self, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->event(event);
    } else {
        return self->QPdfLinkModel::event(event);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseEvent(QPdfLinkModel* self, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Event_IsBase(true);
        return vqpdflinkmodel->event(event);
    } else {
        return self->QPdfLinkModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEvent(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Event_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_EventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->eventFilter(watched, event);
    } else {
        return self->QPdfLinkModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseEventFilter(QPdfLinkModel* self, QObject* watched, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EventFilter_IsBase(true);
        return vqpdflinkmodel->eventFilter(watched, event);
    } else {
        return self->QPdfLinkModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEventFilter(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EventFilter_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_TimerEvent(QPdfLinkModel* self, QTimerEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->timerEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseTimerEvent(QPdfLinkModel* self, QTimerEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_TimerEvent_IsBase(true);
        vqpdflinkmodel->timerEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnTimerEvent(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_TimerEvent_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_ChildEvent(QPdfLinkModel* self, QChildEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->childEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseChildEvent(QPdfLinkModel* self, QChildEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChildEvent_IsBase(true);
        vqpdflinkmodel->childEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnChildEvent(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChildEvent_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_CustomEvent(QPdfLinkModel* self, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->customEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseCustomEvent(QPdfLinkModel* self, QEvent* event) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CustomEvent_IsBase(true);
        vqpdflinkmodel->customEvent(event);
    } else {
        ((VirtualQPdfLinkModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCustomEvent(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CustomEvent_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_ConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfLinkModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ConnectNotify_IsBase(true);
        vqpdflinkmodel->connectNotify(*signal);
    } else {
        ((VirtualQPdfLinkModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnConnectNotify(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_DisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfLinkModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DisconnectNotify_IsBase(true);
        vqpdflinkmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfLinkModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnDisconnectNotify(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QPdfLinkModel_CreateIndex(const QPdfLinkModel* self, int row, int column) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return new QModelIndex(vqpdflinkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QPdfLinkModel_QBaseCreateIndex(const QPdfLinkModel* self, int row, int column) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqpdflinkmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnCreateIndex(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_CreateIndex_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfLinkModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEncodeData(const QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EncodeData_IsBase(true);
        vqpdflinkmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQPdfLinkModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEncodeData(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EncodeData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_DecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfLinkModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseDecodeData(QPdfLinkModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DecodeData_IsBase(true);
        return vqpdflinkmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQPdfLinkModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnDecodeData(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_DecodeData_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_BeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseBeginInsertRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginInsertRows_IsBase(true);
        vqpdflinkmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginInsertRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndInsertRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endInsertRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndInsertRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndInsertRows_IsBase(true);
        vqpdflinkmodel->endInsertRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndInsertRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndInsertRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_BeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseBeginRemoveRows(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginRemoveRows_IsBase(true);
        vqpdflinkmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginRemoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndRemoveRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endRemoveRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndRemoveRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndRemoveRows_IsBase(true);
        vqpdflinkmodel->endRemoveRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndRemoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_BeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfLinkModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseBeginMoveRows(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginMoveRows_IsBase(true);
        return vqpdflinkmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQPdfLinkModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginMoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndMoveRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endMoveRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndMoveRows(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndMoveRows_IsBase(true);
        vqpdflinkmodel->endMoveRows();
    } else {
        ((VirtualQPdfLinkModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndMoveRows(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndMoveRows_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_BeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseBeginInsertColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginInsertColumns_IsBase(true);
        vqpdflinkmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginInsertColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndInsertColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endInsertColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndInsertColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndInsertColumns_IsBase(true);
        vqpdflinkmodel->endInsertColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndInsertColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_BeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseBeginRemoveColumns(QPdfLinkModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginRemoveColumns_IsBase(true);
        vqpdflinkmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQPdfLinkModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginRemoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndRemoveColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndRemoveColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndRemoveColumns_IsBase(true);
        vqpdflinkmodel->endRemoveColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndRemoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_BeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfLinkModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseBeginMoveColumns(QPdfLinkModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginMoveColumns_IsBase(true);
        return vqpdflinkmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQPdfLinkModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginMoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndMoveColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endMoveColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndMoveColumns(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndMoveColumns_IsBase(true);
        vqpdflinkmodel->endMoveColumns();
    } else {
        ((VirtualQPdfLinkModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndMoveColumns(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_BeginResetModel(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->beginResetModel();
    } else {
        ((VirtualQPdfLinkModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseBeginResetModel(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginResetModel_IsBase(true);
        vqpdflinkmodel->beginResetModel();
    } else {
        ((VirtualQPdfLinkModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnBeginResetModel(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_BeginResetModel_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_EndResetModel(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->endResetModel();
    } else {
        ((VirtualQPdfLinkModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseEndResetModel(QPdfLinkModel* self) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndResetModel_IsBase(true);
        vqpdflinkmodel->endResetModel();
    } else {
        ((VirtualQPdfLinkModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnEndResetModel(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_EndResetModel_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_ChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfLinkModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseChangePersistentIndex(QPdfLinkModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChangePersistentIndex_IsBase(true);
        vqpdflinkmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQPdfLinkModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnChangePersistentIndex(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfLinkModel_ChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
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
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfLinkModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QPdfLinkModel_QBaseChangePersistentIndexList(QPdfLinkModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
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
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChangePersistentIndexList_IsBase(true);
        vqpdflinkmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQPdfLinkModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnChangePersistentIndexList(QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = dynamic_cast<VirtualQPdfLinkModel*>(self);
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QPdfLinkModel_PersistentIndexList(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        QList<QModelIndex> _ret = vqpdflinkmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfLinkModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QPdfLinkModel_QBasePersistentIndexList(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqpdflinkmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQPdfLinkModel*)self)->persistentIndexList();
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
void QPdfLinkModel_OnPersistentIndexList(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfLinkModel_Sender(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->sender();
    } else {
        return ((VirtualQPdfLinkModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfLinkModel_QBaseSender(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sender_IsBase(true);
        return vqpdflinkmodel->sender();
    } else {
        return ((VirtualQPdfLinkModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSender(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Sender_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfLinkModel_SenderSignalIndex(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfLinkModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfLinkModel_QBaseSenderSignalIndex(const QPdfLinkModel* self) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SenderSignalIndex_IsBase(true);
        return vqpdflinkmodel->senderSignalIndex();
    } else {
        return ((VirtualQPdfLinkModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnSenderSignalIndex(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfLinkModel_Receivers(const QPdfLinkModel* self, const char* signal) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->receivers(signal);
    } else {
        return ((VirtualQPdfLinkModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfLinkModel_QBaseReceivers(const QPdfLinkModel* self, const char* signal) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Receivers_IsBase(true);
        return vqpdflinkmodel->receivers(signal);
    } else {
        return ((VirtualQPdfLinkModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnReceivers(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_Receivers_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfLinkModel_IsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        return vqpdflinkmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfLinkModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfLinkModel_QBaseIsSignalConnected(const QPdfLinkModel* self, const QMetaMethod* signal) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_IsSignalConnected_IsBase(true);
        return vqpdflinkmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfLinkModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfLinkModel_OnIsSignalConnected(const QPdfLinkModel* self, intptr_t slot) {
    auto* vqpdflinkmodel = const_cast<VirtualQPdfLinkModel*>(dynamic_cast<const VirtualQPdfLinkModel*>(self));
    if (vqpdflinkmodel && vqpdflinkmodel->isVirtualQPdfLinkModel) {
        vqpdflinkmodel->setQPdfLinkModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfLinkModel::QPdfLinkModel_IsSignalConnected_Callback>(slot));
    }
}

void QPdfLinkModel_Delete(QPdfLinkModel* self) {
    delete self;
}
