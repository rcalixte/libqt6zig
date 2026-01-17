#include <QJsonObject>
#include <QStaticPlugin>
#include <qplugin.h>
#include "libqplugin.h"
#include "libqplugin.hxx"

QStaticPlugin* QStaticPlugin_new(const QStaticPlugin* other) {
    return new QStaticPlugin(*other);
}

QStaticPlugin* QStaticPlugin_new2(QStaticPlugin* other) {
    return new QStaticPlugin(std::move(*other));
}

QStaticPlugin* QStaticPlugin_new3(const QStaticPlugin* param1) {
    return new QStaticPlugin(*param1);
}

void QStaticPlugin_CopyAssign(QStaticPlugin* self, QStaticPlugin* other) {
    *self = *other;
}

void QStaticPlugin_MoveAssign(QStaticPlugin* self, QStaticPlugin* other) {
    *self = std::move(*other);
}

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self) {
    return new QJsonObject(self->metaData());
}

void QStaticPlugin_Delete(QStaticPlugin* self) {
    delete self;
}
