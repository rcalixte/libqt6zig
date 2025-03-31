#pragma once
#ifndef SRCC_LIBQOBJECTDEFS_H
#define SRCC_LIBQOBJECTDEFS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Data)
typedef QMetaObject::Data QMetaObject__Data;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData)
typedef QMetaObject::SuperData QMetaObject__SuperData;
#endif
#else
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMetaObject__Data QMetaObject__Data;
typedef struct QMetaObject__SuperData QMetaObject__SuperData;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QMethodRawArguments QMethodRawArguments;
typedef struct QObject QObject;
#endif

#ifdef __cplusplus
typedef QMetaObject::Call Call;                                               // C++ enum
typedef QMetaObject::Connection::RestrictedBool ConnectionRestrictedBool;     // C++ QFlags
typedef QMetaObject::Data::StaticMetacallFunction DataStaticMetacallFunction; // C++ QFlags
typedef QMetaObject::SuperData::Getter SuperDataGetter;                       // C++ QFlags
#else
typedef int Call; // C ABI enum
#endif

QGenericArgument* QGenericArgument_new(QGenericArgument* other);
QGenericArgument* QGenericArgument_new2(QGenericArgument* other);
QGenericArgument* QGenericArgument_new3();
QGenericArgument* QGenericArgument_new4(QGenericArgument* param1);
QGenericArgument* QGenericArgument_new5(const char* aName);
QGenericArgument* QGenericArgument_new6(const char* aName, const void* aData);
void QGenericArgument_CopyAssign(QGenericArgument* self, QGenericArgument* other);
void QGenericArgument_MoveAssign(QGenericArgument* self, QGenericArgument* other);
void* QGenericArgument_Data(const QGenericArgument* self);
const char* QGenericArgument_Name(const QGenericArgument* self);
void QGenericArgument_Delete(QGenericArgument* self);

QGenericReturnArgument* QGenericReturnArgument_new(QGenericReturnArgument* other);
QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* other);
QGenericReturnArgument* QGenericReturnArgument_new3();
QGenericReturnArgument* QGenericReturnArgument_new4(QGenericReturnArgument* param1);
QGenericReturnArgument* QGenericReturnArgument_new5(const char* aName);
QGenericReturnArgument* QGenericReturnArgument_new6(const char* aName, void* aData);
void QGenericReturnArgument_CopyAssign(QGenericReturnArgument* self, QGenericReturnArgument* other);
void QGenericReturnArgument_MoveAssign(QGenericReturnArgument* self, QGenericReturnArgument* other);
void QGenericReturnArgument_Delete(QGenericReturnArgument* self);

