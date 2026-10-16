#pragma once
#ifndef EXTRAS_QTPRIVATE_LIBQMETAOBJECTBUILDER_P_H
#define EXTRAS_QTPRIVATE_LIBQMETAOBJECTBUILDER_P_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaEnumBuilder QMetaEnumBuilder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaMethodBuilder QMetaMethodBuilder;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObjectBuilder QMetaObjectBuilder;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaPropertyBuilder QMetaPropertyBuilder;
typedef struct QMetaStringTable QMetaStringTable;
typedef struct QMetaType QMetaType;
#endif

QMetaObjectBuilder* QMetaObjectBuilder_new();
QMetaObjectBuilder* QMetaObjectBuilder_new2(const QMetaObject* prototype);
QMetaObjectBuilder* QMetaObjectBuilder_new3(const QMetaObject* prototype, int members);
libqt_string QMetaObjectBuilder_ClassName(const QMetaObjectBuilder* self);
void QMetaObjectBuilder_SetClassName(QMetaObjectBuilder* self, const libqt_string name);
QMetaObject* QMetaObjectBuilder_SuperClass(const QMetaObjectBuilder* self);
void QMetaObjectBuilder_SetSuperClass(QMetaObjectBuilder* self, const QMetaObject* meta);
void QMetaObjectBuilder_SetFlags(QMetaObjectBuilder* self, int32_t flags);
int QMetaObjectBuilder_MethodCount(const QMetaObjectBuilder* self);
int QMetaObjectBuilder_ConstructorCount(const QMetaObjectBuilder* self);
int QMetaObjectBuilder_PropertyCount(const QMetaObjectBuilder* self);
int QMetaObjectBuilder_EnumeratorCount(const QMetaObjectBuilder* self);
int QMetaObjectBuilder_ClassInfoCount(const QMetaObjectBuilder* self);
int QMetaObjectBuilder_RelatedMetaObjectCount(const QMetaObjectBuilder* self);
QMetaMethodBuilder* QMetaObjectBuilder_AddMethod(QMetaObjectBuilder* self, const libqt_string signature);
QMetaMethodBuilder* QMetaObjectBuilder_AddMethod2(QMetaObjectBuilder* self, const libqt_string signature, const libqt_string returnType);
QMetaMethodBuilder* QMetaObjectBuilder_AddMethod3(QMetaObjectBuilder* self, const QMetaMethod* prototype);
QMetaMethodBuilder* QMetaObjectBuilder_AddSlot(QMetaObjectBuilder* self, const libqt_string signature);
QMetaMethodBuilder* QMetaObjectBuilder_AddSignal(QMetaObjectBuilder* self, const libqt_string signature);
QMetaMethodBuilder* QMetaObjectBuilder_AddConstructor(QMetaObjectBuilder* self, const libqt_string signature);
QMetaMethodBuilder* QMetaObjectBuilder_AddConstructor2(QMetaObjectBuilder* self, const QMetaMethod* prototype);
QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal);
QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty2(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, QMetaType* metaType);
QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty3(QMetaObjectBuilder* self, const QMetaProperty* prototype);
QMetaEnumBuilder* QMetaObjectBuilder_AddEnumerator(QMetaObjectBuilder* self, const libqt_string name);
QMetaEnumBuilder* QMetaObjectBuilder_AddEnumerator2(QMetaObjectBuilder* self, const QMetaEnum* prototype);
int QMetaObjectBuilder_AddClassInfo(QMetaObjectBuilder* self, const libqt_string name, const libqt_string value);
int QMetaObjectBuilder_AddRelatedMetaObject(QMetaObjectBuilder* self, const QMetaObject* meta);
void QMetaObjectBuilder_AddMetaObject(QMetaObjectBuilder* self, const QMetaObject* prototype);
QMetaMethodBuilder* QMetaObjectBuilder_Method(const QMetaObjectBuilder* self, int index);
QMetaMethodBuilder* QMetaObjectBuilder_Constructor(const QMetaObjectBuilder* self, int index);
QMetaPropertyBuilder* QMetaObjectBuilder_Property(const QMetaObjectBuilder* self, int index);
QMetaEnumBuilder* QMetaObjectBuilder_Enumerator(const QMetaObjectBuilder* self, int index);
QMetaObject* QMetaObjectBuilder_RelatedMetaObject(const QMetaObjectBuilder* self, int index);
libqt_string QMetaObjectBuilder_ClassInfoName(const QMetaObjectBuilder* self, int index);
libqt_string QMetaObjectBuilder_ClassInfoValue(const QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveMethod(QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveConstructor(QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveProperty(QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveEnumerator(QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveClassInfo(QMetaObjectBuilder* self, int index);
void QMetaObjectBuilder_RemoveRelatedMetaObject(QMetaObjectBuilder* self, int index);
int QMetaObjectBuilder_IndexOfMethod(QMetaObjectBuilder* self, const libqt_string signature);
int QMetaObjectBuilder_IndexOfSignal(QMetaObjectBuilder* self, const libqt_string signature);
int QMetaObjectBuilder_IndexOfSlot(QMetaObjectBuilder* self, const libqt_string signature);
int QMetaObjectBuilder_IndexOfConstructor(QMetaObjectBuilder* self, const libqt_string signature);
int QMetaObjectBuilder_IndexOfProperty(QMetaObjectBuilder* self, const libqt_string name);
int QMetaObjectBuilder_IndexOfEnumerator(QMetaObjectBuilder* self, const libqt_string name);
int QMetaObjectBuilder_IndexOfClassInfo(QMetaObjectBuilder* self, const libqt_string name);
intptr_t QMetaObjectBuilder_StaticMetacallFunction(const QMetaObjectBuilder* self);
void QMetaObjectBuilder_SetStaticMetacallFunction(QMetaObjectBuilder* self, intptr_t value);
QMetaObject* QMetaObjectBuilder_ToMetaObject(const QMetaObjectBuilder* self);
QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty32(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, int notifierId);
QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty4(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, QMetaType* metaType, int notifierId);
void QMetaObjectBuilder_AddMetaObject2(QMetaObjectBuilder* self, const QMetaObject* prototype, int members);
void QMetaObjectBuilder_Delete(QMetaObjectBuilder* self);

QMetaMethodBuilder* QMetaMethodBuilder_new(const QMetaMethodBuilder* other);
QMetaMethodBuilder* QMetaMethodBuilder_new2(QMetaMethodBuilder* other);
QMetaMethodBuilder* QMetaMethodBuilder_new3();
void QMetaMethodBuilder_CopyAssign(QMetaMethodBuilder* self, QMetaMethodBuilder* other);
void QMetaMethodBuilder_MoveAssign(QMetaMethodBuilder* self, QMetaMethodBuilder* other);
int QMetaMethodBuilder_Index(const QMetaMethodBuilder* self);
int QMetaMethodBuilder_MethodType(const QMetaMethodBuilder* self);
libqt_string QMetaMethodBuilder_Signature(const QMetaMethodBuilder* self);
libqt_string QMetaMethodBuilder_ReturnType(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetReturnType(QMetaMethodBuilder* self, const libqt_string value);
libqt_list /* of libqt_string */ QMetaMethodBuilder_ParameterNames(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetParameterNames(QMetaMethodBuilder* self, const libqt_list /* of libqt_string */ value);
libqt_string QMetaMethodBuilder_Tag(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetTag(QMetaMethodBuilder* self, const libqt_string value);
int QMetaMethodBuilder_Access(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetAccess(QMetaMethodBuilder* self, int value);
int QMetaMethodBuilder_Attributes(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetAttributes(QMetaMethodBuilder* self, int value);
void QMetaMethodBuilder_SetConst(QMetaMethodBuilder* self);
int QMetaMethodBuilder_Revision(const QMetaMethodBuilder* self);
void QMetaMethodBuilder_SetRevision(QMetaMethodBuilder* self, int revision);
void QMetaMethodBuilder_SetConst1(QMetaMethodBuilder* self, bool methodIsConst);
void QMetaMethodBuilder_Delete(QMetaMethodBuilder* self);

QMetaPropertyBuilder* QMetaPropertyBuilder_new(const QMetaPropertyBuilder* other);
QMetaPropertyBuilder* QMetaPropertyBuilder_new2(QMetaPropertyBuilder* other);
QMetaPropertyBuilder* QMetaPropertyBuilder_new3();
void QMetaPropertyBuilder_CopyAssign(QMetaPropertyBuilder* self, QMetaPropertyBuilder* other);
void QMetaPropertyBuilder_MoveAssign(QMetaPropertyBuilder* self, QMetaPropertyBuilder* other);
int QMetaPropertyBuilder_Index(const QMetaPropertyBuilder* self);
libqt_string QMetaPropertyBuilder_Name(const QMetaPropertyBuilder* self);
libqt_string QMetaPropertyBuilder_Type(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_HasNotifySignal(const QMetaPropertyBuilder* self);
QMetaMethodBuilder* QMetaPropertyBuilder_NotifySignal(const QMetaPropertyBuilder* self);
void QMetaPropertyBuilder_SetNotifySignal(QMetaPropertyBuilder* self, const QMetaMethodBuilder* value);
void QMetaPropertyBuilder_RemoveNotifySignal(QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsReadable(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsWritable(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsResettable(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsDesignable(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsScriptable(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsStored(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsUser(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_HasStdCppSet(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsEnumOrFlag(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsConstant(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsFinal(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsAlias(const QMetaPropertyBuilder* self);
bool QMetaPropertyBuilder_IsBindable(const QMetaPropertyBuilder* self);
void QMetaPropertyBuilder_SetReadable(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetWritable(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetResettable(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetDesignable(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetScriptable(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetStored(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetUser(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetStdCppSet(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetEnumOrFlag(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetConstant(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetFinal(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetAlias(QMetaPropertyBuilder* self, bool value);
void QMetaPropertyBuilder_SetBindable(QMetaPropertyBuilder* self, bool value);
int QMetaPropertyBuilder_Revision(const QMetaPropertyBuilder* self);
void QMetaPropertyBuilder_SetRevision(QMetaPropertyBuilder* self, int revision);
void QMetaPropertyBuilder_Delete(QMetaPropertyBuilder* self);

QMetaEnumBuilder* QMetaEnumBuilder_new(const QMetaEnumBuilder* other);
QMetaEnumBuilder* QMetaEnumBuilder_new2(QMetaEnumBuilder* other);
QMetaEnumBuilder* QMetaEnumBuilder_new3();
void QMetaEnumBuilder_CopyAssign(QMetaEnumBuilder* self, QMetaEnumBuilder* other);
void QMetaEnumBuilder_MoveAssign(QMetaEnumBuilder* self, QMetaEnumBuilder* other);
int QMetaEnumBuilder_Index(const QMetaEnumBuilder* self);
libqt_string QMetaEnumBuilder_Name(const QMetaEnumBuilder* self);
libqt_string QMetaEnumBuilder_EnumName(const QMetaEnumBuilder* self);
void QMetaEnumBuilder_SetEnumName(QMetaEnumBuilder* self, const libqt_string alias);
QMetaType* QMetaEnumBuilder_MetaType(const QMetaEnumBuilder* self);
void QMetaEnumBuilder_SetMetaType(QMetaEnumBuilder* self, QMetaType* metaType);
bool QMetaEnumBuilder_IsFlag(const QMetaEnumBuilder* self);
void QMetaEnumBuilder_SetIsFlag(QMetaEnumBuilder* self, bool value);
bool QMetaEnumBuilder_IsScoped(const QMetaEnumBuilder* self);
void QMetaEnumBuilder_SetIsScoped(QMetaEnumBuilder* self, bool value);
int QMetaEnumBuilder_KeyCount(const QMetaEnumBuilder* self);
libqt_string QMetaEnumBuilder_Key(const QMetaEnumBuilder* self, int index);
int QMetaEnumBuilder_Value(const QMetaEnumBuilder* self, int index);
int QMetaEnumBuilder_AddKey(QMetaEnumBuilder* self, const libqt_string name, int value);
void QMetaEnumBuilder_RemoveKey(QMetaEnumBuilder* self, int index);
void QMetaEnumBuilder_Delete(QMetaEnumBuilder* self);

QMetaStringTable* QMetaStringTable_new(const libqt_string className);
int QMetaStringTable_Enter(QMetaStringTable* self, const libqt_string value);
int QMetaStringTable_PreferredAlignment();
int QMetaStringTable_BlobSize(const QMetaStringTable* self);
void QMetaStringTable_WriteBlob(const QMetaStringTable* self, char* out);
void QMetaStringTable_Delete(QMetaStringTable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
