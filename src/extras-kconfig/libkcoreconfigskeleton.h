#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCORECONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGC_LIBKCORECONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum)
typedef KCoreConfigSkeleton::ItemEnum KCoreConfigSkeleton__ItemEnum;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum__Choice)
typedef KCoreConfigSkeleton::ItemEnum::Choice KCoreConfigSkeleton__ItemEnum__Choice;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPassword)
typedef KCoreConfigSkeleton::ItemPassword KCoreConfigSkeleton__ItemPassword;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPath)
typedef KCoreConfigSkeleton::ItemPath KCoreConfigSkeleton__ItemPath;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPathList)
typedef KCoreConfigSkeleton::ItemPathList KCoreConfigSkeleton__ItemPathList;
#endif
#else
typedef struct KConfig KConfig;
typedef struct KConfigCompilerSignallingItem KConfigCompilerSignallingItem;
typedef struct KConfigGroup KConfigGroup;
typedef struct KConfigSkeletonItem KConfigSkeletonItem;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct KCoreConfigSkeleton__ItemEnum KCoreConfigSkeleton__ItemEnum;
typedef struct KCoreConfigSkeleton__ItemEnum__Choice KCoreConfigSkeleton__ItemEnum__Choice;
typedef struct KCoreConfigSkeleton__ItemPassword KCoreConfigSkeleton__ItemPassword;
typedef struct KCoreConfigSkeleton__ItemPath KCoreConfigSkeleton__ItemPath;
typedef struct KCoreConfigSkeleton__ItemPathList KCoreConfigSkeleton__ItemPathList;
typedef struct KPropertySkeletonItem KPropertySkeletonItem;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KConfigSkeletonItem* KConfigSkeletonItem_new(const libqt_string _group, const libqt_string _key);
KConfigSkeletonItem* KConfigSkeletonItem_new2(const KConfigSkeletonItem* param1);
void KConfigSkeletonItem_SetGroup(KConfigSkeletonItem* self, const libqt_string _group);
libqt_string KConfigSkeletonItem_Group(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetGroup2(KConfigSkeletonItem* self, const KConfigGroup* cg);
KConfigGroup* KConfigSkeletonItem_ConfigGroup(const KConfigSkeletonItem* self, KConfig* config);
void KConfigSkeletonItem_SetKey(KConfigSkeletonItem* self, const libqt_string _key);
libqt_string KConfigSkeletonItem_Key(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetName(KConfigSkeletonItem* self, const libqt_string _name);
libqt_string KConfigSkeletonItem_Name(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetLabel(KConfigSkeletonItem* self, const libqt_string l);
libqt_string KConfigSkeletonItem_Label(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetToolTip(KConfigSkeletonItem* self, const libqt_string t);
libqt_string KConfigSkeletonItem_ToolTip(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetWhatsThis(KConfigSkeletonItem* self, const libqt_string w);
libqt_string KConfigSkeletonItem_WhatsThis(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetWriteFlags(KConfigSkeletonItem* self, int flags);
int KConfigSkeletonItem_WriteFlags(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_ReadConfig(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_WriteConfig(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_ReadDefault(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_SetProperty(KConfigSkeletonItem* self, const QVariant* p);
bool KConfigSkeletonItem_IsEqual(const KConfigSkeletonItem* self, const QVariant* p);
QVariant* KConfigSkeletonItem_Property(const KConfigSkeletonItem* self);
QVariant* KConfigSkeletonItem_MinValue(const KConfigSkeletonItem* self);
QVariant* KConfigSkeletonItem_MaxValue(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_SetDefault(KConfigSkeletonItem* self);
void KConfigSkeletonItem_SwapDefault(KConfigSkeletonItem* self);
bool KConfigSkeletonItem_IsImmutable(const KConfigSkeletonItem* self);
bool KConfigSkeletonItem_IsDefault(const KConfigSkeletonItem* self);
bool KConfigSkeletonItem_IsSaveNeeded(const KConfigSkeletonItem* self);
QVariant* KConfigSkeletonItem_GetDefault(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_OnReadConfig(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseReadConfig(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_OnWriteConfig(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseWriteConfig(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_OnReadDefault(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseReadDefault(KConfigSkeletonItem* self, KConfig* param1);
void KConfigSkeletonItem_OnSetProperty(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseSetProperty(KConfigSkeletonItem* self, const QVariant* p);
void KConfigSkeletonItem_OnIsEqual(const KConfigSkeletonItem* self, intptr_t slot);
bool KConfigSkeletonItem_QBaseIsEqual(const KConfigSkeletonItem* self, const QVariant* p);
void KConfigSkeletonItem_OnProperty(const KConfigSkeletonItem* self, intptr_t slot);
QVariant* KConfigSkeletonItem_QBaseProperty(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_OnMinValue(const KConfigSkeletonItem* self, intptr_t slot);
QVariant* KConfigSkeletonItem_QBaseMinValue(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_OnMaxValue(const KConfigSkeletonItem* self, intptr_t slot);
QVariant* KConfigSkeletonItem_QBaseMaxValue(const KConfigSkeletonItem* self);
void KConfigSkeletonItem_OnSetDefault(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseSetDefault(KConfigSkeletonItem* self);
void KConfigSkeletonItem_OnSwapDefault(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseSwapDefault(KConfigSkeletonItem* self);
void KConfigSkeletonItem_ReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
void KConfigSkeletonItem_OnReadImmutability(KConfigSkeletonItem* self, intptr_t slot);
void KConfigSkeletonItem_QBaseReadImmutability(KConfigSkeletonItem* self, const KConfigGroup* group);
void KConfigSkeletonItem_Delete(KConfigSkeletonItem* self);

KPropertySkeletonItem* KPropertySkeletonItem_new(QObject* object, const libqt_string propertyName, const QVariant* defaultValue);
KPropertySkeletonItem* KPropertySkeletonItem_new2(const KPropertySkeletonItem* param1);
QVariant* KPropertySkeletonItem_Property(const KPropertySkeletonItem* self);
void KPropertySkeletonItem_SetProperty(KPropertySkeletonItem* self, const QVariant* p);
bool KPropertySkeletonItem_IsEqual(const KPropertySkeletonItem* self, const QVariant* p);
void KPropertySkeletonItem_ReadConfig(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_WriteConfig(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_ReadDefault(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_SetDefault(KPropertySkeletonItem* self);
void KPropertySkeletonItem_SwapDefault(KPropertySkeletonItem* self);
void KPropertySkeletonItem_OnProperty(const KPropertySkeletonItem* self, intptr_t slot);
QVariant* KPropertySkeletonItem_QBaseProperty(const KPropertySkeletonItem* self);
void KPropertySkeletonItem_OnSetProperty(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseSetProperty(KPropertySkeletonItem* self, const QVariant* p);
void KPropertySkeletonItem_OnIsEqual(const KPropertySkeletonItem* self, intptr_t slot);
bool KPropertySkeletonItem_QBaseIsEqual(const KPropertySkeletonItem* self, const QVariant* p);
void KPropertySkeletonItem_OnReadConfig(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseReadConfig(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_OnWriteConfig(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseWriteConfig(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_OnReadDefault(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseReadDefault(KPropertySkeletonItem* self, KConfig* param1);
void KPropertySkeletonItem_OnSetDefault(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseSetDefault(KPropertySkeletonItem* self);
void KPropertySkeletonItem_OnSwapDefault(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseSwapDefault(KPropertySkeletonItem* self);
QVariant* KPropertySkeletonItem_MinValue(const KPropertySkeletonItem* self);
void KPropertySkeletonItem_OnMinValue(const KPropertySkeletonItem* self, intptr_t slot);
QVariant* KPropertySkeletonItem_QBaseMinValue(const KPropertySkeletonItem* self);
QVariant* KPropertySkeletonItem_MaxValue(const KPropertySkeletonItem* self);
void KPropertySkeletonItem_OnMaxValue(const KPropertySkeletonItem* self, intptr_t slot);
QVariant* KPropertySkeletonItem_QBaseMaxValue(const KPropertySkeletonItem* self);
void KPropertySkeletonItem_ReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
void KPropertySkeletonItem_OnReadImmutability(KPropertySkeletonItem* self, intptr_t slot);
void KPropertySkeletonItem_QBaseReadImmutability(KPropertySkeletonItem* self, const KConfigGroup* group);
void KPropertySkeletonItem_Delete(KPropertySkeletonItem* self);

void KConfigCompilerSignallingItem_ReadConfig(KConfigCompilerSignallingItem* self, KConfig* param1);
void KConfigCompilerSignallingItem_WriteConfig(KConfigCompilerSignallingItem* self, KConfig* param1);
void KConfigCompilerSignallingItem_ReadDefault(KConfigCompilerSignallingItem* self, KConfig* param1);
void KConfigCompilerSignallingItem_SetProperty(KConfigCompilerSignallingItem* self, const QVariant* p);
bool KConfigCompilerSignallingItem_IsEqual(const KConfigCompilerSignallingItem* self, const QVariant* p);
QVariant* KConfigCompilerSignallingItem_Property(const KConfigCompilerSignallingItem* self);
QVariant* KConfigCompilerSignallingItem_MinValue(const KConfigCompilerSignallingItem* self);
QVariant* KConfigCompilerSignallingItem_MaxValue(const KConfigCompilerSignallingItem* self);
void KConfigCompilerSignallingItem_SetDefault(KConfigCompilerSignallingItem* self);
void KConfigCompilerSignallingItem_SwapDefault(KConfigCompilerSignallingItem* self);
void KConfigCompilerSignallingItem_SetWriteFlags(KConfigCompilerSignallingItem* self, int flags);
int KConfigCompilerSignallingItem_WriteFlags(const KConfigCompilerSignallingItem* self);
void KConfigCompilerSignallingItem_SetGroup(KConfigCompilerSignallingItem* self, const KConfigGroup* cg);
KConfigGroup* KConfigCompilerSignallingItem_ConfigGroup(const KConfigCompilerSignallingItem* self, KConfig* config);
void KConfigCompilerSignallingItem_Delete(KConfigCompilerSignallingItem* self);

KCoreConfigSkeleton* KCoreConfigSkeleton_new();
KCoreConfigSkeleton* KCoreConfigSkeleton_new2(const libqt_string configname);
KCoreConfigSkeleton* KCoreConfigSkeleton_new3(const libqt_string configname, QObject* parent);
QMetaObject* KCoreConfigSkeleton_MetaObject(const KCoreConfigSkeleton* self);
void* KCoreConfigSkeleton_Metacast(KCoreConfigSkeleton* self, const char* param1);
int KCoreConfigSkeleton_Metacall(KCoreConfigSkeleton* self, int param1, int param2, void** param3);
libqt_string KCoreConfigSkeleton_Tr(const char* s);
void KCoreConfigSkeleton_SetDefaults(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_Load(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_Read(KCoreConfigSkeleton* self);
bool KCoreConfigSkeleton_IsDefaults(const KCoreConfigSkeleton* self);
bool KCoreConfigSkeleton_IsSaveNeeded(const KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_SetCurrentGroup(KCoreConfigSkeleton* self, const libqt_string group);
libqt_string KCoreConfigSkeleton_CurrentGroup(const KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_AddItem(KCoreConfigSkeleton* self, KConfigSkeletonItem* item);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference);
KConfig* KCoreConfigSkeleton_Config(KCoreConfigSkeleton* self);
KConfig* KCoreConfigSkeleton_Config2(const KCoreConfigSkeleton* self);
libqt_list /* of KConfigSkeletonItem* */ KCoreConfigSkeleton_Items(const KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_RemoveItem(KCoreConfigSkeleton* self, const libqt_string name);
void KCoreConfigSkeleton_ClearItems(KCoreConfigSkeleton* self);
bool KCoreConfigSkeleton_IsImmutable(const KCoreConfigSkeleton* self, const libqt_string name);
KConfigSkeletonItem* KCoreConfigSkeleton_FindItem(const KCoreConfigSkeleton* self, const libqt_string name);
bool KCoreConfigSkeleton_UseDefaults(KCoreConfigSkeleton* self, bool b);
bool KCoreConfigSkeleton_Save(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_ConfigChanged(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_Connect_ConfigChanged(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_UsrUseDefaults(KCoreConfigSkeleton* self, bool b);
void KCoreConfigSkeleton_UsrSetDefaults(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_UsrRead(KCoreConfigSkeleton* self);
bool KCoreConfigSkeleton_UsrSave(KCoreConfigSkeleton* self);
libqt_string KCoreConfigSkeleton_Tr2(const char* s, const char* c);
libqt_string KCoreConfigSkeleton_Tr3(const char* s, const char* c, int n);
void KCoreConfigSkeleton_AddItem2(KCoreConfigSkeleton* self, KConfigSkeletonItem* item, const libqt_string name);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key);
void KCoreConfigSkeleton_OnMetacall(KCoreConfigSkeleton* self, intptr_t slot);
int KCoreConfigSkeleton_QBaseMetacall(KCoreConfigSkeleton* self, int param1, int param2, void** param3);
void KCoreConfigSkeleton_OnSetDefaults(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseSetDefaults(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_OnUseDefaults(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseUseDefaults(KCoreConfigSkeleton* self, bool b);
void KCoreConfigSkeleton_OnUsrUseDefaults(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseUsrUseDefaults(KCoreConfigSkeleton* self, bool b);
void KCoreConfigSkeleton_OnUsrSetDefaults(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseUsrSetDefaults(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_OnUsrRead(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseUsrRead(KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_OnUsrSave(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseUsrSave(KCoreConfigSkeleton* self);
bool KCoreConfigSkeleton_Event(KCoreConfigSkeleton* self, QEvent* event);
void KCoreConfigSkeleton_OnEvent(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseEvent(KCoreConfigSkeleton* self, QEvent* event);
bool KCoreConfigSkeleton_EventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event);
void KCoreConfigSkeleton_OnEventFilter(KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseEventFilter(KCoreConfigSkeleton* self, QObject* watched, QEvent* event);
void KCoreConfigSkeleton_TimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
void KCoreConfigSkeleton_OnTimerEvent(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
void KCoreConfigSkeleton_ChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
void KCoreConfigSkeleton_OnChildEvent(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
void KCoreConfigSkeleton_CustomEvent(KCoreConfigSkeleton* self, QEvent* event);
void KCoreConfigSkeleton_OnCustomEvent(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseCustomEvent(KCoreConfigSkeleton* self, QEvent* event);
void KCoreConfigSkeleton_ConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
void KCoreConfigSkeleton_OnConnectNotify(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
void KCoreConfigSkeleton_DisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
void KCoreConfigSkeleton_OnDisconnectNotify(KCoreConfigSkeleton* self, intptr_t slot);
void KCoreConfigSkeleton_QBaseDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
QObject* KCoreConfigSkeleton_Sender(const KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_OnSender(const KCoreConfigSkeleton* self, intptr_t slot);
QObject* KCoreConfigSkeleton_QBaseSender(const KCoreConfigSkeleton* self);
int KCoreConfigSkeleton_SenderSignalIndex(const KCoreConfigSkeleton* self);
void KCoreConfigSkeleton_OnSenderSignalIndex(const KCoreConfigSkeleton* self, intptr_t slot);
int KCoreConfigSkeleton_QBaseSenderSignalIndex(const KCoreConfigSkeleton* self);
int KCoreConfigSkeleton_Receivers(const KCoreConfigSkeleton* self, const char* signal);
void KCoreConfigSkeleton_OnReceivers(const KCoreConfigSkeleton* self, intptr_t slot);
int KCoreConfigSkeleton_QBaseReceivers(const KCoreConfigSkeleton* self, const char* signal);
bool KCoreConfigSkeleton_IsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
void KCoreConfigSkeleton_OnIsSignalConnected(const KCoreConfigSkeleton* self, intptr_t slot);
bool KCoreConfigSkeleton_QBaseIsSignalConnected(const KCoreConfigSkeleton* self, const QMetaMethod* signal);
void KCoreConfigSkeleton_Delete(KCoreConfigSkeleton* self);

KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton__ItemPassword_new(const libqt_string _group, const libqt_string _key, libqt_string reference);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton__ItemPassword_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue);
void KCoreConfigSkeleton__ItemPassword_WriteConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config);
void KCoreConfigSkeleton__ItemPassword_OnWriteConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPassword_QBaseWriteConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config);
void KCoreConfigSkeleton__ItemPassword_ReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config);
void KCoreConfigSkeleton__ItemPassword_OnReadConfig(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPassword_QBaseReadConfig(KCoreConfigSkeleton__ItemPassword* self, KConfig* config);
void KCoreConfigSkeleton__ItemPassword_SetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPassword_OnSetProperty(KCoreConfigSkeleton__ItemPassword* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPassword_QBaseSetProperty(KCoreConfigSkeleton__ItemPassword* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemPassword_IsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPassword_OnIsEqual(const KCoreConfigSkeleton__ItemPassword* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemPassword_QBaseIsEqual(const KCoreConfigSkeleton__ItemPassword* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemPassword_Property(const KCoreConfigSkeleton__ItemPassword* self);
void KCoreConfigSkeleton__ItemPassword_OnProperty(const KCoreConfigSkeleton__ItemPassword* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemPassword_QBaseProperty(const KCoreConfigSkeleton__ItemPassword* self);
void KCoreConfigSkeleton__ItemPassword_Delete(KCoreConfigSkeleton__ItemPassword* self);

KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton__ItemPath_new(const libqt_string _group, const libqt_string _key, libqt_string reference);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton__ItemPath_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue);
void KCoreConfigSkeleton__ItemPath_WriteConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config);
void KCoreConfigSkeleton__ItemPath_OnWriteConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPath_QBaseWriteConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config);
void KCoreConfigSkeleton__ItemPath_ReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config);
void KCoreConfigSkeleton__ItemPath_OnReadConfig(KCoreConfigSkeleton__ItemPath* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPath_QBaseReadConfig(KCoreConfigSkeleton__ItemPath* self, KConfig* config);
void KCoreConfigSkeleton__ItemPath_SetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPath_OnSetProperty(KCoreConfigSkeleton__ItemPath* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPath_QBaseSetProperty(KCoreConfigSkeleton__ItemPath* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemPath_IsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPath_OnIsEqual(const KCoreConfigSkeleton__ItemPath* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemPath_QBaseIsEqual(const KCoreConfigSkeleton__ItemPath* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemPath_Property(const KCoreConfigSkeleton__ItemPath* self);
void KCoreConfigSkeleton__ItemPath_OnProperty(const KCoreConfigSkeleton__ItemPath* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemPath_QBaseProperty(const KCoreConfigSkeleton__ItemPath* self);
void KCoreConfigSkeleton__ItemPath_Delete(KCoreConfigSkeleton__ItemPath* self);

KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new(const KCoreConfigSkeleton__ItemEnum__Choice* param1);
KCoreConfigSkeleton__ItemEnum__Choice* KCoreConfigSkeleton__ItemEnum__Choice_new2();
libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Name(const KCoreConfigSkeleton__ItemEnum__Choice* self);
void KCoreConfigSkeleton__ItemEnum__Choice_SetName(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string name);
libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Label(const KCoreConfigSkeleton__ItemEnum__Choice* self);
void KCoreConfigSkeleton__ItemEnum__Choice_SetLabel(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string label);
libqt_string KCoreConfigSkeleton__ItemEnum__Choice_ToolTip(const KCoreConfigSkeleton__ItemEnum__Choice* self);
void KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string toolTip);
libqt_string KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis(const KCoreConfigSkeleton__ItemEnum__Choice* self);
void KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string whatsThis);
libqt_string KCoreConfigSkeleton__ItemEnum__Choice_Value(const KCoreConfigSkeleton__ItemEnum__Choice* self);
void KCoreConfigSkeleton__ItemEnum__Choice_SetValue(KCoreConfigSkeleton__ItemEnum__Choice* self, libqt_string value);
void KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign(KCoreConfigSkeleton__ItemEnum__Choice* self, const KCoreConfigSkeleton__ItemEnum__Choice* param1);
void KCoreConfigSkeleton__ItemEnum__Choice_Delete(KCoreConfigSkeleton__ItemEnum__Choice* self);

KCoreConfigSkeleton__ItemEnum* KCoreConfigSkeleton__ItemEnum_new(const libqt_string _group, const libqt_string _key, int* reference, const libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices);
KCoreConfigSkeleton__ItemEnum* KCoreConfigSkeleton__ItemEnum_new2(const libqt_string _group, const libqt_string _key, int* reference, const libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices, int defaultValue);
libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ KCoreConfigSkeleton__ItemEnum_Choices(const KCoreConfigSkeleton__ItemEnum* self);
void KCoreConfigSkeleton__ItemEnum_ReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config);
void KCoreConfigSkeleton__ItemEnum_WriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config);
libqt_string KCoreConfigSkeleton__ItemEnum_ValueForChoice(const KCoreConfigSkeleton__ItemEnum* self, const libqt_string name);
void KCoreConfigSkeleton__ItemEnum_SetValueForChoice(KCoreConfigSkeleton__ItemEnum* self, const libqt_string name, const libqt_string valueForChoice);
void KCoreConfigSkeleton__ItemEnum_OnReadConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
void KCoreConfigSkeleton__ItemEnum_QBaseReadConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config);
void KCoreConfigSkeleton__ItemEnum_OnWriteConfig(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
void KCoreConfigSkeleton__ItemEnum_QBaseWriteConfig(KCoreConfigSkeleton__ItemEnum* self, KConfig* config);
void KCoreConfigSkeleton__ItemEnum_SetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p);
void KCoreConfigSkeleton__ItemEnum_OnSetProperty(KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
void KCoreConfigSkeleton__ItemEnum_QBaseSetProperty(KCoreConfigSkeleton__ItemEnum* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemEnum_IsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p);
void KCoreConfigSkeleton__ItemEnum_OnIsEqual(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemEnum_QBaseIsEqual(const KCoreConfigSkeleton__ItemEnum* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemEnum_Property(const KCoreConfigSkeleton__ItemEnum* self);
void KCoreConfigSkeleton__ItemEnum_OnProperty(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseProperty(const KCoreConfigSkeleton__ItemEnum* self);
QVariant* KCoreConfigSkeleton__ItemEnum_MinValue(const KCoreConfigSkeleton__ItemEnum* self);
void KCoreConfigSkeleton__ItemEnum_OnMinValue(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseMinValue(const KCoreConfigSkeleton__ItemEnum* self);
QVariant* KCoreConfigSkeleton__ItemEnum_MaxValue(const KCoreConfigSkeleton__ItemEnum* self);
void KCoreConfigSkeleton__ItemEnum_OnMaxValue(const KCoreConfigSkeleton__ItemEnum* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemEnum_QBaseMaxValue(const KCoreConfigSkeleton__ItemEnum* self);
void KCoreConfigSkeleton__ItemEnum_Delete(KCoreConfigSkeleton__ItemEnum* self);

KCoreConfigSkeleton__ItemPathList* KCoreConfigSkeleton__ItemPathList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference);
KCoreConfigSkeleton__ItemPathList* KCoreConfigSkeleton__ItemPathList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue);
void KCoreConfigSkeleton__ItemPathList_ReadConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config);
void KCoreConfigSkeleton__ItemPathList_WriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config);
void KCoreConfigSkeleton__ItemPathList_OnReadConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPathList_QBaseReadConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config);
void KCoreConfigSkeleton__ItemPathList_OnWriteConfig(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPathList_QBaseWriteConfig(KCoreConfigSkeleton__ItemPathList* self, KConfig* config);
void KCoreConfigSkeleton__ItemPathList_SetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPathList_OnSetProperty(KCoreConfigSkeleton__ItemPathList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPathList_QBaseSetProperty(KCoreConfigSkeleton__ItemPathList* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemPathList_IsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPathList_OnIsEqual(const KCoreConfigSkeleton__ItemPathList* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemPathList_QBaseIsEqual(const KCoreConfigSkeleton__ItemPathList* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemPathList_Property(const KCoreConfigSkeleton__ItemPathList* self);
void KCoreConfigSkeleton__ItemPathList_OnProperty(const KCoreConfigSkeleton__ItemPathList* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemPathList_QBaseProperty(const KCoreConfigSkeleton__ItemPathList* self);
void KCoreConfigSkeleton__ItemPathList_Delete(KCoreConfigSkeleton__ItemPathList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
