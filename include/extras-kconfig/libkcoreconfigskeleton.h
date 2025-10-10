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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemBool)
typedef KCoreConfigSkeleton::ItemBool KCoreConfigSkeleton__ItemBool;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemDateTime)
typedef KCoreConfigSkeleton::ItemDateTime KCoreConfigSkeleton__ItemDateTime;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemDouble)
typedef KCoreConfigSkeleton::ItemDouble KCoreConfigSkeleton__ItemDouble;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum)
typedef KCoreConfigSkeleton::ItemEnum KCoreConfigSkeleton__ItemEnum;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemEnum__Choice)
typedef KCoreConfigSkeleton::ItemEnum::Choice KCoreConfigSkeleton__ItemEnum__Choice;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemInt)
typedef KCoreConfigSkeleton::ItemInt KCoreConfigSkeleton__ItemInt;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemIntList)
typedef KCoreConfigSkeleton::ItemIntList KCoreConfigSkeleton__ItemIntList;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemLongLong)
typedef KCoreConfigSkeleton::ItemLongLong KCoreConfigSkeleton__ItemLongLong;
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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPoint)
typedef KCoreConfigSkeleton::ItemPoint KCoreConfigSkeleton__ItemPoint;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemPointF)
typedef KCoreConfigSkeleton::ItemPointF KCoreConfigSkeleton__ItemPointF;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemProperty)
typedef KCoreConfigSkeleton::ItemProperty KCoreConfigSkeleton__ItemProperty;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemRect)
typedef KCoreConfigSkeleton::ItemRect KCoreConfigSkeleton__ItemRect;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemRectF)
typedef KCoreConfigSkeleton::ItemRectF KCoreConfigSkeleton__ItemRectF;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemSize)
typedef KCoreConfigSkeleton::ItemSize KCoreConfigSkeleton__ItemSize;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemSizeF)
typedef KCoreConfigSkeleton::ItemSizeF KCoreConfigSkeleton__ItemSizeF;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemString)
typedef KCoreConfigSkeleton::ItemString KCoreConfigSkeleton__ItemString;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemStringList)
typedef KCoreConfigSkeleton::ItemStringList KCoreConfigSkeleton__ItemStringList;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUInt)
typedef KCoreConfigSkeleton::ItemUInt KCoreConfigSkeleton__ItemUInt;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemULongLong)
typedef KCoreConfigSkeleton::ItemULongLong KCoreConfigSkeleton__ItemULongLong;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUrl)
typedef KCoreConfigSkeleton::ItemUrl KCoreConfigSkeleton__ItemUrl;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCoreConfigSkeleton__ItemUrlList)
typedef KCoreConfigSkeleton::ItemUrlList KCoreConfigSkeleton__ItemUrlList;
#endif
#else
typedef struct KConfig KConfig;
typedef struct KConfigCompilerSignallingItem KConfigCompilerSignallingItem;
typedef struct KConfigGroup KConfigGroup;
typedef struct KConfigSkeletonItem KConfigSkeletonItem;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct KCoreConfigSkeleton__ItemBool KCoreConfigSkeleton__ItemBool;
typedef struct KCoreConfigSkeleton__ItemDateTime KCoreConfigSkeleton__ItemDateTime;
typedef struct KCoreConfigSkeleton__ItemDouble KCoreConfigSkeleton__ItemDouble;
typedef struct KCoreConfigSkeleton__ItemEnum KCoreConfigSkeleton__ItemEnum;
typedef struct KCoreConfigSkeleton__ItemEnum__Choice KCoreConfigSkeleton__ItemEnum__Choice;
typedef struct KCoreConfigSkeleton__ItemInt KCoreConfigSkeleton__ItemInt;
typedef struct KCoreConfigSkeleton__ItemIntList KCoreConfigSkeleton__ItemIntList;
typedef struct KCoreConfigSkeleton__ItemLongLong KCoreConfigSkeleton__ItemLongLong;
typedef struct KCoreConfigSkeleton__ItemPassword KCoreConfigSkeleton__ItemPassword;
typedef struct KCoreConfigSkeleton__ItemPath KCoreConfigSkeleton__ItemPath;
typedef struct KCoreConfigSkeleton__ItemPathList KCoreConfigSkeleton__ItemPathList;
typedef struct KCoreConfigSkeleton__ItemPoint KCoreConfigSkeleton__ItemPoint;
typedef struct KCoreConfigSkeleton__ItemPointF KCoreConfigSkeleton__ItemPointF;
typedef struct KCoreConfigSkeleton__ItemProperty KCoreConfigSkeleton__ItemProperty;
typedef struct KCoreConfigSkeleton__ItemRect KCoreConfigSkeleton__ItemRect;
typedef struct KCoreConfigSkeleton__ItemRectF KCoreConfigSkeleton__ItemRectF;
typedef struct KCoreConfigSkeleton__ItemSize KCoreConfigSkeleton__ItemSize;
typedef struct KCoreConfigSkeleton__ItemSizeF KCoreConfigSkeleton__ItemSizeF;
typedef struct KCoreConfigSkeleton__ItemString KCoreConfigSkeleton__ItemString;
typedef struct KCoreConfigSkeleton__ItemStringList KCoreConfigSkeleton__ItemStringList;
typedef struct KCoreConfigSkeleton__ItemUInt KCoreConfigSkeleton__ItemUInt;
typedef struct KCoreConfigSkeleton__ItemULongLong KCoreConfigSkeleton__ItemULongLong;
typedef struct KCoreConfigSkeleton__ItemUrl KCoreConfigSkeleton__ItemUrl;
typedef struct KCoreConfigSkeleton__ItemUrlList KCoreConfigSkeleton__ItemUrlList;
typedef struct KPropertySkeletonItem KPropertySkeletonItem;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
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
KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference);
KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference);
KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool(KCoreConfigSkeleton* self, const libqt_string name, bool* reference);
KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt(KCoreConfigSkeleton* self, const libqt_string name, int* reference);
KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference);
KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong(KCoreConfigSkeleton* self, const libqt_string name, long long* reference);
KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference);
KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble(KCoreConfigSkeleton* self, const libqt_string name, double* reference);
KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference);
KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference);
KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference);
KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference);
KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference);
KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference);
KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference);
KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference);
KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference);
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
KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton_AddItemString4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemPassword* KCoreConfigSkeleton_AddItemPassword4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath3(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemPath* KCoreConfigSkeleton_AddItemPath4(KCoreConfigSkeleton* self, const libqt_string name, libqt_string reference, const libqt_string defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty3(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference, const QVariant* defaultValue);
KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton_AddItemProperty4(KCoreConfigSkeleton* self, const libqt_string name, QVariant* reference, const QVariant* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool3(KCoreConfigSkeleton* self, const libqt_string name, bool* reference, bool defaultValue);
KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton_AddItemBool4(KCoreConfigSkeleton* self, const libqt_string name, bool* reference, bool defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt3(KCoreConfigSkeleton* self, const libqt_string name, int* reference, int defaultValue);
KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton_AddItemInt4(KCoreConfigSkeleton* self, const libqt_string name, int* reference, int defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt3(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference, unsigned int defaultValue);
KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton_AddItemUInt4(KCoreConfigSkeleton* self, const libqt_string name, unsigned int* reference, unsigned int defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong3(KCoreConfigSkeleton* self, const libqt_string name, long long* reference, long long defaultValue);
KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton_AddItemLongLong4(KCoreConfigSkeleton* self, const libqt_string name, long long* reference, long long defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong3(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference, unsigned long long defaultValue);
KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton_AddItemULongLong4(KCoreConfigSkeleton* self, const libqt_string name, unsigned long long* reference, unsigned long long defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble3(KCoreConfigSkeleton* self, const libqt_string name, double* reference, double defaultValue);
KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton_AddItemDouble4(KCoreConfigSkeleton* self, const libqt_string name, double* reference, double defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect3(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference, const QRect* defaultValue);
KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton_AddItemRect4(KCoreConfigSkeleton* self, const libqt_string name, QRect* reference, const QRect* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF3(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference, const QRectF* defaultValue);
KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton_AddItemRectF4(KCoreConfigSkeleton* self, const libqt_string name, QRectF* reference, const QRectF* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint3(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference, const QPoint* defaultValue);
KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton_AddItemPoint4(KCoreConfigSkeleton* self, const libqt_string name, QPoint* reference, const QPoint* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF3(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference, const QPointF* defaultValue);
KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton_AddItemPointF4(KCoreConfigSkeleton* self, const libqt_string name, QPointF* reference, const QPointF* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize3(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference, const QSize* defaultValue);
KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton_AddItemSize4(KCoreConfigSkeleton* self, const libqt_string name, QSize* reference, const QSize* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF3(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference, const QSizeF* defaultValue);
KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton_AddItemSizeF4(KCoreConfigSkeleton* self, const libqt_string name, QSizeF* reference, const QSizeF* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime3(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference, const QDateTime* defaultValue);
KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton_AddItemDateTime4(KCoreConfigSkeleton* self, const libqt_string name, QDateTime* reference, const QDateTime* defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList3(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue);
KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton_AddItemStringList4(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue, const libqt_string key);
KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList3(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue);
KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton_AddItemIntList4(KCoreConfigSkeleton* self, const libqt_string name, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue, const libqt_string key);
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

KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new(const libqt_string _group, const libqt_string _key, libqt_string reference);
KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new2(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue);
KCoreConfigSkeleton__ItemString* KCoreConfigSkeleton__ItemString_new3(const libqt_string _group, const libqt_string _key, libqt_string reference, const libqt_string defaultValue, int typeVal);
void KCoreConfigSkeleton__ItemString_WriteConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config);
void KCoreConfigSkeleton__ItemString_ReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config);
void KCoreConfigSkeleton__ItemString_SetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemString_IsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemString_Property(const KCoreConfigSkeleton__ItemString* self);
void KCoreConfigSkeleton__ItemString_OnWriteConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot);
void KCoreConfigSkeleton__ItemString_QBaseWriteConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config);
void KCoreConfigSkeleton__ItemString_OnReadConfig(KCoreConfigSkeleton__ItemString* self, intptr_t slot);
void KCoreConfigSkeleton__ItemString_QBaseReadConfig(KCoreConfigSkeleton__ItemString* self, KConfig* config);
void KCoreConfigSkeleton__ItemString_OnSetProperty(KCoreConfigSkeleton__ItemString* self, intptr_t slot);
void KCoreConfigSkeleton__ItemString_QBaseSetProperty(KCoreConfigSkeleton__ItemString* self, const QVariant* p);
void KCoreConfigSkeleton__ItemString_OnIsEqual(const KCoreConfigSkeleton__ItemString* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemString_QBaseIsEqual(const KCoreConfigSkeleton__ItemString* self, const QVariant* p);
void KCoreConfigSkeleton__ItemString_OnProperty(const KCoreConfigSkeleton__ItemString* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemString_QBaseProperty(const KCoreConfigSkeleton__ItemString* self);
void KCoreConfigSkeleton__ItemString_Delete(KCoreConfigSkeleton__ItemString* self);

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

KCoreConfigSkeleton__ItemUrl* KCoreConfigSkeleton__ItemUrl_new(const libqt_string _group, const libqt_string _key, QUrl* reference);
KCoreConfigSkeleton__ItemUrl* KCoreConfigSkeleton__ItemUrl_new2(const libqt_string _group, const libqt_string _key, QUrl* reference, const QUrl* defaultValue);
void KCoreConfigSkeleton__ItemUrl_WriteConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrl_ReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrl_SetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemUrl_IsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemUrl_Property(const KCoreConfigSkeleton__ItemUrl* self);
void KCoreConfigSkeleton__ItemUrl_OnWriteConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrl_QBaseWriteConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrl_OnReadConfig(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrl_QBaseReadConfig(KCoreConfigSkeleton__ItemUrl* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrl_OnSetProperty(KCoreConfigSkeleton__ItemUrl* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrl_QBaseSetProperty(KCoreConfigSkeleton__ItemUrl* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUrl_OnIsEqual(const KCoreConfigSkeleton__ItemUrl* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemUrl_QBaseIsEqual(const KCoreConfigSkeleton__ItemUrl* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUrl_OnProperty(const KCoreConfigSkeleton__ItemUrl* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemUrl_QBaseProperty(const KCoreConfigSkeleton__ItemUrl* self);
void KCoreConfigSkeleton__ItemUrl_Delete(KCoreConfigSkeleton__ItemUrl* self);

KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton__ItemProperty_new(const libqt_string _group, const libqt_string _key, QVariant* reference);
KCoreConfigSkeleton__ItemProperty* KCoreConfigSkeleton__ItemProperty_new2(const libqt_string _group, const libqt_string _key, QVariant* reference, const QVariant* defaultValue);
void KCoreConfigSkeleton__ItemProperty_ReadConfig(KCoreConfigSkeleton__ItemProperty* self, KConfig* config);
void KCoreConfigSkeleton__ItemProperty_SetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemProperty_IsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemProperty_Property(const KCoreConfigSkeleton__ItemProperty* self);
void KCoreConfigSkeleton__ItemProperty_OnReadConfig(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot);
void KCoreConfigSkeleton__ItemProperty_QBaseReadConfig(KCoreConfigSkeleton__ItemProperty* self, KConfig* config);
void KCoreConfigSkeleton__ItemProperty_OnSetProperty(KCoreConfigSkeleton__ItemProperty* self, intptr_t slot);
void KCoreConfigSkeleton__ItemProperty_QBaseSetProperty(KCoreConfigSkeleton__ItemProperty* self, const QVariant* p);
void KCoreConfigSkeleton__ItemProperty_OnIsEqual(const KCoreConfigSkeleton__ItemProperty* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemProperty_QBaseIsEqual(const KCoreConfigSkeleton__ItemProperty* self, const QVariant* p);
void KCoreConfigSkeleton__ItemProperty_OnProperty(const KCoreConfigSkeleton__ItemProperty* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemProperty_QBaseProperty(const KCoreConfigSkeleton__ItemProperty* self);
void KCoreConfigSkeleton__ItemProperty_Delete(KCoreConfigSkeleton__ItemProperty* self);

KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton__ItemBool_new(const libqt_string _group, const libqt_string _key, bool* reference);
KCoreConfigSkeleton__ItemBool* KCoreConfigSkeleton__ItemBool_new2(const libqt_string _group, const libqt_string _key, bool* reference, bool defaultValue);
void KCoreConfigSkeleton__ItemBool_ReadConfig(KCoreConfigSkeleton__ItemBool* self, KConfig* config);
void KCoreConfigSkeleton__ItemBool_SetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemBool_IsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemBool_Property(const KCoreConfigSkeleton__ItemBool* self);
void KCoreConfigSkeleton__ItemBool_OnReadConfig(KCoreConfigSkeleton__ItemBool* self, intptr_t slot);
void KCoreConfigSkeleton__ItemBool_QBaseReadConfig(KCoreConfigSkeleton__ItemBool* self, KConfig* config);
void KCoreConfigSkeleton__ItemBool_OnSetProperty(KCoreConfigSkeleton__ItemBool* self, intptr_t slot);
void KCoreConfigSkeleton__ItemBool_QBaseSetProperty(KCoreConfigSkeleton__ItemBool* self, const QVariant* p);
void KCoreConfigSkeleton__ItemBool_OnIsEqual(const KCoreConfigSkeleton__ItemBool* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemBool_QBaseIsEqual(const KCoreConfigSkeleton__ItemBool* self, const QVariant* p);
void KCoreConfigSkeleton__ItemBool_OnProperty(const KCoreConfigSkeleton__ItemBool* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemBool_QBaseProperty(const KCoreConfigSkeleton__ItemBool* self);
void KCoreConfigSkeleton__ItemBool_Delete(KCoreConfigSkeleton__ItemBool* self);

KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton__ItemInt_new(const libqt_string _group, const libqt_string _key, int* reference);
KCoreConfigSkeleton__ItemInt* KCoreConfigSkeleton__ItemInt_new2(const libqt_string _group, const libqt_string _key, int* reference, int defaultValue);
void KCoreConfigSkeleton__ItemInt_ReadConfig(KCoreConfigSkeleton__ItemInt* self, KConfig* config);
void KCoreConfigSkeleton__ItemInt_SetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemInt_IsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemInt_Property(const KCoreConfigSkeleton__ItemInt* self);
QVariant* KCoreConfigSkeleton__ItemInt_MinValue(const KCoreConfigSkeleton__ItemInt* self);
QVariant* KCoreConfigSkeleton__ItemInt_MaxValue(const KCoreConfigSkeleton__ItemInt* self);
void KCoreConfigSkeleton__ItemInt_OnReadConfig(KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
void KCoreConfigSkeleton__ItemInt_QBaseReadConfig(KCoreConfigSkeleton__ItemInt* self, KConfig* config);
void KCoreConfigSkeleton__ItemInt_OnSetProperty(KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
void KCoreConfigSkeleton__ItemInt_QBaseSetProperty(KCoreConfigSkeleton__ItemInt* self, const QVariant* p);
void KCoreConfigSkeleton__ItemInt_OnIsEqual(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemInt_QBaseIsEqual(const KCoreConfigSkeleton__ItemInt* self, const QVariant* p);
void KCoreConfigSkeleton__ItemInt_OnProperty(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemInt_QBaseProperty(const KCoreConfigSkeleton__ItemInt* self);
void KCoreConfigSkeleton__ItemInt_OnMinValue(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemInt_QBaseMinValue(const KCoreConfigSkeleton__ItemInt* self);
void KCoreConfigSkeleton__ItemInt_OnMaxValue(const KCoreConfigSkeleton__ItemInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemInt_QBaseMaxValue(const KCoreConfigSkeleton__ItemInt* self);
void KCoreConfigSkeleton__ItemInt_Delete(KCoreConfigSkeleton__ItemInt* self);

KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton__ItemLongLong_new(const libqt_string _group, const libqt_string _key, long long* reference);
KCoreConfigSkeleton__ItemLongLong* KCoreConfigSkeleton__ItemLongLong_new2(const libqt_string _group, const libqt_string _key, long long* reference, long long defaultValue);
void KCoreConfigSkeleton__ItemLongLong_ReadConfig(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config);
void KCoreConfigSkeleton__ItemLongLong_SetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemLongLong_IsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemLongLong_Property(const KCoreConfigSkeleton__ItemLongLong* self);
QVariant* KCoreConfigSkeleton__ItemLongLong_MinValue(const KCoreConfigSkeleton__ItemLongLong* self);
QVariant* KCoreConfigSkeleton__ItemLongLong_MaxValue(const KCoreConfigSkeleton__ItemLongLong* self);
void KCoreConfigSkeleton__ItemLongLong_SetMinValue(KCoreConfigSkeleton__ItemLongLong* self, long long minValue);
void KCoreConfigSkeleton__ItemLongLong_SetMaxValue(KCoreConfigSkeleton__ItemLongLong* self, long long maxValue);
void KCoreConfigSkeleton__ItemLongLong_OnReadConfig(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
void KCoreConfigSkeleton__ItemLongLong_QBaseReadConfig(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config);
void KCoreConfigSkeleton__ItemLongLong_OnSetProperty(KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
void KCoreConfigSkeleton__ItemLongLong_QBaseSetProperty(KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p);
void KCoreConfigSkeleton__ItemLongLong_OnIsEqual(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemLongLong_QBaseIsEqual(const KCoreConfigSkeleton__ItemLongLong* self, const QVariant* p);
void KCoreConfigSkeleton__ItemLongLong_OnProperty(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseProperty(const KCoreConfigSkeleton__ItemLongLong* self);
void KCoreConfigSkeleton__ItemLongLong_OnMinValue(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseMinValue(const KCoreConfigSkeleton__ItemLongLong* self);
void KCoreConfigSkeleton__ItemLongLong_OnMaxValue(const KCoreConfigSkeleton__ItemLongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemLongLong_QBaseMaxValue(const KCoreConfigSkeleton__ItemLongLong* self);
void KCoreConfigSkeleton__ItemLongLong_Delete(KCoreConfigSkeleton__ItemLongLong* self);

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

KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton__ItemUInt_new(const libqt_string _group, const libqt_string _key, unsigned int* reference);
KCoreConfigSkeleton__ItemUInt* KCoreConfigSkeleton__ItemUInt_new2(const libqt_string _group, const libqt_string _key, unsigned int* reference, unsigned int defaultValue);
void KCoreConfigSkeleton__ItemUInt_ReadConfig(KCoreConfigSkeleton__ItemUInt* self, KConfig* config);
void KCoreConfigSkeleton__ItemUInt_SetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemUInt_IsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemUInt_Property(const KCoreConfigSkeleton__ItemUInt* self);
QVariant* KCoreConfigSkeleton__ItemUInt_MinValue(const KCoreConfigSkeleton__ItemUInt* self);
QVariant* KCoreConfigSkeleton__ItemUInt_MaxValue(const KCoreConfigSkeleton__ItemUInt* self);
void KCoreConfigSkeleton__ItemUInt_SetMinValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int minValue);
void KCoreConfigSkeleton__ItemUInt_SetMaxValue(KCoreConfigSkeleton__ItemUInt* self, unsigned int maxValue);
void KCoreConfigSkeleton__ItemUInt_OnReadConfig(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUInt_QBaseReadConfig(KCoreConfigSkeleton__ItemUInt* self, KConfig* config);
void KCoreConfigSkeleton__ItemUInt_OnSetProperty(KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUInt_QBaseSetProperty(KCoreConfigSkeleton__ItemUInt* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUInt_OnIsEqual(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemUInt_QBaseIsEqual(const KCoreConfigSkeleton__ItemUInt* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUInt_OnProperty(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseProperty(const KCoreConfigSkeleton__ItemUInt* self);
void KCoreConfigSkeleton__ItemUInt_OnMinValue(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseMinValue(const KCoreConfigSkeleton__ItemUInt* self);
void KCoreConfigSkeleton__ItemUInt_OnMaxValue(const KCoreConfigSkeleton__ItemUInt* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemUInt_QBaseMaxValue(const KCoreConfigSkeleton__ItemUInt* self);
void KCoreConfigSkeleton__ItemUInt_Delete(KCoreConfigSkeleton__ItemUInt* self);

KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton__ItemULongLong_new(const libqt_string _group, const libqt_string _key, unsigned long long* reference);
KCoreConfigSkeleton__ItemULongLong* KCoreConfigSkeleton__ItemULongLong_new2(const libqt_string _group, const libqt_string _key, unsigned long long* reference, unsigned long long defaultValue);
void KCoreConfigSkeleton__ItemULongLong_ReadConfig(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config);
void KCoreConfigSkeleton__ItemULongLong_SetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemULongLong_IsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemULongLong_Property(const KCoreConfigSkeleton__ItemULongLong* self);
QVariant* KCoreConfigSkeleton__ItemULongLong_MinValue(const KCoreConfigSkeleton__ItemULongLong* self);
QVariant* KCoreConfigSkeleton__ItemULongLong_MaxValue(const KCoreConfigSkeleton__ItemULongLong* self);
void KCoreConfigSkeleton__ItemULongLong_SetMinValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long minValue);
void KCoreConfigSkeleton__ItemULongLong_SetMaxValue(KCoreConfigSkeleton__ItemULongLong* self, unsigned long long maxValue);
void KCoreConfigSkeleton__ItemULongLong_OnReadConfig(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
void KCoreConfigSkeleton__ItemULongLong_QBaseReadConfig(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config);
void KCoreConfigSkeleton__ItemULongLong_OnSetProperty(KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
void KCoreConfigSkeleton__ItemULongLong_QBaseSetProperty(KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p);
void KCoreConfigSkeleton__ItemULongLong_OnIsEqual(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemULongLong_QBaseIsEqual(const KCoreConfigSkeleton__ItemULongLong* self, const QVariant* p);
void KCoreConfigSkeleton__ItemULongLong_OnProperty(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseProperty(const KCoreConfigSkeleton__ItemULongLong* self);
void KCoreConfigSkeleton__ItemULongLong_OnMinValue(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseMinValue(const KCoreConfigSkeleton__ItemULongLong* self);
void KCoreConfigSkeleton__ItemULongLong_OnMaxValue(const KCoreConfigSkeleton__ItemULongLong* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemULongLong_QBaseMaxValue(const KCoreConfigSkeleton__ItemULongLong* self);
void KCoreConfigSkeleton__ItemULongLong_Delete(KCoreConfigSkeleton__ItemULongLong* self);

KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton__ItemDouble_new(const libqt_string _group, const libqt_string _key, double* reference);
KCoreConfigSkeleton__ItemDouble* KCoreConfigSkeleton__ItemDouble_new2(const libqt_string _group, const libqt_string _key, double* reference, double defaultValue);
void KCoreConfigSkeleton__ItemDouble_ReadConfig(KCoreConfigSkeleton__ItemDouble* self, KConfig* config);
void KCoreConfigSkeleton__ItemDouble_SetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemDouble_IsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemDouble_Property(const KCoreConfigSkeleton__ItemDouble* self);
QVariant* KCoreConfigSkeleton__ItemDouble_MinValue(const KCoreConfigSkeleton__ItemDouble* self);
QVariant* KCoreConfigSkeleton__ItemDouble_MaxValue(const KCoreConfigSkeleton__ItemDouble* self);
void KCoreConfigSkeleton__ItemDouble_SetMinValue(KCoreConfigSkeleton__ItemDouble* self, double minValue);
void KCoreConfigSkeleton__ItemDouble_SetMaxValue(KCoreConfigSkeleton__ItemDouble* self, double maxValue);
void KCoreConfigSkeleton__ItemDouble_OnReadConfig(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
void KCoreConfigSkeleton__ItemDouble_QBaseReadConfig(KCoreConfigSkeleton__ItemDouble* self, KConfig* config);
void KCoreConfigSkeleton__ItemDouble_OnSetProperty(KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
void KCoreConfigSkeleton__ItemDouble_QBaseSetProperty(KCoreConfigSkeleton__ItemDouble* self, const QVariant* p);
void KCoreConfigSkeleton__ItemDouble_OnIsEqual(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemDouble_QBaseIsEqual(const KCoreConfigSkeleton__ItemDouble* self, const QVariant* p);
void KCoreConfigSkeleton__ItemDouble_OnProperty(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseProperty(const KCoreConfigSkeleton__ItemDouble* self);
void KCoreConfigSkeleton__ItemDouble_OnMinValue(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseMinValue(const KCoreConfigSkeleton__ItemDouble* self);
void KCoreConfigSkeleton__ItemDouble_OnMaxValue(const KCoreConfigSkeleton__ItemDouble* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemDouble_QBaseMaxValue(const KCoreConfigSkeleton__ItemDouble* self);
void KCoreConfigSkeleton__ItemDouble_Delete(KCoreConfigSkeleton__ItemDouble* self);

KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton__ItemRect_new(const libqt_string _group, const libqt_string _key, QRect* reference);
KCoreConfigSkeleton__ItemRect* KCoreConfigSkeleton__ItemRect_new2(const libqt_string _group, const libqt_string _key, QRect* reference, const QRect* defaultValue);
void KCoreConfigSkeleton__ItemRect_ReadConfig(KCoreConfigSkeleton__ItemRect* self, KConfig* config);
void KCoreConfigSkeleton__ItemRect_SetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemRect_IsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemRect_Property(const KCoreConfigSkeleton__ItemRect* self);
void KCoreConfigSkeleton__ItemRect_OnReadConfig(KCoreConfigSkeleton__ItemRect* self, intptr_t slot);
void KCoreConfigSkeleton__ItemRect_QBaseReadConfig(KCoreConfigSkeleton__ItemRect* self, KConfig* config);
void KCoreConfigSkeleton__ItemRect_OnSetProperty(KCoreConfigSkeleton__ItemRect* self, intptr_t slot);
void KCoreConfigSkeleton__ItemRect_QBaseSetProperty(KCoreConfigSkeleton__ItemRect* self, const QVariant* p);
void KCoreConfigSkeleton__ItemRect_OnIsEqual(const KCoreConfigSkeleton__ItemRect* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemRect_QBaseIsEqual(const KCoreConfigSkeleton__ItemRect* self, const QVariant* p);
void KCoreConfigSkeleton__ItemRect_OnProperty(const KCoreConfigSkeleton__ItemRect* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemRect_QBaseProperty(const KCoreConfigSkeleton__ItemRect* self);
void KCoreConfigSkeleton__ItemRect_Delete(KCoreConfigSkeleton__ItemRect* self);

KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton__ItemRectF_new(const libqt_string _group, const libqt_string _key, QRectF* reference);
KCoreConfigSkeleton__ItemRectF* KCoreConfigSkeleton__ItemRectF_new2(const libqt_string _group, const libqt_string _key, QRectF* reference, const QRectF* defaultValue);
void KCoreConfigSkeleton__ItemRectF_ReadConfig(KCoreConfigSkeleton__ItemRectF* self, KConfig* config);
void KCoreConfigSkeleton__ItemRectF_SetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemRectF_IsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemRectF_Property(const KCoreConfigSkeleton__ItemRectF* self);
void KCoreConfigSkeleton__ItemRectF_OnReadConfig(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemRectF_QBaseReadConfig(KCoreConfigSkeleton__ItemRectF* self, KConfig* config);
void KCoreConfigSkeleton__ItemRectF_OnSetProperty(KCoreConfigSkeleton__ItemRectF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemRectF_QBaseSetProperty(KCoreConfigSkeleton__ItemRectF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemRectF_OnIsEqual(const KCoreConfigSkeleton__ItemRectF* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemRectF_QBaseIsEqual(const KCoreConfigSkeleton__ItemRectF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemRectF_OnProperty(const KCoreConfigSkeleton__ItemRectF* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemRectF_QBaseProperty(const KCoreConfigSkeleton__ItemRectF* self);
void KCoreConfigSkeleton__ItemRectF_Delete(KCoreConfigSkeleton__ItemRectF* self);

KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton__ItemPoint_new(const libqt_string _group, const libqt_string _key, QPoint* reference);
KCoreConfigSkeleton__ItemPoint* KCoreConfigSkeleton__ItemPoint_new2(const libqt_string _group, const libqt_string _key, QPoint* reference, const QPoint* defaultValue);
void KCoreConfigSkeleton__ItemPoint_ReadConfig(KCoreConfigSkeleton__ItemPoint* self, KConfig* config);
void KCoreConfigSkeleton__ItemPoint_SetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemPoint_IsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemPoint_Property(const KCoreConfigSkeleton__ItemPoint* self);
void KCoreConfigSkeleton__ItemPoint_OnReadConfig(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPoint_QBaseReadConfig(KCoreConfigSkeleton__ItemPoint* self, KConfig* config);
void KCoreConfigSkeleton__ItemPoint_OnSetProperty(KCoreConfigSkeleton__ItemPoint* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPoint_QBaseSetProperty(KCoreConfigSkeleton__ItemPoint* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPoint_OnIsEqual(const KCoreConfigSkeleton__ItemPoint* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemPoint_QBaseIsEqual(const KCoreConfigSkeleton__ItemPoint* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPoint_OnProperty(const KCoreConfigSkeleton__ItemPoint* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemPoint_QBaseProperty(const KCoreConfigSkeleton__ItemPoint* self);
void KCoreConfigSkeleton__ItemPoint_Delete(KCoreConfigSkeleton__ItemPoint* self);

KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton__ItemPointF_new(const libqt_string _group, const libqt_string _key, QPointF* reference);
KCoreConfigSkeleton__ItemPointF* KCoreConfigSkeleton__ItemPointF_new2(const libqt_string _group, const libqt_string _key, QPointF* reference, const QPointF* defaultValue);
void KCoreConfigSkeleton__ItemPointF_ReadConfig(KCoreConfigSkeleton__ItemPointF* self, KConfig* config);
void KCoreConfigSkeleton__ItemPointF_SetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemPointF_IsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemPointF_Property(const KCoreConfigSkeleton__ItemPointF* self);
void KCoreConfigSkeleton__ItemPointF_OnReadConfig(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPointF_QBaseReadConfig(KCoreConfigSkeleton__ItemPointF* self, KConfig* config);
void KCoreConfigSkeleton__ItemPointF_OnSetProperty(KCoreConfigSkeleton__ItemPointF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemPointF_QBaseSetProperty(KCoreConfigSkeleton__ItemPointF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPointF_OnIsEqual(const KCoreConfigSkeleton__ItemPointF* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemPointF_QBaseIsEqual(const KCoreConfigSkeleton__ItemPointF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemPointF_OnProperty(const KCoreConfigSkeleton__ItemPointF* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemPointF_QBaseProperty(const KCoreConfigSkeleton__ItemPointF* self);
void KCoreConfigSkeleton__ItemPointF_Delete(KCoreConfigSkeleton__ItemPointF* self);

KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton__ItemSize_new(const libqt_string _group, const libqt_string _key, QSize* reference);
KCoreConfigSkeleton__ItemSize* KCoreConfigSkeleton__ItemSize_new2(const libqt_string _group, const libqt_string _key, QSize* reference, const QSize* defaultValue);
void KCoreConfigSkeleton__ItemSize_ReadConfig(KCoreConfigSkeleton__ItemSize* self, KConfig* config);
void KCoreConfigSkeleton__ItemSize_SetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemSize_IsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemSize_Property(const KCoreConfigSkeleton__ItemSize* self);
void KCoreConfigSkeleton__ItemSize_OnReadConfig(KCoreConfigSkeleton__ItemSize* self, intptr_t slot);
void KCoreConfigSkeleton__ItemSize_QBaseReadConfig(KCoreConfigSkeleton__ItemSize* self, KConfig* config);
void KCoreConfigSkeleton__ItemSize_OnSetProperty(KCoreConfigSkeleton__ItemSize* self, intptr_t slot);
void KCoreConfigSkeleton__ItemSize_QBaseSetProperty(KCoreConfigSkeleton__ItemSize* self, const QVariant* p);
void KCoreConfigSkeleton__ItemSize_OnIsEqual(const KCoreConfigSkeleton__ItemSize* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemSize_QBaseIsEqual(const KCoreConfigSkeleton__ItemSize* self, const QVariant* p);
void KCoreConfigSkeleton__ItemSize_OnProperty(const KCoreConfigSkeleton__ItemSize* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemSize_QBaseProperty(const KCoreConfigSkeleton__ItemSize* self);
void KCoreConfigSkeleton__ItemSize_Delete(KCoreConfigSkeleton__ItemSize* self);

KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton__ItemSizeF_new(const libqt_string _group, const libqt_string _key, QSizeF* reference);
KCoreConfigSkeleton__ItemSizeF* KCoreConfigSkeleton__ItemSizeF_new2(const libqt_string _group, const libqt_string _key, QSizeF* reference, const QSizeF* defaultValue);
void KCoreConfigSkeleton__ItemSizeF_ReadConfig(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config);
void KCoreConfigSkeleton__ItemSizeF_SetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemSizeF_IsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemSizeF_Property(const KCoreConfigSkeleton__ItemSizeF* self);
void KCoreConfigSkeleton__ItemSizeF_OnReadConfig(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemSizeF_QBaseReadConfig(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config);
void KCoreConfigSkeleton__ItemSizeF_OnSetProperty(KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot);
void KCoreConfigSkeleton__ItemSizeF_QBaseSetProperty(KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemSizeF_OnIsEqual(const KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemSizeF_QBaseIsEqual(const KCoreConfigSkeleton__ItemSizeF* self, const QVariant* p);
void KCoreConfigSkeleton__ItemSizeF_OnProperty(const KCoreConfigSkeleton__ItemSizeF* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemSizeF_QBaseProperty(const KCoreConfigSkeleton__ItemSizeF* self);
void KCoreConfigSkeleton__ItemSizeF_Delete(KCoreConfigSkeleton__ItemSizeF* self);

KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton__ItemDateTime_new(const libqt_string _group, const libqt_string _key, QDateTime* reference);
KCoreConfigSkeleton__ItemDateTime* KCoreConfigSkeleton__ItemDateTime_new2(const libqt_string _group, const libqt_string _key, QDateTime* reference, const QDateTime* defaultValue);
void KCoreConfigSkeleton__ItemDateTime_ReadConfig(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config);
void KCoreConfigSkeleton__ItemDateTime_SetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemDateTime_IsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemDateTime_Property(const KCoreConfigSkeleton__ItemDateTime* self);
void KCoreConfigSkeleton__ItemDateTime_OnReadConfig(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot);
void KCoreConfigSkeleton__ItemDateTime_QBaseReadConfig(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config);
void KCoreConfigSkeleton__ItemDateTime_OnSetProperty(KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot);
void KCoreConfigSkeleton__ItemDateTime_QBaseSetProperty(KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p);
void KCoreConfigSkeleton__ItemDateTime_OnIsEqual(const KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemDateTime_QBaseIsEqual(const KCoreConfigSkeleton__ItemDateTime* self, const QVariant* p);
void KCoreConfigSkeleton__ItemDateTime_OnProperty(const KCoreConfigSkeleton__ItemDateTime* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemDateTime_QBaseProperty(const KCoreConfigSkeleton__ItemDateTime* self);
void KCoreConfigSkeleton__ItemDateTime_Delete(KCoreConfigSkeleton__ItemDateTime* self);

KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton__ItemStringList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference);
KCoreConfigSkeleton__ItemStringList* KCoreConfigSkeleton__ItemStringList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of libqt_string */ reference, const libqt_list /* of libqt_string */ defaultValue);
void KCoreConfigSkeleton__ItemStringList_ReadConfig(KCoreConfigSkeleton__ItemStringList* self, KConfig* config);
void KCoreConfigSkeleton__ItemStringList_SetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemStringList_IsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemStringList_Property(const KCoreConfigSkeleton__ItemStringList* self);
void KCoreConfigSkeleton__ItemStringList_OnReadConfig(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemStringList_QBaseReadConfig(KCoreConfigSkeleton__ItemStringList* self, KConfig* config);
void KCoreConfigSkeleton__ItemStringList_OnSetProperty(KCoreConfigSkeleton__ItemStringList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemStringList_QBaseSetProperty(KCoreConfigSkeleton__ItemStringList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemStringList_OnIsEqual(const KCoreConfigSkeleton__ItemStringList* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemStringList_QBaseIsEqual(const KCoreConfigSkeleton__ItemStringList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemStringList_OnProperty(const KCoreConfigSkeleton__ItemStringList* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemStringList_QBaseProperty(const KCoreConfigSkeleton__ItemStringList* self);
void KCoreConfigSkeleton__ItemStringList_Delete(KCoreConfigSkeleton__ItemStringList* self);

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

KCoreConfigSkeleton__ItemUrlList* KCoreConfigSkeleton__ItemUrlList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of QUrl* */ reference);
KCoreConfigSkeleton__ItemUrlList* KCoreConfigSkeleton__ItemUrlList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of QUrl* */ reference, const libqt_list /* of QUrl* */ defaultValue);
void KCoreConfigSkeleton__ItemUrlList_ReadConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrlList_WriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrlList_SetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemUrlList_IsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemUrlList_Property(const KCoreConfigSkeleton__ItemUrlList* self);
void KCoreConfigSkeleton__ItemUrlList_OnReadConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrlList_QBaseReadConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrlList_OnWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrlList_QBaseWriteConfig(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config);
void KCoreConfigSkeleton__ItemUrlList_OnSetProperty(KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemUrlList_QBaseSetProperty(KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUrlList_OnIsEqual(const KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemUrlList_QBaseIsEqual(const KCoreConfigSkeleton__ItemUrlList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemUrlList_OnProperty(const KCoreConfigSkeleton__ItemUrlList* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemUrlList_QBaseProperty(const KCoreConfigSkeleton__ItemUrlList* self);
void KCoreConfigSkeleton__ItemUrlList_Delete(KCoreConfigSkeleton__ItemUrlList* self);

KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton__ItemIntList_new(const libqt_string _group, const libqt_string _key, libqt_list /* of int */ reference);
KCoreConfigSkeleton__ItemIntList* KCoreConfigSkeleton__ItemIntList_new2(const libqt_string _group, const libqt_string _key, libqt_list /* of int */ reference, const libqt_list /* of int */ defaultValue);
void KCoreConfigSkeleton__ItemIntList_ReadConfig(KCoreConfigSkeleton__ItemIntList* self, KConfig* config);
void KCoreConfigSkeleton__ItemIntList_SetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p);
bool KCoreConfigSkeleton__ItemIntList_IsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p);
QVariant* KCoreConfigSkeleton__ItemIntList_Property(const KCoreConfigSkeleton__ItemIntList* self);
void KCoreConfigSkeleton__ItemIntList_OnReadConfig(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemIntList_QBaseReadConfig(KCoreConfigSkeleton__ItemIntList* self, KConfig* config);
void KCoreConfigSkeleton__ItemIntList_OnSetProperty(KCoreConfigSkeleton__ItemIntList* self, intptr_t slot);
void KCoreConfigSkeleton__ItemIntList_QBaseSetProperty(KCoreConfigSkeleton__ItemIntList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemIntList_OnIsEqual(const KCoreConfigSkeleton__ItemIntList* self, intptr_t slot);
bool KCoreConfigSkeleton__ItemIntList_QBaseIsEqual(const KCoreConfigSkeleton__ItemIntList* self, const QVariant* p);
void KCoreConfigSkeleton__ItemIntList_OnProperty(const KCoreConfigSkeleton__ItemIntList* self, intptr_t slot);
QVariant* KCoreConfigSkeleton__ItemIntList_QBaseProperty(const KCoreConfigSkeleton__ItemIntList* self);
void KCoreConfigSkeleton__ItemIntList_Delete(KCoreConfigSkeleton__ItemIntList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
