const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaClassInfo = @import("libqt6").QMetaClassInfo;
const QMetaEnum = @import("libqt6").QMetaEnum;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaProperty = @import("libqt6").QMetaProperty;
const QMetaType = @import("libqt6").QMetaType;
const QObject = @import("libqt6").QObject;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html)
pub const QGenericArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGenericArgument,

    pub const _is_QGenericArgument = {};

    /// New constructs a new QGenericArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn New(other: anytype) QGenericArgument {
        comptime _ = @TypeOf(other)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QGenericArgument object and invalidates the source QGenericArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn New2(other: anytype) QGenericArgument {
        comptime _ = @TypeOf(other)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QGenericArgument object.
    ///
    pub fn New3() QGenericArgument {
        return .{ .ptr = qtc.QGenericArgument_new3() };
    }

    /// New4 constructs a new QGenericArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGenericArgument `
    ///
    pub fn New4(param1: anytype) QGenericArgument {
        comptime _ = @TypeOf(param1)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new4(@ptrCast(param1.ptr)) };
    }

    /// New5 constructs a new QGenericArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    pub fn New5(aName: [:0]const u8) QGenericArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericArgument_new5(aName_Cstring) };
    }

    /// New6 constructs a new QGenericArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    /// ` aData: ?*const anyopaque `
    ///
    pub fn New6(aName: [:0]const u8, aData: ?*const anyopaque) QGenericArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericArgument_new6(aName_Cstring, @ptrCast(aData)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericArgument `
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn CopyAssign(self: QGenericArgument, other: QGenericArgument) void {
        qtc.QGenericArgument_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericArgument `
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn MoveAssign(self: QGenericArgument, other: QGenericArgument) void {
        qtc.QGenericArgument_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn Data(self: QGenericArgument) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn Name(self: QGenericArgument) [:0]const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#dtor.QGenericArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn Delete(self: QGenericArgument) void {
        qtc.QGenericArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericreturnargument.html)
pub const QGenericReturnArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericreturnargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGenericReturnArgument,

    pub const _is_QGenericReturnArgument = {};
    pub const _is_QGenericArgument = {};

    /// New constructs a new QGenericReturnArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn New(other: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(other)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QGenericReturnArgument object and invalidates the source QGenericReturnArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn New2(other: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(other)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QGenericReturnArgument object.
    ///
    pub fn New3() QGenericReturnArgument {
        return .{ .ptr = qtc.QGenericReturnArgument_new3() };
    }

    /// New4 constructs a new QGenericReturnArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGenericReturnArgument `
    ///
    pub fn New4(param1: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(param1)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new4(@ptrCast(param1.ptr)) };
    }

    /// New5 constructs a new QGenericReturnArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    pub fn New5(aName: [:0]const u8) QGenericReturnArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericReturnArgument_new5(aName_Cstring) };
    }

    /// New6 constructs a new QGenericReturnArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    /// ` aData: ?*anyopaque `
    ///
    pub fn New6(aName: [:0]const u8, aData: ?*anyopaque) QGenericReturnArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericReturnArgument_new6(aName_Cstring, @ptrCast(aData)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn CopyAssign(self: QGenericReturnArgument, other: QGenericReturnArgument) void {
        qtc.QGenericReturnArgument_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn MoveAssign(self: QGenericReturnArgument, other: QGenericReturnArgument) void {
        qtc.QGenericReturnArgument_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QGenericArgument
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn Data(self: QGenericReturnArgument) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self.ptr));
    }

    /// Inherited from QGenericArgument
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn Name(self: QGenericReturnArgument) [:0]const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericreturnargument.html#dtor.QGenericReturnArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn Delete(self: QGenericReturnArgument) void {
        qtc.QGenericReturnArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html)
