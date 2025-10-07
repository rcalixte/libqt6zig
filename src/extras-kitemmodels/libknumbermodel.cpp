#include <KNumberModel>
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
#include <knumbermodel.h>
#include "libknumbermodel.h"
#include "libknumbermodel.hxx"

KNumberModel* KNumberModel_new() {
    return new VirtualKNumberModel();
}

KNumberModel* KNumberModel_new2(QObject* parent) {
    return new VirtualKNumberModel(parent);
}

QMetaObject* KNumberModel_MetaObject(const KNumberModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNumberModel_Metacast(KNumberModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNumberModel_Metacall(KNumberModel* self, int param1, int param2, void** param3) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNumberModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNumberModel_Tr(const char* s) {
    QString _ret = KNumberModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNumberModel_SetMinimumValue(KNumberModel* self, double minimumValue) {
    self->setMinimumValue(static_cast<qreal>(minimumValue));
}

double KNumberModel_MinimumValue(const KNumberModel* self) {
    return static_cast<double>(self->minimumValue());
}

void KNumberModel_SetMaximumValue(KNumberModel* self, double maximumValue) {
    self->setMaximumValue(static_cast<qreal>(maximumValue));
}

double KNumberModel_MaximumValue(const KNumberModel* self) {
    return static_cast<double>(self->maximumValue());
}

void KNumberModel_SetStepSize(KNumberModel* self, double stepSize) {
    self->setStepSize(static_cast<qreal>(stepSize));
}

double KNumberModel_StepSize(const KNumberModel* self) {
    return static_cast<double>(self->stepSize());
}

void KNumberModel_SetFormattingOptions(KNumberModel* self, int options) {
    self->setFormattingOptions(static_cast<QLocale::NumberOptions>(options));
}

int KNumberModel_FormattingOptions(const KNumberModel* self) {
    return static_cast<int>(self->formattingOptions());
}

double KNumberModel_Value(const KNumberModel* self, const QModelIndex* index) {
    return static_cast<double>(self->value(*index));
}

int KNumberModel_RowCount(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = dynamic_cast<const VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return self->rowCount(*index);
    } else {
        return ((VirtualKNumberModel*)self)->rowCount(*index);
    }
}

QVariant* KNumberModel_Data(const KNumberModel* self, const QModelIndex* index, int role) {
    auto* vknumbermodel = dynamic_cast<const VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNumberModel*)self)->data(*index, static_cast<int>(role)));
    }
}

libqt_map /* of int to libqt_string */ KNumberModel_RoleNames(const KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<const VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKNumberModel*)self)->roleNames();
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

void KNumberModel_MinimumValueChanged(KNumberModel* self) {
    self->minimumValueChanged();
}

void KNumberModel_Connect_MinimumValueChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self, &KNumberModel::minimumValueChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNumberModel_MaximumValueChanged(KNumberModel* self) {
    self->maximumValueChanged();
}

void KNumberModel_Connect_MaximumValueChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self, &KNumberModel::maximumValueChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNumberModel_StepSizeChanged(KNumberModel* self) {
    self->stepSizeChanged();
}

void KNumberModel_Connect_StepSizeChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self, &KNumberModel::stepSizeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNumberModel_FormattingOptionsChanged(KNumberModel* self) {
    self->formattingOptionsChanged();
}

