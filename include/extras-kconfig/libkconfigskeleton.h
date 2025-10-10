#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KConfigSkeleton__ItemColor)
typedef KConfigSkeleton::ItemColor KConfigSkeleton__ItemColor;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KConfigSkeleton__ItemFont)
typedef KConfigSkeleton::ItemFont KConfigSkeleton__ItemFont;
#endif
#else
typedef struct KConfig KConfig;
typedef struct KConfigSkeleton KConfigSkeleton;
typedef struct KConfigSkeleton__ItemColor KConfigSkeleton__ItemColor;
typedef struct KConfigSkeleton__ItemFont KConfigSkeleton__ItemFont;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KConfigSkeleton* KConfigSkeleton_new();
KConfigSkeleton* KConfigSkeleton_new2(const libqt_string configname);
KConfigSkeleton* KConfigSkeleton_new3(const libqt_string configname, QObject* parent);
QMetaObject* KConfigSkeleton_MetaObject(const KConfigSkeleton* self);
void* KConfigSkeleton_Metacast(KConfigSkeleton* self, const char* param1);
int KConfigSkeleton_Metacall(KConfigSkeleton* self, int param1, int param2, void** param3);
libqt_string KConfigSkeleton_Tr(const char* s);
KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor(KConfigSkeleton* self, const libqt_string name, QColor* reference);
KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont(KConfigSkeleton* self, const libqt_string name, QFont* reference);
libqt_string KConfigSkeleton_Tr2(const char* s, const char* c);
libqt_string KConfigSkeleton_Tr3(const char* s, const char* c, int n);
KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor3(KConfigSkeleton* self, const libqt_string name, QColor* reference, const QColor* defaultValue);
KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor4(KConfigSkeleton* self, const libqt_string name, QColor* reference, const QColor* defaultValue, const libqt_string key);
KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont3(KConfigSkeleton* self, const libqt_string name, QFont* reference, const QFont* defaultValue);
KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont4(KConfigSkeleton* self, const libqt_string name, QFont* reference, const QFont* defaultValue, const libqt_string key);
void KConfigSkeleton_OnMetacall(KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseMetacall(KConfigSkeleton* self, int param1, int param2, void** param3);
void KConfigSkeleton_SetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_OnSetDefaults(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseSetDefaults(KConfigSkeleton* self);
bool KConfigSkeleton_UseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_OnUseDefaults(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUseDefaults(KConfigSkeleton* self, bool b);
bool KConfigSkeleton_UsrUseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_OnUsrUseDefaults(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUsrUseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_UsrSetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrSetDefaults(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseUsrSetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_UsrRead(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrRead(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseUsrRead(KConfigSkeleton* self);
bool KConfigSkeleton_UsrSave(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrSave(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUsrSave(KConfigSkeleton* self);
bool KConfigSkeleton_Event(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_OnEvent(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseEvent(KConfigSkeleton* self, QEvent* event);
bool KConfigSkeleton_EventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event);
void KConfigSkeleton_OnEventFilter(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseEventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event);
void KConfigSkeleton_TimerEvent(KConfigSkeleton* self, QTimerEvent* event);
void KConfigSkeleton_OnTimerEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseTimerEvent(KConfigSkeleton* self, QTimerEvent* event);
void KConfigSkeleton_ChildEvent(KConfigSkeleton* self, QChildEvent* event);
void KConfigSkeleton_OnChildEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseChildEvent(KConfigSkeleton* self, QChildEvent* event);
void KConfigSkeleton_CustomEvent(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_OnCustomEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseCustomEvent(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_ConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnConnectNotify(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_DisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnDisconnectNotify(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
QObject* KConfigSkeleton_Sender(const KConfigSkeleton* self);
void KConfigSkeleton_OnSender(const KConfigSkeleton* self, intptr_t slot);
QObject* KConfigSkeleton_QBaseSender(const KConfigSkeleton* self);
int KConfigSkeleton_SenderSignalIndex(const KConfigSkeleton* self);
void KConfigSkeleton_OnSenderSignalIndex(const KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseSenderSignalIndex(const KConfigSkeleton* self);
int KConfigSkeleton_Receivers(const KConfigSkeleton* self, const char* signal);
void KConfigSkeleton_OnReceivers(const KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseReceivers(const KConfigSkeleton* self, const char* signal);
bool KConfigSkeleton_IsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnIsSignalConnected(const KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseIsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_Delete(KConfigSkeleton* self);

KConfigSkeleton__ItemColor* KConfigSkeleton__ItemColor_new(const libqt_string _group, const libqt_string _key, QColor* reference);
KConfigSkeleton__ItemColor* KConfigSkeleton__ItemColor_new2(const libqt_string _group, const libqt_string _key, QColor* reference, const QColor* defaultValue);
void KConfigSkeleton__ItemColor_ReadConfig(KConfigSkeleton__ItemColor* self, KConfig* config);
void KConfigSkeleton__ItemColor_SetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p);
bool KConfigSkeleton__ItemColor_IsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p);
QVariant* KConfigSkeleton__ItemColor_Property(const KConfigSkeleton__ItemColor* self);
void KConfigSkeleton__ItemColor_OnReadConfig(KConfigSkeleton__ItemColor* self, intptr_t slot);
void KConfigSkeleton__ItemColor_QBaseReadConfig(KConfigSkeleton__ItemColor* self, KConfig* config);
void KConfigSkeleton__ItemColor_OnSetProperty(KConfigSkeleton__ItemColor* self, intptr_t slot);
void KConfigSkeleton__ItemColor_QBaseSetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p);
void KConfigSkeleton__ItemColor_OnIsEqual(const KConfigSkeleton__ItemColor* self, intptr_t slot);
bool KConfigSkeleton__ItemColor_QBaseIsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p);
void KConfigSkeleton__ItemColor_OnProperty(const KConfigSkeleton__ItemColor* self, intptr_t slot);
QVariant* KConfigSkeleton__ItemColor_QBaseProperty(const KConfigSkeleton__ItemColor* self);
void KConfigSkeleton__ItemColor_Delete(KConfigSkeleton__ItemColor* self);

KConfigSkeleton__ItemFont* KConfigSkeleton__ItemFont_new(const libqt_string _group, const libqt_string _key, QFont* reference);
KConfigSkeleton__ItemFont* KConfigSkeleton__ItemFont_new2(const libqt_string _group, const libqt_string _key, QFont* reference, const QFont* defaultValue);
void KConfigSkeleton__ItemFont_ReadConfig(KConfigSkeleton__ItemFont* self, KConfig* config);
void KConfigSkeleton__ItemFont_SetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p);
bool KConfigSkeleton__ItemFont_IsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p);
QVariant* KConfigSkeleton__ItemFont_Property(const KConfigSkeleton__ItemFont* self);
void KConfigSkeleton__ItemFont_OnReadConfig(KConfigSkeleton__ItemFont* self, intptr_t slot);
void KConfigSkeleton__ItemFont_QBaseReadConfig(KConfigSkeleton__ItemFont* self, KConfig* config);
void KConfigSkeleton__ItemFont_OnSetProperty(KConfigSkeleton__ItemFont* self, intptr_t slot);
void KConfigSkeleton__ItemFont_QBaseSetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p);
void KConfigSkeleton__ItemFont_OnIsEqual(const KConfigSkeleton__ItemFont* self, intptr_t slot);
bool KConfigSkeleton__ItemFont_QBaseIsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p);
void KConfigSkeleton__ItemFont_OnProperty(const KConfigSkeleton__ItemFont* self, intptr_t slot);
QVariant* KConfigSkeleton__ItemFont_QBaseProperty(const KConfigSkeleton__ItemFont* self);
void KConfigSkeleton__ItemFont_Delete(KConfigSkeleton__ItemFont* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
