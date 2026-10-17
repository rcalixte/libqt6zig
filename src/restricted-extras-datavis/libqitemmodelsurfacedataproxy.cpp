#include <QAbstractDataProxy>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemModelSurfaceDataProxy>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QSurfaceDataProxy>
#include <QTimerEvent>
#include <qitemmodelsurfacedataproxy.h>
#include "libqitemmodelsurfacedataproxy.h"
#include "libqitemmodelsurfacedataproxy.hxx"

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new() {
    return new VirtualQItemModelSurfaceDataProxy();
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new2(QAbstractItemModel* itemModel) {
    return new VirtualQItemModelSurfaceDataProxy(itemModel);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string yPosRole) {
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, yPosRole_QString);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, yPosRole_QString);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new5(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, xPosRole_QString, yPosRole_QString, zPosRole_QString);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new6(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
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
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, yPosRole_QString, rowCategories_QList, columnCategories_QList);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
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
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, xPosRole_QString, yPosRole_QString, zPosRole_QString, rowCategories_QList, columnCategories_QList);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new8(QObject* parent) {
    return new VirtualQItemModelSurfaceDataProxy(parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new9(QAbstractItemModel* itemModel, QObject* parent) {
    return new VirtualQItemModelSurfaceDataProxy(itemModel, parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new10(QAbstractItemModel* itemModel, const libqt_string yPosRole, QObject* parent) {
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, yPosRole_QString, parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new11(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, yPosRole_QString, parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new12(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, xPosRole_QString, yPosRole_QString, zPosRole_QString, parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new13(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
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
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, yPosRole_QString, rowCategories_QList, columnCategories_QList, parent);
}

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new14(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
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
    return new VirtualQItemModelSurfaceDataProxy(itemModel, rowRole_QString, columnRole_QString, xPosRole_QString, yPosRole_QString, zPosRole_QString, rowCategories_QList, columnCategories_QList, parent);
}

QMetaObject* QItemModelSurfaceDataProxy_MetaObject(const QItemModelSurfaceDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QItemModelSurfaceDataProxy_Metacast(QItemModelSurfaceDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QItemModelSurfaceDataProxy_Metacall(QItemModelSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QItemModelSurfaceDataProxy_Tr(const char* s) {
    auto _ret = QItemModelSurfaceDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetItemModel(QItemModelSurfaceDataProxy* self, QAbstractItemModel* itemModel) {
    self->setItemModel(itemModel);
}

QAbstractItemModel* QItemModelSurfaceDataProxy_ItemModel(const QItemModelSurfaceDataProxy* self) {
    return self->itemModel();
}

void QItemModelSurfaceDataProxy_SetRowRole(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setRowRole(role_QString);
}

libqt_string QItemModelSurfaceDataProxy_RowRole(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetColumnRole(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setColumnRole(role_QString);
}

libqt_string QItemModelSurfaceDataProxy_ColumnRole(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetXPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setXPosRole(role_QString);
}

libqt_string QItemModelSurfaceDataProxy_XPosRole(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->xPosRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetYPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setYPosRole(role_QString);
}

libqt_string QItemModelSurfaceDataProxy_YPosRole(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->yPosRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetZPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setZPosRole(role_QString);
}

libqt_string QItemModelSurfaceDataProxy_ZPosRole(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->zPosRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetRowCategories(QItemModelSurfaceDataProxy* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setRowCategories(categories_QList);
}

libqt_list /* of libqt_string */ QItemModelSurfaceDataProxy_RowCategories(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetColumnCategories(QItemModelSurfaceDataProxy* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setColumnCategories(categories_QList);
}

libqt_list /* of libqt_string */ QItemModelSurfaceDataProxy_ColumnCategories(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetUseModelCategories(QItemModelSurfaceDataProxy* self, bool enable) {
    self->setUseModelCategories(enable);
}

bool QItemModelSurfaceDataProxy_UseModelCategories(const QItemModelSurfaceDataProxy* self) {
    return self->useModelCategories();
}

void QItemModelSurfaceDataProxy_SetAutoRowCategories(QItemModelSurfaceDataProxy* self, bool enable) {
    self->setAutoRowCategories(enable);
}

bool QItemModelSurfaceDataProxy_AutoRowCategories(const QItemModelSurfaceDataProxy* self) {
    return self->autoRowCategories();
}

void QItemModelSurfaceDataProxy_SetAutoColumnCategories(QItemModelSurfaceDataProxy* self, bool enable) {
    self->setAutoColumnCategories(enable);
}

bool QItemModelSurfaceDataProxy_AutoColumnCategories(const QItemModelSurfaceDataProxy* self) {
    return self->autoColumnCategories();
}

void QItemModelSurfaceDataProxy_Remap(QItemModelSurfaceDataProxy* self, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories) {
    QString rowRole_QString = QString::fromUtf8(rowRole.data, rowRole.len);
    QString columnRole_QString = QString::fromUtf8(columnRole.data, columnRole.len);
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
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
    self->remap(rowRole_QString, columnRole_QString, xPosRole_QString, yPosRole_QString, zPosRole_QString, rowCategories_QList, columnCategories_QList);
}

int QItemModelSurfaceDataProxy_RowCategoryIndex(QItemModelSurfaceDataProxy* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    return self->rowCategoryIndex(category_QString);
}

int QItemModelSurfaceDataProxy_ColumnCategoryIndex(QItemModelSurfaceDataProxy* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    return self->columnCategoryIndex(category_QString);
}

void QItemModelSurfaceDataProxy_SetRowRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->setRowRolePattern(*pattern);
}

QRegularExpression* QItemModelSurfaceDataProxy_RowRolePattern(const QItemModelSurfaceDataProxy* self) {
    return new QRegularExpression(self->rowRolePattern());
}

void QItemModelSurfaceDataProxy_SetColumnRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->setColumnRolePattern(*pattern);
}

QRegularExpression* QItemModelSurfaceDataProxy_ColumnRolePattern(const QItemModelSurfaceDataProxy* self) {
    return new QRegularExpression(self->columnRolePattern());
}

void QItemModelSurfaceDataProxy_SetXPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->setXPosRolePattern(*pattern);
}

QRegularExpression* QItemModelSurfaceDataProxy_XPosRolePattern(const QItemModelSurfaceDataProxy* self) {
    return new QRegularExpression(self->xPosRolePattern());
}

void QItemModelSurfaceDataProxy_SetYPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->setYPosRolePattern(*pattern);
}

QRegularExpression* QItemModelSurfaceDataProxy_YPosRolePattern(const QItemModelSurfaceDataProxy* self) {
    return new QRegularExpression(self->yPosRolePattern());
}

void QItemModelSurfaceDataProxy_SetZPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->setZPosRolePattern(*pattern);
}

QRegularExpression* QItemModelSurfaceDataProxy_ZPosRolePattern(const QItemModelSurfaceDataProxy* self) {
    return new QRegularExpression(self->zPosRolePattern());
}

void QItemModelSurfaceDataProxy_SetRowRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setRowRoleReplace(replace_QString);
}

libqt_string QItemModelSurfaceDataProxy_RowRoleReplace(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetColumnRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setColumnRoleReplace(replace_QString);
}

libqt_string QItemModelSurfaceDataProxy_ColumnRoleReplace(const QItemModelSurfaceDataProxy* self) {
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

void QItemModelSurfaceDataProxy_SetXPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setXPosRoleReplace(replace_QString);
}

libqt_string QItemModelSurfaceDataProxy_XPosRoleReplace(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->xPosRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetYPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setYPosRoleReplace(replace_QString);
}

libqt_string QItemModelSurfaceDataProxy_YPosRoleReplace(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->yPosRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetZPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setZPosRoleReplace(replace_QString);
}

libqt_string QItemModelSurfaceDataProxy_ZPosRoleReplace(const QItemModelSurfaceDataProxy* self) {
    auto _ret = self->zPosRoleReplace();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelSurfaceDataProxy_SetMultiMatchBehavior(QItemModelSurfaceDataProxy* self, int behavior) {
    self->setMultiMatchBehavior(static_cast<QItemModelSurfaceDataProxy::MultiMatchBehavior>(behavior));
}

int QItemModelSurfaceDataProxy_MultiMatchBehavior(const QItemModelSurfaceDataProxy* self) {
    return static_cast<int>(self->multiMatchBehavior());
}

void QItemModelSurfaceDataProxy_ItemModelChanged(QItemModelSurfaceDataProxy* self, const QAbstractItemModel* itemModel) {
    self->itemModelChanged(itemModel);
}

void QItemModelSurfaceDataProxy_Connect_ItemModelChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QAbstractItemModel*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QAbstractItemModel*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QAbstractItemModel*)>(&QItemModelSurfaceDataProxy::itemModelChanged),
                                        [self, slotFunc](const QAbstractItemModel* itemModel) {
                                            QAbstractItemModel* sigval1 = (QAbstractItemModel*)itemModel;
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_RowRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->rowRoleChanged(role_QString);
}

void QItemModelSurfaceDataProxy_Connect_RowRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::rowRoleChanged),
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

void QItemModelSurfaceDataProxy_ColumnRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->columnRoleChanged(role_QString);
}

void QItemModelSurfaceDataProxy_Connect_ColumnRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::columnRoleChanged),
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

void QItemModelSurfaceDataProxy_XPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->xPosRoleChanged(role_QString);
}

void QItemModelSurfaceDataProxy_Connect_XPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::xPosRoleChanged),
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

void QItemModelSurfaceDataProxy_YPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->yPosRoleChanged(role_QString);
}

void QItemModelSurfaceDataProxy_Connect_YPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::yPosRoleChanged),
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

void QItemModelSurfaceDataProxy_ZPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->zPosRoleChanged(role_QString);
}