void KNumberModel_Connect_FormattingOptionsChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self, &KNumberModel::formattingOptionsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNumberModel_Tr2(const char* s, const char* c) {
    QString _ret = KNumberModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNumberModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNumberModel::tr(s, c, static_cast<int>(n));
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
int KNumberModel_QBaseMetacall(KNumberModel* self, int param1, int param2, void** param3) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Metacall_IsBase(true);
        return vknumbermodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNumberModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMetacall(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Metacall_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KNumberModel_QBaseRowCount(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RowCount_IsBase(true);
        return vknumbermodel->rowCount(*index);
    } else {
        return self->KNumberModel::rowCount(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRowCount(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RowCount_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KNumberModel_QBaseData(const KNumberModel* self, const QModelIndex* index, int role) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Data_IsBase(true);
        return new QVariant(vknumbermodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNumberModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Data_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KNumberModel_QBaseRoleNames(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vknumbermodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KNumberModel::roleNames();
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
void KNumberModel_OnRoleNames(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RoleNames_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNumberModel_Index(const KNumberModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QModelIndex(vknumbermodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KNumberModel_QBaseIndex(const KNumberModel* self, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Index_IsBase(true);
        return new QModelIndex(vknumbermodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnIndex(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Index_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNumberModel_Sibling(const KNumberModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QModelIndex(vknumbermodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KNumberModel_QBaseSibling(const KNumberModel* self, int row, int column, const QModelIndex* idx) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sibling_IsBase(true);
        return new QModelIndex(vknumbermodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSibling(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sibling_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_DropMimeData(KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNumberModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseDropMimeData(KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DropMimeData_IsBase(true);
        return vknumbermodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNumberModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnDropMimeData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DropMimeData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNumberModel_Flags(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return static_cast<int>(vknumbermodel->flags(*index));
    } else {
        return static_cast<int>(self->KNumberModel::flags(*index));
    }
}

// Base class handler implementation
int KNumberModel_QBaseFlags(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Flags_IsBase(true);
        return static_cast<int>(vknumbermodel->flags(*index));
    } else {
        return static_cast<int>(self->KNumberModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnFlags(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Flags_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_SetData(KNumberModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNumberModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseSetData(KNumberModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetData_IsBase(true);
        return vknumbermodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KNumberModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNumberModel_HeaderData(const KNumberModel* self, int section, int orientation, int role) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QVariant(vknumbermodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNumberModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KNumberModel_QBaseHeaderData(const KNumberModel* self, int section, int orientation, int role) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_HeaderData_IsBase(true);
        return new QVariant(vknumbermodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKNumberModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnHeaderData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_HeaderData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_SetHeaderData(KNumberModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNumberModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseSetHeaderData(KNumberModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetHeaderData_IsBase(true);
        return vknumbermodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KNumberModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetHeaderData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetHeaderData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNumberModel_ItemData(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        QMap<int, QVariant> _ret = vknumbermodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNumberModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KNumberModel_QBaseItemData(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vknumbermodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KNumberModel::itemData(*index);
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
void KNumberModel_OnItemData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ItemData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_SetItemData(KNumberModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNumberModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseSetItemData(KNumberModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetItemData_IsBase(true);
        return vknumbermodel->setItemData(*index, roles_QMap);
    } else {
        return self->KNumberModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetItemData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SetItemData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_ClearItemData(KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->clearItemData(*index);
    } else {
        return self->KNumberModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseClearItemData(KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ClearItemData_IsBase(true);
        return vknumbermodel->clearItemData(*index);
    } else {
        return self->KNumberModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnClearItemData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ClearItemData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNumberModel_MimeTypes(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        QList<QString> _ret = vknumbermodel->mimeTypes();
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
        QList<QString> _ret = self->KNumberModel::mimeTypes();
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
libqt_list /* of libqt_string */ KNumberModel_QBaseMimeTypes(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vknumbermodel->mimeTypes();
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
        QList<QString> _ret = self->KNumberModel::mimeTypes();
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
void KNumberModel_OnMimeTypes(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MimeTypes_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KNumberModel_MimeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->mimeData(indexes_QList);
    } else {
        return self->KNumberModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KNumberModel_QBaseMimeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MimeData_IsBase(true);
        return vknumbermodel->mimeData(indexes_QList);
    } else {
        return self->KNumberModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMimeData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MimeData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_CanDropMimeData(const KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNumberModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseCanDropMimeData(const KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CanDropMimeData_IsBase(true);
        return vknumbermodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KNumberModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCanDropMimeData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KNumberModel_SupportedDropActions(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return static_cast<int>(vknumbermodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNumberModel::supportedDropActions());
    }
}

// Base class handler implementation
int KNumberModel_QBaseSupportedDropActions(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vknumbermodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KNumberModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSupportedDropActions(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KNumberModel_SupportedDragActions(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return static_cast<int>(vknumbermodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNumberModel::supportedDragActions());
    }
}

// Base class handler implementation
int KNumberModel_QBaseSupportedDragActions(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vknumbermodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KNumberModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSupportedDragActions(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_InsertRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseInsertRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_InsertRows_IsBase(true);
        return vknumbermodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnInsertRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_InsertRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_InsertColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseInsertColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_InsertColumns_IsBase(true);
        return vknumbermodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnInsertColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_InsertColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_RemoveRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseRemoveRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RemoveRows_IsBase(true);
        return vknumbermodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRemoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RemoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_RemoveColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseRemoveColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RemoveColumns_IsBase(true);
        return vknumbermodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KNumberModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRemoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_RemoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_MoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNumberModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MoveRows_IsBase(true);
        return vknumbermodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNumberModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_MoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNumberModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MoveColumns_IsBase(true);
        return vknumbermodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KNumberModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_FetchMore(KNumberModel* self, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->fetchMore(*parent);
    } else {
        self->KNumberModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KNumberModel_QBaseFetchMore(KNumberModel* self, const QModelIndex* parent) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_FetchMore_IsBase(true);
        vknumbermodel->fetchMore(*parent);
    } else {
        self->KNumberModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnFetchMore(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_FetchMore_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_CanFetchMore(const KNumberModel* self, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->canFetchMore(*parent);
    } else {
        return self->KNumberModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseCanFetchMore(const KNumberModel* self, const QModelIndex* parent) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CanFetchMore_IsBase(true);
        return vknumbermodel->canFetchMore(*parent);
    } else {
        return self->KNumberModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCanFetchMore(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CanFetchMore_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_Sort(KNumberModel* self, int column, int order) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNumberModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KNumberModel_QBaseSort(KNumberModel* self, int column, int order) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sort_IsBase(true);
        vknumbermodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KNumberModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSort(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sort_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNumberModel_Buddy(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QModelIndex(vknumbermodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KNumberModel_QBaseBuddy(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Buddy_IsBase(true);
        return new QModelIndex(vknumbermodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKNumberModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBuddy(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Buddy_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNumberModel_Match(const KNumberModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        QList<QModelIndex> _ret = vknumbermodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNumberModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KNumberModel_QBaseMatch(const KNumberModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vknumbermodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KNumberModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KNumberModel_OnMatch(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Match_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNumberModel_Span(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QSize(vknumbermodel->span(*index));
    } else {
        return new QSize(((VirtualKNumberModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KNumberModel_QBaseSpan(const KNumberModel* self, const QModelIndex* index) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Span_IsBase(true);
        return new QSize(vknumbermodel->span(*index));
    } else {
        return new QSize(((VirtualKNumberModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSpan(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Span_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_MultiData(const KNumberModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNumberModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KNumberModel_QBaseMultiData(const KNumberModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MultiData_IsBase(true);
        vknumbermodel->multiData(*index, *roleDataSpan);
    } else {
        self->KNumberModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMultiData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_MultiData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_Submit(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->submit();
    } else {
        return self->KNumberModel::submit();
    }
}

// Base class handler implementation
bool KNumberModel_QBaseSubmit(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Submit_IsBase(true);
        return vknumbermodel->submit();
    } else {
        return self->KNumberModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSubmit(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Submit_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_Revert(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->revert();
    } else {
        self->KNumberModel::revert();
    }
}

// Base class handler implementation
void KNumberModel_QBaseRevert(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Revert_IsBase(true);
        vknumbermodel->revert();
    } else {
        self->KNumberModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRevert(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Revert_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_ResetInternalData(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->resetInternalData();
    } else {
        ((VirtualKNumberModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KNumberModel_QBaseResetInternalData(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ResetInternalData_IsBase(true);
        vknumbermodel->resetInternalData();
    } else {
        ((VirtualKNumberModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnResetInternalData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ResetInternalData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_Event(KNumberModel* self, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->event(event);
    } else {
        return self->KNumberModel::event(event);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseEvent(KNumberModel* self, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Event_IsBase(true);
        return vknumbermodel->event(event);
    } else {
        return self->KNumberModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEvent(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Event_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_EventFilter(KNumberModel* self, QObject* watched, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->eventFilter(watched, event);
    } else {
        return self->KNumberModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseEventFilter(KNumberModel* self, QObject* watched, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EventFilter_IsBase(true);
        return vknumbermodel->eventFilter(watched, event);
    } else {
        return self->KNumberModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEventFilter(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EventFilter_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_TimerEvent(KNumberModel* self, QTimerEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->timerEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNumberModel_QBaseTimerEvent(KNumberModel* self, QTimerEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_TimerEvent_IsBase(true);
        vknumbermodel->timerEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnTimerEvent(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_TimerEvent_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_ChildEvent(KNumberModel* self, QChildEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->childEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNumberModel_QBaseChildEvent(KNumberModel* self, QChildEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChildEvent_IsBase(true);
        vknumbermodel->childEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnChildEvent(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChildEvent_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_CustomEvent(KNumberModel* self, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->customEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNumberModel_QBaseCustomEvent(KNumberModel* self, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CustomEvent_IsBase(true);
        vknumbermodel->customEvent(event);
    } else {
        ((VirtualKNumberModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCustomEvent(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CustomEvent_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_ConnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->connectNotify(*signal);
    } else {
        ((VirtualKNumberModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNumberModel_QBaseConnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ConnectNotify_IsBase(true);
        vknumbermodel->connectNotify(*signal);
    } else {
        ((VirtualKNumberModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnConnectNotify(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ConnectNotify_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_DisconnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNumberModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNumberModel_QBaseDisconnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DisconnectNotify_IsBase(true);
        vknumbermodel->disconnectNotify(*signal);
    } else {
        ((VirtualKNumberModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnDisconnectNotify(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KNumberModel_CreateIndex(const KNumberModel* self, int row, int column) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return new QModelIndex(vknumbermodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KNumberModel_QBaseCreateIndex(const KNumberModel* self, int row, int column) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CreateIndex_IsBase(true);
        return new QModelIndex(vknumbermodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCreateIndex(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_CreateIndex_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EncodeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNumberModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KNumberModel_QBaseEncodeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EncodeData_IsBase(true);
        vknumbermodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKNumberModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEncodeData(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EncodeData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_DecodeData(KNumberModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNumberModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseDecodeData(KNumberModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DecodeData_IsBase(true);
        return vknumbermodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKNumberModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnDecodeData(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_DecodeData_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_BeginInsertRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNumberModel_QBaseBeginInsertRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginInsertRows_IsBase(true);
        vknumbermodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginInsertRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndInsertRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endInsertRows();
    } else {
        ((VirtualKNumberModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndInsertRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndInsertRows_IsBase(true);
        vknumbermodel->endInsertRows();
    } else {
        ((VirtualKNumberModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndInsertRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndInsertRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_BeginRemoveRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNumberModel_QBaseBeginRemoveRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginRemoveRows_IsBase(true);
        vknumbermodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginRemoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndRemoveRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endRemoveRows();
    } else {
        ((VirtualKNumberModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndRemoveRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndRemoveRows_IsBase(true);
        vknumbermodel->endRemoveRows();
    } else {
        ((VirtualKNumberModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndRemoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_BeginMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNumberModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseBeginMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginMoveRows_IsBase(true);
        return vknumbermodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKNumberModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginMoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndMoveRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endMoveRows();
    } else {
        ((VirtualKNumberModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndMoveRows(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndMoveRows_IsBase(true);
        vknumbermodel->endMoveRows();
    } else {
        ((VirtualKNumberModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndMoveRows(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndMoveRows_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_BeginInsertColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNumberModel_QBaseBeginInsertColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginInsertColumns_IsBase(true);
        vknumbermodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginInsertColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndInsertColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endInsertColumns();
    } else {
        ((VirtualKNumberModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndInsertColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndInsertColumns_IsBase(true);
        vknumbermodel->endInsertColumns();
    } else {
        ((VirtualKNumberModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndInsertColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_BeginRemoveColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KNumberModel_QBaseBeginRemoveColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginRemoveColumns_IsBase(true);
        vknumbermodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKNumberModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginRemoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndRemoveColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endRemoveColumns();
    } else {
        ((VirtualKNumberModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndRemoveColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndRemoveColumns_IsBase(true);
        vknumbermodel->endRemoveColumns();
    } else {
        ((VirtualKNumberModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndRemoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_BeginMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNumberModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KNumberModel_QBaseBeginMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginMoveColumns_IsBase(true);
        return vknumbermodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKNumberModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginMoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndMoveColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endMoveColumns();
    } else {
        ((VirtualKNumberModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndMoveColumns(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndMoveColumns_IsBase(true);
        vknumbermodel->endMoveColumns();
    } else {
        ((VirtualKNumberModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndMoveColumns(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_BeginResetModel(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->beginResetModel();
    } else {
        ((VirtualKNumberModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KNumberModel_QBaseBeginResetModel(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginResetModel_IsBase(true);
        vknumbermodel->beginResetModel();
    } else {
        ((VirtualKNumberModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBeginResetModel(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_BeginResetModel_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_EndResetModel(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->endResetModel();
    } else {
        ((VirtualKNumberModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KNumberModel_QBaseEndResetModel(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndResetModel_IsBase(true);
        vknumbermodel->endResetModel();
    } else {
        ((VirtualKNumberModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEndResetModel(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_EndResetModel_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_ChangePersistentIndex(KNumberModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNumberModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KNumberModel_QBaseChangePersistentIndex(KNumberModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChangePersistentIndex_IsBase(true);
        vknumbermodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKNumberModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnChangePersistentIndex(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KNumberModel_ChangePersistentIndexList(KNumberModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
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
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNumberModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KNumberModel_QBaseChangePersistentIndexList(KNumberModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
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
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChangePersistentIndexList_IsBase(true);
        vknumbermodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKNumberModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnChangePersistentIndexList(KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNumberModel_PersistentIndexList(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        QList<QModelIndex> _ret = vknumbermodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNumberModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KNumberModel_QBasePersistentIndexList(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vknumbermodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKNumberModel*)self)->persistentIndexList();
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
void KNumberModel_OnPersistentIndexList(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNumberModel_Sender(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->sender();
    } else {
        return ((VirtualKNumberModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNumberModel_QBaseSender(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sender_IsBase(true);
        return vknumbermodel->sender();
    } else {
        return ((VirtualKNumberModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSender(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Sender_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNumberModel_SenderSignalIndex(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->senderSignalIndex();
    } else {
        return ((VirtualKNumberModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNumberModel_QBaseSenderSignalIndex(const KNumberModel* self) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SenderSignalIndex_IsBase(true);
        return vknumbermodel->senderSignalIndex();
    } else {
        return ((VirtualKNumberModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSenderSignalIndex(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNumberModel_Receivers(const KNumberModel* self, const char* signal) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->receivers(signal);
    } else {
        return ((VirtualKNumberModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNumberModel_QBaseReceivers(const KNumberModel* self, const char* signal) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Receivers_IsBase(true);
        return vknumbermodel->receivers(signal);
    } else {
        return ((VirtualKNumberModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnReceivers(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_Receivers_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNumberModel_IsSignalConnected(const KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        return vknumbermodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNumberModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNumberModel_QBaseIsSignalConnected(const KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_IsSignalConnected_IsBase(true);
        return vknumbermodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKNumberModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnIsSignalConnected(const KNumberModel* self, intptr_t slot) {
    auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self));
    if (vknumbermodel && vknumbermodel->isVirtualKNumberModel) {
        vknumbermodel->setKNumberModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKNumberModel::KNumberModel_IsSignalConnected_Callback>(slot));
    }
}

void KNumberModel_Delete(KNumberModel* self) {
    delete self;
}
