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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNumberModel_Tr(const char* s) {
    auto _ret = KNumberModel::tr(s);
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
    return self->rowCount(*index);
}

QVariant* KNumberModel_Data(const KNumberModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

libqt_map /* of int to libqt_string */ KNumberModel_RoleNames(const KNumberModel* self) {
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

void KNumberModel_MinimumValueChanged(KNumberModel* self) {
    self->minimumValueChanged();
}

void KNumberModel_Connect_MinimumValueChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self,
                          static_cast<void (KNumberModel::*)()>(&KNumberModel::minimumValueChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KNumberModel_MaximumValueChanged(KNumberModel* self) {
    self->maximumValueChanged();
}

void KNumberModel_Connect_MaximumValueChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self,
                          static_cast<void (KNumberModel::*)()>(&KNumberModel::maximumValueChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KNumberModel_StepSizeChanged(KNumberModel* self) {
    self->stepSizeChanged();
}

void KNumberModel_Connect_StepSizeChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self,
                          static_cast<void (KNumberModel::*)()>(&KNumberModel::stepSizeChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KNumberModel_FormattingOptionsChanged(KNumberModel* self) {
    self->formattingOptionsChanged();
}

void KNumberModel_Connect_FormattingOptionsChanged(KNumberModel* self, intptr_t slot) {
    void (*slotFunc)(KNumberModel*) = reinterpret_cast<void (*)(KNumberModel*)>(slot);
    KNumberModel::connect(self,
                          static_cast<void (KNumberModel::*)()>(&KNumberModel::formattingOptionsChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

libqt_string KNumberModel_Tr2(const char* s, const char* c) {
    auto _ret = KNumberModel::tr(s, c);
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
    auto _ret = KNumberModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNumberModel_SuperMetaObject(const KNumberModel* self) {
    return (QMetaObject*)self->KNumberModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMetaObject(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_metaobject_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNumberModel_SuperMetacast(KNumberModel* self, const char* param1) {
    return self->KNumberModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMetacast(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_metacast_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNumberModel_SuperMetacall(KNumberModel* self, int param1, int param2, void** param3) {
    return self->KNumberModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMetacall(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_metacall_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KNumberModel_SuperRowCount(const KNumberModel* self, const QModelIndex* index) {
    return self->KNumberModel::rowCount(*index);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRowCount(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_rowcount_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KNumberModel_SuperData(const KNumberModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KNumberModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_data_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Data_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KNumberModel_SuperRoleNames(const KNumberModel* self) {
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
void KNumberModel_OnRoleNames(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_rolenames_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNumberModel_Index(const KNumberModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* KNumberModel_SuperIndex(const KNumberModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KNumberModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnIndex(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_index_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNumberModel_Sibling(const KNumberModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KNumberModel_SuperSibling(const KNumberModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KNumberModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSibling(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_sibling_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_DropMimeData(KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperDropMimeData(KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNumberModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnDropMimeData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_dropmimedata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNumberModel_Flags(const KNumberModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KNumberModel_SuperFlags(const KNumberModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KNumberModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnFlags(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_flags_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_SetData(KNumberModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNumberModel_SuperSetData(KNumberModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KNumberModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_setdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNumberModel_HeaderData(const KNumberModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KNumberModel_SuperHeaderData(const KNumberModel* self, int section, int orientation, int role) {
    return new QVariant(self->KNumberModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnHeaderData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_headerdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_SetHeaderData(KNumberModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KNumberModel_SuperSetHeaderData(KNumberModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KNumberModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetHeaderData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_setheaderdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KNumberModel_ItemData(const KNumberModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KNumberModel_SuperItemData(const KNumberModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnItemData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_itemdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_SetItemData(KNumberModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KNumberModel_SuperSetItemData(KNumberModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KNumberModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSetItemData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_setitemdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_ClearItemData(KNumberModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KNumberModel_SuperClearItemData(KNumberModel* self, const QModelIndex* index) {
    return self->KNumberModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnClearItemData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_clearitemdata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KNumberModel_MimeTypes(const KNumberModel* self) {
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
libqt_list /* of libqt_string */ KNumberModel_SuperMimeTypes(const KNumberModel* self) {
    QList<QString> _ret = self->KNumberModel::mimeTypes();
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
void KNumberModel_OnMimeTypes(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_mimetypes_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KNumberModel_MimeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KNumberModel_SuperMimeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KNumberModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMimeData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_mimedata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_CanDropMimeData(const KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperCanDropMimeData(const KNumberModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KNumberModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCanDropMimeData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_candropmimedata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KNumberModel_SupportedDropActions(const KNumberModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KNumberModel_SuperSupportedDropActions(const KNumberModel* self) {
    return static_cast<int>(self->KNumberModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSupportedDropActions(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_supporteddropactions_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KNumberModel_SupportedDragActions(const KNumberModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KNumberModel_SuperSupportedDragActions(const KNumberModel* self) {
    return static_cast<int>(self->KNumberModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSupportedDragActions(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_supporteddragactions_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_InsertRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperInsertRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNumberModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnInsertRows(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_insertrows_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_InsertColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperInsertColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNumberModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnInsertColumns(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_insertcolumns_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_RemoveRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperRemoveRows(KNumberModel* self, int row, int count, const QModelIndex* parent) {
    return self->KNumberModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRemoveRows(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_removerows_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_RemoveColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KNumberModel_SuperRemoveColumns(KNumberModel* self, int column, int count, const QModelIndex* parent) {
    return self->KNumberModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRemoveColumns(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_removecolumns_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_MoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNumberModel_SuperMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNumberModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMoveRows(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_moverows_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_MoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KNumberModel_SuperMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KNumberModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMoveColumns(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_movecolumns_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_FetchMore(KNumberModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KNumberModel_SuperFetchMore(KNumberModel* self, const QModelIndex* parent) {
    self->KNumberModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnFetchMore(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_fetchmore_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_CanFetchMore(const KNumberModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KNumberModel_SuperCanFetchMore(const KNumberModel* self, const QModelIndex* parent) {
    return self->KNumberModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCanFetchMore(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_canfetchmore_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_Sort(KNumberModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KNumberModel_SuperSort(KNumberModel* self, int column, int order) {
    self->KNumberModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSort(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_sort_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNumberModel_Buddy(const KNumberModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KNumberModel_SuperBuddy(const KNumberModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KNumberModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnBuddy(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_buddy_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KNumberModel_Match(const KNumberModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KNumberModel_SuperMatch(const KNumberModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KNumberModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KNumberModel_OnMatch(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_match_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KNumberModel_Span(const KNumberModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KNumberModel_SuperSpan(const KNumberModel* self, const QModelIndex* index) {
    return new QSize(self->KNumberModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSpan(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_span_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Span_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_MultiData(const KNumberModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KNumberModel_SuperMultiData(const KNumberModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KNumberModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnMultiData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        vknumbermodel->knumbermodel_multidata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_Submit(KNumberModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KNumberModel_SuperSubmit(KNumberModel* self) {
    return self->KNumberModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnSubmit(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_submit_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_Revert(KNumberModel* self) {
    self->revert();
}

// Base class handler implementation
void KNumberModel_SuperRevert(KNumberModel* self) {
    self->KNumberModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnRevert(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_revert_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_ResetInternalData(KNumberModel* self) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KNumberModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperResetInternalData(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KNumberModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnResetInternalData(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_resetinternaldata_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_Event(KNumberModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNumberModel_SuperEvent(KNumberModel* self, QEvent* event) {
    return self->KNumberModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEvent(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_event_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNumberModel_EventFilter(KNumberModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNumberModel_SuperEventFilter(KNumberModel* self, QObject* watched, QEvent* event) {
    return self->KNumberModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnEventFilter(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_eventfilter_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_TimerEvent(KNumberModel* self, QTimerEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNumberModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperTimerEvent(KNumberModel* self, QTimerEvent* event) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNumberModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnTimerEvent(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_timerevent_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_ChildEvent(KNumberModel* self, QChildEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNumberModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperChildEvent(KNumberModel* self, QChildEvent* event) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNumberModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnChildEvent(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_childevent_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_CustomEvent(KNumberModel* self, QEvent* event) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNumberModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperCustomEvent(KNumberModel* self, QEvent* event) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNumberModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnCustomEvent(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_customevent_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_ConnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNumberModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperConnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNumberModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnConnectNotify(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_connectnotify_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNumberModel_DisconnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self);
    if (vknumbermodel) {
        vknumbermodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNumberModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNumberModel_SuperDisconnectNotify(KNumberModel* self, const QMetaMethod* signal) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->KNumberModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNumberModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNumberModel_OnDisconnectNotify(KNumberModel* self, intptr_t slot) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self))
        vknumbermodel->knumbermodel_disconnectnotify_callback = reinterpret_cast<VirtualKNumberModel::KNumberModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KNumberModel_CreateIndex(const KNumberModel* self, int row, int column) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self)))
        return new QModelIndex(vknumbermodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KNumberModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EncodeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vknumbermodel->VirtualKNumberModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KNumberModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNumberModel_DecodeData(KNumberModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        return vknumbermodel->VirtualKNumberModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KNumberModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_BeginInsertRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNumberModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndInsertRows(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endInsertRows();
    } else
        qFatal("Error: Protected method KNumberModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_BeginRemoveRows(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNumberModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndRemoveRows(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KNumberModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNumberModel_BeginMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        return vknumbermodel->VirtualKNumberModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KNumberModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndMoveRows(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endMoveRows();
    } else
        qFatal("Error: Protected method KNumberModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_BeginInsertColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNumberModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndInsertColumns(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KNumberModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_BeginRemoveColumns(KNumberModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KNumberModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndRemoveColumns(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KNumberModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNumberModel_BeginMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        return vknumbermodel->VirtualKNumberModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KNumberModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndMoveColumns(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KNumberModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_BeginResetModel(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::beginResetModel();
    } else
        qFatal("Error: Protected method KNumberModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_EndResetModel(KNumberModel* self) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::endResetModel();
    } else
        qFatal("Error: Protected method KNumberModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_ChangePersistentIndex(KNumberModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
        vknumbermodel->VirtualKNumberModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KNumberModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KNumberModel_ChangePersistentIndexList(KNumberModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vknumbermodel = dynamic_cast<VirtualKNumberModel*>(self)) {
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
        vknumbermodel->VirtualKNumberModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KNumberModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KNumberModel_PersistentIndexList(const KNumberModel* self) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        QList<QModelIndex> _ret = vknumbermodel->VirtualKNumberModel::persistentIndexList();
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
        qFatal("Error: Protected method KNumberModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNumberModel_Sender(const KNumberModel* self) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        return vknumbermodel->VirtualKNumberModel::sender();
    } else
        qFatal("Error: Protected method KNumberModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNumberModel_SenderSignalIndex(const KNumberModel* self) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        return vknumbermodel->VirtualKNumberModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNumberModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNumberModel_Receivers(const KNumberModel* self, const char* signal) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        return vknumbermodel->VirtualKNumberModel::receivers(signal);
    } else
        qFatal("Error: Protected method KNumberModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNumberModel_IsSignalConnected(const KNumberModel* self, const QMetaMethod* signal) {
    if (auto* vknumbermodel = const_cast<VirtualKNumberModel*>(dynamic_cast<const VirtualKNumberModel*>(self))) {
        return vknumbermodel->VirtualKNumberModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNumberModel::isSignalConnected called without a directly constructed type");
}

void KNumberModel_Delete(KNumberModel* self) {
    delete self;
}
