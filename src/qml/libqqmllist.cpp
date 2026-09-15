#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlListReference>
#include <QVariant>
#include <qqmllist.h>
#include "libqqmllist.h"
#include "libqqmllist.hxx"

QQmlListReference* QQmlListReference_new() {
    return new QQmlListReference();
}

QQmlListReference* QQmlListReference_new2(const QVariant* variant) {
    return new QQmlListReference(*variant);
}

QQmlListReference* QQmlListReference_new3(QObject* o, const char* property) {
    return new QQmlListReference(o, property);
}

QQmlListReference* QQmlListReference_new4(const QVariant* variant) {
    return new QQmlListReference(*variant);
}

QQmlListReference* QQmlListReference_new5(QObject* o, const char* property) {
    return new QQmlListReference(o, property);
}

QQmlListReference* QQmlListReference_new6(const QQmlListReference* param1) {
    return new QQmlListReference(*param1);
}

QQmlListReference* QQmlListReference_new7(const QVariant* variant, QQmlEngine* engine) {
    return new QQmlListReference(*variant, engine);
}

QQmlListReference* QQmlListReference_new8(QObject* o, const char* property, QQmlEngine* engine) {
    return new QQmlListReference(o, property, engine);
}

void QQmlListReference_OperatorAssign(QQmlListReference* self, const QQmlListReference* param1) {
    self->operator=(*param1);
}

bool QQmlListReference_IsValid(const QQmlListReference* self) {
    return self->isValid();
}

QObject* QQmlListReference_Object(const QQmlListReference* self) {
    return self->object();
}

QMetaObject* QQmlListReference_ListElementType(const QQmlListReference* self) {
    return (QMetaObject*)self->listElementType();
}

bool QQmlListReference_CanAppend(const QQmlListReference* self) {
    return self->canAppend();
}

bool QQmlListReference_CanAt(const QQmlListReference* self) {
    return self->canAt();
}

bool QQmlListReference_CanClear(const QQmlListReference* self) {
    return self->canClear();
}

bool QQmlListReference_CanCount(const QQmlListReference* self) {
    return self->canCount();
}

bool QQmlListReference_CanReplace(const QQmlListReference* self) {
    return self->canReplace();
}

bool QQmlListReference_CanRemoveLast(const QQmlListReference* self) {
    return self->canRemoveLast();
}

bool QQmlListReference_IsManipulable(const QQmlListReference* self) {
    return self->isManipulable();
}

bool QQmlListReference_IsReadable(const QQmlListReference* self) {
    return self->isReadable();
}

bool QQmlListReference_Append(const QQmlListReference* self, QObject* param1) {
    return self->append(param1);
}

QObject* QQmlListReference_At(const QQmlListReference* self, long long param1) {
    return self->at((qsizetype)(param1));
}

bool QQmlListReference_Clear(const QQmlListReference* self) {
    return self->clear();
}

ptrdiff_t QQmlListReference_Count(const QQmlListReference* self) {
    return static_cast<ptrdiff_t>(self->count());
}

ptrdiff_t QQmlListReference_Size(const QQmlListReference* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QQmlListReference_Replace(const QQmlListReference* self, long long param1, QObject* param2) {
    return self->replace((qsizetype)(param1), param2);
}

bool QQmlListReference_RemoveLast(const QQmlListReference* self) {
    return self->removeLast();
}

bool QQmlListReference_OperatorEqual(const QQmlListReference* self, const QQmlListReference* other) {
    return (*self == *other);
}

void QQmlListReference_Delete(QQmlListReference* self) {
    delete self;
}
