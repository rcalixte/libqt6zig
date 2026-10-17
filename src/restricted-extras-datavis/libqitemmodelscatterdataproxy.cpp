#include <QAbstractDataProxy>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemModelScatterDataProxy>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QScatterDataProxy>
#include <QString>
#include <QTimerEvent>
#include <qitemmodelscatterdataproxy.h>
#include "libqitemmodelscatterdataproxy.h"
#include "libqitemmodelscatterdataproxy.hxx"

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new() {
    return new VirtualQItemModelScatterDataProxy();
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new2(QAbstractItemModel* itemModel) {
    return new VirtualQItemModelScatterDataProxy(itemModel);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole) {
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    return new VirtualQItemModelScatterDataProxy(itemModel, xPosRole_QString, yPosRole_QString, zPosRole_QString);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole) {
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    return new VirtualQItemModelScatterDataProxy(itemModel, xPosRole_QString, yPosRole_QString, zPosRole_QString, rotationRole_QString);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new5(QObject* parent) {
    return new VirtualQItemModelScatterDataProxy(parent);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new6(QAbstractItemModel* itemModel, QObject* parent) {
    return new VirtualQItemModelScatterDataProxy(itemModel, parent);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, QObject* parent) {
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    return new VirtualQItemModelScatterDataProxy(itemModel, xPosRole_QString, yPosRole_QString, zPosRole_QString, parent);
}

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new8(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole, QObject* parent) {
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    return new VirtualQItemModelScatterDataProxy(itemModel, xPosRole_QString, yPosRole_QString, zPosRole_QString, rotationRole_QString, parent);
}

QMetaObject* QItemModelScatterDataProxy_MetaObject(const QItemModelScatterDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QItemModelScatterDataProxy_Metacast(QItemModelScatterDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QItemModelScatterDataProxy_Metacall(QItemModelScatterDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QItemModelScatterDataProxy_Tr(const char* s) {
    auto _ret = QItemModelScatterDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QItemModelScatterDataProxy_SetItemModel(QItemModelScatterDataProxy* self, QAbstractItemModel* itemModel) {
    self->setItemModel(itemModel);
}

QAbstractItemModel* QItemModelScatterDataProxy_ItemModel(const QItemModelScatterDataProxy* self) {
    return self->itemModel();
}

void QItemModelScatterDataProxy_SetXPosRole(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setXPosRole(role_QString);
}

libqt_string QItemModelScatterDataProxy_XPosRole(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetYPosRole(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setYPosRole(role_QString);
}

libqt_string QItemModelScatterDataProxy_YPosRole(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetZPosRole(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setZPosRole(role_QString);
}

libqt_string QItemModelScatterDataProxy_ZPosRole(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetRotationRole(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->setRotationRole(role_QString);
}

libqt_string QItemModelScatterDataProxy_RotationRole(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_Remap(QItemModelScatterDataProxy* self, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole) {
    QString xPosRole_QString = QString::fromUtf8(xPosRole.data, xPosRole.len);
    QString yPosRole_QString = QString::fromUtf8(yPosRole.data, yPosRole.len);
    QString zPosRole_QString = QString::fromUtf8(zPosRole.data, zPosRole.len);
    QString rotationRole_QString = QString::fromUtf8(rotationRole.data, rotationRole.len);
    self->remap(xPosRole_QString, yPosRole_QString, zPosRole_QString, rotationRole_QString);
}

void QItemModelScatterDataProxy_SetXPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->setXPosRolePattern(*pattern);
}

QRegularExpression* QItemModelScatterDataProxy_XPosRolePattern(const QItemModelScatterDataProxy* self) {
    return new QRegularExpression(self->xPosRolePattern());
}

void QItemModelScatterDataProxy_SetYPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->setYPosRolePattern(*pattern);
}

QRegularExpression* QItemModelScatterDataProxy_YPosRolePattern(const QItemModelScatterDataProxy* self) {
    return new QRegularExpression(self->yPosRolePattern());
}

void QItemModelScatterDataProxy_SetZPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->setZPosRolePattern(*pattern);
}

QRegularExpression* QItemModelScatterDataProxy_ZPosRolePattern(const QItemModelScatterDataProxy* self) {
    return new QRegularExpression(self->zPosRolePattern());
}

void QItemModelScatterDataProxy_SetRotationRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->setRotationRolePattern(*pattern);
}

QRegularExpression* QItemModelScatterDataProxy_RotationRolePattern(const QItemModelScatterDataProxy* self) {
    return new QRegularExpression(self->rotationRolePattern());
}

void QItemModelScatterDataProxy_SetXPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setXPosRoleReplace(replace_QString);
}

libqt_string QItemModelScatterDataProxy_XPosRoleReplace(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetYPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setYPosRoleReplace(replace_QString);
}

libqt_string QItemModelScatterDataProxy_YPosRoleReplace(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetZPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setZPosRoleReplace(replace_QString);
}

libqt_string QItemModelScatterDataProxy_ZPosRoleReplace(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_SetRotationRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->setRotationRoleReplace(replace_QString);
}

libqt_string QItemModelScatterDataProxy_RotationRoleReplace(const QItemModelScatterDataProxy* self) {
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

void QItemModelScatterDataProxy_ItemModelChanged(QItemModelScatterDataProxy* self, const QAbstractItemModel* itemModel) {
    self->itemModelChanged(itemModel);
}

void QItemModelScatterDataProxy_Connect_ItemModelChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, QAbstractItemModel*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, QAbstractItemModel*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QAbstractItemModel*)>(&QItemModelScatterDataProxy::itemModelChanged),
                                        [self, slotFunc](const QAbstractItemModel* itemModel) {
                                            QAbstractItemModel* sigval1 = (QAbstractItemModel*)itemModel;
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelScatterDataProxy_XPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->xPosRoleChanged(role_QString);
}

void QItemModelScatterDataProxy_Connect_XPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::xPosRoleChanged),
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

void QItemModelScatterDataProxy_YPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->yPosRoleChanged(role_QString);
}

void QItemModelScatterDataProxy_Connect_YPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::yPosRoleChanged),
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

void QItemModelScatterDataProxy_ZPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->zPosRoleChanged(role_QString);
}

void QItemModelScatterDataProxy_Connect_ZPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::zPosRoleChanged),
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

void QItemModelScatterDataProxy_RotationRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role) {
    QString role_QString = QString::fromUtf8(role.data, role.len);
    self->rotationRoleChanged(role_QString);
}

