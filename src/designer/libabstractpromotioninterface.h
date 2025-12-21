#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTPROMOTIONINTERFACE_H
#define SRC_DESIGNERC_LIBABSTRACTPROMOTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDesignerPromotionInterface__PromotedClass)
typedef QDesignerPromotionInterface::PromotedClass QDesignerPromotionInterface__PromotedClass;
#endif
#else
typedef struct QDesignerPromotionInterface QDesignerPromotionInterface;
typedef struct QDesignerPromotionInterface__PromotedClass QDesignerPromotionInterface__PromotedClass;
typedef struct QDesignerWidgetDataBaseItemInterface QDesignerWidgetDataBaseItemInterface;
#endif

libqt_list /* of QDesignerPromotionInterface__PromotedClass* */ QDesignerPromotionInterface_PromotedClasses(const QDesignerPromotionInterface* self);
libqt_list /* set of libqt_string */ QDesignerPromotionInterface_ReferencedPromotedClassNames(const QDesignerPromotionInterface* self);
libqt_list /* of QDesignerWidgetDataBaseItemInterface* */ QDesignerPromotionInterface_PromotionBaseClasses(const QDesignerPromotionInterface* self);
void QDesignerPromotionInterface_Delete(QDesignerPromotionInterface* self);

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_BaseItem(const QDesignerPromotionInterface__PromotedClass* self);
void QDesignerPromotionInterface__PromotedClass_SetBaseItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* baseItem);
QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_PromotedItem(const QDesignerPromotionInterface__PromotedClass* self);
void QDesignerPromotionInterface__PromotedClass_SetPromotedItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* promotedItem);
void QDesignerPromotionInterface__PromotedClass_Delete(QDesignerPromotionInterface__PromotedClass* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
