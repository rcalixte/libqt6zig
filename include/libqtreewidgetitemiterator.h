#pragma once
#ifndef SRCC_LIBQTREEWIDGETITEMITERATOR_H
#define SRCC_LIBQTREEWIDGETITEMITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QTreeWidgetItemIterator QTreeWidgetItemIterator;
#endif

#ifdef __cplusplus
typedef QTreeWidgetItemIterator::IteratorFlag IteratorFlag;   // C++ enum
typedef QTreeWidgetItemIterator::IteratorFlags IteratorFlags; // C++ QFlags
#else
typedef int IteratorFlag;  // C ABI enum
typedef int IteratorFlags; // C ABI QFlags
#endif

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new(QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new2(QTreeWidget* widget);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new3(QTreeWidgetItem* item);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new4(QTreeWidget* widget, int flags);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new5(QTreeWidgetItem* item, int flags);
void QTreeWidgetItemIterator_OperatorAssign(QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItem* QTreeWidgetItemIterator_OperatorMultiply(const QTreeWidgetItemIterator* self);
void QTreeWidgetItemIterator_Delete(QTreeWidgetItemIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
