#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QConcatenateTablesProxyModel>
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
#include <qconcatenatetablesproxymodel.h>
#include "libqconcatenatetablesproxymodel.h"
#include "libqconcatenatetablesproxymodel.hxx"

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
    return new VirtualQConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
    return new VirtualQConcatenateTablesProxyModel(parent);
}

QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QConcatenateTablesProxyModel_Metacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QConcatenateTablesProxyModel_Tr(const char* s) {
    auto _ret = QConcatenateTablesProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAbstractItemModel* */ QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self) {
    QList<QAbstractItemModel*> _ret = self->sourceModels();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractItemModel** _arr = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    QMap<int, QVariant> _ret = self->itemData(*proxyIndex);
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

bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self) {
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

QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = QConcatenateTablesProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QConcatenateTablesProxyModel_SuperMetaObject(const QConcatenateTablesProxyModel* self) {
    return (QMetaObject*)self->QConcatenateTablesProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMetaObject(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_metaobject_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QConcatenateTablesProxyModel_SuperMetacast(QConcatenateTablesProxyModel* self, const char* param1) {
    return self->QConcatenateTablesProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMetacast(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_metacast_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperMetacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    return self->QConcatenateTablesProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMetacall(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_metacall_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_SuperData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QConcatenateTablesProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_data_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperSetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QConcatenateTablesProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_setdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetData_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_SuperItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
    QMap<int, QVariant> _ret = self->QConcatenateTablesProxyModel::itemData(*proxyIndex);
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
void QConcatenateTablesProxyModel_OnItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_itemdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ItemData_Callback>(slot);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperSetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QConcatenateTablesProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_setitemdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperFlags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QConcatenateTablesProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFlags(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_flags_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Flags_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_SuperIndex(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QConcatenateTablesProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIndex(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_index_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_SuperParent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QConcatenateTablesProxyModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnParent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_parent_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Parent_Callback>(slot);
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperRowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRowCount(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_rowcount_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_SuperHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->QConcatenateTablesProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHeaderData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_headerdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnColumnCount(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_columncount_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_SuperMimeTypes(const QConcatenateTablesProxyModel* self) {
    QList<QString> _ret = self->QConcatenateTablesProxyModel::mimeTypes();
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
void QConcatenateTablesProxyModel_OnMimeTypes(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_mimetypes_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QConcatenateTablesProxyModel_SuperMimeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QConcatenateTablesProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_mimedata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperCanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_candropmimedata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanDropMimeData_Callback>(slot);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperDropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_dropmimedata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
QSize* QConcatenateTablesProxyModel_SuperSpan(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QSize(self->QConcatenateTablesProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSpan(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_span_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Sibling(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_SuperSibling(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QConcatenateTablesProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSibling(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_sibling_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_HasChildren(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperHasChildren(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHasChildren(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_haschildren_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperSetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QConcatenateTablesProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetHeaderData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_setheaderdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_ClearItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperClearItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return self->QConcatenateTablesProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnClearItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_clearitemdata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDropActions(const QConcatenateTablesProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperSupportedDropActions(const QConcatenateTablesProxyModel* self) {
    return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDropActions(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDragActions(const QConcatenateTablesProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QConcatenateTablesProxyModel_SuperSupportedDragActions(const QConcatenateTablesProxyModel* self) {
    return static_cast<int>(self->QConcatenateTablesProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDragActions(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperInsertRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_insertrows_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperInsertColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_insertcolumns_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperRemoveRows(QConcatenateTablesProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_removerows_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperRemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_removecolumns_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QConcatenateTablesProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_moverows_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QConcatenateTablesProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_movecolumns_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_FetchMore(QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperFetchMore(QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    self->QConcatenateTablesProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFetchMore(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_fetchmore_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_CanFetchMore(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperCanFetchMore(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
    return self->QConcatenateTablesProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanFetchMore(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_canfetchmore_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Sort(QConcatenateTablesProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperSort(QConcatenateTablesProxyModel* self, int column, int order) {
    self->QConcatenateTablesProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSort(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_sort_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Buddy(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_SuperBuddy(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QConcatenateTablesProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBuddy(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_buddy_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_Match(const QConcatenateTablesProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_SuperMatch(const QConcatenateTablesProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QConcatenateTablesProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QConcatenateTablesProxyModel_OnMatch(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_match_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_RoleNames(const QConcatenateTablesProxyModel* self) {
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
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_SuperRoleNames(const QConcatenateTablesProxyModel* self) {
    QHash<int, QByteArray> _ret = self->QConcatenateTablesProxyModel::roleNames();
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
void QConcatenateTablesProxyModel_OnRoleNames(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_rolenames_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_MultiData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperMultiData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QConcatenateTablesProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMultiData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_multidata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Submit(QConcatenateTablesProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperSubmit(QConcatenateTablesProxyModel* self) {
    return self->QConcatenateTablesProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSubmit(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_submit_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Revert(QConcatenateTablesProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperRevert(QConcatenateTablesProxyModel* self) {
    self->QConcatenateTablesProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRevert(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_revert_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ResetInternalData(QConcatenateTablesProxyModel* self) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperResetInternalData(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnResetInternalData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Event(QConcatenateTablesProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    return self->QConcatenateTablesProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_event_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_EventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_SuperEventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    return self->QConcatenateTablesProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEventFilter(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_eventfilter_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_TimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnTimerEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_timerevent_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChildEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_childevent_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_CustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCustomEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_customevent_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnConnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_connectnotify_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_DisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
    if (vqconcatenatetablesproxymodel) {
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_SuperDisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->QConcatenateTablesProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QConcatenateTablesProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDisconnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self))
        vqconcatenatetablesproxymodel->qconcatenatetablesproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_CreateIndex(const QConcatenateTablesProxyModel* self, int row, int column) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self)))
        return new QModelIndex(vqconcatenatetablesproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QConcatenateTablesProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EncodeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QConcatenateTablesProxyModel_DecodeData(QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_BeginInsertRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndInsertRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_BeginRemoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndRemoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QConcatenateTablesProxyModel_BeginMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndMoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_BeginInsertColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndInsertColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_BeginRemoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndRemoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QConcatenateTablesProxyModel_BeginMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndMoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_BeginResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_EndResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndex(QConcatenateTablesProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndexList(QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
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
        vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_PersistentIndexList(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QList<QModelIndex> _ret = vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method QConcatenateTablesProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QConcatenateTablesProxyModel_Sender(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::sender();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QConcatenateTablesProxyModel_SenderSignalIndex(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QConcatenateTablesProxyModel_Receivers(const QConcatenateTablesProxyModel* self, const char* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QConcatenateTablesProxyModel_IsSignalConnected(const QConcatenateTablesProxyModel* self, const QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->VirtualQConcatenateTablesProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QConcatenateTablesProxyModel::isSignalConnected called without a directly constructed type");
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
    delete self;
}
