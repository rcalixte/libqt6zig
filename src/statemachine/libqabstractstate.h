#pragma once
#ifndef SRC_STATEMACHINEC_LIBQABSTRACTSTATE_H
#define SRC_STATEMACHINEC_LIBQABSTRACTSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractState QAbstractState;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
#endif

QMetaObject* QAbstractState_MetaObject(const QAbstractState* self);
void* QAbstractState_Metacast(QAbstractState* self, const char* param1);
int QAbstractState_Metacall(QAbstractState* self, int param1, int param2, void** param3);
QState* QAbstractState_ParentState(const QAbstractState* self);
QStateMachine* QAbstractState_Machine(const QAbstractState* self);
bool QAbstractState_Active(const QAbstractState* self);
void QAbstractState_ActiveChanged(QAbstractState* self, bool active);
void QAbstractState_Connect_ActiveChanged(QAbstractState* self, intptr_t slot);
void QAbstractState_Connect_Entered(QAbstractState* self, intptr_t slot);
void QAbstractState_Connect_Exited(QAbstractState* self, intptr_t slot);
void QAbstractState_Delete(QAbstractState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
