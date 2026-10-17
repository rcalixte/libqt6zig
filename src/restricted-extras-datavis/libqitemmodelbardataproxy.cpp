#include <QAbstractDataProxy>
#include <QAbstractItemModel>
#include <QBarDataProxy>
#include <QChildEvent>
#include <QEvent>
#include <QItemModelBarDataProxy>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QTimerEvent>
#include <qitemmodelbardataproxy.h>
#include "libqitemmodelbardataproxy.h"
#include "libqitemmodelbardataproxy.hxx"

QItemModelBarDataProxy* QItemModelBarDataProxy_new() {
    return new VirtualQItemModelBarDataProxy();
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new2(QAbstractItemModel* itemModel) {
    return new VirtualQItemModelBarDataProxy(itemModel);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string valueRole) {
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, valueRole_QString);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new5(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rotationRole_QString);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new6(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QList<QString> rowCategories_QList;
    rowCategories_QList.reserve(rowCategories.len);
    libqt_string* rowCategories_arr = static_cast<libqt_string*>(rowCategories.data);
    for (size_t i = 0; i < rowCategories.len; ++i) {
        QString rowCategories_arr_i_QString = QString::fromUtf8(rowCategories_arr[i].data, rowCategories_arr[i].len);
        rowCategories_QList.push_back(rowCategories_arr_i_QString);
    }
    QList<QString> columnCategories_QList;
    columnCategories_QList.reserve(columnCategories.len);
    libqt_string* columnCategories_arr = static_cast<libqt_string*>(columnCategories.data);
    for (size_t i = 0; i < columnCategories.len; ++i) {
        QString columnCategories_arr_i_QString = QString::fromUtf8(columnCategories_arr[i].data, columnCategories_arr[i].len);
        columnCategories_QList.push_back(columnCategories_arr_i_QString);
    }
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rowCategories_QList, columnCategories_QList);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    QList<QString> rowCategories_QList;
    rowCategories_QList.reserve(rowCategories.len);
    libqt_string* rowCategories_arr = static_cast<libqt_string*>(rowCategories.data);
    for (size_t i = 0; i < rowCategories.len; ++i) {
        QString rowCategories_arr_i_QString = QString::fromUtf8(rowCategories_arr[i].data, rowCategories_arr[i].len);
        rowCategories_QList.push_back(rowCategories_arr_i_QString);
    }
    QList<QString> columnCategories_QList;
    columnCategories_QList.reserve(columnCategories.len);
    libqt_string* columnCategories_arr = static_cast<libqt_string*>(columnCategories.data);
    for (size_t i = 0; i < columnCategories.len; ++i) {
        QString columnCategories_arr_i_QString = QString::fromUtf8(columnCategories_arr[i].data, columnCategories_arr[i].len);
        columnCategories_QList.push_back(columnCategories_arr_i_QString);
    }
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rotationRole_QString, rowCategories_QList, columnCategories_QList);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new8(QObject* parent) {
    return new VirtualQItemModelBarDataProxy(parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new9(QAbstractItemModel* itemModel, QObject* parent) {
    return new VirtualQItemModelBarDataProxy(itemModel, parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new10(QAbstractItemModel* itemModel, const libqt_string valueRole, QObject* parent) {
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, valueRole_QString, parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new11(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new12(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rotationRole_QString, parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new13(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QList<QString> rowCategories_QList;
    rowCategories_QList.reserve(rowCategories.len);
    libqt_string* rowCategories_arr = static_cast<libqt_string*>(rowCategories.data);
    for (size_t i = 0; i < rowCategories.len; ++i) {
        QString rowCategories_arr_i_QString = QString::fromUtf8(rowCategories_arr[i].data, rowCategories_arr[i].len);
        rowCategories_QList.push_back(rowCategories_arr_i_QString);
    }
    QList<QString> columnCategories_QList;
    columnCategories_QList.reserve(columnCategories.len);
    libqt_string* columnCategories_arr = static_cast<libqt_string*>(columnCategories.data);
    for (size_t i = 0; i < columnCategories.len; ++i) {
        QString columnCategories_arr_i_QString = QString::fromUtf8(columnCategories_arr[i].data, columnCategories_arr[i].len);
        columnCategories_QList.push_back(columnCategories_arr_i_QString);
    }
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rowCategories_QList, columnCategories_QList, parent);
}

QItemModelBarDataProxy* QItemModelBarDataProxy_new14(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    QList<QString> rowCategories_QList;
    rowCategories_QList.reserve(rowCategories.len);
    libqt_string* rowCategories_arr = static_cast<libqt_string*>(rowCategories.data);
    for (size_t i = 0; i < rowCategories.len; ++i) {
        QString rowCategories_arr_i_QString = QString::fromUtf8(rowCategories_arr[i].data, rowCategories_arr[i].len);
        rowCategories_QList.push_back(rowCategories_arr_i_QString);
    }
    QList<QString> columnCategories_QList;
    columnCategories_QList.reserve(columnCategories.len);
    libqt_string* columnCategories_arr = static_cast<libqt_string*>(columnCategories.data);
    for (size_t i = 0; i < columnCategories.len; ++i) {
        QString columnCategories_arr_i_QString = QString::fromUtf8(columnCategories_arr[i].data, columnCategories_arr[i].len);
        columnCategories_QList.push_back(columnCategories_arr_i_QString);
    }
    return new VirtualQItemModelBarDataProxy(itemModel, rowRole_QString, columnRole_QString, valueRole_QString, rotationRole_QString, rowCategories_QList, columnCategories_QList, parent);
}

QMetaObject* QItemModelBarDataProxy_MetaObject(const QItemModelBarDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QItemModelBarDataProxy_Metacast(QItemModelBarDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QItemModelBarDataProxy_Metacall(QItemModelBarDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QItemModelBarDataProxy_Tr(const char* s) {
    auto _ret = QItemModelBarDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetItemModel(QItemModelBarDataProxy* self, QAbstractItemModel* itemModel) {
    self->setItemModel(itemModel);
}

QAbstractItemModel* QItemModelBarDataProxy_ItemModel(const QItemModelBarDataProxy* self) {
    return self->itemModel();
}

void QItemModelBarDataProxy_SetRowRole(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setRowRole(role_QString);
}

libqt_string QItemModelBarDataProxy_RowRole(const QItemModelBarDataProxy* self) {
    auto _ret = self->rowRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetColumnRole(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setColumnRole(role_QString);
}

libqt_string QItemModelBarDataProxy_ColumnRole(const QItemModelBarDataProxy* self) {
    auto _ret = self->columnRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetValueRole(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setValueRole(role_QString);
}

libqt_string QItemModelBarDataProxy_ValueRole(const QItemModelBarDataProxy* self) {
    auto _ret = self->valueRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetRotationRole(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setRotationRole(role_QString);
}

libqt_string QItemModelBarDataProxy_RotationRole(const QItemModelBarDataProxy* self) {
    auto _ret = self->rotationRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetRowCategories(QItemModelBarDataProxy* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setRowCategories(categories_QList);
}

libqt_list /* of libqt_string */ QItemModelBarDataProxy_RowCategories(const QItemModelBarDataProxy* self) {
    QList<QString> _ret = self->rowCategories();
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

void QItemModelBarDataProxy_SetColumnCategories(QItemModelBarDataProxy* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setColumnCategories(categories_QList);
}

libqt_list /* of libqt_string */ QItemModelBarDataProxy_ColumnCategories(const QItemModelBarDataProxy* self) {
    QList<QString> _ret = self->columnCategories();
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

void QItemModelBarDataProxy_SetUseModelCategories(QItemModelBarDataProxy* self, bool enable) {
    self->setUseModelCategories(enable);
}

bool QItemModelBarDataProxy_UseModelCategories(const QItemModelBarDataProxy* self) {
    return self->useModelCategories();
}

void QItemModelBarDataProxy_SetAutoRowCategories(QItemModelBarDataProxy* self, bool enable) {
    self->setAutoRowCategories(enable);
}

bool QItemModelBarDataProxy_AutoRowCategories(const QItemModelBarDataProxy* self) {
    return self->autoRowCategories();
}

void QItemModelBarDataProxy_SetAutoColumnCategories(QItemModelBarDataProxy* self, bool enable) {
    self->setAutoColumnCategories(enable);
}

bool QItemModelBarDataProxy_AutoColumnCategories(const QItemModelBarDataProxy* self) {
    return self->autoColumnCategories();
}

void QItemModelBarDataProxy_Remap(QItemModelBarDataProxy* self, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString valueRole_QString = QString::fromUtf8(valueRole.data, valueRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    QList<QString> rowCategories_QList;
    rowCategories_QList.reserve(rowCategories.len);
    libqt_string* rowCategories_arr = static_cast<libqt_string*>(rowCategories.data);
    for (size_t i = 0; i < rowCategories.len; ++i) {
        QString rowCategories_arr_i_QString = QString::fromUtf8(rowCategories_arr[i].data, rowCategories_arr[i].len);
        rowCategories_QList.push_back(rowCategories_arr_i_QString);
    }
    QList<QString> columnCategories_QList;
    columnCategories_QList.reserve(columnCategories.len);
    libqt_string* columnCategories_arr = static_cast<libqt_string*>(columnCategories.data);
    for (size_t i = 0; i < columnCategories.len; ++i) {
        QString columnCategories_arr_i_QString = QString::fromUtf8(columnCategories_arr[i].data, columnCategories_arr[i].len);
        columnCategories_QList.push_back(columnCategories_arr_i_QString);
    }
    self->remap(rowRole_QString, columnRole_QString, valueRole_QString, rotationRole_QString, rowCategories_QList, columnCategories_QList);
}

int QItemModelBarDataProxy_RowCategoryIndex(QItemModelBarDataProxy* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    return self->rowCategoryIndex(category_QString);
}

int QItemModelBarDataProxy_ColumnCategoryIndex(QItemModelBarDataProxy* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    return self->columnCategoryIndex(category_QString);
}

void QItemModelBarDataProxy_SetRowRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->setRowRolePattern(*pattern);
}

QRegularExpression* QItemModelBarDataProxy_RowRolePattern(const QItemModelBarDataProxy* self) {
    return new QRegularExpression(self->rowRolePattern());
}

void QItemModelBarDataProxy_SetColumnRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->setColumnRolePattern(*pattern);
}

QRegularExpression* QItemModelBarDataProxy_ColumnRolePattern(const QItemModelBarDataProxy* self) {
    return new QRegularExpression(self->columnRolePattern());
}

void QItemModelBarDataProxy_SetValueRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->setValueRolePattern(*pattern);
}

QRegularExpression* QItemModelBarDataProxy_ValueRolePattern(const QItemModelBarDataProxy* self) {
    return new QRegularExpression(self->valueRolePattern());
}

void QItemModelBarDataProxy_SetRotationRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->setRotationRolePattern(*pattern);
}

QRegularExpression* QItemModelBarDataProxy_RotationRolePattern(const QItemModelBarDataProxy* self) {
    return new QRegularExpression(self->rotationRolePattern());
}

void QItemModelBarDataProxy_SetRowRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setRowRoleReplace(replace_QString);
}

libqt_string QItemModelBarDataProxy_RowRoleReplace(const QItemModelBarDataProxy* self) {
    auto _ret = self->rowRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetColumnRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setColumnRoleReplace(replace_QString);
}

libqt_string QItemModelBarDataProxy_ColumnRoleReplace(const QItemModelBarDataProxy* self) {
    auto _ret = self->columnRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetValueRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setValueRoleReplace(replace_QString);
}

libqt_string QItemModelBarDataProxy_ValueRoleReplace(const QItemModelBarDataProxy* self) {
    auto _ret = self->valueRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetRotationRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setRotationRoleReplace(replace_QString);
}

libqt_string QItemModelBarDataProxy_RotationRoleReplace(const QItemModelBarDataProxy* self) {
    auto _ret = self->rotationRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelBarDataProxy_SetMultiMatchBehavior(QItemModelBarDataProxy* self, int behavior) {
    self->setMultiMatchBehavior(static_cast<QItemModelBarDataProxy::MultiMatchBehavior>(behavior));
}

int QItemModelBarDataProxy_MultiMatchBehavior(const QItemModelBarDataProxy* self) {
    return static_cast<int>(self->multiMatchBehavior());
}

void QItemModelBarDataProxy_ItemModelChanged(QItemModelBarDataProxy* self, const QAbstractItemModel* itemModel) {
    self->itemModelChanged(itemModel);
}

void QItemModelBarDataProxy_Connect_ItemModelChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, QAbstractItemModel*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, QAbstractItemModel*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QAbstractItemModel*)>(&QItemModelBarDataProxy::itemModelChanged),
                                    [self, slotFunc](const QAbstractItemModel* itemModel) {
                                        QAbstractItemModel* sigval1 = (QAbstractItemModel*)itemModel;
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_RowRoleChanged(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->rowRoleChanged(role_QString);
}

void QItemModelBarDataProxy_Connect_RowRoleChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::rowRoleChanged),
                                    [self, slotFunc](const QString& role) {
                                        const auto role_ret = role;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray role_b = role_ret.toUtf8();
                                        auto role_str_len = role_b.length();
                                        const char* role_str = static_cast<const char*>(malloc(role_str_len + 1));
                                        memcpy((void*)role_str, role_b.data(), role_str_len);
                                        ((char*)role_str)[role_str_len] = '\0';
                                        const char* sigval1 = role_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(role_str);
                                    });
}

void QItemModelBarDataProxy_ColumnRoleChanged(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->columnRoleChanged(role_QString);
}

void QItemModelBarDataProxy_Connect_ColumnRoleChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::columnRoleChanged),
                                    [self, slotFunc](const QString& role) {
                                        const auto role_ret = role;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray role_b = role_ret.toUtf8();
                                        auto role_str_len = role_b.length();
                                        const char* role_str = static_cast<const char*>(malloc(role_str_len + 1));
                                        memcpy((void*)role_str, role_b.data(), role_str_len);
                                        ((char*)role_str)[role_str_len] = '\0';
                                        const char* sigval1 = role_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(role_str);
                                    });
}

void QItemModelBarDataProxy_ValueRoleChanged(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->valueRoleChanged(role_QString);
}

void QItemModelBarDataProxy_Connect_ValueRoleChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::valueRoleChanged),
                                    [self, slotFunc](const QString& role) {
                                        const auto role_ret = role;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray role_b = role_ret.toUtf8();
                                        auto role_str_len = role_b.length();
                                        const char* role_str = static_cast<const char*>(malloc(role_str_len + 1));
                                        memcpy((void*)role_str, role_b.data(), role_str_len);
                                        ((char*)role_str)[role_str_len] = '\0';
                                        const char* sigval1 = role_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(role_str);
                                    });
}

void QItemModelBarDataProxy_RotationRoleChanged(QItemModelBarDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->rotationRoleChanged(role_QString);
}

void QItemModelBarDataProxy_Connect_RotationRoleChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::rotationRoleChanged),
                                    [self, slotFunc](const QString& role) {
                                        const auto role_ret = role;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray role_b = role_ret.toUtf8();
                                        auto role_str_len = role_b.length();
                                        const char* role_str = static_cast<const char*>(malloc(role_str_len + 1));
                                        memcpy((void*)role_str, role_b.data(), role_str_len);
                                        ((char*)role_str)[role_str_len] = '\0';
                                        const char* sigval1 = role_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(role_str);
                                    });
}

void QItemModelBarDataProxy_RowCategoriesChanged(QItemModelBarDataProxy* self) {
    self->rowCategoriesChanged();
}

void QItemModelBarDataProxy_Connect_RowCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)()>(&QItemModelBarDataProxy::rowCategoriesChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QItemModelBarDataProxy_ColumnCategoriesChanged(QItemModelBarDataProxy* self) {
    self->columnCategoriesChanged();
}

void QItemModelBarDataProxy_Connect_ColumnCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)()>(&QItemModelBarDataProxy::columnCategoriesChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QItemModelBarDataProxy_UseModelCategoriesChanged(QItemModelBarDataProxy* self, bool enable) {
    self->useModelCategoriesChanged(enable);
}

void QItemModelBarDataProxy_Connect_UseModelCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, bool)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(bool)>(&QItemModelBarDataProxy::useModelCategoriesChanged),
                                    [self, slotFunc](bool enable) {
                                        bool sigval1 = enable;
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_AutoRowCategoriesChanged(QItemModelBarDataProxy* self, bool enable) {
    self->autoRowCategoriesChanged(enable);
}

void QItemModelBarDataProxy_Connect_AutoRowCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, bool)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(bool)>(&QItemModelBarDataProxy::autoRowCategoriesChanged),
                                    [self, slotFunc](bool enable) {
                                        bool sigval1 = enable;
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_AutoColumnCategoriesChanged(QItemModelBarDataProxy* self, bool enable) {
    self->autoColumnCategoriesChanged(enable);
}

void QItemModelBarDataProxy_Connect_AutoColumnCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, bool)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(bool)>(&QItemModelBarDataProxy::autoColumnCategoriesChanged),
                                    [self, slotFunc](bool enable) {
                                        bool sigval1 = enable;
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_RowRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->rowRolePatternChanged(*pattern);
}

