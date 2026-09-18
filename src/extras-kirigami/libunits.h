#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBUNITS_H
#define EXTRAS_KIRIGAMI_LIBUNITS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__IconSizes)
typedef Kirigami::Platform::IconSizes Kirigami__Platform__IconSizes;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__Units)
typedef Kirigami::Platform::Units Kirigami__Platform__Units;
#endif
#else
typedef struct Kirigami__Platform__IconSizes Kirigami__Platform__IconSizes;
typedef struct Kirigami__Platform__Units Kirigami__Platform__Units;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSEngine QJSEngine;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QTimerEvent QTimerEvent;
#endif

Kirigami__Platform__IconSizes* Kirigami__Platform__IconSizes_new(Kirigami__Platform__Units* units);
QMetaObject* Kirigami__Platform__IconSizes_MetaObject(const Kirigami__Platform__IconSizes* self);
void* Kirigami__Platform__IconSizes_Metacast(Kirigami__Platform__IconSizes* self, const char* param1);
int Kirigami__Platform__IconSizes_Metacall(Kirigami__Platform__IconSizes* self, int param1, int param2, void** param3);
libqt_string Kirigami__Platform__IconSizes_Tr(const char* s);
int Kirigami__Platform__IconSizes_SizeForLabels(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Small(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_SmallMedium(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Medium(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Large(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Huge(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Enormous(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_RoundedIconSize(const Kirigami__Platform__IconSizes* self, int size);
void Kirigami__Platform__IconSizes_SizeForLabelsChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_SizeForLabelsChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SmallChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_SmallChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SmallMediumChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_SmallMediumChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_MediumChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_MediumChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_LargeChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_LargeChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_HugeChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_HugeChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_EnormousChanged(Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_Connect_EnormousChanged(Kirigami__Platform__IconSizes* self, intptr_t slot);
libqt_string Kirigami__Platform__IconSizes_Tr2(const char* s, const char* c);
libqt_string Kirigami__Platform__IconSizes_Tr3(const char* s, const char* c, int n);
void Kirigami__Platform__IconSizes_OnMetaObject(const Kirigami__Platform__IconSizes* self, intptr_t slot);
QMetaObject* Kirigami__Platform__IconSizes_SuperMetaObject(const Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_OnMetacast(Kirigami__Platform__IconSizes* self, intptr_t slot);
void* Kirigami__Platform__IconSizes_SuperMetacast(Kirigami__Platform__IconSizes* self, const char* param1);
void Kirigami__Platform__IconSizes_OnMetacall(Kirigami__Platform__IconSizes* self, intptr_t slot);
int Kirigami__Platform__IconSizes_SuperMetacall(Kirigami__Platform__IconSizes* self, int param1, int param2, void** param3);
bool Kirigami__Platform__IconSizes_Event(Kirigami__Platform__IconSizes* self, QEvent* event);
void Kirigami__Platform__IconSizes_OnEvent(Kirigami__Platform__IconSizes* self, intptr_t slot);
bool Kirigami__Platform__IconSizes_SuperEvent(Kirigami__Platform__IconSizes* self, QEvent* event);
bool Kirigami__Platform__IconSizes_EventFilter(Kirigami__Platform__IconSizes* self, QObject* watched, QEvent* event);
void Kirigami__Platform__IconSizes_OnEventFilter(Kirigami__Platform__IconSizes* self, intptr_t slot);
bool Kirigami__Platform__IconSizes_SuperEventFilter(Kirigami__Platform__IconSizes* self, QObject* watched, QEvent* event);
void Kirigami__Platform__IconSizes_TimerEvent(Kirigami__Platform__IconSizes* self, QTimerEvent* event);
void Kirigami__Platform__IconSizes_OnTimerEvent(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SuperTimerEvent(Kirigami__Platform__IconSizes* self, QTimerEvent* event);
void Kirigami__Platform__IconSizes_ChildEvent(Kirigami__Platform__IconSizes* self, QChildEvent* event);
void Kirigami__Platform__IconSizes_OnChildEvent(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SuperChildEvent(Kirigami__Platform__IconSizes* self, QChildEvent* event);
void Kirigami__Platform__IconSizes_CustomEvent(Kirigami__Platform__IconSizes* self, QEvent* event);
void Kirigami__Platform__IconSizes_OnCustomEvent(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SuperCustomEvent(Kirigami__Platform__IconSizes* self, QEvent* event);
void Kirigami__Platform__IconSizes_ConnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
void Kirigami__Platform__IconSizes_OnConnectNotify(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SuperConnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
void Kirigami__Platform__IconSizes_DisconnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
void Kirigami__Platform__IconSizes_OnDisconnectNotify(Kirigami__Platform__IconSizes* self, intptr_t slot);
void Kirigami__Platform__IconSizes_SuperDisconnectNotify(Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
QObject* Kirigami__Platform__IconSizes_Sender(const Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_OnSender(const Kirigami__Platform__IconSizes* self, intptr_t slot);
QObject* Kirigami__Platform__IconSizes_SuperSender(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_SenderSignalIndex(const Kirigami__Platform__IconSizes* self);
void Kirigami__Platform__IconSizes_OnSenderSignalIndex(const Kirigami__Platform__IconSizes* self, intptr_t slot);
int Kirigami__Platform__IconSizes_SuperSenderSignalIndex(const Kirigami__Platform__IconSizes* self);
int Kirigami__Platform__IconSizes_Receivers(const Kirigami__Platform__IconSizes* self, const char* signal);
void Kirigami__Platform__IconSizes_OnReceivers(const Kirigami__Platform__IconSizes* self, intptr_t slot);
int Kirigami__Platform__IconSizes_SuperReceivers(const Kirigami__Platform__IconSizes* self, const char* signal);
bool Kirigami__Platform__IconSizes_IsSignalConnected(const Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
void Kirigami__Platform__IconSizes_OnIsSignalConnected(const Kirigami__Platform__IconSizes* self, intptr_t slot);
bool Kirigami__Platform__IconSizes_SuperIsSignalConnected(const Kirigami__Platform__IconSizes* self, const QMetaMethod* signal);
void Kirigami__Platform__IconSizes_Delete(Kirigami__Platform__IconSizes* self);

QMetaObject* Kirigami__Platform__Units_MetaObject(const Kirigami__Platform__Units* self);
void* Kirigami__Platform__Units_Metacast(Kirigami__Platform__Units* self, const char* param1);
int Kirigami__Platform__Units_Metacall(Kirigami__Platform__Units* self, int param1, int param2, void** param3);
libqt_string Kirigami__Platform__Units_Tr(const char* s);
int Kirigami__Platform__Units_GridUnit(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetGridUnit(Kirigami__Platform__Units* self, int size);
int Kirigami__Platform__Units_SmallSpacing(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetSmallSpacing(Kirigami__Platform__Units* self, int size);
int Kirigami__Platform__Units_MediumSpacing(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetMediumSpacing(Kirigami__Platform__Units* self, int size);
int Kirigami__Platform__Units_LargeSpacing(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetLargeSpacing(Kirigami__Platform__Units* self, int size);
int Kirigami__Platform__Units_VeryLongDuration(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetVeryLongDuration(Kirigami__Platform__Units* self, int duration);
int Kirigami__Platform__Units_LongDuration(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetLongDuration(Kirigami__Platform__Units* self, int duration);
int Kirigami__Platform__Units_ShortDuration(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetShortDuration(Kirigami__Platform__Units* self, int duration);
int Kirigami__Platform__Units_VeryShortDuration(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetVeryShortDuration(Kirigami__Platform__Units* self, int duration);
int Kirigami__Platform__Units_HumanMoment(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetHumanMoment(Kirigami__Platform__Units* self, int duration);
int Kirigami__Platform__Units_ToolTipDelay(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetToolTipDelay(Kirigami__Platform__Units* self, int delay);
double Kirigami__Platform__Units_CornerRadius(const Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_SetcornerRadius(Kirigami__Platform__Units* self, double cornerRadius);
Kirigami__Platform__IconSizes* Kirigami__Platform__Units_IconSizes(const Kirigami__Platform__Units* self);
Kirigami__Platform__Units* Kirigami__Platform__Units_Create(QQmlEngine* qmlEngine, QJSEngine* jsEngine);
void Kirigami__Platform__Units_GridUnitChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_GridUnitChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_SmallSpacingChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_SmallSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_MediumSpacingChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_MediumSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_LargeSpacingChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_LargeSpacingChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_VeryLongDurationChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_VeryLongDurationChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_LongDurationChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_LongDurationChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_ShortDurationChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_ShortDurationChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_VeryShortDurationChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_VeryShortDurationChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_HumanMomentChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_HumanMomentChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_ToolTipDelayChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_ToolTipDelayChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_WheelScrollLinesChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_WheelScrollLinesChanged(Kirigami__Platform__Units* self, intptr_t slot);
void Kirigami__Platform__Units_CornerRadiusChanged(Kirigami__Platform__Units* self);
void Kirigami__Platform__Units_Connect_CornerRadiusChanged(Kirigami__Platform__Units* self, intptr_t slot);
libqt_string Kirigami__Platform__Units_Tr2(const char* s, const char* c);
libqt_string Kirigami__Platform__Units_Tr3(const char* s, const char* c, int n);
void Kirigami__Platform__Units_Delete(Kirigami__Platform__Units* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
