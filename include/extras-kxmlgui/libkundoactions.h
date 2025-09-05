#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKUNDOACTIONS_H
#define SRC_EXTRAS_KXMLGUIC_LIBKUNDOACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionCollection KActionCollection;
typedef struct KUndoActions KUndoActions;
typedef struct QAction QAction;
typedef struct QUndoStack QUndoStack;
#endif

QAction* KUndoActions_CreateRedoAction(QUndoStack* param1, KActionCollection* param2, const libqt_string param3);
QAction* KUndoActions_CreateUndoAction(QUndoStack* param1, KActionCollection* param2, const libqt_string param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