void QItemModelBarDataProxy_Connect_RowRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, QRegularExpression*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QRegularExpression&)>(&QItemModelBarDataProxy::rowRolePatternChanged),
                                    [self, slotFunc](const QRegularExpression& pattern) {
                                        const QRegularExpression& pattern_ret = pattern;
                                        // Cast returned reference into pointer
                                        QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_ColumnRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->columnRolePatternChanged(*pattern);
}

void QItemModelBarDataProxy_Connect_ColumnRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, QRegularExpression*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QRegularExpression&)>(&QItemModelBarDataProxy::columnRolePatternChanged),
                                    [self, slotFunc](const QRegularExpression& pattern) {
                                        const QRegularExpression& pattern_ret = pattern;
                                        // Cast returned reference into pointer
                                        QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_ValueRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->valueRolePatternChanged(*pattern);
}

void QItemModelBarDataProxy_Connect_ValueRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, QRegularExpression*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QRegularExpression&)>(&QItemModelBarDataProxy::valueRolePatternChanged),
                                    [self, slotFunc](const QRegularExpression& pattern) {
                                        const QRegularExpression& pattern_ret = pattern;
                                        // Cast returned reference into pointer
                                        QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_RotationRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern) {
    self->rotationRolePatternChanged(*pattern);
}

