#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DTheme Q3DTheme;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

Q3DTheme* Q3DTheme_new();
Q3DTheme* Q3DTheme_new2(int themeType);
Q3DTheme* Q3DTheme_new3(QObject* parent);
Q3DTheme* Q3DTheme_new4(int themeType, QObject* parent);
QMetaObject* Q3DTheme_MetaObject(const Q3DTheme* self);
void* Q3DTheme_Metacast(Q3DTheme* self, const char* param1);
int Q3DTheme_Metacall(Q3DTheme* self, int param1, int param2, void** param3);
libqt_string Q3DTheme_Tr(const char* s);
void Q3DTheme_SetType(Q3DTheme* self, int themeType);
int Q3DTheme_Type(const Q3DTheme* self);
void Q3DTheme_SetBaseColors(Q3DTheme* self, const libqt_list /* of QColor* */ colors);
libqt_list /* of QColor* */ Q3DTheme_BaseColors(const Q3DTheme* self);
void Q3DTheme_SetBackgroundColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_BackgroundColor(const Q3DTheme* self);
void Q3DTheme_SetWindowColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_WindowColor(const Q3DTheme* self);
void Q3DTheme_SetLabelTextColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_LabelTextColor(const Q3DTheme* self);
void Q3DTheme_SetLabelBackgroundColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_LabelBackgroundColor(const Q3DTheme* self);
void Q3DTheme_SetGridLineColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_GridLineColor(const Q3DTheme* self);
void Q3DTheme_SetSingleHighlightColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_SingleHighlightColor(const Q3DTheme* self);
void Q3DTheme_SetMultiHighlightColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_MultiHighlightColor(const Q3DTheme* self);
void Q3DTheme_SetLightColor(Q3DTheme* self, const QColor* color);
QColor* Q3DTheme_LightColor(const Q3DTheme* self);
void Q3DTheme_SetBaseGradients(Q3DTheme* self, const libqt_list /* of QLinearGradient* */ gradients);
libqt_list /* of QLinearGradient* */ Q3DTheme_BaseGradients(const Q3DTheme* self);
void Q3DTheme_SetSingleHighlightGradient(Q3DTheme* self, const QLinearGradient* gradient);
QLinearGradient* Q3DTheme_SingleHighlightGradient(const Q3DTheme* self);
void Q3DTheme_SetMultiHighlightGradient(Q3DTheme* self, const QLinearGradient* gradient);
QLinearGradient* Q3DTheme_MultiHighlightGradient(const Q3DTheme* self);
void Q3DTheme_SetLightStrength(Q3DTheme* self, float strength);
float Q3DTheme_LightStrength(const Q3DTheme* self);
void Q3DTheme_SetAmbientLightStrength(Q3DTheme* self, float strength);
float Q3DTheme_AmbientLightStrength(const Q3DTheme* self);
void Q3DTheme_SetHighlightLightStrength(Q3DTheme* self, float strength);
float Q3DTheme_HighlightLightStrength(const Q3DTheme* self);
void Q3DTheme_SetLabelBorderEnabled(Q3DTheme* self, bool enabled);
bool Q3DTheme_IsLabelBorderEnabled(const Q3DTheme* self);
void Q3DTheme_SetFont(Q3DTheme* self, const QFont* font);
QFont* Q3DTheme_Font(const Q3DTheme* self);
void Q3DTheme_SetBackgroundEnabled(Q3DTheme* self, bool enabled);
bool Q3DTheme_IsBackgroundEnabled(const Q3DTheme* self);
void Q3DTheme_SetGridEnabled(Q3DTheme* self, bool enabled);
bool Q3DTheme_IsGridEnabled(const Q3DTheme* self);
void Q3DTheme_SetLabelBackgroundEnabled(Q3DTheme* self, bool enabled);
bool Q3DTheme_IsLabelBackgroundEnabled(const Q3DTheme* self);
void Q3DTheme_SetColorStyle(Q3DTheme* self, int style);
int Q3DTheme_ColorStyle(const Q3DTheme* self);
void Q3DTheme_TypeChanged(Q3DTheme* self, int themeType);
void Q3DTheme_Connect_TypeChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_BaseColorsChanged(Q3DTheme* self, const libqt_list /* of QColor* */ colors);
void Q3DTheme_Connect_BaseColorsChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_BackgroundColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_BackgroundColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_WindowColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_WindowColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LabelTextColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_LabelTextColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LabelBackgroundColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_LabelBackgroundColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_GridLineColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_GridLineColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SingleHighlightColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_SingleHighlightColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_MultiHighlightColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_MultiHighlightColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LightColorChanged(Q3DTheme* self, const QColor* color);
void Q3DTheme_Connect_LightColorChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_BaseGradientsChanged(Q3DTheme* self, const libqt_list /* of QLinearGradient* */ gradients);
void Q3DTheme_Connect_BaseGradientsChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SingleHighlightGradientChanged(Q3DTheme* self, const QLinearGradient* gradient);
void Q3DTheme_Connect_SingleHighlightGradientChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_MultiHighlightGradientChanged(Q3DTheme* self, const QLinearGradient* gradient);
void Q3DTheme_Connect_MultiHighlightGradientChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LightStrengthChanged(Q3DTheme* self, float strength);
void Q3DTheme_Connect_LightStrengthChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_AmbientLightStrengthChanged(Q3DTheme* self, float strength);
void Q3DTheme_Connect_AmbientLightStrengthChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_HighlightLightStrengthChanged(Q3DTheme* self, float strength);
void Q3DTheme_Connect_HighlightLightStrengthChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LabelBorderEnabledChanged(Q3DTheme* self, bool enabled);
void Q3DTheme_Connect_LabelBorderEnabledChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_FontChanged(Q3DTheme* self, const QFont* font);
void Q3DTheme_Connect_FontChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_BackgroundEnabledChanged(Q3DTheme* self, bool enabled);
void Q3DTheme_Connect_BackgroundEnabledChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_GridEnabledChanged(Q3DTheme* self, bool enabled);
void Q3DTheme_Connect_GridEnabledChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_LabelBackgroundEnabledChanged(Q3DTheme* self, bool enabled);
void Q3DTheme_Connect_LabelBackgroundEnabledChanged(Q3DTheme* self, intptr_t slot);
void Q3DTheme_ColorStyleChanged(Q3DTheme* self, int style);
void Q3DTheme_Connect_ColorStyleChanged(Q3DTheme* self, intptr_t slot);
libqt_string Q3DTheme_Tr2(const char* s, const char* c);
libqt_string Q3DTheme_Tr3(const char* s, const char* c, int n);
void Q3DTheme_OnMetaObject(Q3DTheme* self, intptr_t slot);
QMetaObject* Q3DTheme_SuperMetaObject(const Q3DTheme* self);
void Q3DTheme_OnMetacast(Q3DTheme* self, intptr_t slot);
void* Q3DTheme_SuperMetacast(Q3DTheme* self, const char* param1);
void Q3DTheme_OnMetacall(Q3DTheme* self, intptr_t slot);
int Q3DTheme_SuperMetacall(Q3DTheme* self, int param1, int param2, void** param3);
bool Q3DTheme_Event(Q3DTheme* self, QEvent* event);
void Q3DTheme_OnEvent(Q3DTheme* self, intptr_t slot);
bool Q3DTheme_SuperEvent(Q3DTheme* self, QEvent* event);
bool Q3DTheme_EventFilter(Q3DTheme* self, QObject* watched, QEvent* event);
void Q3DTheme_OnEventFilter(Q3DTheme* self, intptr_t slot);
bool Q3DTheme_SuperEventFilter(Q3DTheme* self, QObject* watched, QEvent* event);
void Q3DTheme_TimerEvent(Q3DTheme* self, QTimerEvent* event);
void Q3DTheme_OnTimerEvent(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SuperTimerEvent(Q3DTheme* self, QTimerEvent* event);
void Q3DTheme_ChildEvent(Q3DTheme* self, QChildEvent* event);
void Q3DTheme_OnChildEvent(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SuperChildEvent(Q3DTheme* self, QChildEvent* event);
void Q3DTheme_CustomEvent(Q3DTheme* self, QEvent* event);
void Q3DTheme_OnCustomEvent(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SuperCustomEvent(Q3DTheme* self, QEvent* event);
void Q3DTheme_ConnectNotify(Q3DTheme* self, const QMetaMethod* signal);
void Q3DTheme_OnConnectNotify(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SuperConnectNotify(Q3DTheme* self, const QMetaMethod* signal);
void Q3DTheme_DisconnectNotify(Q3DTheme* self, const QMetaMethod* signal);
void Q3DTheme_OnDisconnectNotify(Q3DTheme* self, intptr_t slot);
void Q3DTheme_SuperDisconnectNotify(Q3DTheme* self, const QMetaMethod* signal);
QObject* Q3DTheme_Sender(const Q3DTheme* self);
int Q3DTheme_SenderSignalIndex(const Q3DTheme* self);
int Q3DTheme_Receivers(const Q3DTheme* self, const char* signal);
bool Q3DTheme_IsSignalConnected(const Q3DTheme* self, const QMetaMethod* signal);
void Q3DTheme_Delete(Q3DTheme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