void QItemModelSurfaceDataProxy_Connect_ZPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::zPosRoleChanged),
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

void QItemModelSurfaceDataProxy_RowCategoriesChanged(QItemModelSurfaceDataProxy* self) {
    self->rowCategoriesChanged();
}

void QItemModelSurfaceDataProxy_Connect_RowCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)()>(&QItemModelSurfaceDataProxy::rowCategoriesChanged),
                                        [self, slotFunc]() {
                                            slotFunc(self);
                                        });
}

void QItemModelSurfaceDataProxy_ColumnCategoriesChanged(QItemModelSurfaceDataProxy* self) {
    self->columnCategoriesChanged();
}

void QItemModelSurfaceDataProxy_Connect_ColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)()>(&QItemModelSurfaceDataProxy::columnCategoriesChanged),
                                        [self, slotFunc]() {
                                            slotFunc(self);
                                        });
}

void QItemModelSurfaceDataProxy_UseModelCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable) {
    self->useModelCategoriesChanged(enable);
}

void QItemModelSurfaceDataProxy_Connect_UseModelCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, bool)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(bool)>(&QItemModelSurfaceDataProxy::useModelCategoriesChanged),
                                        [self, slotFunc](bool enable) {
                                            bool sigval1 = enable;
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_AutoRowCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable) {
    self->autoRowCategoriesChanged(enable);
}

