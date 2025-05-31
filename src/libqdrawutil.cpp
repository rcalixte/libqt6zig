#include <QTileRules>
#include <qdrawutil.h>
#include "libqdrawutil.h"
#include "libqdrawutil.hxx"

QTileRules* QTileRules_new(const QTileRules* other) {
    return new QTileRules(*other);
}

QTileRules* QTileRules_new2(QTileRules* other) {
    return new QTileRules(std::move(*other));
}

QTileRules* QTileRules_new3(int horizontalRule, int verticalRule) {
    return new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new4() {
    return new QTileRules();
}

QTileRules* QTileRules_new5(const QTileRules* param1) {
    return new QTileRules(*param1);
}

QTileRules* QTileRules_new6(int rule) {
    return new QTileRules(static_cast<Qt::TileRule>(rule));
}

void QTileRules_CopyAssign(QTileRules* self, QTileRules* other) {
    *self = *other;
}

void QTileRules_MoveAssign(QTileRules* self, QTileRules* other) {
    *self = std::move(*other);
}

void QTileRules_Delete(QTileRules* self) {
    delete self;
}
