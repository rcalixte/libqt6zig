#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
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
#include <QModelRoleData>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractitemmodel.h>
#include "libqabstractitemmodel.h"
#include "libqabstractitemmodel.hxx"

QModelRoleData* QModelRoleData_new(int role) {
    return new QModelRoleData(static_cast<int>(role));
}

QModelRoleData* QModelRoleData_new2(const QModelRoleData* param1) {
    return new QModelRoleData(*param1);
}

int QModelRoleData_Role(const QModelRoleData* self) {
    return self->role();
}

QVariant* QModelRoleData_Data(QModelRoleData* self) {
    QVariant& _ret = self->data();
    // Cast returned reference into pointer
    return &_ret;
}

QVariant* QModelRoleData_Data2(const QModelRoleData* self) {
    const QVariant& _ret = self->data();
    // Cast returned reference into pointer
    return const_cast<QVariant*>(&_ret);
}

void QModelRoleData_ClearData(QModelRoleData* self) {
    self->clearData();
}

void QModelRoleData_OperatorAssign(QModelRoleData* self, const QModelRoleData* param1) {
    self->operator=(*param1);
}

void QModelRoleData_Delete(QModelRoleData* self) {
    delete self;
}

QModelRoleDataSpan* QModelRoleDataSpan_new(const QModelRoleDataSpan* other) {
    return new QModelRoleDataSpan(*other);
}

QModelRoleDataSpan* QModelRoleDataSpan_new2(QModelRoleDataSpan* other) {
    return new QModelRoleDataSpan(std::move(*other));
}

QModelRoleDataSpan* QModelRoleDataSpan_new3() {
    return new QModelRoleDataSpan();
}

QModelRoleDataSpan* QModelRoleDataSpan_new4(QModelRoleData* modelRoleData) {
    return new QModelRoleDataSpan(*modelRoleData);
}

QModelRoleDataSpan* QModelRoleDataSpan_new5(QModelRoleData* modelRoleData, ptrdiff_t len) {
    return new QModelRoleDataSpan(modelRoleData, (qsizetype)(len));
}

QModelRoleDataSpan* QModelRoleDataSpan_new6(const QModelRoleDataSpan* param1) {
    return new QModelRoleDataSpan(*param1);
}

void QModelRoleDataSpan_CopyAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = *other;
}

void QModelRoleDataSpan_MoveAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = std::move(*other);
}

ptrdiff_t QModelRoleDataSpan_Size(const QModelRoleDataSpan* self) {
    return static_cast<ptrdiff_t>(self->size());
}

ptrdiff_t QModelRoleDataSpan_Length(const QModelRoleDataSpan* self) {
    return static_cast<ptrdiff_t>(self->length());
}

QModelRoleData* QModelRoleDataSpan_Data(const QModelRoleDataSpan* self) {
    return self->data();
}

QModelRoleData* QModelRoleDataSpan_Begin(const QModelRoleDataSpan* self) {
    return self->begin();
}

QModelRoleData* QModelRoleDataSpan_End(const QModelRoleDataSpan* self) {
    return self->end();
}

QModelRoleData* QModelRoleDataSpan_OperatorSubscript(const QModelRoleDataSpan* self, ptrdiff_t index) {
    QModelRoleData& _ret = self->operator[]((qsizetype)(index));
    // Cast returned reference into pointer
    return &_ret;
}

QVariant* QModelRoleDataSpan_DataForRole(const QModelRoleDataSpan* self, int role) {
    return self->dataForRole(static_cast<int>(role));
}

void QModelRoleDataSpan_Delete(QModelRoleDataSpan* self) {
    delete self;
}

QModelIndex* QModelIndex_new(const QModelIndex* other) {
    return new QModelIndex(*other);
}

QModelIndex* QModelIndex_new2(QModelIndex* other) {
    return new QModelIndex(std::move(*other));
}

QModelIndex* QModelIndex_new3() {
    return new QModelIndex();
}

QModelIndex* QModelIndex_new4(const QModelIndex* param1) {
    return new QModelIndex(*param1);
}

void QModelIndex_CopyAssign(QModelIndex* self, QModelIndex* other) {
    *self = *other;
}

void QModelIndex_MoveAssign(QModelIndex* self, QModelIndex* other) {
    *self = std::move(*other);
}

int QModelIndex_Row(const QModelIndex* self) {
    return self->row();
}

int QModelIndex_Column(const QModelIndex* self) {
    return self->column();
}

uintptr_t QModelIndex_InternalId(const QModelIndex* self) {
    return static_cast<uintptr_t>(self->internalId());
}

void* QModelIndex_InternalPointer(const QModelIndex* self) {
    return self->internalPointer();
}

const void* QModelIndex_ConstInternalPointer(const QModelIndex* self) {
    return (const void*)self->constInternalPointer();
}

QModelIndex* QModelIndex_Parent(const QModelIndex* self) {
    return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column) {
    return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row) {
    return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QVariant* QModelIndex_Data(const QModelIndex* self) {
    return new QVariant(self->data());
}

void QModelIndex_MultiData(const QModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*roleDataSpan);
}

int QModelIndex_Flags(const QModelIndex* self) {
    return static_cast<int>(self->flags());
}

QAbstractItemModel* QModelIndex_Model(const QModelIndex* self) {
    return (QAbstractItemModel*)self->model();
}

bool QModelIndex_IsValid(const QModelIndex* self) {
    return self->isValid();
}