void QItemModelScatterDataProxy_Connect_RotationRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::rotationRoleChanged),
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

void QItemModelScatterDataProxy_XPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->xPosRolePatternChanged(*pattern);
}

void QItemModelScatterDataProxy_Connect_XPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, QRegularExpression*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QRegularExpression&)>(&QItemModelScatterDataProxy::xPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelScatterDataProxy_YPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->yPosRolePatternChanged(*pattern);
}

void QItemModelScatterDataProxy_Connect_YPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, QRegularExpression*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QRegularExpression&)>(&QItemModelScatterDataProxy::yPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelScatterDataProxy_ZPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->zPosRolePatternChanged(*pattern);
}

void QItemModelScatterDataProxy_Connect_ZPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, QRegularExpression*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QRegularExpression&)>(&QItemModelScatterDataProxy::zPosRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelScatterDataProxy_RotationRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern) {
    self->rotationRolePatternChanged(*pattern);
}

void QItemModelScatterDataProxy_Connect_RotationRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, QRegularExpression*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, QRegularExpression*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QRegularExpression&)>(&QItemModelScatterDataProxy::rotationRolePatternChanged),
                                        [self, slotFunc](const QRegularExpression& pattern) {
                                            const QRegularExpression& pattern_ret = pattern;
                                            // Cast returned reference into pointer
                                            QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&pattern_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QItemModelScatterDataProxy_RotationRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->rotationRoleReplaceChanged(replace_QString);
}

void QItemModelScatterDataProxy_Connect_RotationRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::rotationRoleReplaceChanged),
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

void QItemModelScatterDataProxy_XPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->xPosRoleReplaceChanged(replace_QString);
}

void QItemModelScatterDataProxy_Connect_XPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::xPosRoleReplaceChanged),
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

void QItemModelScatterDataProxy_YPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->yPosRoleReplaceChanged(replace_QString);
}

void QItemModelScatterDataProxy_Connect_YPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::yPosRoleReplaceChanged),
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

void QItemModelScatterDataProxy_ZPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace) {
    QString replace_QString = QString::fromUtf8(replace.data, replace.len);
    self->zPosRoleReplaceChanged(replace_QString);
}

