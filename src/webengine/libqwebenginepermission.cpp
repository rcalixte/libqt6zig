#include <QUrl>
#include <QWebEnginePermission>
#include <qwebenginepermission.h>
#include "libqwebenginepermission.h"
#include "libqwebenginepermission.hxx"

QWebEnginePermission* QWebEnginePermission_new() {
    return new QWebEnginePermission();
}

QWebEnginePermission* QWebEnginePermission_new2(const QWebEnginePermission* other) {
    return new QWebEnginePermission(*other);
}

void QWebEnginePermission_OperatorAssign(QWebEnginePermission* self, const QWebEnginePermission* other) {
    self->operator=(*other);
}

void QWebEnginePermission_Swap(QWebEnginePermission* self, QWebEnginePermission* other) {
    self->swap(*other);
}

QUrl* QWebEnginePermission_Origin(const QWebEnginePermission* self) {
    return new QUrl(self->origin());
}

uint8_t QWebEnginePermission_PermissionType(const QWebEnginePermission* self) {
    return static_cast<uint8_t>(self->permissionType());
}

uint8_t QWebEnginePermission_State(const QWebEnginePermission* self) {
    return static_cast<uint8_t>(self->state());
}

bool QWebEnginePermission_IsValid(const QWebEnginePermission* self) {
    return self->isValid();
}

void QWebEnginePermission_Grant(const QWebEnginePermission* self) {
    self->grant();
}

void QWebEnginePermission_Deny(const QWebEnginePermission* self) {
    self->deny();
}

void QWebEnginePermission_Reset(const QWebEnginePermission* self) {
    self->reset();
}

bool QWebEnginePermission_IsPersistent(uint8_t permissionType) {
    return QWebEnginePermission::isPersistent(static_cast<QWebEnginePermission::PermissionType>(permissionType));
}

void QWebEnginePermission_Delete(QWebEnginePermission* self) {
    delete self;
}