QVariant* QModelIndex_Data1(const QModelIndex* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_Delete(QModelIndex* self) {
    delete self;
}

size_t qabstractitemmodel_QHash(const QPersistentModelIndex* index, size_t seed) {
    return qHash(*index, static_cast<size_t>(seed));
}

size_t qabstractitemmodel_QHash2(const QPersistentModelIndex* index, size_t seed) {
    return qHash(*index, static_cast<size_t>(seed));
}

size_t qabstractitemmodel_QHash3(const QModelIndex* index, size_t seed) {
    return qHash(*index, static_cast<size_t>(seed));
}

QPersistentModelIndex* QPersistentModelIndex_new() {
    return new QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(const QModelIndex* index) {
    return new QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(const QPersistentModelIndex* other) {
    return new QPersistentModelIndex(*other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, const QPersistentModelIndex* other) {
    self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
    self->swap(*other);
}

void QPersistentModelIndex_OperatorAssign2(QPersistentModelIndex* self, const QModelIndex* other) {
    self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_ToQModelIndex(const QPersistentModelIndex* self) {
    return new QModelIndex(self->operator QModelIndex());
}

int QPersistentModelIndex_Row(const QPersistentModelIndex* self) {
    return self->row();
}

int QPersistentModelIndex_Column(const QPersistentModelIndex* self) {
    return self->column();
}

void* QPersistentModelIndex_InternalPointer(const QPersistentModelIndex* self) {
    return self->internalPointer();
}

const void* QPersistentModelIndex_ConstInternalPointer(const QPersistentModelIndex* self) {
    return (const void*)self->constInternalPointer();
}

uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self) {
    return static_cast<uintptr_t>(self->internalId());
}

QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self) {
    return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self) {
    return new QVariant(self->data());
}

void QPersistentModelIndex_MultiData(const QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*roleDataSpan);
}

int QPersistentModelIndex_Flags(const QPersistentModelIndex* self) {
    return static_cast<int>(self->flags());
}

QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self) {
    return (QAbstractItemModel*)self->model();
}

bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self) {
    return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
    delete self;
}

QAbstractItemModel* QAbstractItemModel_new() {
    return new VirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
    return new VirtualQAbstractItemModel(parent);
}

QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemModel_Metacast(QAbstractItemModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemModel_Metacall(QAbstractItemModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractItemModel_Tr(const char* s) {
    auto _ret = QAbstractItemModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column) {
    return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QAbstractItemModel_RowCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QAbstractItemModel_SetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

libqt_map /* of int to QVariant* */ QAbstractItemModel_ItemData(const QAbstractItemModel* self, const QModelIndex* index) {
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

bool QAbstractItemModel_SetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

bool QAbstractItemModel_ClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

libqt_list /* of libqt_string */ QAbstractItemModel_MimeTypes(const QAbstractItemModel* self) {
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

QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row) {
    return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column) {
    return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row) {
    return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column) {
    return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_FetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

int QAbstractItemModel_Flags(const QAbstractItemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

void QAbstractItemModel_Sort(QAbstractItemModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

libqt_list /* of QModelIndex* */ QAbstractItemModel_Match(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

libqt_map /* of int to libqt_string */ QAbstractItemModel_RoleNames(const QAbstractItemModel* self) {
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

bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, const QModelIndex* index) {
    return self->checkIndex(*index);
}

void QAbstractItemModel_MultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight) {
    self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_Connect_DataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, QModelIndex*)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QList<int>&)>(&QAbstractItemModel::dataChanged),
                                [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
                                    const QModelIndex& topLeft_ret = topLeft;
                                    // Cast returned reference into pointer
                                    QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
                                    const QModelIndex& bottomRight_ret = bottomRight;
                                    // Cast returned reference into pointer
                                    QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
                                    slotFunc(self, sigval1, sigval2);
                                });
}

void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
    self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_Connect_HeaderDataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, int, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, int, int, int)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged),
                                [self, slotFunc](Qt::Orientation orientation, int first, int last) {
                                    int sigval1 = static_cast<int>(orientation);
                                    int sigval2 = first;
                                    int sigval3 = last;
                                    slotFunc(self, sigval1, sigval2, sigval3);
                                });
}

void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self) {
    self->layoutChanged();
}

void QAbstractItemModel_Connect_LayoutChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self) {
    self->layoutAboutToBeChanged();
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
    return self->submit();
}

void QAbstractItemModel_Revert(QAbstractItemModel* self) {
    self->revert();
}

void QAbstractItemModel_ResetInternalData(QAbstractItemModel* self) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->resetInternalData();
    }
}

libqt_string QAbstractItemModel_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractItemModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
    return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
    return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
    return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
    return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
    return self->removeColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, const QModelIndex* index, int options) {
    return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_Connect_DataChanged3(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QList<int>&)>(&QAbstractItemModel::dataChanged),
                                [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) {
                                    const QModelIndex& topLeft_ret = topLeft;
                                    // Cast returned reference into pointer
                                    QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
                                    const QModelIndex& bottomRight_ret = bottomRight;
                                    // Cast returned reference into pointer
                                    QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
                                    const QList<int>& roles_ret = roles;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    int* roles_arr = static_cast<int*>(malloc(sizeof(int) * (roles_ret.size())));
                                    for (qsizetype i = 0; i < roles_ret.size(); ++i) {
                                        roles_arr[i] = roles_ret[i];
                                    }
                                    libqt_list roles_out;
                                    roles_out.len = roles_ret.size();
                                    roles_out.data = static_cast<void*>(roles_arr);
                                    libqt_list /* of int */ sigval3 = roles_out;
                                    slotFunc(self, sigval1, sigval2, sigval3);
                                    free(roles_arr);
                                });
}

