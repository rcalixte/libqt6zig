#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DINPUTHANDLER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DINPUTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DScene Q3DScene;
typedef struct QAbstract3DInputHandler QAbstract3DInputHandler;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
#endif

QMetaObject* QAbstract3DInputHandler_MetaObject(const QAbstract3DInputHandler* self);
void* QAbstract3DInputHandler_Metacast(QAbstract3DInputHandler* self, const char* param1);
int QAbstract3DInputHandler_Metacall(QAbstract3DInputHandler* self, int param1, int param2, void** param3);
libqt_string QAbstract3DInputHandler_Tr(const char* s);
void QAbstract3DInputHandler_MouseDoubleClickEvent(QAbstract3DInputHandler* self, QMouseEvent* event);
void QAbstract3DInputHandler_TouchEvent(QAbstract3DInputHandler* self, QTouchEvent* event);
void QAbstract3DInputHandler_MousePressEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QAbstract3DInputHandler_MouseReleaseEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QAbstract3DInputHandler_MouseMoveEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QAbstract3DInputHandler_WheelEvent(QAbstract3DInputHandler* self, QWheelEvent* event);
int QAbstract3DInputHandler_InputView(const QAbstract3DInputHandler* self);
void QAbstract3DInputHandler_SetInputView(QAbstract3DInputHandler* self, int inputView);
QPoint* QAbstract3DInputHandler_InputPosition(const QAbstract3DInputHandler* self);
void QAbstract3DInputHandler_SetInputPosition(QAbstract3DInputHandler* self, const QPoint* position);
Q3DScene* QAbstract3DInputHandler_Scene(const QAbstract3DInputHandler* self);
void QAbstract3DInputHandler_SetScene(QAbstract3DInputHandler* self, Q3DScene* scene);
void QAbstract3DInputHandler_PositionChanged(QAbstract3DInputHandler* self, const QPoint* position);
void QAbstract3DInputHandler_Connect_PositionChanged(QAbstract3DInputHandler* self, intptr_t slot);
void QAbstract3DInputHandler_InputViewChanged(QAbstract3DInputHandler* self, int view);
void QAbstract3DInputHandler_Connect_InputViewChanged(QAbstract3DInputHandler* self, intptr_t slot);
void QAbstract3DInputHandler_SceneChanged(QAbstract3DInputHandler* self, Q3DScene* scene);
void QAbstract3DInputHandler_Connect_SceneChanged(QAbstract3DInputHandler* self, intptr_t slot);
libqt_string QAbstract3DInputHandler_Tr2(const char* s, const char* c);
libqt_string QAbstract3DInputHandler_Tr3(const char* s, const char* c, int n);
void QAbstract3DInputHandler_Delete(QAbstract3DInputHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