void QItemModelSurfaceDataProxy_Connect_AutoRowCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, bool)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(bool)>(&QItemModelSurfaceDataProxy::autoRowCategoriesChanged),
                                        [self, slotFunc](bool enable) {
                                            bool sigval1 = enable;
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_AutoColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable) {
    self->autoColumnCategoriesChanged(enable);
}

void QItemModelSurfaceDataProxy_Connect_AutoColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, bool) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, bool)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(bool)>(&QItemModelSurfaceDataProxy::autoColumnCategoriesChanged),
                                        [self, slotFunc](bool enable) {
                                            bool sigval1 = enable;
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_RowRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->rowRolePatternChanged(*pattern);
}

void QItemModelSurfaceDataProxy_Connect_RowRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QRegularExpression*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QRegularExpression&)>(&QItemModelSurfaceDataProxy::rowRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_ColumnRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->columnRolePatternChanged(*pattern);
}

void QItemModelSurfaceDataProxy_Connect_ColumnRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QRegularExpression*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QRegularExpression&)>(&QItemModelSurfaceDataProxy::columnRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_XPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->xPosRolePatternChanged(*pattern);
}

void QItemModelSurfaceDataProxy_Connect_XPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QRegularExpression*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QRegularExpression&)>(&QItemModelSurfaceDataProxy::xPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_YPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->yPosRolePatternChanged(*pattern);
}