void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutChanged(parents_QList);
}

void QAbstractItemModel_Connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged),
                                [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
                                    const QList<QPersistentModelIndex>& parents_ret = parents;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (parents_ret.size())));
                                    for (qsizetype i = 0; i < parents_ret.size(); ++i) {
                                        parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
                                    }
                                    libqt_list parents_out;
                                    parents_out.len = parents_ret.size();
                                    parents_out.data = static_cast<void*>(parents_arr);
                                    libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
                                    slotFunc(self, sigval1);
                                    free(parents_arr);
                                });
}

void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents, int hint) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged),
                                [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
                                    const QList<QPersistentModelIndex>& parents_ret = parents;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (parents_ret.size())));
                                    for (qsizetype i = 0; i < parents_ret.size(); ++i) {
                                        parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
                                    }
                                    libqt_list parents_out;
                                    parents_out.len = parents_ret.size();
                                    parents_out.data = static_cast<void*>(parents_arr);
                                    libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
                                    int sigval2 = static_cast<int>(hint);
                                    slotFunc(self, sigval1, sigval2);
                                    free(parents_arr);
                                });
}

void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged),
                                [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
                                    const QList<QPersistentModelIndex>& parents_ret = parents;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (parents_ret.size())));
                                    for (qsizetype i = 0; i < parents_ret.size(); ++i) {
                                        parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
                                    }
                                    libqt_list parents_out;
                                    parents_out.len = parents_ret.size();
                                    parents_out.data = static_cast<void*>(parents_arr);
                                    libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
                                    slotFunc(self, sigval1);
                                    free(parents_arr);
                                });
}

void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, const libqt_list /* of QPersistentModelIndex* */ parents, int hint) {
    QList<QPersistentModelIndex> parents_QList;
    parents_QList.reserve(parents.len);
    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
    for (size_t i = 0; i < parents.len; ++i) {
        parents_QList.push_back(*(parents_arr[i]));
    }
    self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */, int)>(slot);
    QAbstractItemModel::connect(self,
                                static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged),
                                [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
                                    const QList<QPersistentModelIndex>& parents_ret = parents;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * (parents_ret.size())));
                                    for (qsizetype i = 0; i < parents_ret.size(); ++i) {
                                        parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
                                    }
                                    libqt_list parents_out;
                                    parents_out.len = parents_ret.size();
                                    parents_out.data = static_cast<void*>(parents_arr);
                                    libqt_list /* of QPersistentModelIndex* */ sigval1 = parents_out;
                                    int sigval2 = static_cast<int>(hint);
                                    slotFunc(self, sigval1, sigval2);
                                    free(parents_arr);
                                });
}