QMetaObject* QMetaObject_new();
QMetaObject* QMetaObject_new2(QMetaObject* param1);
const char* QMetaObject_ClassName(const QMetaObject* self);
QMetaObject* QMetaObject_SuperClass(const QMetaObject* self);
bool QMetaObject_Inherits(const QMetaObject* self, QMetaObject* metaObject);
QObject* QMetaObject_Cast(const QMetaObject* self, QObject* obj);
QObject* QMetaObject_CastWithObj(const QMetaObject* self, QObject* obj);
libqt_string QMetaObject_Tr(const QMetaObject* self, const char* s, const char* c);
QMetaType* QMetaObject_MetaType(const QMetaObject* self);
int QMetaObject_MethodOffset(const QMetaObject* self);
int QMetaObject_EnumeratorOffset(const QMetaObject* self);
int QMetaObject_PropertyOffset(const QMetaObject* self);
int QMetaObject_ClassInfoOffset(const QMetaObject* self);
int QMetaObject_ConstructorCount(const QMetaObject* self);
int QMetaObject_MethodCount(const QMetaObject* self);
int QMetaObject_EnumeratorCount(const QMetaObject* self);
int QMetaObject_PropertyCount(const QMetaObject* self);
int QMetaObject_ClassInfoCount(const QMetaObject* self);
int QMetaObject_IndexOfConstructor(const QMetaObject* self, const char* constructor);
int QMetaObject_IndexOfMethod(const QMetaObject* self, const char* method);
int QMetaObject_IndexOfSignal(const QMetaObject* self, const char* signal);
int QMetaObject_IndexOfSlot(const QMetaObject* self, const char* slot);
int QMetaObject_IndexOfEnumerator(const QMetaObject* self, const char* name);
int QMetaObject_IndexOfProperty(const QMetaObject* self, const char* name);
int QMetaObject_IndexOfClassInfo(const QMetaObject* self, const char* name);
QMetaMethod* QMetaObject_Constructor(const QMetaObject* self, int index);
QMetaMethod* QMetaObject_Method(const QMetaObject* self, int index);
QMetaEnum* QMetaObject_Enumerator(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_Property(const QMetaObject* self, int index);
QMetaClassInfo* QMetaObject_ClassInfo(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_UserProperty(const QMetaObject* self);
bool QMetaObject_CheckConnectArgs(const char* signal, const char* method);
bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method);
libqt_string QMetaObject_NormalizedSignature(const char* method);
libqt_string QMetaObject_NormalizedType(const char* typeVal);
QMetaObject__Connection* QMetaObject_Connect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_Disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_DisconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index);
void QMetaObject_ConnectSlotsByName(QObject* o);
void QMetaObject_Activate(QObject* sender, int signal_index, void** argv);
void QMetaObject_Activate2(QObject* sender, QMetaObject* param2, int local_signal_index, void** argv);
void QMetaObject_Activate3(QObject* sender, int signal_offset, int local_signal_index, void** argv);
bool QMetaObject_InvokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal);
bool QMetaObject_InvokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* retVal);
bool QMetaObject_InvokeMethod3(QObject* obj, const char* member, int typeVal);
bool QMetaObject_InvokeMethod4(QObject* obj, const char* member);
QObject* QMetaObject_NewInstance(const QMetaObject* self);
int QMetaObject_StaticMetacall(const QMetaObject* self, int param1, int param2, void** param3);
int QMetaObject_Metacall(QObject* param1, int param2, int param3, void** param4);
libqt_string QMetaObject_Tr3(const QMetaObject* self, const char* s, const char* c, int n);
QMetaObject__Connection* QMetaObject_Connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal);
QMetaObject__Connection* QMetaObject_Connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal, int* types);
bool QMetaObject_InvokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod42(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod52(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod62(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod72(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod82(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod92(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod102(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod112(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod122(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod132(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod43(QObject* obj, const char* member, int typeVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod53(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod63(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod73(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod83(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod93(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod103(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod113(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod123(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod133(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod32(QObject* obj, const char* member, QGenericArgument* val0);
bool QMetaObject_InvokeMethod44(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod54(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod64(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod74(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod84(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod94(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod104(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod114(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod124(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
QObject* QMetaObject_NewInstance1(const QMetaObject* self, QGenericArgument* val0);
QObject* QMetaObject_NewInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1);
QObject* QMetaObject_NewInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
QObject* QMetaObject_NewInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
QObject* QMetaObject_NewInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
QObject* QMetaObject_NewInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
QObject* QMetaObject_NewInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
QObject* QMetaObject_NewInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
QObject* QMetaObject_NewInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
QObject* QMetaObject_NewInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaObject_Delete(QMetaObject* self);

QMetaObject__Connection* QMetaObject__Connection_new();
QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other);
void QMetaObject__Connection_OperatorAssign(QMetaObject__Connection* self, QMetaObject__Connection* other);
void QMetaObject__Connection_Swap(QMetaObject__Connection* self, QMetaObject__Connection* other);
void QMetaObject__Connection_Delete(QMetaObject__Connection* self);

QMetaObject__SuperData* QMetaObject__SuperData_new();
QMetaObject__SuperData* QMetaObject__SuperData_new2(QMetaObject* mo);
QMetaObject__SuperData* QMetaObject__SuperData_new3(QMetaObject__SuperData* param1);
QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(const QMetaObject__SuperData* self);
QMetaObject* QMetaObject__SuperData_ToConstQMetaObjectMultiply(const QMetaObject__SuperData* self);
void QMetaObject__SuperData_OperatorAssign(QMetaObject__SuperData* self, QMetaObject__SuperData* param1);
void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self);

QMetaObject__Data* QMetaObject__Data_new();
QMetaObject__Data* QMetaObject__Data_new2(QMetaObject__Data* param1);
void QMetaObject__Data_OperatorAssign(QMetaObject__Data* self, QMetaObject__Data* param1);
void QMetaObject__Data_Delete(QMetaObject__Data* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