void QItemModelSurfaceDataProxy_Connect_YPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QRegularExpression*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QRegularExpression&)>(&QItemModelSurfaceDataProxy::yPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_ZPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern) {
    self->zPosRolePatternChanged(*pattern);
}

void QItemModelSurfaceDataProxy_Connect_ZPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, QRegularExpression*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QRegularExpression&)>(&QItemModelSurfaceDataProxy::zPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelSurfaceDataProxy_RowRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->rowRoleReplaceChanged(replace_QString);
}

void QItemModelSurfaceDataProxy_Connect_RowRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::rowRoleReplaceChanged),
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

void QItemModelSurfaceDataProxy_ColumnRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->columnRoleReplaceChanged(replace_QString);
}

void QItemModelSurfaceDataProxy_Connect_ColumnRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::columnRoleReplaceChanged),
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

void QItemModelSurfaceDataProxy_XPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->xPosRoleReplaceChanged(replace_QString);
}

void QItemModelSurfaceDataProxy_Connect_XPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::xPosRoleReplaceChanged),
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

void QItemModelSurfaceDataProxy_YPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->yPosRoleReplaceChanged(replace_QString);
}

void QItemModelSurfaceDataProxy_Connect_YPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::yPosRoleReplaceChanged),
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

void QItemModelSurfaceDataProxy_ZPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->zPosRoleReplaceChanged(replace_QString);
}

void QItemModelSurfaceDataProxy_Connect_ZPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, const char*)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(const QString&)>(&QItemModelSurfaceDataProxy::zPosRoleReplaceChanged),
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

void QItemModelSurfaceDataProxy_MultiMatchBehaviorChanged(QItemModelSurfaceDataProxy* self, int behavior) {
    self->multiMatchBehaviorChanged(static_cast<QItemModelSurfaceDataProxy::MultiMatchBehavior>(behavior));
}

void QItemModelSurfaceDataProxy_Connect_MultiMatchBehaviorChanged(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelSurfaceDataProxy*, int) = reinterpret_cast<void (*)(QItemModelSurfaceDataProxy*, int)>(slot);
    QItemModelSurfaceDataProxy::connect(self,
                                        static_cast<void (QItemModelSurfaceDataProxy::*)(QItemModelSurfaceDataProxy::MultiMatchBehavior)>(&QItemModelSurfaceDataProxy::multiMatchBehaviorChanged),
                                        [self, slotFunc](QItemModelSurfaceDataProxy::MultiMatchBehavior behavior) {
                                            int sigval1 = static_cast<int>(behavior);
                                            slotFunc(self, sigval1);
                                        });
}