void QItemModelBarDataProxy_Connect_RotationRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, QRegularExpression*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QRegularExpression&)>(&QItemModelBarDataProxy::rotationRolePatternChanged),
                                    [self, slotFunc](const QRegularExpression& pattern) {
                                        const QRegularExpression& pattern_ret = pattern;
                                        // Cast returned reference into pointer
                                        QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                        slotFunc(self, sigval1);
                                    });
}

void QItemModelBarDataProxy_RowRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->rowRoleReplaceChanged(replace_QString);
}

void QItemModelBarDataProxy_Connect_RowRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::rowRoleReplaceChanged),
                                    [self, slotFunc](const QString& replace) {
                                        const auto replace_ret = replace;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray replace_b = replace_ret.toUtf8();
                                        auto replace_str_len = replace_b.length();
                                        const char* replace_str = static_cast<const char*>(malloc(replace_str_len + 1));
                                        memcpy((void*)replace_str, replace_b.data(), replace_str_len);
                                        ((char*)replace_str)[replace_str_len] = '\0';
                                        const char* sigval1 = replace_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(replace_str);
                                    });
}

void QItemModelBarDataProxy_ColumnRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->columnRoleReplaceChanged(replace_QString);
}

void QItemModelBarDataProxy_Connect_ColumnRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::columnRoleReplaceChanged),
                                    [self, slotFunc](const QString& replace) {
                                        const auto replace_ret = replace;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray replace_b = replace_ret.toUtf8();
                                        auto replace_str_len = replace_b.length();
                                        const char* replace_str = static_cast<const char*>(malloc(replace_str_len + 1));
                                        memcpy((void*)replace_str, replace_b.data(), replace_str_len);
                                        ((char*)replace_str)[replace_str_len] = '\0';
                                        const char* sigval1 = replace_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(replace_str);
                                    });
}