// Base class handler implementation
QMetaObject* QAbstractItemModel_SuperMetaObject(const QAbstractItemModel* self) {
    return (QMetaObject*)self->QAbstractItemModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMetaObject(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_metaobject_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractItemModel_SuperMetacast(QAbstractItemModel* self, const char* param1) {
    return self->QAbstractItemModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMetacast(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_metacast_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemModel_SuperMetacall(QAbstractItemModel* self, int param1, int param2, void** param3) {
    return self->QAbstractItemModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMetacall(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_metacall_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnIndex(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_index_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Index_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnParent(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_parent_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_SuperSibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QAbstractItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSibling(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_sibling_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sibling_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRowCount(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_rowcount_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RowCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnColumnCount(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_columncount_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperHasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->QAbstractItemModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHasChildren(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_haschildren_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HasChildren_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_data_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperSetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QAbstractItemModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_setdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetData_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractItemModel_SuperHeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
    return new QVariant(self->QAbstractItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHeaderData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_headerdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperSetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetHeaderData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_setheaderdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetHeaderData_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QAbstractItemModel_SuperItemData(const QAbstractItemModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QAbstractItemModel::itemData(*index);
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
void QAbstractItemModel_OnItemData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_itemdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ItemData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperSetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QAbstractItemModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetItemData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_setitemdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetItemData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
    return self->QAbstractItemModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnClearItemData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_clearitemdata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ClearItemData_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAbstractItemModel_SuperMimeTypes(const QAbstractItemModel* self) {
    QList<QString> _ret = self->QAbstractItemModel::mimeTypes();
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
void QAbstractItemModel_OnMimeTypes(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_mimetypes_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QAbstractItemModel_SuperMimeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QAbstractItemModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMimeData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_mimedata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperCanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanDropMimeData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_candropmimedata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanDropMimeData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperDropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDropMimeData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_dropmimedata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemModel_SuperSupportedDropActions(const QAbstractItemModel* self) {
    return static_cast<int>(self->QAbstractItemModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDropActions(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_supporteddropactions_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemModel_SuperSupportedDragActions(const QAbstractItemModel* self) {
    return static_cast<int>(self->QAbstractItemModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDragActions(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_supporteddragactions_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDragActions_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperInsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertRows(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_insertrows_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertRows_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperInsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertColumns(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_insertcolumns_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertColumns_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperRemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveRows(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_removerows_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveRows_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperRemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveColumns(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_removecolumns_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveColumns_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveRows(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_moverows_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveRows_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveColumns(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_movecolumns_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveColumns_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemModel_SuperFetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
    self->QAbstractItemModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFetchMore(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_fetchmore_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperCanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
    return self->QAbstractItemModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanFetchMore(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_canfetchmore_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemModel_SuperFlags(const QAbstractItemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QAbstractItemModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFlags(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_flags_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Flags_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemModel_SuperSort(QAbstractItemModel* self, int column, int order) {
    self->QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSort(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_sort_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sort_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_SuperBuddy(const QAbstractItemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QAbstractItemModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBuddy(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_buddy_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Buddy_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_SuperMatch(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractItemModel_OnMatch(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_match_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Match_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractItemModel_SuperSpan(const QAbstractItemModel* self, const QModelIndex* index) {
    return new QSize(self->QAbstractItemModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSpan(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_span_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Span_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QAbstractItemModel_SuperRoleNames(const QAbstractItemModel* self) {
    QHash<int, QByteArray> _ret = self->QAbstractItemModel::roleNames();
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
void QAbstractItemModel_OnRoleNames(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_rolenames_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemModel_SuperMultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QAbstractItemModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMultiData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        vqabstractitemmodel->qabstractitemmodel_multidata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MultiData_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemModel_SuperSubmit(QAbstractItemModel* self) {
    return self->QAbstractItemModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSubmit(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_submit_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Submit_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemModel_SuperRevert(QAbstractItemModel* self) {
    self->QAbstractItemModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRevert(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_revert_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Revert_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemModel_SuperResetInternalData(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnResetInternalData(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_resetinternaldata_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemModel_Event(QAbstractItemModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractItemModel_SuperEvent(QAbstractItemModel* self, QEvent* event) {
    return self->QAbstractItemModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEvent(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_event_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemModel_EventFilter(QAbstractItemModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractItemModel_SuperEventFilter(QAbstractItemModel* self, QObject* watched, QEvent* event) {
    return self->QAbstractItemModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnEventFilter(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_eventfilter_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemModel_TimerEvent(QAbstractItemModel* self, QTimerEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemModel_SuperTimerEvent(QAbstractItemModel* self, QTimerEvent* event) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnTimerEvent(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_timerevent_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemModel_ChildEvent(QAbstractItemModel* self, QChildEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemModel_SuperChildEvent(QAbstractItemModel* self, QChildEvent* event) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnChildEvent(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_childevent_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemModel_CustomEvent(QAbstractItemModel* self, QEvent* event) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemModel_SuperCustomEvent(QAbstractItemModel* self, QEvent* event) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCustomEvent(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_customevent_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemModel_ConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemModel_SuperConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnConnectNotify(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_connectnotify_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemModel_DisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
    if (vqabstractitemmodel) {
        vqabstractitemmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemModel_SuperDisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->QAbstractItemModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDisconnectNotify(QAbstractItemModel* self, intptr_t slot) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self))
        vqabstractitemmodel->qabstractitemmodel_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex(const QAbstractItemModel* self, int row, int column) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QAbstractItemModel::createIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<quintptr>(id)));
    qFatal("Error: Protected method QAbstractItemModel::createIndex2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EncodeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqabstractitemmodel->VirtualQAbstractItemModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QAbstractItemModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemModel_DecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QAbstractItemModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_BeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndInsertRows(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endInsertRows();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_BeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndRemoveRows(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemModel_BeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndMoveRows(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endMoveRows();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_BeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndInsertColumns(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_BeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndRemoveColumns(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemModel_BeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndMoveColumns(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_BeginResetModel(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::beginResetModel();
    } else
        qFatal("Error: Protected method QAbstractItemModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_EndResetModel(QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::endResetModel();
    } else
        qFatal("Error: Protected method QAbstractItemModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_ChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
        vqabstractitemmodel->VirtualQAbstractItemModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QAbstractItemModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemModel_ChangePersistentIndexList(QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self)) {
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
        vqabstractitemmodel->VirtualQAbstractItemModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QAbstractItemModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemModel_PersistentIndexList(const QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        QList<QModelIndex> _ret = vqabstractitemmodel->VirtualQAbstractItemModel::persistentIndexList();
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
        qFatal("Error: Protected method QAbstractItemModel::persistentIndexList called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* QAbstractItemModel_CreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self)))
        return new QModelIndex(vqabstractitemmodel->createIndex(static_cast<int>(row), static_cast<int>(column), data));
    qFatal("Error: Protected method QAbstractItemModel::createIndex3 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractItemModel_Sender(const QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::sender();
    } else
        qFatal("Error: Protected method QAbstractItemModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemModel_SenderSignalIndex(const QAbstractItemModel* self) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractItemModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemModel_Receivers(const QAbstractItemModel* self, const char* signal) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractItemModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemModel_IsSignalConnected(const QAbstractItemModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemmodel = const_cast<VirtualQAbstractItemModel*>(dynamic_cast<const VirtualQAbstractItemModel*>(self))) {
        return vqabstractitemmodel->VirtualQAbstractItemModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractItemModel::isSignalConnected called without a directly constructed type");
}

void QAbstractItemModel_Connect_RowsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_RowsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ColumnsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
        const QModelIndex& parent_ret = parent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
        int sigval2 = first;
        int sigval3 = last;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractItemModel_Connect_ModelAboutToBeReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelAboutToBeReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemModel_Connect_ModelReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemModel_Connect_RowsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationRow;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_RowsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationRow;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_ColumnsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationColumn;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Connect_ColumnsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
        const QModelIndex& sourceParent_ret = sourceParent;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
        int sigval2 = sourceStart;
        int sigval3 = sourceEnd;
        const QModelIndex& destinationParent_ret = destinationParent;
        // Cast returned reference into pointer
        QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
        int sigval5 = destinationColumn;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
    });
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
    delete self;
}

QAbstractTableModel* QAbstractTableModel_new() {
    return new VirtualQAbstractTableModel();
}

QAbstractTableModel* QAbstractTableModel_new2(QObject* parent) {
    return new VirtualQAbstractTableModel(parent);
}

QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractTableModel_Metacast(QAbstractTableModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractTableModel_Metacall(QAbstractTableModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractTableModel_Tr(const char* s) {
    auto _ret = QAbstractTableModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractTableModel_Flags(const QAbstractTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

libqt_string QAbstractTableModel_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractTableModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractTableModel_SuperMetaObject(const QAbstractTableModel* self) {
    return (QMetaObject*)self->QAbstractTableModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMetaObject(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_metaobject_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractTableModel_SuperMetacast(QAbstractTableModel* self, const char* param1) {
    return self->QAbstractTableModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMetacast(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_metacast_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractTableModel_SuperMetacall(QAbstractTableModel* self, int param1, int param2, void** param3) {
    return self->QAbstractTableModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMetacall(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_metacall_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_SuperIndex(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QAbstractTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnIndex(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_index_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_SuperSibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QAbstractTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSibling(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_sibling_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sibling_Callback>(slot);
}

// Base class handler implementation
bool QAbstractTableModel_SuperDropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDropMimeData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_dropmimedata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QAbstractTableModel_SuperFlags(const QAbstractTableModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QAbstractTableModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnFlags(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_flags_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Flags_Callback>(slot);
}

// Derived class handler implementation
int QAbstractTableModel_RowCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRowCount(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_rowcount_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int QAbstractTableModel_ColumnCount(const QAbstractTableModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnColumnCount(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_columncount_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractTableModel_Data(const QAbstractTableModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_data_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_SetData(QAbstractTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QAbstractTableModel_SuperSetData(QAbstractTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QAbstractTableModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_setdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractTableModel_HeaderData(const QAbstractTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QAbstractTableModel_SuperHeaderData(const QAbstractTableModel* self, int section, int orientation, int role) {
    return new QVariant(self->QAbstractTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnHeaderData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_headerdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_SetHeaderData(QAbstractTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QAbstractTableModel_SuperSetHeaderData(QAbstractTableModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetHeaderData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_setheaderdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractTableModel_ItemData(const QAbstractTableModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QAbstractTableModel_SuperItemData(const QAbstractTableModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QAbstractTableModel::itemData(*index);
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
void QAbstractTableModel_OnItemData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_itemdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_SetItemData(QAbstractTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QAbstractTableModel_SuperSetItemData(QAbstractTableModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QAbstractTableModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSetItemData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_setitemdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_ClearItemData(QAbstractTableModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QAbstractTableModel_SuperClearItemData(QAbstractTableModel* self, const QModelIndex* index) {
    return self->QAbstractTableModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnClearItemData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_clearitemdata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractTableModel_MimeTypes(const QAbstractTableModel* self) {
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
libqt_list /* of libqt_string */ QAbstractTableModel_SuperMimeTypes(const QAbstractTableModel* self) {
    QList<QString> _ret = self->QAbstractTableModel::mimeTypes();
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
void QAbstractTableModel_OnMimeTypes(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_mimetypes_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QAbstractTableModel_MimeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QAbstractTableModel_SuperMimeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QAbstractTableModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMimeData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_mimedata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_CanDropMimeData(const QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperCanDropMimeData(const QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCanDropMimeData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_candropmimedata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QAbstractTableModel_SupportedDropActions(const QAbstractTableModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QAbstractTableModel_SuperSupportedDropActions(const QAbstractTableModel* self) {
    return static_cast<int>(self->QAbstractTableModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSupportedDropActions(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_supporteddropactions_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QAbstractTableModel_SupportedDragActions(const QAbstractTableModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QAbstractTableModel_SuperSupportedDragActions(const QAbstractTableModel* self) {
    return static_cast<int>(self->QAbstractTableModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSupportedDragActions(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_supporteddragactions_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_InsertRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperInsertRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnInsertRows(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_insertrows_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_InsertColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperInsertColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnInsertColumns(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_insertcolumns_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_RemoveRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperRemoveRows(QAbstractTableModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRemoveRows(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_removerows_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_RemoveColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperRemoveColumns(QAbstractTableModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRemoveColumns(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_removecolumns_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_MoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractTableModel_SuperMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMoveRows(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_moverows_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_MoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractTableModel_SuperMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMoveColumns(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_movecolumns_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_FetchMore(QAbstractTableModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QAbstractTableModel_SuperFetchMore(QAbstractTableModel* self, const QModelIndex* parent) {
    self->QAbstractTableModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnFetchMore(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_fetchmore_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_CanFetchMore(const QAbstractTableModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QAbstractTableModel_SuperCanFetchMore(const QAbstractTableModel* self, const QModelIndex* parent) {
    return self->QAbstractTableModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCanFetchMore(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_canfetchmore_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_Sort(QAbstractTableModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QAbstractTableModel_SuperSort(QAbstractTableModel* self, int column, int order) {
    self->QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSort(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_sort_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractTableModel_Buddy(const QAbstractTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_SuperBuddy(const QAbstractTableModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QAbstractTableModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnBuddy(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_buddy_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_Match(const QAbstractTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QAbstractTableModel_SuperMatch(const QAbstractTableModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QAbstractTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractTableModel_OnMatch(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_match_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractTableModel_Span(const QAbstractTableModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QAbstractTableModel_SuperSpan(const QAbstractTableModel* self, const QModelIndex* index) {
    return new QSize(self->QAbstractTableModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSpan(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_span_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractTableModel_RoleNames(const QAbstractTableModel* self) {
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
libqt_map /* of int to libqt_string */ QAbstractTableModel_SuperRoleNames(const QAbstractTableModel* self) {
    QHash<int, QByteArray> _ret = self->QAbstractTableModel::roleNames();
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
void QAbstractTableModel_OnRoleNames(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_rolenames_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_MultiData(const QAbstractTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QAbstractTableModel_SuperMultiData(const QAbstractTableModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QAbstractTableModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnMultiData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        vqabstracttablemodel->qabstracttablemodel_multidata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_Submit(QAbstractTableModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QAbstractTableModel_SuperSubmit(QAbstractTableModel* self) {
    return self->QAbstractTableModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSubmit(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_submit_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_Revert(QAbstractTableModel* self) {
    self->revert();
}

// Base class handler implementation
void QAbstractTableModel_SuperRevert(QAbstractTableModel* self) {
    self->QAbstractTableModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnRevert(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_revert_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_ResetInternalData(QAbstractTableModel* self) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperResetInternalData(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnResetInternalData(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_resetinternaldata_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_Event(QAbstractTableModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractTableModel_SuperEvent(QAbstractTableModel* self, QEvent* event) {
    return self->QAbstractTableModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEvent(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_event_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractTableModel_EventFilter(QAbstractTableModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractTableModel_SuperEventFilter(QAbstractTableModel* self, QObject* watched, QEvent* event) {
    return self->QAbstractTableModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnEventFilter(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_eventfilter_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_TimerEvent(QAbstractTableModel* self, QTimerEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperTimerEvent(QAbstractTableModel* self, QTimerEvent* event) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnTimerEvent(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_timerevent_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_ChildEvent(QAbstractTableModel* self, QChildEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperChildEvent(QAbstractTableModel* self, QChildEvent* event) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnChildEvent(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_childevent_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_CustomEvent(QAbstractTableModel* self, QEvent* event) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperCustomEvent(QAbstractTableModel* self, QEvent* event) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnCustomEvent(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_customevent_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_ConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnConnectNotify(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_connectnotify_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractTableModel_DisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
    if (vqabstracttablemodel) {
        vqabstracttablemodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractTableModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractTableModel_SuperDisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->QAbstractTableModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractTableModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDisconnectNotify(QAbstractTableModel* self, intptr_t slot) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self))
        vqabstracttablemodel->qabstracttablemodel_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractTableModel_CreateIndex(const QAbstractTableModel* self, int row, int column) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self)))
        return new QModelIndex(vqabstracttablemodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QAbstractTableModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EncodeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqabstracttablemodel->VirtualQAbstractTableModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QAbstractTableModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTableModel_DecodeData(QAbstractTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QAbstractTableModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_BeginInsertRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndInsertRows(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endInsertRows();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_BeginRemoveRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndRemoveRows(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTableModel_BeginMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndMoveRows(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endMoveRows();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_BeginInsertColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndInsertColumns(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_BeginRemoveColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndRemoveColumns(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTableModel_BeginMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndMoveColumns(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_BeginResetModel(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::beginResetModel();
    } else
        qFatal("Error: Protected method QAbstractTableModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_EndResetModel(QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::endResetModel();
    } else
        qFatal("Error: Protected method QAbstractTableModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_ChangePersistentIndex(QAbstractTableModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
        vqabstracttablemodel->VirtualQAbstractTableModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QAbstractTableModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractTableModel_ChangePersistentIndexList(QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self)) {
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
        vqabstracttablemodel->VirtualQAbstractTableModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QAbstractTableModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QAbstractTableModel_PersistentIndexList(const QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        QList<QModelIndex> _ret = vqabstracttablemodel->VirtualQAbstractTableModel::persistentIndexList();
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
        qFatal("Error: Protected method QAbstractTableModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractTableModel_Sender(const QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::sender();
    } else
        qFatal("Error: Protected method QAbstractTableModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTableModel_SenderSignalIndex(const QAbstractTableModel* self) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractTableModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractTableModel_Receivers(const QAbstractTableModel* self, const char* signal) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractTableModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractTableModel_IsSignalConnected(const QAbstractTableModel* self, const QMetaMethod* signal) {
    if (auto* vqabstracttablemodel = const_cast<VirtualQAbstractTableModel*>(dynamic_cast<const VirtualQAbstractTableModel*>(self))) {
        return vqabstracttablemodel->VirtualQAbstractTableModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractTableModel::isSignalConnected called without a directly constructed type");
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
    delete self;
}

QAbstractListModel* QAbstractListModel_new() {
    return new VirtualQAbstractListModel();
}

QAbstractListModel* QAbstractListModel_new2(QObject* parent) {
    return new VirtualQAbstractListModel(parent);
}

QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractListModel_Metacast(QAbstractListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractListModel_Metacall(QAbstractListModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractListModel_Tr(const char* s) {
    auto _ret = QAbstractListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractListModel_DropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractListModel_Flags(const QAbstractListModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

libqt_string QAbstractListModel_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractListModel_SuperMetaObject(const QAbstractListModel* self) {
    return (QMetaObject*)self->QAbstractListModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMetaObject(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_metaobject_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractListModel_SuperMetacast(QAbstractListModel* self, const char* param1) {
    return self->QAbstractListModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMetacast(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_metacast_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractListModel_SuperMetacall(QAbstractListModel* self, int param1, int param2, void** param3) {
    return self->QAbstractListModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMetacall(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_metacall_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractListModel_SuperIndex(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QAbstractListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnIndex(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_index_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QAbstractListModel_SuperSibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QAbstractListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSibling(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_sibling_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sibling_Callback>(slot);
}

// Base class handler implementation
bool QAbstractListModel_SuperDropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDropMimeData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_dropmimedata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QAbstractListModel_SuperFlags(const QAbstractListModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QAbstractListModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnFlags(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_flags_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Flags_Callback>(slot);
}

// Derived class handler implementation
int QAbstractListModel_RowCount(const QAbstractListModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRowCount(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_rowcount_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractListModel_Data(const QAbstractListModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_data_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_SetData(QAbstractListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool QAbstractListModel_SuperSetData(QAbstractListModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QAbstractListModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_setdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractListModel_HeaderData(const QAbstractListModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* QAbstractListModel_SuperHeaderData(const QAbstractListModel* self, int section, int orientation, int role) {
    return new QVariant(self->QAbstractListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnHeaderData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_headerdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_SetHeaderData(QAbstractListModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QAbstractListModel_SuperSetHeaderData(QAbstractListModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetHeaderData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_setheaderdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractListModel_ItemData(const QAbstractListModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QAbstractListModel_SuperItemData(const QAbstractListModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QAbstractListModel::itemData(*index);
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
void QAbstractListModel_OnItemData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_itemdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_SetItemData(QAbstractListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QAbstractListModel_SuperSetItemData(QAbstractListModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QAbstractListModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSetItemData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_setitemdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_ClearItemData(QAbstractListModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QAbstractListModel_SuperClearItemData(QAbstractListModel* self, const QModelIndex* index) {
    return self->QAbstractListModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnClearItemData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_clearitemdata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractListModel_MimeTypes(const QAbstractListModel* self) {
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
libqt_list /* of libqt_string */ QAbstractListModel_SuperMimeTypes(const QAbstractListModel* self) {
    QList<QString> _ret = self->QAbstractListModel::mimeTypes();
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
void QAbstractListModel_OnMimeTypes(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_mimetypes_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* QAbstractListModel_MimeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* QAbstractListModel_SuperMimeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QAbstractListModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMimeData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_mimedata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_CanDropMimeData(const QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperCanDropMimeData(const QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCanDropMimeData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_candropmimedata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QAbstractListModel_SupportedDropActions(const QAbstractListModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int QAbstractListModel_SuperSupportedDropActions(const QAbstractListModel* self) {
    return static_cast<int>(self->QAbstractListModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSupportedDropActions(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_supporteddropactions_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int QAbstractListModel_SupportedDragActions(const QAbstractListModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QAbstractListModel_SuperSupportedDragActions(const QAbstractListModel* self) {
    return static_cast<int>(self->QAbstractListModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSupportedDragActions(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_supporteddragactions_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_InsertRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperInsertRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnInsertRows(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_insertrows_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_InsertColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperInsertColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnInsertColumns(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_insertcolumns_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_RemoveRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperRemoveRows(QAbstractListModel* self, int row, int count, const QModelIndex* parent) {
    return self->QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRemoveRows(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_removerows_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_RemoveColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperRemoveColumns(QAbstractListModel* self, int column, int count, const QModelIndex* parent) {
    return self->QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRemoveColumns(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_removecolumns_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_MoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractListModel_SuperMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMoveRows(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_moverows_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_MoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QAbstractListModel_SuperMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMoveColumns(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_movecolumns_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_FetchMore(QAbstractListModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void QAbstractListModel_SuperFetchMore(QAbstractListModel* self, const QModelIndex* parent) {
    self->QAbstractListModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnFetchMore(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_fetchmore_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_CanFetchMore(const QAbstractListModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool QAbstractListModel_SuperCanFetchMore(const QAbstractListModel* self, const QModelIndex* parent) {
    return self->QAbstractListModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCanFetchMore(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_canfetchmore_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_Sort(QAbstractListModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void QAbstractListModel_SuperSort(QAbstractListModel* self, int column, int order) {
    self->QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSort(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_sort_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractListModel_Buddy(const QAbstractListModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QAbstractListModel_SuperBuddy(const QAbstractListModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QAbstractListModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnBuddy(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_buddy_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_Match(const QAbstractListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QAbstractListModel_SuperMatch(const QAbstractListModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QAbstractListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractListModel_OnMatch(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_match_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractListModel_Span(const QAbstractListModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QAbstractListModel_SuperSpan(const QAbstractListModel* self, const QModelIndex* index) {
    return new QSize(self->QAbstractListModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSpan(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_span_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractListModel_RoleNames(const QAbstractListModel* self) {
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
libqt_map /* of int to libqt_string */ QAbstractListModel_SuperRoleNames(const QAbstractListModel* self) {
    QHash<int, QByteArray> _ret = self->QAbstractListModel::roleNames();
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
void QAbstractListModel_OnRoleNames(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_rolenames_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_MultiData(const QAbstractListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QAbstractListModel_SuperMultiData(const QAbstractListModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QAbstractListModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnMultiData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        vqabstractlistmodel->qabstractlistmodel_multidata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_Submit(QAbstractListModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QAbstractListModel_SuperSubmit(QAbstractListModel* self) {
    return self->QAbstractListModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSubmit(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_submit_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_Revert(QAbstractListModel* self) {
    self->revert();
}

// Base class handler implementation
void QAbstractListModel_SuperRevert(QAbstractListModel* self) {
    self->QAbstractListModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnRevert(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_revert_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_ResetInternalData(QAbstractListModel* self) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperResetInternalData(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnResetInternalData(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_resetinternaldata_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_Event(QAbstractListModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractListModel_SuperEvent(QAbstractListModel* self, QEvent* event) {
    return self->QAbstractListModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEvent(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_event_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractListModel_EventFilter(QAbstractListModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractListModel_SuperEventFilter(QAbstractListModel* self, QObject* watched, QEvent* event) {
    return self->QAbstractListModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnEventFilter(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_eventfilter_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_TimerEvent(QAbstractListModel* self, QTimerEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperTimerEvent(QAbstractListModel* self, QTimerEvent* event) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnTimerEvent(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_timerevent_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_ChildEvent(QAbstractListModel* self, QChildEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperChildEvent(QAbstractListModel* self, QChildEvent* event) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnChildEvent(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_childevent_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_CustomEvent(QAbstractListModel* self, QEvent* event) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperCustomEvent(QAbstractListModel* self, QEvent* event) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnCustomEvent(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_customevent_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_ConnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperConnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnConnectNotify(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_connectnotify_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractListModel_DisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
    if (vqabstractlistmodel) {
        vqabstractlistmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractListModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractListModel_SuperDisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->QAbstractListModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractListModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDisconnectNotify(QAbstractListModel* self, intptr_t slot) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self))
        vqabstractlistmodel->qabstractlistmodel_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QAbstractListModel_CreateIndex(const QAbstractListModel* self, int row, int column) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self)))
        return new QModelIndex(vqabstractlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QAbstractListModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EncodeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqabstractlistmodel->VirtualQAbstractListModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QAbstractListModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractListModel_DecodeData(QAbstractListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        return vqabstractlistmodel->VirtualQAbstractListModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QAbstractListModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_BeginInsertRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndInsertRows(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endInsertRows();
    } else
        qFatal("Error: Protected method QAbstractListModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_BeginRemoveRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndRemoveRows(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QAbstractListModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractListModel_BeginMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        return vqabstractlistmodel->VirtualQAbstractListModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndMoveRows(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endMoveRows();
    } else
        qFatal("Error: Protected method QAbstractListModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_BeginInsertColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndInsertColumns(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QAbstractListModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_BeginRemoveColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndRemoveColumns(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QAbstractListModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractListModel_BeginMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        return vqabstractlistmodel->VirtualQAbstractListModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QAbstractListModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndMoveColumns(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QAbstractListModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_BeginResetModel(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::beginResetModel();
    } else
        qFatal("Error: Protected method QAbstractListModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_EndResetModel(QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::endResetModel();
    } else
        qFatal("Error: Protected method QAbstractListModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_ChangePersistentIndex(QAbstractListModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
        vqabstractlistmodel->VirtualQAbstractListModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QAbstractListModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractListModel_ChangePersistentIndexList(QAbstractListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self)) {
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
        vqabstractlistmodel->VirtualQAbstractListModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QAbstractListModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QAbstractListModel_PersistentIndexList(const QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        QList<QModelIndex> _ret = vqabstractlistmodel->VirtualQAbstractListModel::persistentIndexList();
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
        qFatal("Error: Protected method QAbstractListModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractListModel_Sender(const QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        return vqabstractlistmodel->VirtualQAbstractListModel::sender();
    } else
        qFatal("Error: Protected method QAbstractListModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractListModel_SenderSignalIndex(const QAbstractListModel* self) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        return vqabstractlistmodel->VirtualQAbstractListModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractListModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractListModel_Receivers(const QAbstractListModel* self, const char* signal) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        return vqabstractlistmodel->VirtualQAbstractListModel::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractListModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractListModel_IsSignalConnected(const QAbstractListModel* self, const QMetaMethod* signal) {
    if (auto* vqabstractlistmodel = const_cast<VirtualQAbstractListModel*>(dynamic_cast<const VirtualQAbstractListModel*>(self))) {
        return vqabstractlistmodel->VirtualQAbstractListModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractListModel::isSignalConnected called without a directly constructed type");
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
    delete self;
}