libqt_string QItemModelSurfaceDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QItemModelSurfaceDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QItemModelSurfaceDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QItemModelSurfaceDataProxy::tr(s, c, static_cast<int>(n));
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
QMetaObject* QItemModelSurfaceDataProxy_SuperMetaObject(const QItemModelSurfaceDataProxy* self) {
    return (QMetaObject*)self->QItemModelSurfaceDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnMetaObject(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = const_cast<VirtualQItemModelSurfaceDataProxy*>(dynamic_cast<const VirtualQItemModelSurfaceDataProxy*>(self)))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_metaobject_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QItemModelSurfaceDataProxy_SuperMetacast(QItemModelSurfaceDataProxy* self, const char* param1) {
    return self->QItemModelSurfaceDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnMetacast(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_metacast_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QItemModelSurfaceDataProxy_SuperMetacall(QItemModelSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->QItemModelSurfaceDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnMetacall(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_metacall_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelSurfaceDataProxy_Event(QItemModelSurfaceDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QItemModelSurfaceDataProxy_SuperEvent(QItemModelSurfaceDataProxy* self, QEvent* event) {
    return self->QItemModelSurfaceDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnEvent(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_event_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelSurfaceDataProxy_EventFilter(QItemModelSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QItemModelSurfaceDataProxy_SuperEventFilter(QItemModelSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->QItemModelSurfaceDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnEventFilter(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_eventfilter_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QItemModelSurfaceDataProxy_TimerEvent(QItemModelSurfaceDataProxy* self, QTimerEvent* event) {
    auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self);
    if (vqitemmodelsurfacedataproxy) {
        vqitemmodelsurfacedataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelSurfaceDataProxy_SuperTimerEvent(QItemModelSurfaceDataProxy* self, QTimerEvent* event) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self)) {
        vqitemmodelsurfacedataproxy->QItemModelSurfaceDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnTimerEvent(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_timerevent_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelSurfaceDataProxy_ChildEvent(QItemModelSurfaceDataProxy* self, QChildEvent* event) {
    auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self);
    if (vqitemmodelsurfacedataproxy) {
        vqitemmodelsurfacedataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelSurfaceDataProxy_SuperChildEvent(QItemModelSurfaceDataProxy* self, QChildEvent* event) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self)) {
        vqitemmodelsurfacedataproxy->QItemModelSurfaceDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnChildEvent(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_childevent_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelSurfaceDataProxy_CustomEvent(QItemModelSurfaceDataProxy* self, QEvent* event) {
    auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self);
    if (vqitemmodelsurfacedataproxy) {
        vqitemmodelsurfacedataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelSurfaceDataProxy_SuperCustomEvent(QItemModelSurfaceDataProxy* self, QEvent* event) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self)) {
        vqitemmodelsurfacedataproxy->QItemModelSurfaceDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnCustomEvent(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_customevent_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelSurfaceDataProxy_ConnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self);
    if (vqitemmodelsurfacedataproxy) {
        vqitemmodelsurfacedataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelSurfaceDataProxy_SuperConnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self)) {
        vqitemmodelsurfacedataproxy->QItemModelSurfaceDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnConnectNotify(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_connectnotify_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QItemModelSurfaceDataProxy_DisconnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self);
    if (vqitemmodelsurfacedataproxy) {
        vqitemmodelsurfacedataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelSurfaceDataProxy_SuperDisconnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self)) {
        vqitemmodelsurfacedataproxy->QItemModelSurfaceDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelSurfaceDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelSurfaceDataProxy_OnDisconnectNotify(QItemModelSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelsurfacedataproxy = dynamic_cast<VirtualQItemModelSurfaceDataProxy*>(self))
        vqitemmodelsurfacedataproxy->qitemmodelsurfacedataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQItemModelSurfaceDataProxy::QItemModelSurfaceDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QItemModelSurfaceDataProxy_Sender(const QItemModelSurfaceDataProxy* self) {
    if (auto* vqitemmodelsurfacedataproxy = const_cast<VirtualQItemModelSurfaceDataProxy*>(dynamic_cast<const VirtualQItemModelSurfaceDataProxy*>(self))) {
        return vqitemmodelsurfacedataproxy->VirtualQItemModelSurfaceDataProxy::sender();
    } else
        qFatal("Error: Protected method QItemModelSurfaceDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelSurfaceDataProxy_SenderSignalIndex(const QItemModelSurfaceDataProxy* self) {
    if (auto* vqitemmodelsurfacedataproxy = const_cast<VirtualQItemModelSurfaceDataProxy*>(dynamic_cast<const VirtualQItemModelSurfaceDataProxy*>(self))) {
        return vqitemmodelsurfacedataproxy->VirtualQItemModelSurfaceDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QItemModelSurfaceDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelSurfaceDataProxy_Receivers(const QItemModelSurfaceDataProxy* self, const char* signal) {
    if (auto* vqitemmodelsurfacedataproxy = const_cast<VirtualQItemModelSurfaceDataProxy*>(dynamic_cast<const VirtualQItemModelSurfaceDataProxy*>(self))) {
        return vqitemmodelsurfacedataproxy->VirtualQItemModelSurfaceDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QItemModelSurfaceDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QItemModelSurfaceDataProxy_IsSignalConnected(const QItemModelSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelsurfacedataproxy = const_cast<VirtualQItemModelSurfaceDataProxy*>(dynamic_cast<const VirtualQItemModelSurfaceDataProxy*>(self))) {
        return vqitemmodelsurfacedataproxy->VirtualQItemModelSurfaceDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QItemModelSurfaceDataProxy::isSignalConnected called without a directly constructed type");
}

void QItemModelSurfaceDataProxy_Delete(QItemModelSurfaceDataProxy* self) {
    delete self;
}