void QItemModelBarDataProxy_ValueRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->valueRoleReplaceChanged(replace_QString);
}

void QItemModelBarDataProxy_Connect_ValueRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::valueRoleReplaceChanged),
                                    [self, slotFunc](const QString& replace) {
                                        const auto replace_ret = replace;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray replace_b = replace_ret.toUtf8();
                                        auto replace_str_len = replace_b.length();
                                        const char* replace_str = static_cast<const char*>(malloc(replace_str_len + 1));
                                        memcpy((void*)replace_str, replace_b.data(), replace_str_len);
                                        ((char*)replace_str)[replace_str_len] = '\0';
                                        const char* sigval1 = replace_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(replace_str);
                                    });
}

void QItemModelBarDataProxy_RotationRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->rotationRoleReplaceChanged(replace_QString);
}

void QItemModelBarDataProxy_Connect_RotationRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, const char*)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(const QString&)>(&QItemModelBarDataProxy::rotationRoleReplaceChanged),
                                    [self, slotFunc](const QString& replace) {
                                        const auto replace_ret = replace;
                                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                        QByteArray replace_b = replace_ret.toUtf8();
                                        auto replace_str_len = replace_b.length();
                                        const char* replace_str = static_cast<const char*>(malloc(replace_str_len + 1));
                                        memcpy((void*)replace_str, replace_b.data(), replace_str_len);
                                        ((char*)replace_str)[replace_str_len] = '\0';
                                        const char* sigval1 = replace_str;
                                        slotFunc(self, sigval1);
                                        libqt_free(replace_str);
                                    });
}

