#pragma once
#ifndef SRC_FOSS_EXTRAS_LAYERSHELLQTC_LIBWINDOW_H
#define SRC_FOSS_EXTRAS_LAYERSHELLQTC_LIBWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_LayerShellQt__Window)
typedef LayerShellQt::Window LayerShellQt__Window;
#endif
#else
typedef struct LayerShellQt__Window LayerShellQt__Window;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWindow QWindow;
#endif

QMetaObject* LayerShellQt__Window_MetaObject(const LayerShellQt__Window* self);
void* LayerShellQt__Window_Metacast(LayerShellQt__Window* self, const char* param1);
int LayerShellQt__Window_Metacall(LayerShellQt__Window* self, int param1, int param2, void** param3);
libqt_string LayerShellQt__Window_Tr(const char* s);
void LayerShellQt__Window_SetAnchors(LayerShellQt__Window* self, int anchor);
int LayerShellQt__Window_Anchors(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetExclusiveZone(LayerShellQt__Window* self, int32_t zone);
int32_t LayerShellQt__Window_ExclusionZone(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetExclusiveEdge(LayerShellQt__Window* self, int edge);
int LayerShellQt__Window_ExclusiveEdge(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetMargins(LayerShellQt__Window* self, const QMargins* margins);
QMargins* LayerShellQt__Window_Margins(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetKeyboardInteractivity(LayerShellQt__Window* self, int interactivity);
int LayerShellQt__Window_KeyboardInteractivity(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetLayer(LayerShellQt__Window* self, int layer);
int LayerShellQt__Window_Layer(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetScreenConfiguration(LayerShellQt__Window* self, int screenConfiguration);
int LayerShellQt__Window_ScreenConfiguration(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetScope(LayerShellQt__Window* self, const libqt_string scope);
libqt_string LayerShellQt__Window_Scope(const LayerShellQt__Window* self);
void LayerShellQt__Window_SetCloseOnDismissed(LayerShellQt__Window* self, bool close);
bool LayerShellQt__Window_CloseOnDismissed(const LayerShellQt__Window* self);
LayerShellQt__Window* LayerShellQt__Window_Get(QWindow* window);
LayerShellQt__Window* LayerShellQt__Window_QmlAttachedProperties(QObject* object);
void LayerShellQt__Window_AnchorsChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_AnchorsChanged(LayerShellQt__Window* self, intptr_t slot);
void LayerShellQt__Window_ExclusionZoneChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_ExclusionZoneChanged(LayerShellQt__Window* self, intptr_t slot);
void LayerShellQt__Window_ExclusiveEdgeChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_ExclusiveEdgeChanged(LayerShellQt__Window* self, intptr_t slot);
void LayerShellQt__Window_MarginsChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_MarginsChanged(LayerShellQt__Window* self, intptr_t slot);
void LayerShellQt__Window_KeyboardInteractivityChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_KeyboardInteractivityChanged(LayerShellQt__Window* self, intptr_t slot);
void LayerShellQt__Window_LayerChanged(LayerShellQt__Window* self);
void LayerShellQt__Window_Connect_LayerChanged(LayerShellQt__Window* self, intptr_t slot);
libqt_string LayerShellQt__Window_Tr2(const char* s, const char* c);
libqt_string LayerShellQt__Window_Tr3(const char* s, const char* c, int n);
void LayerShellQt__Window_Delete(LayerShellQt__Window* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
