#include <QByteArray>
#include <QList>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaType>
#include <qmetaobjectbuilder_p.h>
#include "libqmetaobjectbuilder_p.h"
#include "libqmetaobjectbuilder_p.hxx"

QMetaObjectBuilder* QMetaObjectBuilder_new() {
    return new QMetaObjectBuilder();
}

QMetaObjectBuilder* QMetaObjectBuilder_new2(const QMetaObject* prototype) {
    return new QMetaObjectBuilder(prototype);
}

QMetaObjectBuilder* QMetaObjectBuilder_new3(const QMetaObject* prototype, int members) {
    return new QMetaObjectBuilder(prototype, static_cast<QMetaObjectBuilder::AddMembers>(members));
}

libqt_string QMetaObjectBuilder_ClassName(const QMetaObjectBuilder* self) {
    QByteArray _qb = self->className();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMetaObjectBuilder_SetClassName(QMetaObjectBuilder* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    self->setClassName(name_QByteArray);
}

QMetaObject* QMetaObjectBuilder_SuperClass(const QMetaObjectBuilder* self) {
    return (QMetaObject*)self->superClass();
}

void QMetaObjectBuilder_SetSuperClass(QMetaObjectBuilder* self, const QMetaObject* meta) {
    self->setSuperClass(meta);
}

void QMetaObjectBuilder_SetFlags(QMetaObjectBuilder* self, int32_t flags) {
    self->setFlags(static_cast<MetaObjectFlags>(flags));
}

int QMetaObjectBuilder_MethodCount(const QMetaObjectBuilder* self) {
    return self->methodCount();
}

int QMetaObjectBuilder_ConstructorCount(const QMetaObjectBuilder* self) {
    return self->constructorCount();
}

int QMetaObjectBuilder_PropertyCount(const QMetaObjectBuilder* self) {
    return self->propertyCount();
}

int QMetaObjectBuilder_EnumeratorCount(const QMetaObjectBuilder* self) {
    return self->enumeratorCount();
}

int QMetaObjectBuilder_ClassInfoCount(const QMetaObjectBuilder* self) {
    return self->classInfoCount();
}

int QMetaObjectBuilder_RelatedMetaObjectCount(const QMetaObjectBuilder* self) {
    return self->relatedMetaObjectCount();
}

QMetaMethodBuilder* QMetaObjectBuilder_AddMethod(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return new QMetaMethodBuilder(self->addMethod(signature_QByteArray));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddMethod2(QMetaObjectBuilder* self, const libqt_string signature, const libqt_string returnType) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    QByteArray returnType_QByteArray(returnType.data, returnType.len);
    return new QMetaMethodBuilder(self->addMethod(signature_QByteArray, returnType_QByteArray));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddMethod3(QMetaObjectBuilder* self, const QMetaMethod* prototype) {
    return new QMetaMethodBuilder(self->addMethod(*prototype));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddSlot(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return new QMetaMethodBuilder(self->addSlot(signature_QByteArray));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddSignal(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return new QMetaMethodBuilder(self->addSignal(signature_QByteArray));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddConstructor(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return new QMetaMethodBuilder(self->addConstructor(signature_QByteArray));
}

QMetaMethodBuilder* QMetaObjectBuilder_AddConstructor2(QMetaObjectBuilder* self, const QMetaMethod* prototype) {
    return new QMetaMethodBuilder(self->addConstructor(*prototype));
}

QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray typeVal_QByteArray(typeVal.data, typeVal.len);
    return new QMetaPropertyBuilder(self->addProperty(name_QByteArray, typeVal_QByteArray));
}

QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty2(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, QMetaType* metaType) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray typeVal_QByteArray(typeVal.data, typeVal.len);
    return new QMetaPropertyBuilder(self->addProperty(name_QByteArray, typeVal_QByteArray, *metaType));
}

QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty3(QMetaObjectBuilder* self, const QMetaProperty* prototype) {
    return new QMetaPropertyBuilder(self->addProperty(*prototype));
}

QMetaEnumBuilder* QMetaObjectBuilder_AddEnumerator(QMetaObjectBuilder* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new QMetaEnumBuilder(self->addEnumerator(name_QByteArray));
}

QMetaEnumBuilder* QMetaObjectBuilder_AddEnumerator2(QMetaObjectBuilder* self, const QMetaEnum* prototype) {
    return new QMetaEnumBuilder(self->addEnumerator(*prototype));
}

int QMetaObjectBuilder_AddClassInfo(QMetaObjectBuilder* self, const libqt_string name, const libqt_string value) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray value_QByteArray(value.data, value.len);
    return self->addClassInfo(name_QByteArray, value_QByteArray);
}

int QMetaObjectBuilder_AddRelatedMetaObject(QMetaObjectBuilder* self, const QMetaObject* meta) {
    return self->addRelatedMetaObject(meta);
}

void QMetaObjectBuilder_AddMetaObject(QMetaObjectBuilder* self, const QMetaObject* prototype) {
    self->addMetaObject(prototype);
}

QMetaMethodBuilder* QMetaObjectBuilder_Method(const QMetaObjectBuilder* self, int index) {
    return new QMetaMethodBuilder(self->method(static_cast<int>(index)));
}

QMetaMethodBuilder* QMetaObjectBuilder_Constructor(const QMetaObjectBuilder* self, int index) {
    return new QMetaMethodBuilder(self->constructor(static_cast<int>(index)));
}

QMetaPropertyBuilder* QMetaObjectBuilder_Property(const QMetaObjectBuilder* self, int index) {
    return new QMetaPropertyBuilder(self->property(static_cast<int>(index)));
}

QMetaEnumBuilder* QMetaObjectBuilder_Enumerator(const QMetaObjectBuilder* self, int index) {
    return new QMetaEnumBuilder(self->enumerator(static_cast<int>(index)));
}

QMetaObject* QMetaObjectBuilder_RelatedMetaObject(const QMetaObjectBuilder* self, int index) {
    return (QMetaObject*)self->relatedMetaObject(static_cast<int>(index));
}

libqt_string QMetaObjectBuilder_ClassInfoName(const QMetaObjectBuilder* self, int index) {
    QByteArray _qb = self->classInfoName(static_cast<int>(index));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QMetaObjectBuilder_ClassInfoValue(const QMetaObjectBuilder* self, int index) {
    QByteArray _qb = self->classInfoValue(static_cast<int>(index));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMetaObjectBuilder_RemoveMethod(QMetaObjectBuilder* self, int index) {
    self->removeMethod(static_cast<int>(index));
}

void QMetaObjectBuilder_RemoveConstructor(QMetaObjectBuilder* self, int index) {
    self->removeConstructor(static_cast<int>(index));
}

void QMetaObjectBuilder_RemoveProperty(QMetaObjectBuilder* self, int index) {
    self->removeProperty(static_cast<int>(index));
}

void QMetaObjectBuilder_RemoveEnumerator(QMetaObjectBuilder* self, int index) {
    self->removeEnumerator(static_cast<int>(index));
}

void QMetaObjectBuilder_RemoveClassInfo(QMetaObjectBuilder* self, int index) {
    self->removeClassInfo(static_cast<int>(index));
}

void QMetaObjectBuilder_RemoveRelatedMetaObject(QMetaObjectBuilder* self, int index) {
    self->removeRelatedMetaObject(static_cast<int>(index));
}

int QMetaObjectBuilder_IndexOfMethod(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return self->indexOfMethod(signature_QByteArray);
}

int QMetaObjectBuilder_IndexOfSignal(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return self->indexOfSignal(signature_QByteArray);
}

int QMetaObjectBuilder_IndexOfSlot(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return self->indexOfSlot(signature_QByteArray);
}

int QMetaObjectBuilder_IndexOfConstructor(QMetaObjectBuilder* self, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    return self->indexOfConstructor(signature_QByteArray);
}

int QMetaObjectBuilder_IndexOfProperty(QMetaObjectBuilder* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->indexOfProperty(name_QByteArray);
}

int QMetaObjectBuilder_IndexOfEnumerator(QMetaObjectBuilder* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->indexOfEnumerator(name_QByteArray);
}

int QMetaObjectBuilder_IndexOfClassInfo(QMetaObjectBuilder* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->indexOfClassInfo(name_QByteArray);
}

intptr_t QMetaObjectBuilder_StaticMetacallFunction(const QMetaObjectBuilder* self) {
    return reinterpret_cast<intptr_t>(self->staticMetacallFunction());
}

void QMetaObjectBuilder_SetStaticMetacallFunction(QMetaObjectBuilder* self, intptr_t value) {
    auto value_func = reinterpret_cast<QMetaObjectBuilder::StaticMetacallFunction>(value);
    self->setStaticMetacallFunction(value_func);
}

QMetaObject* QMetaObjectBuilder_ToMetaObject(const QMetaObjectBuilder* self) {
    return self->toMetaObject();
}

QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty32(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, int notifierId) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray typeVal_QByteArray(typeVal.data, typeVal.len);
    return new QMetaPropertyBuilder(self->addProperty(name_QByteArray, typeVal_QByteArray, static_cast<int>(notifierId)));
}

QMetaPropertyBuilder* QMetaObjectBuilder_AddProperty4(QMetaObjectBuilder* self, const libqt_string name, const libqt_string typeVal, QMetaType* metaType, int notifierId) {
    QByteArray name_QByteArray(name.data, name.len);
    QByteArray typeVal_QByteArray(typeVal.data, typeVal.len);
    return new QMetaPropertyBuilder(self->addProperty(name_QByteArray, typeVal_QByteArray, *metaType, static_cast<int>(notifierId)));
}

void QMetaObjectBuilder_AddMetaObject2(QMetaObjectBuilder* self, const QMetaObject* prototype, int members) {
    self->addMetaObject(prototype, static_cast<QMetaObjectBuilder::AddMembers>(members));
}

void QMetaObjectBuilder_Delete(QMetaObjectBuilder* self) {
    delete self;
}

QMetaMethodBuilder* QMetaMethodBuilder_new(const QMetaMethodBuilder* other) {
    return new QMetaMethodBuilder(*other);
}

QMetaMethodBuilder* QMetaMethodBuilder_new2(QMetaMethodBuilder* other) {
    return new QMetaMethodBuilder(std::move(*other));
}

QMetaMethodBuilder* QMetaMethodBuilder_new3() {
    return new QMetaMethodBuilder();
}

void QMetaMethodBuilder_CopyAssign(QMetaMethodBuilder* self, QMetaMethodBuilder* other) {
    *self = *other;
}

void QMetaMethodBuilder_MoveAssign(QMetaMethodBuilder* self, QMetaMethodBuilder* other) {
    *self = std::move(*other);
}

int QMetaMethodBuilder_Index(const QMetaMethodBuilder* self) {
    return self->index();
}

int QMetaMethodBuilder_MethodType(const QMetaMethodBuilder* self) {
    return static_cast<int>(self->methodType());
}

libqt_string QMetaMethodBuilder_Signature(const QMetaMethodBuilder* self) {
    QByteArray _qb = self->signature();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QMetaMethodBuilder_ReturnType(const QMetaMethodBuilder* self) {
    QByteArray _qb = self->returnType();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMetaMethodBuilder_SetReturnType(QMetaMethodBuilder* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->setReturnType(value_QByteArray);
}

libqt_list /* of libqt_string */ QMetaMethodBuilder_ParameterNames(const QMetaMethodBuilder* self) {
    QList<QByteArray> _ret = self->parameterNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QMetaMethodBuilder_SetParameterNames(QMetaMethodBuilder* self, const libqt_list /* of libqt_string */ value) {
    QList<QByteArray> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QByteArray value_arr_i_QByteArray(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QByteArray);
    }
    self->setParameterNames(value_QList);
}

libqt_string QMetaMethodBuilder_Tag(const QMetaMethodBuilder* self) {
    QByteArray _qb = self->tag();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMetaMethodBuilder_SetTag(QMetaMethodBuilder* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->setTag(value_QByteArray);
}

int QMetaMethodBuilder_Access(const QMetaMethodBuilder* self) {
    return static_cast<int>(self->access());
}

void QMetaMethodBuilder_SetAccess(QMetaMethodBuilder* self, int value) {
    self->setAccess(static_cast<QMetaMethod::Access>(value));
}

int QMetaMethodBuilder_Attributes(const QMetaMethodBuilder* self) {
    return self->attributes();
}

void QMetaMethodBuilder_SetAttributes(QMetaMethodBuilder* self, int value) {
    self->setAttributes(static_cast<int>(value));
}

void QMetaMethodBuilder_SetConst(QMetaMethodBuilder* self) {
    self->setConst();
}

int QMetaMethodBuilder_Revision(const QMetaMethodBuilder* self) {
    return self->revision();
}

void QMetaMethodBuilder_SetRevision(QMetaMethodBuilder* self, int revision) {
    self->setRevision(static_cast<int>(revision));
}

void QMetaMethodBuilder_SetConst1(QMetaMethodBuilder* self, bool methodIsConst) {
    self->setConst(methodIsConst);
}

void QMetaMethodBuilder_Delete(QMetaMethodBuilder* self) {
    delete self;
}

QMetaPropertyBuilder* QMetaPropertyBuilder_new(const QMetaPropertyBuilder* other) {
    return new QMetaPropertyBuilder(*other);
}

QMetaPropertyBuilder* QMetaPropertyBuilder_new2(QMetaPropertyBuilder* other) {
    return new QMetaPropertyBuilder(std::move(*other));
}

QMetaPropertyBuilder* QMetaPropertyBuilder_new3() {
    return new QMetaPropertyBuilder();
}

void QMetaPropertyBuilder_CopyAssign(QMetaPropertyBuilder* self, QMetaPropertyBuilder* other) {
    *self = *other;
}

void QMetaPropertyBuilder_MoveAssign(QMetaPropertyBuilder* self, QMetaPropertyBuilder* other) {
    *self = std::move(*other);
}

int QMetaPropertyBuilder_Index(const QMetaPropertyBuilder* self) {
    return self->index();
}

libqt_string QMetaPropertyBuilder_Name(const QMetaPropertyBuilder* self) {
    QByteArray _qb = self->name();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QMetaPropertyBuilder_Type(const QMetaPropertyBuilder* self) {
    QByteArray _qb = self->type();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QMetaPropertyBuilder_HasNotifySignal(const QMetaPropertyBuilder* self) {
    return self->hasNotifySignal();
}

QMetaMethodBuilder* QMetaPropertyBuilder_NotifySignal(const QMetaPropertyBuilder* self) {
    return new QMetaMethodBuilder(self->notifySignal());
}

void QMetaPropertyBuilder_SetNotifySignal(QMetaPropertyBuilder* self, const QMetaMethodBuilder* value) {
    self->setNotifySignal(*value);
}

void QMetaPropertyBuilder_RemoveNotifySignal(QMetaPropertyBuilder* self) {
    self->removeNotifySignal();
}

bool QMetaPropertyBuilder_IsReadable(const QMetaPropertyBuilder* self) {
    return self->isReadable();
}

bool QMetaPropertyBuilder_IsWritable(const QMetaPropertyBuilder* self) {
    return self->isWritable();
}

bool QMetaPropertyBuilder_IsResettable(const QMetaPropertyBuilder* self) {
    return self->isResettable();
}

bool QMetaPropertyBuilder_IsDesignable(const QMetaPropertyBuilder* self) {
    return self->isDesignable();
}

bool QMetaPropertyBuilder_IsScriptable(const QMetaPropertyBuilder* self) {
    return self->isScriptable();
}

bool QMetaPropertyBuilder_IsStored(const QMetaPropertyBuilder* self) {
    return self->isStored();
}

bool QMetaPropertyBuilder_IsUser(const QMetaPropertyBuilder* self) {
    return self->isUser();
}

bool QMetaPropertyBuilder_HasStdCppSet(const QMetaPropertyBuilder* self) {
    return self->hasStdCppSet();
}

bool QMetaPropertyBuilder_IsEnumOrFlag(const QMetaPropertyBuilder* self) {
    return self->isEnumOrFlag();
}

bool QMetaPropertyBuilder_IsConstant(const QMetaPropertyBuilder* self) {
    return self->isConstant();
}

bool QMetaPropertyBuilder_IsFinal(const QMetaPropertyBuilder* self) {
    return self->isFinal();
}

bool QMetaPropertyBuilder_IsAlias(const QMetaPropertyBuilder* self) {
    return self->isAlias();
}

bool QMetaPropertyBuilder_IsBindable(const QMetaPropertyBuilder* self) {
    return self->isBindable();
}

void QMetaPropertyBuilder_SetReadable(QMetaPropertyBuilder* self, bool value) {
    self->setReadable(value);
}

void QMetaPropertyBuilder_SetWritable(QMetaPropertyBuilder* self, bool value) {
    self->setWritable(value);
}

void QMetaPropertyBuilder_SetResettable(QMetaPropertyBuilder* self, bool value) {
    self->setResettable(value);
}

void QMetaPropertyBuilder_SetDesignable(QMetaPropertyBuilder* self, bool value) {
    self->setDesignable(value);
}

void QMetaPropertyBuilder_SetScriptable(QMetaPropertyBuilder* self, bool value) {
    self->setScriptable(value);
}

void QMetaPropertyBuilder_SetStored(QMetaPropertyBuilder* self, bool value) {
    self->setStored(value);
}

void QMetaPropertyBuilder_SetUser(QMetaPropertyBuilder* self, bool value) {
    self->setUser(value);
}

void QMetaPropertyBuilder_SetStdCppSet(QMetaPropertyBuilder* self, bool value) {
    self->setStdCppSet(value);
}

void QMetaPropertyBuilder_SetEnumOrFlag(QMetaPropertyBuilder* self, bool value) {
    self->setEnumOrFlag(value);
}

void QMetaPropertyBuilder_SetConstant(QMetaPropertyBuilder* self, bool value) {
    self->setConstant(value);
}

void QMetaPropertyBuilder_SetFinal(QMetaPropertyBuilder* self, bool value) {
    self->setFinal(value);
}

void QMetaPropertyBuilder_SetAlias(QMetaPropertyBuilder* self, bool value) {
    self->setAlias(value);
}

void QMetaPropertyBuilder_SetBindable(QMetaPropertyBuilder* self, bool value) {
    self->setBindable(value);
}

int QMetaPropertyBuilder_Revision(const QMetaPropertyBuilder* self) {
    return self->revision();
}

void QMetaPropertyBuilder_SetRevision(QMetaPropertyBuilder* self, int revision) {
    self->setRevision(static_cast<int>(revision));
}

void QMetaPropertyBuilder_Delete(QMetaPropertyBuilder* self) {
    delete self;
}

QMetaEnumBuilder* QMetaEnumBuilder_new(const QMetaEnumBuilder* other) {
    return new QMetaEnumBuilder(*other);
}

QMetaEnumBuilder* QMetaEnumBuilder_new2(QMetaEnumBuilder* other) {
    return new QMetaEnumBuilder(std::move(*other));
}

QMetaEnumBuilder* QMetaEnumBuilder_new3() {
    return new QMetaEnumBuilder();
}

void QMetaEnumBuilder_CopyAssign(QMetaEnumBuilder* self, QMetaEnumBuilder* other) {
    *self = *other;
}

void QMetaEnumBuilder_MoveAssign(QMetaEnumBuilder* self, QMetaEnumBuilder* other) {
    *self = std::move(*other);
}

int QMetaEnumBuilder_Index(const QMetaEnumBuilder* self) {
    return self->index();
}

libqt_string QMetaEnumBuilder_Name(const QMetaEnumBuilder* self) {
    QByteArray _qb = self->name();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QMetaEnumBuilder_EnumName(const QMetaEnumBuilder* self) {
    QByteArray _qb = self->enumName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMetaEnumBuilder_SetEnumName(QMetaEnumBuilder* self, const libqt_string alias) {
    QByteArray alias_QByteArray(alias.data, alias.len);
    self->setEnumName(alias_QByteArray);
}

QMetaType* QMetaEnumBuilder_MetaType(const QMetaEnumBuilder* self) {
    return new QMetaType(self->metaType());
}

void QMetaEnumBuilder_SetMetaType(QMetaEnumBuilder* self, QMetaType* metaType) {
    self->setMetaType(*metaType);
}

bool QMetaEnumBuilder_IsFlag(const QMetaEnumBuilder* self) {
    return self->isFlag();
}

void QMetaEnumBuilder_SetIsFlag(QMetaEnumBuilder* self, bool value) {
    self->setIsFlag(value);
}

bool QMetaEnumBuilder_IsScoped(const QMetaEnumBuilder* self) {
    return self->isScoped();
}

void QMetaEnumBuilder_SetIsScoped(QMetaEnumBuilder* self, bool value) {
    self->setIsScoped(value);
}

int QMetaEnumBuilder_KeyCount(const QMetaEnumBuilder* self) {
    return self->keyCount();
}

libqt_string QMetaEnumBuilder_Key(const QMetaEnumBuilder* self, int index) {
    QByteArray _qb = self->key(static_cast<int>(index));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

int QMetaEnumBuilder_Value(const QMetaEnumBuilder* self, int index) {
    return self->value(static_cast<int>(index));
}

int QMetaEnumBuilder_AddKey(QMetaEnumBuilder* self, const libqt_string name, int value) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->addKey(name_QByteArray, static_cast<int>(value));
}

void QMetaEnumBuilder_RemoveKey(QMetaEnumBuilder* self, int index) {
    self->removeKey(static_cast<int>(index));
}

void QMetaEnumBuilder_Delete(QMetaEnumBuilder* self) {
    delete self;
}

QMetaStringTable* QMetaStringTable_new(const libqt_string className) {
    QByteArray className_QByteArray(className.data, className.len);
    return new QMetaStringTable(className_QByteArray);
}

int QMetaStringTable_Enter(QMetaStringTable* self, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    return self->enter(value_QByteArray);
}

int QMetaStringTable_PreferredAlignment() {
    return QMetaStringTable::preferredAlignment();
}

int QMetaStringTable_BlobSize(const QMetaStringTable* self) {
    return self->blobSize();
}

void QMetaStringTable_WriteBlob(const QMetaStringTable* self, char* out) {
    self->writeBlob(out);
}

void QMetaStringTable_Delete(QMetaStringTable* self) {
    delete self;
}