void QItemModelBarDataProxy_MultiMatchBehaviorChanged(QItemModelBarDataProxy* self, int behavior) {
    self->multiMatchBehaviorChanged(static_cast<QItemModelBarDataProxy::MultiMatchBehavior>(behavior));
}

void QItemModelBarDataProxy_Connect_MultiMatchBehaviorChanged(QItemModelBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelBarDataProxy*, int) = reinterpret_cast<void (*)(QItemModelBarDataProxy*, int)>(slot);
    QItemModelBarDataProxy::connect(self,
                                    static_cast<void (QItemModelBarDataProxy::*)(QItemModelBarDataProxy::MultiMatchBehavior)>(&QItemModelBarDataProxy::multiMatchBehaviorChanged),
                                    [self, slotFunc](QItemModelBarDataProxy::MultiMatchBehavior behavior) {
                                        int sigval1 = static_cast<int>(behavior);
                                        slotFunc(self, sigval1);
                                    });
}

libqt_string QItemModelBarDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QItemModelBarDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QItemModelBarDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QItemModelBarDataProxy::tr(s, c, static_cast<int>(n));
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
QMetaObject* QItemModelBarDataProxy_SuperMetaObject(const QItemModelBarDataProxy* self) {
    return (QMetaObject*)self->QItemModelBarDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnMetaObject(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = const_cast<VirtualQItemModelBarDataProxy*>(dynamic_cast<const VirtualQItemModelBarDataProxy*>(self)))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_metaobject_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QItemModelBarDataProxy_SuperMetacast(QItemModelBarDataProxy* self, const char* param1) {
    return self->QItemModelBarDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnMetacast(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_metacast_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QItemModelBarDataProxy_SuperMetacall(QItemModelBarDataProxy* self, int param1, int param2, void** param3) {
    return self->QItemModelBarDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnMetacall(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_metacall_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelBarDataProxy_Event(QItemModelBarDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QItemModelBarDataProxy_SuperEvent(QItemModelBarDataProxy* self, QEvent* event) {
    return self->QItemModelBarDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnEvent(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_event_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelBarDataProxy_EventFilter(QItemModelBarDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QItemModelBarDataProxy_SuperEventFilter(QItemModelBarDataProxy* self, QObject* watched, QEvent* event) {
    return self->QItemModelBarDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnEventFilter(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_eventfilter_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QItemModelBarDataProxy_TimerEvent(QItemModelBarDataProxy* self, QTimerEvent* event) {
    auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self);
    if (vqitemmodelbardataproxy) {
        vqitemmodelbardataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelBarDataProxy_SuperTimerEvent(QItemModelBarDataProxy* self, QTimerEvent* event) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self)) {
        vqitemmodelbardataproxy->QItemModelBarDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnTimerEvent(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_timerevent_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelBarDataProxy_ChildEvent(QItemModelBarDataProxy* self, QChildEvent* event) {
    auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self);
    if (vqitemmodelbardataproxy) {
        vqitemmodelbardataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelBarDataProxy_SuperChildEvent(QItemModelBarDataProxy* self, QChildEvent* event) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self)) {
        vqitemmodelbardataproxy->QItemModelBarDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnChildEvent(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_childevent_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelBarDataProxy_CustomEvent(QItemModelBarDataProxy* self, QEvent* event) {
    auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self);
    if (vqitemmodelbardataproxy) {
        vqitemmodelbardataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelBarDataProxy_SuperCustomEvent(QItemModelBarDataProxy* self, QEvent* event) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self)) {
        vqitemmodelbardataproxy->QItemModelBarDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnCustomEvent(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_customevent_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelBarDataProxy_ConnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self);
    if (vqitemmodelbardataproxy) {
        vqitemmodelbardataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelBarDataProxy_SuperConnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self)) {
        vqitemmodelbardataproxy->QItemModelBarDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnConnectNotify(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_connectnotify_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QItemModelBarDataProxy_DisconnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self);
    if (vqitemmodelbardataproxy) {
        vqitemmodelbardataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelBarDataProxy_SuperDisconnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self)) {
        vqitemmodelbardataproxy->QItemModelBarDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelBarDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelBarDataProxy_OnDisconnectNotify(QItemModelBarDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelbardataproxy = dynamic_cast<VirtualQItemModelBarDataProxy*>(self))
        vqitemmodelbardataproxy->qitemmodelbardataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQItemModelBarDataProxy::QItemModelBarDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QItemModelBarDataProxy_Sender(const QItemModelBarDataProxy* self) {
    if (auto* vqitemmodelbardataproxy = const_cast<VirtualQItemModelBarDataProxy*>(dynamic_cast<const VirtualQItemModelBarDataProxy*>(self))) {
        return vqitemmodelbardataproxy->VirtualQItemModelBarDataProxy::sender();
    } else
        qFatal("Error: Protected method QItemModelBarDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelBarDataProxy_SenderSignalIndex(const QItemModelBarDataProxy* self) {
    if (auto* vqitemmodelbardataproxy = const_cast<VirtualQItemModelBarDataProxy*>(dynamic_cast<const VirtualQItemModelBarDataProxy*>(self))) {
        return vqitemmodelbardataproxy->VirtualQItemModelBarDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QItemModelBarDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelBarDataProxy_Receivers(const QItemModelBarDataProxy* self, const char* signal) {
    if (auto* vqitemmodelbardataproxy = const_cast<VirtualQItemModelBarDataProxy*>(dynamic_cast<const VirtualQItemModelBarDataProxy*>(self))) {
        return vqitemmodelbardataproxy->VirtualQItemModelBarDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QItemModelBarDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QItemModelBarDataProxy_IsSignalConnected(const QItemModelBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelbardataproxy = const_cast<VirtualQItemModelBarDataProxy*>(dynamic_cast<const VirtualQItemModelBarDataProxy*>(self))) {
        return vqitemmodelbardataproxy->VirtualQItemModelBarDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QItemModelBarDataProxy::isSignalConnected called without a directly constructed type");
}

void QItemModelBarDataProxy_Delete(QItemModelBarDataProxy* self) {
    delete self;
}