pub const QMetaMethodArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaMethodArgument,

    pub const _is_QMetaMethodArgument = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodArgument `
    ///
    pub fn Name(self: QMetaMethodArgument) [:0]const u8 {
        const name_ret = qtc.QMetaMethodArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(name_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodArgument `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn SetName(self: QMetaMethodArgument, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QMetaMethodArgument_SetName(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#dtor.QMetaMethodArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethodArgument `
    ///
    pub fn Delete(self: QMetaMethodArgument) void {
        qtc.QMetaMethodArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html)
pub const QMetaMethodReturnArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaMethodReturnArgument,

    pub const _is_QMetaMethodReturnArgument = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    pub fn Name(self: QMetaMethodReturnArgument) [:0]const u8 {
        const name_ret = qtc.QMetaMethodReturnArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(name_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn SetName(self: QMetaMethodReturnArgument, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QMetaMethodReturnArgument_SetName(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#dtor.QMetaMethodReturnArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    pub fn Delete(self: QMetaMethodReturnArgument) void {
        qtc.QMetaMethodReturnArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html)
pub const QMetaObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaObject,

    pub const _is_QMetaObject = {};

    /// New constructs a new QMetaObject object.
    ///
    pub fn New() QMetaObject {
        return .{ .ptr = qtc.QMetaObject_new() };
    }

    /// New2 constructs a new QMetaObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject `
    ///
    pub fn New2(param1: anytype) QMetaObject {
        comptime _ = @TypeOf(param1)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObject_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#className)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn ClassName(self: QMetaObject) [:0]const u8 {
        const _ret = qtc.QMetaObject_ClassName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#superClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn SuperClass(self: QMetaObject) QMetaObject {
        return .{ .ptr = qtc.QMetaObject_SuperClass(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` metaObject: QMetaObject `
    ///
    pub fn Inherits(self: QMetaObject, metaObject: anytype) bool {
        comptime _ = @TypeOf(metaObject)._is_QMetaObject;
        return qtc.QMetaObject_Inherits(@ptrCast(self.ptr), @ptrCast(metaObject.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn Cast(self: QMetaObject, obj: anytype) QObject {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Cast(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn Cast2(self: QMetaObject, obj: anytype) QObject {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Cast2(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr(self: QMetaObject, allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QMetaObject_Tr(@ptrCast(self.ptr), s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn MetaType(self: QMetaObject) QMetaType {
        return .{ .ptr = qtc.QMetaObject_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#methodOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn MethodOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_MethodOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn EnumeratorOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_EnumeratorOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#propertyOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn PropertyOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_PropertyOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfoOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn ClassInfoOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_ClassInfoOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#constructorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn ConstructorCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_ConstructorCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#methodCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn MethodCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_MethodCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn EnumeratorCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_EnumeratorCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn PropertyCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfoCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn ClassInfoCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_ClassInfoCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` constructor: [:0]const u8 `
    ///
    pub fn IndexOfConstructor(self: QMetaObject, constructor: [:0]const u8) i32 {
        const constructor_Cstring = constructor.ptr;
        return qtc.QMetaObject_IndexOfConstructor(@ptrCast(self.ptr), constructor_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` method: [:0]const u8 `
    ///
    pub fn IndexOfMethod(self: QMetaObject, method: [:0]const u8) i32 {
        const method_Cstring = method.ptr;
        return qtc.QMetaObject_IndexOfMethod(@ptrCast(self.ptr), method_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn IndexOfSignal(self: QMetaObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMetaObject_IndexOfSignal(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn IndexOfSlot(self: QMetaObject, slot: [:0]const u8) i32 {
        const slot_Cstring = slot.ptr;
        return qtc.QMetaObject_IndexOfSlot(@ptrCast(self.ptr), slot_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn IndexOfEnumerator(self: QMetaObject, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfEnumerator(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn IndexOfProperty(self: QMetaObject, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfProperty(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfClassInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn IndexOfClassInfo(self: QMetaObject, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfClassInfo(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#constructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn Constructor(self: QMetaObject, index: i32) QMetaMethod {
        return .{ .ptr = qtc.QMetaObject_Constructor(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn Method(self: QMetaObject, index: i32) QMetaMethod {
        return .{ .ptr = qtc.QMetaObject_Method(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn Enumerator(self: QMetaObject, index: i32) QMetaEnum {
        return .{ .ptr = qtc.QMetaObject_Enumerator(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn Property(self: QMetaObject, index: i32) QMetaProperty {
        return .{ .ptr = qtc.QMetaObject_Property(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn ClassInfo(self: QMetaObject, index: i32) QMetaClassInfo {
        return .{ .ptr = qtc.QMetaObject_ClassInfo(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#userProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn UserProperty(self: QMetaObject) QMetaProperty {
        return .{ .ptr = qtc.QMetaObject_UserProperty(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` method: [:0]const u8 `
    ///
    pub fn CheckConnectArgs(signal: [:0]const u8, method: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const method_Cstring = method.ptr;
        return qtc.QMetaObject_CheckConnectArgs(signal_Cstring, method_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn CheckConnectArgs2(signal: anytype, method: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return qtc.QMetaObject_CheckConnectArgs2(@ptrCast(signal.ptr), @ptrCast(method.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#normalizedSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` method: [:0]const u8 `
    ///
    pub fn NormalizedSignature(allocator: std.mem.Allocator, method: [:0]const u8) []u8 {
        const method_Cstring = method.ptr;
        var _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedSignature(method_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#normalizedType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: [:0]const u8 `
    ///
    pub fn NormalizedType(allocator: std.mem.Allocator, typeVal: [:0]const u8) []u8 {
        const typeVal_Cstring = typeVal.ptr;
        var _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedType(typeVal_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method_index: i32 `
    ///
    pub fn Connect(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method_index: i32 `
    ///
    pub fn Disconnect(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QMetaObject_Disconnect(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#disconnectOne)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method_index: i32 `
    ///
    pub fn DisconnectOne(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QMetaObject_DisconnectOne(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#connectSlotsByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QObject `
    ///
    pub fn ConnectSlotsByName(o: anytype) void {
        comptime _ = @TypeOf(o)._is_QObject;
        qtc.QMetaObject_ConnectSlotsByName(@ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` argv: *?*anyopaque `
    ///
    pub fn Activate(sender: anytype, signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        qtc.QMetaObject_Activate(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(argv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` param2: QMetaObject `
    ///
    /// ` local_signal_index: i32 `
    ///
    /// ` argv: *?*anyopaque `
    ///
    pub fn Activate2(sender: anytype, param2: anytype, local_signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QMetaObject;
        qtc.QMetaObject_Activate2(@ptrCast(sender.ptr), @ptrCast(param2.ptr), @bitCast(local_signal_index), @ptrCast(argv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_offset: i32 `
    ///
    /// ` local_signal_index: i32 `
    ///
    /// ` argv: *?*anyopaque `
    ///
    pub fn Activate3(sender: anytype, signal_offset: i32, local_signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        qtc.QMetaObject_Activate3(@ptrCast(sender.ptr), @bitCast(signal_offset), @bitCast(local_signal_index), @ptrCast(argv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    pub fn InvokeMethod(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        return qtc.QMetaObject_InvokeMethod(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    pub fn InvokeMethod2(obj: anytype, member: [:0]const u8, retVal: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        return qtc.QMetaObject_InvokeMethod2(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeMethod3(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod3(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeMethod4(obj: anytype, member: [:0]const u8, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod4(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn NewInstance(self: QMetaObject, val0: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance(@ptrCast(self.ptr), @ptrCast(val0.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#static_metacall)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn StaticMetacall(self: QMetaObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMetaObject_StaticMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#metacall)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: qobjectdefs_enums.Call `
    ///
    /// ` param3: i32 `
    ///
    /// ` param4: *?*anyopaque `
    ///
    pub fn Metacall(param1: anytype, param2: i32, param3: i32, param4: *?*anyopaque) i32 {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QMetaObject_Metacall(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3), @ptrCast(param4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn D(self: QMetaObject) QMetaObject__Data {
        return .{ .ptr = qtc.QMetaObject_D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` d: QMetaObject__Data `
    ///
    pub fn SetD(self: QMetaObject, d: anytype) void {
        comptime _ = @TypeOf(d)._is_QMetaObject__Data;
        qtc.QMetaObject_SetD(@ptrCast(self.ptr), @ptrCast(d.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(self: QMetaObject, allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QMetaObject_Tr3(@ptrCast(self.ptr), s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method_index: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn Connect5(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect5(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal_index: i32 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method_index: i32 `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` types: *i32 `
    ///
    pub fn Connect6(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32, typeVal: i32, types: *i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect6(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index), @bitCast(typeVal), @ptrCast(types)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeMethod5(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod5(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeMethod6(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod6(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeMethod7(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod7(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeMethod8(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod8(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    pub fn InvokeMethod9(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod9(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    pub fn InvokeMethod10(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod10(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    pub fn InvokeMethod11(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod11(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    pub fn InvokeMethod12(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod12(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    pub fn InvokeMethod13(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod13(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param3: qnamespace_enums.ConnectionType `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    /// ` val9: QGenericArgument `
    ///
    pub fn InvokeMethod14(obj: anytype, member: [:0]const u8, param3: i32, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        comptime _ = @TypeOf(val9)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod14(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeMethod42(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod42(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeMethod52(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod52(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeMethod62(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod62(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeMethod72(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod72(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    pub fn InvokeMethod82(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod82(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    pub fn InvokeMethod92(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod92(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    pub fn InvokeMethod102(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod102(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    pub fn InvokeMethod112(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod112(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    pub fn InvokeMethod122(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod122(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` retVal: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    /// ` val9: QGenericArgument `
    ///
    pub fn InvokeMethod132(obj: anytype, member: [:0]const u8, retVal: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(retVal)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        comptime _ = @TypeOf(val9)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod132(@ptrCast(obj.ptr), member_Cstring, @ptrCast(retVal.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeMethod53(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod53(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeMethod63(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod63(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeMethod73(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod73(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    pub fn InvokeMethod83(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod83(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    pub fn InvokeMethod93(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod93(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    pub fn InvokeMethod103(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod103(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    pub fn InvokeMethod113(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod113(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    pub fn InvokeMethod123(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod123(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    /// ` val9: QGenericArgument `
    ///
    pub fn InvokeMethod133(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        comptime _ = @TypeOf(val9)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod133(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeMethod43(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod43(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeMethod54(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod54(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeMethod64(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod64(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    pub fn InvokeMethod74(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod74(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    pub fn InvokeMethod84(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod84(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    pub fn InvokeMethod94(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod94(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    pub fn InvokeMethod104(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod104(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    pub fn InvokeMethod114(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod114(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    /// ` val9: QGenericArgument `
    ///
    pub fn InvokeMethod124(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        comptime _ = @TypeOf(val9)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod124(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn NewInstance2(self: QMetaObject, val0: anytype, val1: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance2(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn NewInstance3(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance3(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn NewInstance4(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance4(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    pub fn NewInstance5(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance5(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    pub fn NewInstance6(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance6(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    pub fn NewInstance7(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance7(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    pub fn NewInstance8(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance8(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    pub fn NewInstance9(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance9(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    /// ` val4: QGenericArgument `
    ///
    /// ` val5: QGenericArgument `
    ///
    /// ` val6: QGenericArgument `
    ///
    /// ` val7: QGenericArgument `
    ///
    /// ` val8: QGenericArgument `
    ///
    /// ` val9: QGenericArgument `
    ///
    pub fn NewInstance10(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        comptime _ = @TypeOf(val9)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance10(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#dtor.QMetaObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject `
    ///
    pub fn Delete(self: QMetaObject) void {
        qtc.QMetaObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html)
pub const QMetaObject__Connection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaObject__Connection,

    pub const _is_QMetaObject__Connection = {};

    /// New constructs a new QMetaObject::Connection object.
    ///
    pub fn New() QMetaObject__Connection {
        return .{ .ptr = qtc.QMetaObject__Connection_new() };
    }

    /// New2 constructs a new QMetaObject::Connection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn New2(other: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        return .{ .ptr = qtc.QMetaObject__Connection_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Connection `
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn OperatorAssign(self: QMetaObject__Connection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        qtc.QMetaObject__Connection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Connection `
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn Swap(self: QMetaObject__Connection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        qtc.QMetaObject__Connection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__Connection `
    ///
    pub fn Delete(self: QMetaObject__Connection) void {
        qtc.QMetaObject__Connection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html)
pub const QMetaObject__SuperData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaObject__SuperData,

    pub const _is_QMetaObject__SuperData = {};

    /// New constructs a new QMetaObject::SuperData object.
    ///
    pub fn New() QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__SuperData_new() };
    }

    /// New2 constructs a new QMetaObject::SuperData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mo: QMetaObject `
    ///
    pub fn New2(mo: anytype) QMetaObject__SuperData {
        comptime _ = @TypeOf(mo)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObject__SuperData_new2(@ptrCast(mo.ptr)) };
    }

    /// New3 constructs a new QMetaObject::SuperData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` g: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn New3(g: *const fn () callconv(.c) QMetaObject) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__SuperData_new3(@bitCast(@intFromPtr(g))) };
    }

    /// New4 constructs a new QMetaObject::SuperData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__SuperData `
    ///
    pub fn New4(param1: anytype) QMetaObject__SuperData {
        comptime _ = @TypeOf(param1)._is_QMetaObject__SuperData;
        return .{ .ptr = qtc.QMetaObject__SuperData_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn Direct(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_Direct(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    /// ` direct: QMetaObject `
    ///
    pub fn SetDirect(self: QMetaObject__SuperData, direct: anytype) void {
        comptime _ = @TypeOf(direct)._is_QMetaObject;
        qtc.QMetaObject__SuperData_SetDirect(@ptrCast(self.ptr), @ptrCast(direct.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn OperatorMinusGreater(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn ToConstQMetaObjectMultiply(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_ToConstQMetaObjectMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    /// ` param1: QMetaObject__SuperData `
    ///
    pub fn OperatorAssign(self: QMetaObject__SuperData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaObject__SuperData;
        qtc.QMetaObject__SuperData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn Delete(self: QMetaObject__SuperData) void {
        qtc.QMetaObject__SuperData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html)
pub const QMetaObject__Data = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaObject__Data,

    pub const _is_QMetaObject__Data = {};

    /// New constructs a new QMetaObject::Data object.
    ///
    pub fn New() QMetaObject__Data {
        return .{ .ptr = qtc.QMetaObject__Data_new() };
    }

    /// New2 constructs a new QMetaObject::Data object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Data `
    ///
    pub fn New2(param1: anytype) QMetaObject__Data {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Data;
        return .{ .ptr = qtc.QMetaObject__Data_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn Superdata(self: QMetaObject__Data) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__Data_Superdata(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` superdata: QMetaObject__SuperData `
    ///
    pub fn SetSuperdata(self: QMetaObject__Data, superdata: anytype) void {
        comptime _ = @TypeOf(superdata)._is_QMetaObject__SuperData;
        qtc.QMetaObject__Data_SetSuperdata(@ptrCast(self.ptr), @ptrCast(superdata.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn Stringdata(self: QMetaObject__Data) ?*const u32 {
        return @ptrCast(qtc.QMetaObject__Data_Stringdata(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` stringdata: *const u32 `
    ///
    pub fn SetStringdata(self: QMetaObject__Data, stringdata: *const u32) void {
        qtc.QMetaObject__Data_SetStringdata(@ptrCast(self.ptr), @ptrCast(stringdata));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn Data(self: QMetaObject__Data) ?*const u32 {
        return @ptrCast(qtc.QMetaObject__Data_Data(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` data: *const u32 `
    ///
    pub fn SetData(self: QMetaObject__Data, data: *const u32) void {
        qtc.QMetaObject__Data_SetData(@ptrCast(self.ptr), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn RelatedMetaObjects(self: QMetaObject__Data) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__Data_RelatedMetaObjects(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` relatedMetaObjects: QMetaObject__SuperData `
    ///
    pub fn SetRelatedMetaObjects(self: QMetaObject__Data, relatedMetaObjects: anytype) void {
        comptime _ = @TypeOf(relatedMetaObjects)._is_QMetaObject__SuperData;
        qtc.QMetaObject__Data_SetRelatedMetaObjects(@ptrCast(self.ptr), @ptrCast(relatedMetaObjects.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` param1: QMetaObject__Data `
    ///
    pub fn OperatorAssign(self: QMetaObject__Data, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Data;
        qtc.QMetaObject__Data_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn Delete(self: QMetaObject__Data) void {
        qtc.QMetaObject__Data_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qobjectdefs.html#public-types)
pub const enums = struct {
    pub const Call = enum(i32) {
        pub const InvokeMetaMethod: i32 = 0;
        pub const ReadProperty: i32 = 1;
        pub const WriteProperty: i32 = 2;
        pub const ResetProperty: i32 = 3;
        pub const CreateInstance: i32 = 4;
        pub const IndexOfMethod: i32 = 5;
        pub const RegisterPropertyMetaType: i32 = 6;
        pub const RegisterMethodArgumentMetaType: i32 = 7;
        pub const BindableProperty: i32 = 8;
        pub const CustomCall: i32 = 9;
        pub const ConstructInPlace: i32 = 10;
    };
};
