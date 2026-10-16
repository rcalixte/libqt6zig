const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaEnum = @import("libqt6").QMetaEnum;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaProperty = @import("libqt6").QMetaProperty;
const QMetaType = @import("libqt6").QMetaType;
const QObject = @import("libqt6").QObject;
const qmetaobject_enums = @import("../libqmetaobject.zig").enums;
const qmetaobjectbuilder_p_enums = enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html)
pub const QMetaObjectBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaObjectBuilder,

    pub const _is_QMetaObjectBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaObjectBuilder object in C++ memory
    ///
    pub fn new() QMetaObjectBuilder {
        return .{ .ptr = qtc.QMetaObjectBuilder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaObjectBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` prototype: QMetaObject `
    ///
    pub fn new2(prototype: anytype) QMetaObjectBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObjectBuilder_new2(@ptrCast(prototype.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaObjectBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` prototype: QMetaObject `
    ///
    /// ` members: flag of qmetaobjectbuilder_p_enums.AddMember `
    ///
    pub fn new3(prototype: anytype, members: i32) QMetaObjectBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObjectBuilder_new3(@ptrCast(prototype.ptr), @bitCast(members)) };
    }

    /// ### DEPRECATED: Use `className` instead
    ///
    pub const ClassName = className;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#className)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn className(self: QMetaObjectBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaObjectBuilder_ClassName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaObjectBuilder.className: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setClassName` instead
    ///
    pub const SetClassName = setClassName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setClassName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setClassName(self: QMetaObjectBuilder, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QMetaObjectBuilder_SetClassName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `superClass` instead
    ///
    pub const SuperClass = superClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#superClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn superClass(self: QMetaObjectBuilder) QMetaObject {
        return .{ .ptr = qtc.QMetaObjectBuilder_SuperClass(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSuperClass` instead
    ///
    pub const SetSuperClass = setSuperClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setSuperClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` meta: QMetaObject `
    ///
    pub fn setSuperClass(self: QMetaObjectBuilder, meta: anytype) void {
        comptime _ = @TypeOf(meta)._is_QMetaObject;
        qtc.QMetaObjectBuilder_SetSuperClass(@ptrCast(self.ptr), @ptrCast(meta.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` flags: MetaObjectFlag `
    ///
    pub fn setFlags(self: QMetaObjectBuilder, flags: i32) void {
        qtc.QMetaObjectBuilder_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `methodCount` instead
    ///
    pub const MethodCount = methodCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#methodCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn methodCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_MethodCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constructorCount` instead
    ///
    pub const ConstructorCount = constructorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#constructorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn constructorCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_ConstructorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn propertyCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enumeratorCount` instead
    ///
    pub const EnumeratorCount = enumeratorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#enumeratorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn enumeratorCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_EnumeratorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `classInfoCount` instead
    ///
    pub const ClassInfoCount = classInfoCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn classInfoCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_ClassInfoCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `relatedMetaObjectCount` instead
    ///
    pub const RelatedMetaObjectCount = relatedMetaObjectCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#relatedMetaObjectCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn relatedMetaObjectCount(self: QMetaObjectBuilder) i32 {
        return qtc.QMetaObjectBuilder_RelatedMetaObjectCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addMethod` instead
    ///
    pub const AddMethod = addMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn addMethod(self: QMetaObjectBuilder, signature: []const u8) QMetaMethodBuilder {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddMethod(@ptrCast(self.ptr), signature_str) };
    }

    /// ### DEPRECATED: Use `addMethod2` instead
    ///
    pub const AddMethod2 = addMethod2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` returnType: []const u8 `
    ///
    pub fn addMethod2(self: QMetaObjectBuilder, signature: []const u8, returnType: []const u8) QMetaMethodBuilder {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        const returnType_str = qtc.libqt_string{
            .len = returnType.len,
            .data = returnType.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddMethod2(@ptrCast(self.ptr), signature_str, returnType_str) };
    }

    /// ### DEPRECATED: Use `addMethod3` instead
    ///
    pub const AddMethod3 = addMethod3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaMethod `
    ///
    pub fn addMethod3(self: QMetaObjectBuilder, prototype: anytype) QMetaMethodBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddMethod3(@ptrCast(self.ptr), @ptrCast(prototype.ptr)) };
    }

    /// ### DEPRECATED: Use `addSlot` instead
    ///
    pub const AddSlot = addSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn addSlot(self: QMetaObjectBuilder, signature: []const u8) QMetaMethodBuilder {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddSlot(@ptrCast(self.ptr), signature_str) };
    }

    /// ### DEPRECATED: Use `addSignal` instead
    ///
    pub const AddSignal = addSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn addSignal(self: QMetaObjectBuilder, signature: []const u8) QMetaMethodBuilder {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddSignal(@ptrCast(self.ptr), signature_str) };
    }

    /// ### DEPRECATED: Use `addConstructor` instead
    ///
    pub const AddConstructor = addConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn addConstructor(self: QMetaObjectBuilder, signature: []const u8) QMetaMethodBuilder {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddConstructor(@ptrCast(self.ptr), signature_str) };
    }

    /// ### DEPRECATED: Use `addConstructor2` instead
    ///
    pub const AddConstructor2 = addConstructor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaMethod `
    ///
    pub fn addConstructor2(self: QMetaObjectBuilder, prototype: anytype) QMetaMethodBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddConstructor2(@ptrCast(self.ptr), @ptrCast(prototype.ptr)) };
    }

    /// ### DEPRECATED: Use `addProperty` instead
    ///
    pub const AddProperty = addProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn addProperty(self: QMetaObjectBuilder, name: []const u8, typeVal: []const u8) QMetaPropertyBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddProperty(@ptrCast(self.ptr), name_str, typeVal_str) };
    }

    /// ### DEPRECATED: Use `addProperty2` instead
    ///
    pub const AddProperty2 = addProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` metaType: QMetaType `
    ///
    pub fn addProperty2(self: QMetaObjectBuilder, name: []const u8, typeVal: []const u8, metaType: anytype) QMetaPropertyBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        comptime _ = @TypeOf(metaType)._is_QMetaType;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddProperty2(@ptrCast(self.ptr), name_str, typeVal_str, @ptrCast(metaType.ptr)) };
    }

    /// ### DEPRECATED: Use `addProperty3` instead
    ///
    pub const AddProperty3 = addProperty3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaProperty `
    ///
    pub fn addProperty3(self: QMetaObjectBuilder, prototype: anytype) QMetaPropertyBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaProperty;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddProperty3(@ptrCast(self.ptr), @ptrCast(prototype.ptr)) };
    }

    /// ### DEPRECATED: Use `addEnumerator` instead
    ///
    pub const AddEnumerator = addEnumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addEnumerator(self: QMetaObjectBuilder, name: []const u8) QMetaEnumBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddEnumerator(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addEnumerator2` instead
    ///
    pub const AddEnumerator2 = addEnumerator2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaEnum `
    ///
    pub fn addEnumerator2(self: QMetaObjectBuilder, prototype: anytype) QMetaEnumBuilder {
        comptime _ = @TypeOf(prototype)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddEnumerator2(@ptrCast(self.ptr), @ptrCast(prototype.ptr)) };
    }

    /// ### DEPRECATED: Use `addClassInfo` instead
    ///
    pub const AddClassInfo = addClassInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addClassInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn addClassInfo(self: QMetaObjectBuilder, name: []const u8, value: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.QMetaObjectBuilder_AddClassInfo(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `addRelatedMetaObject` instead
    ///
    pub const AddRelatedMetaObject = addRelatedMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addRelatedMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` meta: QMetaObject `
    ///
    pub fn addRelatedMetaObject(self: QMetaObjectBuilder, meta: anytype) i32 {
        comptime _ = @TypeOf(meta)._is_QMetaObject;
        return qtc.QMetaObjectBuilder_AddRelatedMetaObject(@ptrCast(self.ptr), @ptrCast(meta.ptr));
    }

    /// ### DEPRECATED: Use `addMetaObject` instead
    ///
    pub const AddMetaObject = addMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaObject `
    ///
    pub fn addMetaObject(self: QMetaObjectBuilder, prototype: anytype) void {
        comptime _ = @TypeOf(prototype)._is_QMetaObject;
        qtc.QMetaObjectBuilder_AddMetaObject(@ptrCast(self.ptr), @ptrCast(prototype.ptr));
    }

    /// ### DEPRECATED: Use `method` instead
    ///
    pub const Method = method;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn method(self: QMetaObjectBuilder, index: i32) QMetaMethodBuilder {
        return .{ .ptr = qtc.QMetaObjectBuilder_Method(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `constructor` instead
    ///
    pub const Constructor = constructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#constructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn constructor(self: QMetaObjectBuilder, index: i32) QMetaMethodBuilder {
        return .{ .ptr = qtc.QMetaObjectBuilder_Constructor(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn property(self: QMetaObjectBuilder, index: i32) QMetaPropertyBuilder {
        return .{ .ptr = qtc.QMetaObjectBuilder_Property(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `enumerator` instead
    ///
    pub const Enumerator = enumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#enumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn enumerator(self: QMetaObjectBuilder, index: i32) QMetaEnumBuilder {
        return .{ .ptr = qtc.QMetaObjectBuilder_Enumerator(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `relatedMetaObject` instead
    ///
    pub const RelatedMetaObject = relatedMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#relatedMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn relatedMetaObject(self: QMetaObjectBuilder, index: i32) QMetaObject {
        return .{ .ptr = qtc.QMetaObjectBuilder_RelatedMetaObject(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `classInfoName` instead
    ///
    pub const ClassInfoName = classInfoName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn classInfoName(self: QMetaObjectBuilder, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QMetaObjectBuilder_ClassInfoName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaObjectBuilder.classInfoName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `classInfoValue` instead
    ///
    pub const ClassInfoValue = classInfoValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn classInfoValue(self: QMetaObjectBuilder, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QMetaObjectBuilder_ClassInfoValue(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaObjectBuilder.classInfoValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `removeMethod` instead
    ///
    pub const RemoveMethod = removeMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeMethod(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveMethod(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeConstructor` instead
    ///
    pub const RemoveConstructor = removeConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeConstructor(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveConstructor(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeProperty` instead
    ///
    pub const RemoveProperty = removeProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeProperty(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveProperty(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeEnumerator` instead
    ///
    pub const RemoveEnumerator = removeEnumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeEnumerator(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveEnumerator(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeClassInfo` instead
    ///
    pub const RemoveClassInfo = removeClassInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeClassInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeClassInfo(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveClassInfo(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removeRelatedMetaObject` instead
    ///
    pub const RemoveRelatedMetaObject = removeRelatedMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeRelatedMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` index: i32 `
    ///
    pub fn removeRelatedMetaObject(self: QMetaObjectBuilder, index: i32) void {
        qtc.QMetaObjectBuilder_RemoveRelatedMetaObject(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `indexOfMethod` instead
    ///
    pub const IndexOfMethod = indexOfMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn indexOfMethod(self: QMetaObjectBuilder, signature: []const u8) i32 {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfMethod(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `indexOfSignal` instead
    ///
    pub const IndexOfSignal = indexOfSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn indexOfSignal(self: QMetaObjectBuilder, signature: []const u8) i32 {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfSignal(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `indexOfSlot` instead
    ///
    pub const IndexOfSlot = indexOfSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn indexOfSlot(self: QMetaObjectBuilder, signature: []const u8) i32 {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfSlot(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `indexOfConstructor` instead
    ///
    pub const IndexOfConstructor = indexOfConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn indexOfConstructor(self: QMetaObjectBuilder, signature: []const u8) i32 {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfConstructor(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `indexOfProperty` instead
    ///
    pub const IndexOfProperty = indexOfProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOfProperty(self: QMetaObjectBuilder, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `indexOfEnumerator` instead
    ///
    pub const IndexOfEnumerator = indexOfEnumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOfEnumerator(self: QMetaObjectBuilder, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfEnumerator(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `indexOfClassInfo` instead
    ///
    pub const IndexOfClassInfo = indexOfClassInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfClassInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOfClassInfo(self: QMetaObjectBuilder, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QMetaObjectBuilder_IndexOfClassInfo(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `staticMetacallFunction` instead
    ///
    pub const StaticMetacallFunction = staticMetacallFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#staticMetacallFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: QObject, funcparam2: qobjectdefs_enums.Call, funcparam3: i32, funcparam4: *?*anyopaque) callconv(.c) void `
    ///
    pub fn staticMetacallFunction(self: QMetaObjectBuilder) ?*const fn (QObject, i32, i32, *?*anyopaque) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QMetaObjectBuilder_StaticMetacallFunction(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setStaticMetacallFunction` instead
    ///
    pub const SetStaticMetacallFunction = setStaticMetacallFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setStaticMetacallFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` value: *const fn (funcparam1: QObject, funcparam2: qobjectdefs_enums.Call, funcparam3: i32, funcparam4: *?*anyopaque) callconv(.c) void `
    ///
    pub fn setStaticMetacallFunction(self: QMetaObjectBuilder, value: *const fn (QObject, i32, i32, *?*anyopaque) callconv(.c) void) void {
        qtc.QMetaObjectBuilder_SetStaticMetacallFunction(@ptrCast(self.ptr), @bitCast(@intFromPtr(value)));
    }

    /// ### DEPRECATED: Use `toMetaObject` instead
    ///
    pub const ToMetaObject = toMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#toMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn toMetaObject(self: QMetaObjectBuilder) QMetaObject {
        return .{ .ptr = qtc.QMetaObjectBuilder_ToMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addProperty32` instead
    ///
    pub const AddProperty32 = addProperty32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` notifierId: i32 `
    ///
    pub fn addProperty32(self: QMetaObjectBuilder, name: []const u8, typeVal: []const u8, notifierId: i32) QMetaPropertyBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.QMetaObjectBuilder_AddProperty32(@ptrCast(self.ptr), name_str, typeVal_str, @bitCast(notifierId)) };
    }

    /// ### DEPRECATED: Use `addProperty4` instead
    ///
    pub const AddProperty4 = addProperty4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` name: []const u8 `
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` metaType: QMetaType `
    ///
    /// ` notifierId: i32 `
    ///
    pub fn addProperty4(self: QMetaObjectBuilder, name: []const u8, typeVal: []const u8, metaType: anytype, notifierId: i32) QMetaPropertyBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        comptime _ = @TypeOf(metaType)._is_QMetaType;
        return .{ .ptr = qtc.QMetaObjectBuilder_AddProperty4(@ptrCast(self.ptr), name_str, typeVal_str, @ptrCast(metaType.ptr), @bitCast(notifierId)) };
    }

    /// ### DEPRECATED: Use `addMetaObject2` instead
    ///
    pub const AddMetaObject2 = addMetaObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    /// ` prototype: QMetaObject `
    ///
    /// ` members: flag of qmetaobjectbuilder_p_enums.AddMember `
    ///
    pub fn addMetaObject2(self: QMetaObjectBuilder, prototype: anytype, members: i32) void {
        comptime _ = @TypeOf(prototype)._is_QMetaObject;
        qtc.QMetaObjectBuilder_AddMetaObject2(@ptrCast(self.ptr), @ptrCast(prototype.ptr), @bitCast(members));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#dtor.QMetaObjectBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObjectBuilder `
    ///
    pub fn delete(self: QMetaObjectBuilder) void {
        qtc.QMetaObjectBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html)
pub const QMetaMethodBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaMethodBuilder,

    pub const _is_QMetaMethodBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaMethodBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethodBuilder `
    ///
    pub fn new(other: anytype) QMetaMethodBuilder {
        comptime _ = @TypeOf(other)._is_QMetaMethodBuilder;
        return .{ .ptr = qtc.QMetaMethodBuilder_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaMethodBuilder object and invalidate the source QMetaMethodBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethodBuilder `
    ///
    pub fn new2(other: anytype) QMetaMethodBuilder {
        comptime _ = @TypeOf(other)._is_QMetaMethodBuilder;
        return .{ .ptr = qtc.QMetaMethodBuilder_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaMethodBuilder object in C++ memory
    ///
    pub fn new3() QMetaMethodBuilder {
        return .{ .ptr = qtc.QMetaMethodBuilder_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` other: QMetaMethodBuilder `
    ///
    pub fn copyAssign(self: QMetaMethodBuilder, other: QMetaMethodBuilder) void {
        qtc.QMetaMethodBuilder_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` other: QMetaMethodBuilder `
    ///
    pub fn moveAssign(self: QMetaMethodBuilder, other: QMetaMethodBuilder) void {
        qtc.QMetaMethodBuilder_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    pub fn index(self: QMetaMethodBuilder) i32 {
        return qtc.QMetaMethodBuilder_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `methodType` instead
    ///
    pub const MethodType = methodType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#methodType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ## Returns:
    ///
    /// ` qmetaobject_enums.MethodType `
    ///
    pub fn methodType(self: QMetaMethodBuilder) i32 {
        return qtc.QMetaMethodBuilder_MethodType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signature` instead
    ///
    pub const Signature = signature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signature(self: QMetaMethodBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaMethodBuilder_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaMethodBuilder.signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `returnType` instead
    ///
    pub const ReturnType = returnType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#returnType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn returnType(self: QMetaMethodBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaMethodBuilder_ReturnType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaMethodBuilder.returnType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setReturnType` instead
    ///
    pub const SetReturnType = setReturnType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setReturnType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setReturnType(self: QMetaMethodBuilder, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QMetaMethodBuilder_SetReturnType(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `parameterNames` instead
    ///
    pub const ParameterNames = parameterNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#parameterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parameterNames(self: QMetaMethodBuilder, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethodBuilder_ParameterNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QMetaMethodBuilder.parameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMetaMethodBuilder.parameterNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setParameterNames` instead
    ///
    pub const SetParameterNames = setParameterNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setParameterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: []const []const u8 `
    ///
    pub fn setParameterNames(self: QMetaMethodBuilder, allocator: std.mem.Allocator, value: []const []const u8) void {
        const value_arr = allocator.alloc(qtc.libqt_string, value.len) catch @panic("QMetaMethodBuilder.setParameterNames: Memory allocation failed");
        defer allocator.free(value_arr);
        for (value, 0..value.len) |str_item, i|
            value_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const value_list = qtc.libqt_list{
            .len = value.len,
            .data = value_arr.ptr,
        };
        qtc.QMetaMethodBuilder_SetParameterNames(@ptrCast(self.ptr), value_list);
    }

    /// ### DEPRECATED: Use `tag` instead
    ///
    pub const Tag = tag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tag(self: QMetaMethodBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaMethodBuilder_Tag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaMethodBuilder.tag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTag` instead
    ///
    pub const SetTag = setTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setTag(self: QMetaMethodBuilder, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QMetaMethodBuilder_SetTag(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `access` instead
    ///
    pub const Access = access;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#access)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ## Returns:
    ///
    /// ` qmetaobject_enums.Access `
    ///
    pub fn access(self: QMetaMethodBuilder) i32 {
        return qtc.QMetaMethodBuilder_Access(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAccess` instead
    ///
    pub const SetAccess = setAccess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setAccess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` value: qmetaobject_enums.Access `
    ///
    pub fn setAccess(self: QMetaMethodBuilder, value: i32) void {
        qtc.QMetaMethodBuilder_SetAccess(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    pub fn attributes(self: QMetaMethodBuilder) i32 {
        return qtc.QMetaMethodBuilder_Attributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttributes` instead
    ///
    pub const SetAttributes = setAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` value: i32 `
    ///
    pub fn setAttributes(self: QMetaMethodBuilder, value: i32) void {
        qtc.QMetaMethodBuilder_SetAttributes(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setConst` instead
    ///
    pub const SetConst = setConst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setConst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    pub fn setConst(self: QMetaMethodBuilder) void {
        qtc.QMetaMethodBuilder_SetConst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    pub fn revision(self: QMetaMethodBuilder) i32 {
        return qtc.QMetaMethodBuilder_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRevision` instead
    ///
    pub const SetRevision = setRevision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` _revision: i32 `
    ///
    pub fn setRevision(self: QMetaMethodBuilder, _revision: i32) void {
        qtc.QMetaMethodBuilder_SetRevision(@ptrCast(self.ptr), @bitCast(_revision));
    }

    /// ### DEPRECATED: Use `setConst1` instead
    ///
    pub const SetConst1 = setConst1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setConst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    /// ` methodIsConst: bool `
    ///
    pub fn setConst1(self: QMetaMethodBuilder, methodIsConst: bool) void {
        qtc.QMetaMethodBuilder_SetConst1(@ptrCast(self.ptr), methodIsConst);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#dtor.QMetaMethodBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethodBuilder `
    ///
    pub fn delete(self: QMetaMethodBuilder) void {
        qtc.QMetaMethodBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html)
pub const QMetaPropertyBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaPropertyBuilder,

    pub const _is_QMetaPropertyBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaPropertyBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaPropertyBuilder `
    ///
    pub fn new(other: anytype) QMetaPropertyBuilder {
        comptime _ = @TypeOf(other)._is_QMetaPropertyBuilder;
        return .{ .ptr = qtc.QMetaPropertyBuilder_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaPropertyBuilder object and invalidate the source QMetaPropertyBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaPropertyBuilder `
    ///
    pub fn new2(other: anytype) QMetaPropertyBuilder {
        comptime _ = @TypeOf(other)._is_QMetaPropertyBuilder;
        return .{ .ptr = qtc.QMetaPropertyBuilder_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaPropertyBuilder object in C++ memory
    ///
    pub fn new3() QMetaPropertyBuilder {
        return .{ .ptr = qtc.QMetaPropertyBuilder_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` other: QMetaPropertyBuilder `
    ///
    pub fn copyAssign(self: QMetaPropertyBuilder, other: QMetaPropertyBuilder) void {
        qtc.QMetaPropertyBuilder_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` other: QMetaPropertyBuilder `
    ///
    pub fn moveAssign(self: QMetaPropertyBuilder, other: QMetaPropertyBuilder) void {
        qtc.QMetaPropertyBuilder_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn index(self: QMetaPropertyBuilder) i32 {
        return qtc.QMetaPropertyBuilder_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QMetaPropertyBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaPropertyBuilder_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaPropertyBuilder.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: QMetaPropertyBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaPropertyBuilder_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaPropertyBuilder.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasNotifySignal` instead
    ///
    pub const HasNotifySignal = hasNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#hasNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn hasNotifySignal(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_HasNotifySignal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `notifySignal` instead
    ///
    pub const NotifySignal = notifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#notifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn notifySignal(self: QMetaPropertyBuilder) QMetaMethodBuilder {
        return .{ .ptr = qtc.QMetaPropertyBuilder_NotifySignal(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNotifySignal` instead
    ///
    pub const SetNotifySignal = setNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: QMetaMethodBuilder `
    ///
    pub fn setNotifySignal(self: QMetaPropertyBuilder, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QMetaMethodBuilder;
        qtc.QMetaPropertyBuilder_SetNotifySignal(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `removeNotifySignal` instead
    ///
    pub const RemoveNotifySignal = removeNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#removeNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn removeNotifySignal(self: QMetaPropertyBuilder) void {
        qtc.QMetaPropertyBuilder_RemoveNotifySignal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isReadable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isWritable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isResettable` instead
    ///
    pub const IsResettable = isResettable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isResettable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isResettable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsResettable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDesignable` instead
    ///
    pub const IsDesignable = isDesignable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isDesignable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isDesignable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsDesignable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isScriptable` instead
    ///
    pub const IsScriptable = isScriptable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isScriptable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isScriptable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsScriptable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStored` instead
    ///
    pub const IsStored = isStored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isStored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isStored(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsStored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUser` instead
    ///
    pub const IsUser = isUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isUser(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsUser(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasStdCppSet` instead
    ///
    pub const HasStdCppSet = hasStdCppSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#hasStdCppSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn hasStdCppSet(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_HasStdCppSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnumOrFlag` instead
    ///
    pub const IsEnumOrFlag = isEnumOrFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isEnumOrFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isEnumOrFlag(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsEnumOrFlag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isConstant` instead
    ///
    pub const IsConstant = isConstant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isConstant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isConstant(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsConstant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinal` instead
    ///
    pub const IsFinal = isFinal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isFinal(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsFinal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAlias` instead
    ///
    pub const IsAlias = isAlias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isAlias(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsAlias(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBindable` instead
    ///
    pub const IsBindable = isBindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn isBindable(self: QMetaPropertyBuilder) bool {
        return qtc.QMetaPropertyBuilder_IsBindable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadable` instead
    ///
    pub const SetReadable = setReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setReadable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetReadable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setWritable` instead
    ///
    pub const SetWritable = setWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setWritable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetWritable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setResettable` instead
    ///
    pub const SetResettable = setResettable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setResettable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setResettable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetResettable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setDesignable` instead
    ///
    pub const SetDesignable = setDesignable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setDesignable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setDesignable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetDesignable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setScriptable` instead
    ///
    pub const SetScriptable = setScriptable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setScriptable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setScriptable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetScriptable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setStored` instead
    ///
    pub const SetStored = setStored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setStored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setStored(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetStored(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setUser(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetUser(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setStdCppSet` instead
    ///
    pub const SetStdCppSet = setStdCppSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setStdCppSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setStdCppSet(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetStdCppSet(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setEnumOrFlag` instead
    ///
    pub const SetEnumOrFlag = setEnumOrFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setEnumOrFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setEnumOrFlag(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetEnumOrFlag(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setConstant` instead
    ///
    pub const SetConstant = setConstant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setConstant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setConstant(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetConstant(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setFinal` instead
    ///
    pub const SetFinal = setFinal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setFinal(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetFinal(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setAlias` instead
    ///
    pub const SetAlias = setAlias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setAlias(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetAlias(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setBindable` instead
    ///
    pub const SetBindable = setBindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` value: bool `
    ///
    pub fn setBindable(self: QMetaPropertyBuilder, value: bool) void {
        qtc.QMetaPropertyBuilder_SetBindable(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn revision(self: QMetaPropertyBuilder) i32 {
        return qtc.QMetaPropertyBuilder_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRevision` instead
    ///
    pub const SetRevision = setRevision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    /// ` _revision: i32 `
    ///
    pub fn setRevision(self: QMetaPropertyBuilder, _revision: i32) void {
        qtc.QMetaPropertyBuilder_SetRevision(@ptrCast(self.ptr), @bitCast(_revision));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#dtor.QMetaPropertyBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaPropertyBuilder `
    ///
    pub fn delete(self: QMetaPropertyBuilder) void {
        qtc.QMetaPropertyBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html)
pub const QMetaEnumBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaEnumBuilder,

    pub const _is_QMetaEnumBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaEnumBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnumBuilder `
    ///
    pub fn new(other: anytype) QMetaEnumBuilder {
        comptime _ = @TypeOf(other)._is_QMetaEnumBuilder;
        return .{ .ptr = qtc.QMetaEnumBuilder_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaEnumBuilder object and invalidate the source QMetaEnumBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnumBuilder `
    ///
    pub fn new2(other: anytype) QMetaEnumBuilder {
        comptime _ = @TypeOf(other)._is_QMetaEnumBuilder;
        return .{ .ptr = qtc.QMetaEnumBuilder_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaEnumBuilder object in C++ memory
    ///
    pub fn new3() QMetaEnumBuilder {
        return .{ .ptr = qtc.QMetaEnumBuilder_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` other: QMetaEnumBuilder `
    ///
    pub fn copyAssign(self: QMetaEnumBuilder, other: QMetaEnumBuilder) void {
        qtc.QMetaEnumBuilder_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` other: QMetaEnumBuilder `
    ///
    pub fn moveAssign(self: QMetaEnumBuilder, other: QMetaEnumBuilder) void {
        qtc.QMetaEnumBuilder_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn index(self: QMetaEnumBuilder) i32 {
        return qtc.QMetaEnumBuilder_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QMetaEnumBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaEnumBuilder_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaEnumBuilder.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `enumName` instead
    ///
    pub const EnumName = enumName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#enumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn enumName(self: QMetaEnumBuilder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMetaEnumBuilder_EnumName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaEnumBuilder.enumName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEnumName` instead
    ///
    pub const SetEnumName = setEnumName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` alias: []const u8 `
    ///
    pub fn setEnumName(self: QMetaEnumBuilder, alias: []const u8) void {
        const alias_str = qtc.libqt_string{
            .len = alias.len,
            .data = alias.ptr,
        };
        qtc.QMetaEnumBuilder_SetEnumName(@ptrCast(self.ptr), alias_str);
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn metaType(self: QMetaEnumBuilder) QMetaType {
        return .{ .ptr = qtc.QMetaEnumBuilder_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaType` instead
    ///
    pub const SetMetaType = setMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _metaType: QMetaType `
    ///
    pub fn setMetaType(self: QMetaEnumBuilder, _metaType: anytype) void {
        comptime _ = @TypeOf(_metaType)._is_QMetaType;
        qtc.QMetaEnumBuilder_SetMetaType(@ptrCast(self.ptr), @ptrCast(_metaType.ptr));
    }

    /// ### DEPRECATED: Use `isFlag` instead
    ///
    pub const IsFlag = isFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#isFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn isFlag(self: QMetaEnumBuilder) bool {
        return qtc.QMetaEnumBuilder_IsFlag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsFlag` instead
    ///
    pub const SetIsFlag = setIsFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setIsFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _value: bool `
    ///
    pub fn setIsFlag(self: QMetaEnumBuilder, _value: bool) void {
        qtc.QMetaEnumBuilder_SetIsFlag(@ptrCast(self.ptr), _value);
    }

    /// ### DEPRECATED: Use `isScoped` instead
    ///
    pub const IsScoped = isScoped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#isScoped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn isScoped(self: QMetaEnumBuilder) bool {
        return qtc.QMetaEnumBuilder_IsScoped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsScoped` instead
    ///
    pub const SetIsScoped = setIsScoped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setIsScoped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _value: bool `
    ///
    pub fn setIsScoped(self: QMetaEnumBuilder, _value: bool) void {
        qtc.QMetaEnumBuilder_SetIsScoped(@ptrCast(self.ptr), _value);
    }

    /// ### DEPRECATED: Use `keyCount` instead
    ///
    pub const KeyCount = keyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#keyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn keyCount(self: QMetaEnumBuilder) i32 {
        return qtc.QMetaEnumBuilder_KeyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: i32 `
    ///
    pub fn key(self: QMetaEnumBuilder, allocator: std.mem.Allocator, _index: i32) []const u8 {
        var _str = qtc.QMetaEnumBuilder_Key(@ptrCast(self.ptr), @bitCast(_index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaEnumBuilder.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _index: i32 `
    ///
    pub fn value(self: QMetaEnumBuilder, _index: i32) i32 {
        return qtc.QMetaEnumBuilder_Value(@ptrCast(self.ptr), @bitCast(_index));
    }

    /// ### DEPRECATED: Use `addKey` instead
    ///
    pub const AddKey = addKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#addKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: i32 `
    ///
    pub fn addKey(self: QMetaEnumBuilder, _name: []const u8, _value: i32) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QMetaEnumBuilder_AddKey(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `removeKey` instead
    ///
    pub const RemoveKey = removeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#removeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    /// ` _index: i32 `
    ///
    pub fn removeKey(self: QMetaEnumBuilder, _index: i32) void {
        qtc.QMetaEnumBuilder_RemoveKey(@ptrCast(self.ptr), @bitCast(_index));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#dtor.QMetaEnumBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaEnumBuilder `
    ///
    pub fn delete(self: QMetaEnumBuilder) void {
        qtc.QMetaEnumBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html)
pub const QMetaStringTable = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaStringTable,

    pub const _is_QMetaStringTable = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaStringTable object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _className: []const u8 `
    ///
    pub fn new(_className: []const u8) QMetaStringTable {
        const className_str = qtc.libqt_string{
            .len = _className.len,
            .data = _className.ptr,
        };
        return .{ .ptr = qtc.QMetaStringTable_new(className_str) };
    }

    /// ### DEPRECATED: Use `enter` instead
    ///
    pub const Enter = enter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#enter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaStringTable `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn enter(self: QMetaStringTable, _value: []const u8) i32 {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return qtc.QMetaStringTable_Enter(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `preferredAlignment` instead
    ///
    pub const PreferredAlignment = preferredAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#preferredAlignment)
    ///
    pub fn preferredAlignment() i32 {
        return qtc.QMetaStringTable_PreferredAlignment();
    }

    /// ### DEPRECATED: Use `blobSize` instead
    ///
    pub const BlobSize = blobSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#blobSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaStringTable `
    ///
    pub fn blobSize(self: QMetaStringTable) i32 {
        return qtc.QMetaStringTable_BlobSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeBlob` instead
    ///
    pub const WriteBlob = writeBlob;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#writeBlob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaStringTable `
    ///
    /// ` out: [:0]u8 `
    ///
    pub fn writeBlob(self: QMetaStringTable, out: [:0]u8) void {
        const out_Cstring = out.ptr;
        qtc.QMetaStringTable_WriteBlob(@ptrCast(self.ptr), out_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#dtor.QMetaStringTable)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaStringTable `
    ///
    pub fn delete(self: QMetaStringTable) void {
        qtc.QMetaStringTable_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder-p.html#public-types)
pub const enums = struct {
    pub const AddMember = enum {
        pub const ClassName: i32 = 1;
        pub const SuperClass: i32 = 2;
        pub const Methods: i32 = 4;
        pub const Signals: i32 = 8;
        pub const Slots: i32 = 16;
        pub const Constructors: i32 = 32;
        pub const Properties: i32 = 64;
        pub const Enumerators: i32 = 128;
        pub const ClassInfos: i32 = 256;
        pub const RelatedMetaObjects: i32 = 512;
        pub const StaticMetacall: i32 = 1024;
        pub const PublicMethods: i32 = 2048;
        pub const ProtectedMethods: i32 = 4096;
        pub const PrivateMethods: i32 = 8192;
        pub const AllMembers: i32 = 2147483647;
        pub const AllPrimaryMembers: i32 = 2147482620;
    };
};