void QItemModelScatterDataProxy_Connect_ZPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QItemModelScatterDataProxy*, const char*) = reinterpret_cast<void (*)(QItemModelScatterDataProxy*, const char*)>(slot);
    QItemModelScatterDataProxy::connect(self,
                                        static_cast<void (QItemModelScatterDataProxy::*)(const QString&)>(&QItemModelScatterDataProxy::zPosRoleReplaceChanged),
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

libqt_string QItemModelScatterDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QItemModelScatterDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QItemModelScatterDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QItemModelScatterDataProxy::tr(s, c, static_cast<int>(n));
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
QMetaObject* QItemModelScatterDataProxy_SuperMetaObject(const QItemModelScatterDataProxy* self) {
    return (QMetaObject*)self->QItemModelScatterDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnMetaObject(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = const_cast<VirtualQItemModelScatterDataProxy*>(dynamic_cast<const VirtualQItemModelScatterDataProxy*>(self)))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_metaobject_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QItemModelScatterDataProxy_SuperMetacast(QItemModelScatterDataProxy* self, const char* param1) {
    return self->QItemModelScatterDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnMetacast(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_metacast_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QItemModelScatterDataProxy_SuperMetacall(QItemModelScatterDataProxy* self, int param1, int param2, void** param3) {
    return self->QItemModelScatterDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnMetacall(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_metacall_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelScatterDataProxy_Event(QItemModelScatterDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QItemModelScatterDataProxy_SuperEvent(QItemModelScatterDataProxy* self, QEvent* event) {
    return self->QItemModelScatterDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnEvent(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_event_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QItemModelScatterDataProxy_EventFilter(QItemModelScatterDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QItemModelScatterDataProxy_SuperEventFilter(QItemModelScatterDataProxy* self, QObject* watched, QEvent* event) {
    return self->QItemModelScatterDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnEventFilter(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_eventfilter_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QItemModelScatterDataProxy_TimerEvent(QItemModelScatterDataProxy* self, QTimerEvent* event) {
    auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self);
    if (vqitemmodelscatterdataproxy) {
        vqitemmodelscatterdataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelScatterDataProxy_SuperTimerEvent(QItemModelScatterDataProxy* self, QTimerEvent* event) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self)) {
        vqitemmodelscatterdataproxy->QItemModelScatterDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnTimerEvent(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_timerevent_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelScatterDataProxy_ChildEvent(QItemModelScatterDataProxy* self, QChildEvent* event) {
    auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self);
    if (vqitemmodelscatterdataproxy) {
        vqitemmodelscatterdataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelScatterDataProxy_SuperChildEvent(QItemModelScatterDataProxy* self, QChildEvent* event) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self)) {
        vqitemmodelscatterdataproxy->QItemModelScatterDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnChildEvent(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_childevent_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelScatterDataProxy_CustomEvent(QItemModelScatterDataProxy* self, QEvent* event) {
    auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self);
    if (vqitemmodelscatterdataproxy) {
        vqitemmodelscatterdataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelScatterDataProxy_SuperCustomEvent(QItemModelScatterDataProxy* self, QEvent* event) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self)) {
        vqitemmodelscatterdataproxy->QItemModelScatterDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnCustomEvent(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_customevent_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemModelScatterDataProxy_ConnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self);
    if (vqitemmodelscatterdataproxy) {
        vqitemmodelscatterdataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelScatterDataProxy_SuperConnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self)) {
        vqitemmodelscatterdataproxy->QItemModelScatterDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnConnectNotify(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_connectnotify_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QItemModelScatterDataProxy_DisconnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal) {
    auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self);
    if (vqitemmodelscatterdataproxy) {
        vqitemmodelscatterdataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemModelScatterDataProxy_SuperDisconnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self)) {
        vqitemmodelscatterdataproxy->QItemModelScatterDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemModelScatterDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemModelScatterDataProxy_OnDisconnectNotify(QItemModelScatterDataProxy* self, intptr_t slot) {
    if (auto* vqitemmodelscatterdataproxy = dynamic_cast<VirtualQItemModelScatterDataProxy*>(self))
        vqitemmodelscatterdataproxy->qitemmodelscatterdataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQItemModelScatterDataProxy::QItemModelScatterDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QItemModelScatterDataProxy_Sender(const QItemModelScatterDataProxy* self) {
    if (auto* vqitemmodelscatterdataproxy = const_cast<VirtualQItemModelScatterDataProxy*>(dynamic_cast<const VirtualQItemModelScatterDataProxy*>(self))) {
        return vqitemmodelscatterdataproxy->VirtualQItemModelScatterDataProxy::sender();
    } else
        qFatal("Error: Protected method QItemModelScatterDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelScatterDataProxy_SenderSignalIndex(const QItemModelScatterDataProxy* self) {
    if (auto* vqitemmodelscatterdataproxy = const_cast<VirtualQItemModelScatterDataProxy*>(dynamic_cast<const VirtualQItemModelScatterDataProxy*>(self))) {
        return vqitemmodelscatterdataproxy->VirtualQItemModelScatterDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QItemModelScatterDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemModelScatterDataProxy_Receivers(const QItemModelScatterDataProxy* self, const char* signal) {
    if (auto* vqitemmodelscatterdataproxy = const_cast<VirtualQItemModelScatterDataProxy*>(dynamic_cast<const VirtualQItemModelScatterDataProxy*>(self))) {
        return vqitemmodelscatterdataproxy->VirtualQItemModelScatterDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QItemModelScatterDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QItemModelScatterDataProxy_IsSignalConnected(const QItemModelScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqitemmodelscatterdataproxy = const_cast<VirtualQItemModelScatterDataProxy*>(dynamic_cast<const VirtualQItemModelScatterDataProxy*>(self))) {
        return vqitemmodelscatterdataproxy->VirtualQItemModelScatterDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QItemModelScatterDataProxy::isSignalConnected called without a directly constructed type");
}

void QItemModelScatterDataProxy_Delete(QItemModelScatterDataProxy* self) {
    delete self;
}
