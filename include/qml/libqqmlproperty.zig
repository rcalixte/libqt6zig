const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaProperty = @import("libqt6").QMetaProperty;
const QMetaType = @import("libqt6").QMetaType;
const QObject = @import("libqt6").QObject;
const QQmlContext = @import("libqt6").QQmlContext;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QVariant = @import("libqt6").QVariant;
const qqmlproperty_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)
pub const QQmlProperty = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlProperty,

    pub const _is_QQmlProperty = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    pub fn new() QQmlProperty {
        return .{ .ptr = qtc.QQmlProperty_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn new2(param1: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.QQmlProperty_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QQmlContext `
    ///
    pub fn new3(param1: anytype, param2: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlProperty_new3(@ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QQmlEngine `
    ///
    pub fn new4(param1: anytype, param2: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlProperty_new4(@ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn new5(param1: anytype, param2: []const u8) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return .{ .ptr = qtc.QQmlProperty_new5(@ptrCast(param1.ptr), param2_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QQmlContext `
    ///
    pub fn new6(param1: anytype, param2: []const u8, param3: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlProperty_new6(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QQmlEngine `
    ///
    pub fn new7(param1: anytype, param2: []const u8, param3: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlProperty_new7(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QQmlProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlProperty `
    ///
    pub fn new8(param1: anytype) QQmlProperty {
        comptime _ = @TypeOf(param1)._is_QQmlProperty;
        return .{ .ptr = qtc.QQmlProperty_new8(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` param1: QQmlProperty `
    ///
    pub fn operatorAssign(self: QQmlProperty, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlProperty;
        qtc.QQmlProperty_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` other: QQmlProperty `
    ///
    pub fn swap(self: QQmlProperty, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QQmlProperty;
        qtc.QQmlProperty_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` param1: QQmlProperty `
    ///
    pub fn operatorEqual(self: QQmlProperty, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQmlProperty;
        return qtc.QQmlProperty_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ## Returns:
    ///
    /// ` qqmlproperty_enums.Type `
    ///
    pub fn type0(self: QQmlProperty) i32 {
        return qtc.QQmlProperty_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isValid(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProperty` instead
    ///
    pub const IsProperty = isProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isProperty(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsProperty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSignalProperty` instead
    ///
    pub const IsSignalProperty = isSignalProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isSignalProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isSignalProperty(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsSignalProperty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyType` instead
    ///
    pub const PropertyType = propertyType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn propertyType(self: QQmlProperty) i32 {
        return qtc.QQmlProperty_PropertyType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyMetaType` instead
    ///
    pub const PropertyMetaType = propertyMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn propertyMetaType(self: QQmlProperty) QMetaType {
        return .{ .ptr = qtc.QQmlProperty_PropertyMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `propertyTypeCategory` instead
    ///
    pub const PropertyTypeCategory = propertyTypeCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyTypeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ## Returns:
    ///
    /// ` qqmlproperty_enums.PropertyTypeCategory `
    ///
    pub fn propertyTypeCategory(self: QQmlProperty) i32 {
        return qtc.QQmlProperty_PropertyTypeCategory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyTypeName` instead
    ///
    pub const PropertyTypeName = propertyTypeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyTypeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn propertyTypeName(self: QQmlProperty) [:0]const u8 {
        const _ret = qtc.QQmlProperty_PropertyTypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QQmlProperty, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlProperty_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlProperty.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn read(self: QQmlProperty) QVariant {
        return .{ .ptr = qtc.QQmlProperty_Read(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn read2(param1: anytype, param2: []const u8) QVariant {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return .{ .ptr = qtc.QQmlProperty_Read2(@ptrCast(param1.ptr), param2_str) };
    }

    /// ### DEPRECATED: Use `read3` instead
    ///
    pub const Read3 = read3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QQmlContext `
    ///
    pub fn read3(param1: anytype, param2: []const u8, param3: anytype) QVariant {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlProperty_Read3(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr)) };
    }

    /// ### DEPRECATED: Use `read4` instead
    ///
    pub const Read4 = read4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QQmlEngine `
    ///
    pub fn read4(param1: anytype, param2: []const u8, param3: anytype) QVariant {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlProperty_Read4(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr)) };
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` param1: QVariant `
    ///
    pub fn write(self: QQmlProperty, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QVariant;
        return qtc.QQmlProperty_Write(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QVariant `
    ///
    pub fn write2(param1: anytype, param2: []const u8, param3: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QVariant;
        return qtc.QQmlProperty_Write2(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QQmlContext `
    ///
    pub fn write3(param1: anytype, param2: []const u8, param3: anytype, param4: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QQmlContext;
        return qtc.QQmlProperty_Write3(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr), @ptrCast(param4.ptr));
    }

    /// ### DEPRECATED: Use `write4` instead
    ///
    pub const Write4 = write4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QQmlEngine `
    ///
    pub fn write4(param1: anytype, param2: []const u8, param3: anytype, param4: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QQmlEngine;
        return qtc.QQmlProperty_Write4(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr), @ptrCast(param4.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn reset(self: QQmlProperty) bool {
        return qtc.QQmlProperty_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasNotifySignal` instead
    ///
    pub const HasNotifySignal = hasNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#hasNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn hasNotifySignal(self: QQmlProperty) bool {
        return qtc.QQmlProperty_HasNotifySignal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `needsNotifySignal` instead
    ///
    pub const NeedsNotifySignal = needsNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#needsNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn needsNotifySignal(self: QQmlProperty) bool {
        return qtc.QQmlProperty_NeedsNotifySignal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectNotifySignal` instead
    ///
    pub const ConnectNotifySignal = connectNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#connectNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` dest: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn connectNotifySignal(self: QQmlProperty, dest: anytype, slot: [:0]const u8) bool {
        comptime _ = @TypeOf(dest)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QQmlProperty_ConnectNotifySignal(@ptrCast(self.ptr), @ptrCast(dest.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `connectNotifySignal2` instead
    ///
    pub const ConnectNotifySignal2 = connectNotifySignal2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#connectNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    /// ` dest: QObject `
    ///
    /// ` _method: i32 `
    ///
    pub fn connectNotifySignal2(self: QQmlProperty, dest: anytype, _method: i32) bool {
        comptime _ = @TypeOf(dest)._is_QObject;
        return qtc.QQmlProperty_ConnectNotifySignal2(@ptrCast(self.ptr), @ptrCast(dest.ptr), @bitCast(_method));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isWritable(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBindable` instead
    ///
    pub const IsBindable = isBindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isBindable(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsBindable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDesignable` instead
    ///
    pub const IsDesignable = isDesignable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isDesignable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isDesignable(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsDesignable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isResettable` instead
    ///
    pub const IsResettable = isResettable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isResettable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn isResettable(self: QQmlProperty) bool {
        return qtc.QQmlProperty_IsResettable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn object(self: QQmlProperty) QObject {
        return .{ .ptr = qtc.QQmlProperty_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn index(self: QQmlProperty) i32 {
        return qtc.QQmlProperty_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn property(self: QQmlProperty) QMetaProperty {
        return .{ .ptr = qtc.QQmlProperty_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `method` instead
    ///
    pub const Method = method;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn method(self: QQmlProperty) QMetaMethod {
        return .{ .ptr = qtc.QQmlProperty_Method(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#dtor.QQmlProperty)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlProperty `
    ///
    pub fn delete(self: QQmlProperty) void {
        qtc.QQmlProperty_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#public-types)
pub const enums = struct {
    pub const PropertyTypeCategory = enum {
        pub const InvalidCategory: i32 = 0;
        pub const List: i32 = 1;
        pub const Object: i32 = 2;
        pub const Normal: i32 = 3;
    };

    pub const Type = enum {
        pub const Invalid: i32 = 0;
        pub const Property: i32 = 1;
        pub const SignalProperty: i32 = 2;
    };
};
