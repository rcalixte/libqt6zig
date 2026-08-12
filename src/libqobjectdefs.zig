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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGenericArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn new(other: anytype) QGenericArgument {
        comptime _ = @TypeOf(other)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGenericArgument object and invalidate the source QGenericArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn new2(other: anytype) QGenericArgument {
        comptime _ = @TypeOf(other)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGenericArgument object in C++ memory
    ///
    pub fn new3() QGenericArgument {
        return .{ .ptr = qtc.QGenericArgument_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGenericArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGenericArgument `
    ///
    pub fn new4(param1: anytype) QGenericArgument {
        comptime _ = @TypeOf(param1)._is_QGenericArgument;
        return .{ .ptr = qtc.QGenericArgument_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGenericArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    pub fn new5(aName: [:0]const u8) QGenericArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericArgument_new5(aName_Cstring) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QGenericArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    /// ` aData: ?*const anyopaque `
    ///
    pub fn new6(aName: [:0]const u8, aData: ?*const anyopaque) QGenericArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericArgument_new6(aName_Cstring, @ptrCast(aData)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericArgument `
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn copyAssign(self: QGenericArgument, other: QGenericArgument) void {
        qtc.QGenericArgument_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericArgument `
    ///
    /// ` other: QGenericArgument `
    ///
    pub fn moveAssign(self: QGenericArgument, other: QGenericArgument) void {
        qtc.QGenericArgument_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn data(self: QGenericArgument) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn name(self: QGenericArgument) [:0]const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#dtor.QGenericArgument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGenericArgument `
    ///
    pub fn delete(self: QGenericArgument) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGenericReturnArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn new(other: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(other)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGenericReturnArgument object and invalidate the source QGenericReturnArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn new2(other: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(other)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGenericReturnArgument object in C++ memory
    ///
    pub fn new3() QGenericReturnArgument {
        return .{ .ptr = qtc.QGenericReturnArgument_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGenericReturnArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGenericReturnArgument `
    ///
    pub fn new4(param1: anytype) QGenericReturnArgument {
        comptime _ = @TypeOf(param1)._is_QGenericReturnArgument;
        return .{ .ptr = qtc.QGenericReturnArgument_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGenericReturnArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    pub fn new5(aName: [:0]const u8) QGenericReturnArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericReturnArgument_new5(aName_Cstring) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QGenericReturnArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aName: [:0]const u8 `
    ///
    /// ` aData: ?*anyopaque `
    ///
    pub fn new6(aName: [:0]const u8, aData: ?*anyopaque) QGenericReturnArgument {
        const aName_Cstring = aName.ptr;
        return .{ .ptr = qtc.QGenericReturnArgument_new6(aName_Cstring, @ptrCast(aData)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn copyAssign(self: QGenericReturnArgument, other: QGenericReturnArgument) void {
        qtc.QGenericReturnArgument_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    /// ` other: QGenericReturnArgument `
    ///
    pub fn moveAssign(self: QGenericReturnArgument, other: QGenericReturnArgument) void {
        qtc.QGenericReturnArgument_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QGenericArgument
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn data(self: QGenericReturnArgument) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QGenericArgument
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn name(self: QGenericReturnArgument) [:0]const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgenericreturnargument.html#dtor.QGenericReturnArgument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGenericReturnArgument `
    ///
    pub fn delete(self: QGenericReturnArgument) void {
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

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodArgument `
    ///
    pub fn name(self: QMetaMethodArgument) [:0]const u8 {
        const name_ret = qtc.QMetaMethodArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(name_ret);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodArgument `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn setName(self: QMetaMethodArgument, _name: [:0]const u8) void {
        const name_Cstring = _name.ptr;
        qtc.QMetaMethodArgument_SetName(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodargument.html#dtor.QMetaMethodArgument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethodArgument `
    ///
    pub fn delete(self: QMetaMethodArgument) void {
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

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    pub fn name(self: QMetaMethodReturnArgument) [:0]const u8 {
        const name_ret = qtc.QMetaMethodReturnArgument_Name(@ptrCast(self.ptr));
        return std.mem.span(name_ret);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn setName(self: QMetaMethodReturnArgument, _name: [:0]const u8) void {
        const name_Cstring = _name.ptr;
        qtc.QMetaMethodReturnArgument_SetName(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#dtor.QMetaMethodReturnArgument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethodReturnArgument `
    ///
    pub fn delete(self: QMetaMethodReturnArgument) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaObject object in C++ memory
    ///
    pub fn new() QMetaObject {
        return .{ .ptr = qtc.QMetaObject_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject `
    ///
    pub fn new2(param1: anytype) QMetaObject {
        comptime _ = @TypeOf(param1)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObject_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `className` instead
    ///
    pub const ClassName = className;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#className)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn className(self: QMetaObject) [:0]const u8 {
        const _ret = qtc.QMetaObject_ClassName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superClass` instead
    ///
    pub const SuperClass = superClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#superClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn superClass(self: QMetaObject) QMetaObject {
        return .{ .ptr = qtc.QMetaObject_SuperClass(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` metaObject: QMetaObject `
    ///
    pub fn inherits(self: QMetaObject, metaObject: anytype) bool {
        comptime _ = @TypeOf(metaObject)._is_QMetaObject;
        return qtc.QMetaObject_Inherits(@ptrCast(self.ptr), @ptrCast(metaObject.ptr));
    }

    /// ### DEPRECATED: Use `cast` instead
    ///
    pub const Cast = cast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn cast(self: QMetaObject, obj: anytype) QObject {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Cast(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `cast2` instead
    ///
    pub const Cast2 = cast2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn cast2(self: QMetaObject, obj: anytype) QObject {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Cast2(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

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
    pub fn tr(self: QMetaObject, allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QMetaObject_Tr(@ptrCast(self.ptr), s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaObject.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn metaType(self: QMetaObject) QMetaType {
        return .{ .ptr = qtc.QMetaObject_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `methodOffset` instead
    ///
    pub const MethodOffset = methodOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#methodOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn methodOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_MethodOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enumeratorOffset` instead
    ///
    pub const EnumeratorOffset = enumeratorOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn enumeratorOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_EnumeratorOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyOffset` instead
    ///
    pub const PropertyOffset = propertyOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#propertyOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn propertyOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_PropertyOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `classInfoOffset` instead
    ///
    pub const ClassInfoOffset = classInfoOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfoOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn classInfoOffset(self: QMetaObject) i32 {
        return qtc.QMetaObject_ClassInfoOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constructorCount` instead
    ///
    pub const ConstructorCount = constructorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#constructorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn constructorCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_ConstructorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `methodCount` instead
    ///
    pub const MethodCount = methodCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#methodCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn methodCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_MethodCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enumeratorCount` instead
    ///
    pub const EnumeratorCount = enumeratorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn enumeratorCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_EnumeratorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn propertyCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `classInfoCount` instead
    ///
    pub const ClassInfoCount = classInfoCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfoCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn classInfoCount(self: QMetaObject) i32 {
        return qtc.QMetaObject_ClassInfoCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfConstructor` instead
    ///
    pub const IndexOfConstructor = indexOfConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _constructor: [:0]const u8 `
    ///
    pub fn indexOfConstructor(self: QMetaObject, _constructor: [:0]const u8) i32 {
        const constructor_Cstring = _constructor.ptr;
        return qtc.QMetaObject_IndexOfConstructor(@ptrCast(self.ptr), constructor_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfMethod` instead
    ///
    pub const IndexOfMethod = indexOfMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _method: [:0]const u8 `
    ///
    pub fn indexOfMethod(self: QMetaObject, _method: [:0]const u8) i32 {
        const method_Cstring = _method.ptr;
        return qtc.QMetaObject_IndexOfMethod(@ptrCast(self.ptr), method_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfSignal` instead
    ///
    pub const IndexOfSignal = indexOfSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn indexOfSignal(self: QMetaObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMetaObject_IndexOfSignal(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfSlot` instead
    ///
    pub const IndexOfSlot = indexOfSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn indexOfSlot(self: QMetaObject, slot: [:0]const u8) i32 {
        const slot_Cstring = slot.ptr;
        return qtc.QMetaObject_IndexOfSlot(@ptrCast(self.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfEnumerator` instead
    ///
    pub const IndexOfEnumerator = indexOfEnumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfEnumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn indexOfEnumerator(self: QMetaObject, _name: [:0]const u8) i32 {
        const name_Cstring = _name.ptr;
        return qtc.QMetaObject_IndexOfEnumerator(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfProperty` instead
    ///
    pub const IndexOfProperty = indexOfProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn indexOfProperty(self: QMetaObject, _name: [:0]const u8) i32 {
        const name_Cstring = _name.ptr;
        return qtc.QMetaObject_IndexOfProperty(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `indexOfClassInfo` instead
    ///
    pub const IndexOfClassInfo = indexOfClassInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#indexOfClassInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn indexOfClassInfo(self: QMetaObject, _name: [:0]const u8) i32 {
        const name_Cstring = _name.ptr;
        return qtc.QMetaObject_IndexOfClassInfo(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `constructor` instead
    ///
    pub const Constructor = constructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#constructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn constructor(self: QMetaObject, index: i32) QMetaMethod {
        return .{ .ptr = qtc.QMetaObject_Constructor(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `method` instead
    ///
    pub const Method = method;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#method)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn method(self: QMetaObject, index: i32) QMetaMethod {
        return .{ .ptr = qtc.QMetaObject_Method(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `enumerator` instead
    ///
    pub const Enumerator = enumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#enumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn enumerator(self: QMetaObject, index: i32) QMetaEnum {
        return .{ .ptr = qtc.QMetaObject_Enumerator(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn property(self: QMetaObject, index: i32) QMetaProperty {
        return .{ .ptr = qtc.QMetaObject_Property(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `classInfo` instead
    ///
    pub const ClassInfo = classInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#classInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` index: i32 `
    ///
    pub fn classInfo(self: QMetaObject, index: i32) QMetaClassInfo {
        return .{ .ptr = qtc.QMetaObject_ClassInfo(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `userProperty` instead
    ///
    pub const UserProperty = userProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#userProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn userProperty(self: QMetaObject) QMetaProperty {
        return .{ .ptr = qtc.QMetaObject_UserProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `checkConnectArgs` instead
    ///
    pub const CheckConnectArgs = checkConnectArgs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` _method: [:0]const u8 `
    ///
    pub fn checkConnectArgs(signal: [:0]const u8, _method: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const method_Cstring = _method.ptr;
        return qtc.QMetaObject_CheckConnectArgs(signal_Cstring, method_Cstring);
    }

    /// ### DEPRECATED: Use `checkConnectArgs2` instead
    ///
    pub const CheckConnectArgs2 = checkConnectArgs2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` _method: QMetaMethod `
    ///
    pub fn checkConnectArgs2(signal: anytype, _method: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(_method)._is_QMetaMethod;
        return qtc.QMetaObject_CheckConnectArgs2(@ptrCast(signal.ptr), @ptrCast(_method.ptr));
    }

    /// ### DEPRECATED: Use `normalizedSignature` instead
    ///
    pub const NormalizedSignature = normalizedSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#normalizedSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _method: [:0]const u8 `
    ///
    pub fn normalizedSignature(allocator: std.mem.Allocator, _method: [:0]const u8) []u8 {
        const method_Cstring = _method.ptr;
        var _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedSignature(method_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaObject.normalizedSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `normalizedType` instead
    ///
    pub const NormalizedType = normalizedType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#normalizedType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: [:0]const u8 `
    ///
    pub fn normalizedType(allocator: std.mem.Allocator, typeVal: [:0]const u8) []u8 {
        const typeVal_Cstring = typeVal.ptr;
        var _bytearray: qtc.libqt_string = qtc.QMetaObject_NormalizedType(typeVal_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaObject.normalizedType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

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
    pub fn connect(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index)) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

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
    pub fn disconnect(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QMetaObject_Disconnect(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index));
    }

    /// ### DEPRECATED: Use `disconnectOne` instead
    ///
    pub const DisconnectOne = disconnectOne;

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
    pub fn disconnectOne(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QMetaObject_DisconnectOne(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index));
    }

    /// ### DEPRECATED: Use `connectSlotsByName` instead
    ///
    pub const ConnectSlotsByName = connectSlotsByName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#connectSlotsByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QObject `
    ///
    pub fn connectSlotsByName(o: anytype) void {
        comptime _ = @TypeOf(o)._is_QObject;
        qtc.QMetaObject_ConnectSlotsByName(@ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

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
    pub fn activate(sender: anytype, signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        qtc.QMetaObject_Activate(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(argv));
    }

    /// ### DEPRECATED: Use `activate2` instead
    ///
    pub const Activate2 = activate2;

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
    pub fn activate2(sender: anytype, param2: anytype, local_signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QMetaObject;
        qtc.QMetaObject_Activate2(@ptrCast(sender.ptr), @ptrCast(param2.ptr), @bitCast(local_signal_index), @ptrCast(argv));
    }

    /// ### DEPRECATED: Use `activate3` instead
    ///
    pub const Activate3 = activate3;

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
    pub fn activate3(sender: anytype, signal_offset: i32, local_signal_index: i32, argv: *?*anyopaque) void {
        comptime _ = @TypeOf(sender)._is_QObject;
        qtc.QMetaObject_Activate3(@ptrCast(sender.ptr), @bitCast(signal_offset), @bitCast(local_signal_index), @ptrCast(argv));
    }

    /// ### DEPRECATED: Use `invokeMethod` instead
    ///
    pub const InvokeMethod = invokeMethod;

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
    /// ` ret: QGenericReturnArgument `
    ///
    pub fn invokeMethod(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        return qtc.QMetaObject_InvokeMethod(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod2` instead
    ///
    pub const InvokeMethod2 = invokeMethod2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
    ///
    pub fn invokeMethod2(obj: anytype, member: [:0]const u8, ret: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        return qtc.QMetaObject_InvokeMethod2(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod3` instead
    ///
    pub const InvokeMethod3 = invokeMethod3;

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
    pub fn invokeMethod3(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod3(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod4` instead
    ///
    pub const InvokeMethod4 = invokeMethod4;

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
    pub fn invokeMethod4(obj: anytype, member: [:0]const u8, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod4(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `newInstance` instead
    ///
    pub const NewInstance = newInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn newInstance(self: QMetaObject, val0: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance(@ptrCast(self.ptr), @ptrCast(val0.ptr)) };
    }

    /// ### DEPRECATED: Use `staticMetacall` instead
    ///
    pub const StaticMetacall = staticMetacall;

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
    pub fn staticMetacall(self: QMetaObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMetaObject_StaticMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(param1: anytype, param2: i32, param3: i32, param4: *?*anyopaque) i32 {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QMetaObject_Metacall(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3), @ptrCast(param4));
    }

    /// ### DEPRECATED: Use `d` instead
    ///
    pub const D = d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    pub fn d(self: QMetaObject) QMetaObject__Data {
        return .{ .ptr = qtc.QMetaObject_D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setD` instead
    ///
    pub const SetD = setD;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject `
    ///
    /// ` _d: QMetaObject__Data `
    ///
    pub fn setD(self: QMetaObject, _d: anytype) void {
        comptime _ = @TypeOf(_d)._is_QMetaObject__Data;
        qtc.QMetaObject_SetD(@ptrCast(self.ptr), @ptrCast(_d.ptr));
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(self: QMetaObject, allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QMetaObject_Tr3(@ptrCast(self.ptr), s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMetaObject.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

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
    pub fn connect5(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect5(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect6` instead
    ///
    pub const Connect6 = connect6;

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
    pub fn connect6(sender: anytype, signal_index: i32, receiver: anytype, method_index: i32, typeVal: i32, types: *i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.QMetaObject_Connect6(@ptrCast(sender.ptr), @bitCast(signal_index), @ptrCast(receiver.ptr), @bitCast(method_index), @bitCast(typeVal), @ptrCast(types)) };
    }

    /// ### DEPRECATED: Use `invokeMethod5` instead
    ///
    pub const InvokeMethod5 = invokeMethod5;

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
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn invokeMethod5(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod5(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod6` instead
    ///
    pub const InvokeMethod6 = invokeMethod6;

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
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn invokeMethod6(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod6(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod7` instead
    ///
    pub const InvokeMethod7 = invokeMethod7;

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
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn invokeMethod7(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod7(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod8` instead
    ///
    pub const InvokeMethod8 = invokeMethod8;

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
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn invokeMethod8(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod8(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod9` instead
    ///
    pub const InvokeMethod9 = invokeMethod9;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod9(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod9(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod10` instead
    ///
    pub const InvokeMethod10 = invokeMethod10;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod10(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod10(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod11` instead
    ///
    pub const InvokeMethod11 = invokeMethod11;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod11(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod11(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod12` instead
    ///
    pub const InvokeMethod12 = invokeMethod12;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod12(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod12(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod13` instead
    ///
    pub const InvokeMethod13 = invokeMethod13;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod13(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod13(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod14` instead
    ///
    pub const InvokeMethod14 = invokeMethod14;

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
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod14(obj: anytype, member: [:0]const u8, param3: i32, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
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
        return qtc.QMetaObject_InvokeMethod14(@ptrCast(obj.ptr), member_Cstring, @bitCast(param3), @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod42` instead
    ///
    pub const InvokeMethod42 = invokeMethod42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn invokeMethod42(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod42(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod52` instead
    ///
    pub const InvokeMethod52 = invokeMethod52;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn invokeMethod52(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod52(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod62` instead
    ///
    pub const InvokeMethod62 = invokeMethod62;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn invokeMethod62(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod62(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod72` instead
    ///
    pub const InvokeMethod72 = invokeMethod72;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn invokeMethod72(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod72(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod82` instead
    ///
    pub const InvokeMethod82 = invokeMethod82;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod82(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod82(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod92` instead
    ///
    pub const InvokeMethod92 = invokeMethod92;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod92(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod92(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod102` instead
    ///
    pub const InvokeMethod102 = invokeMethod102;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod102(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod102(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod112` instead
    ///
    pub const InvokeMethod112 = invokeMethod112;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod112(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod112(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod122` instead
    ///
    pub const InvokeMethod122 = invokeMethod122;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod122(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod122(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod132` instead
    ///
    pub const InvokeMethod132 = invokeMethod132;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ret: QGenericReturnArgument `
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
    pub fn invokeMethod132(obj: anytype, member: [:0]const u8, ret: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(ret)._is_QGenericReturnArgument;
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
        return qtc.QMetaObject_InvokeMethod132(@ptrCast(obj.ptr), member_Cstring, @ptrCast(ret.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod53` instead
    ///
    pub const InvokeMethod53 = invokeMethod53;

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
    pub fn invokeMethod53(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod53(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod63` instead
    ///
    pub const InvokeMethod63 = invokeMethod63;

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
    pub fn invokeMethod63(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod63(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod73` instead
    ///
    pub const InvokeMethod73 = invokeMethod73;

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
    pub fn invokeMethod73(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod73(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod83` instead
    ///
    pub const InvokeMethod83 = invokeMethod83;

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
    pub fn invokeMethod83(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod83(@ptrCast(obj.ptr), member_Cstring, @bitCast(typeVal), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod93` instead
    ///
    pub const InvokeMethod93 = invokeMethod93;

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
    pub fn invokeMethod93(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod103` instead
    ///
    pub const InvokeMethod103 = invokeMethod103;

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
    pub fn invokeMethod103(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod113` instead
    ///
    pub const InvokeMethod113 = invokeMethod113;

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
    pub fn invokeMethod113(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod123` instead
    ///
    pub const InvokeMethod123 = invokeMethod123;

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
    pub fn invokeMethod123(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod133` instead
    ///
    pub const InvokeMethod133 = invokeMethod133;

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
    pub fn invokeMethod133(obj: anytype, member: [:0]const u8, typeVal: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod43` instead
    ///
    pub const InvokeMethod43 = invokeMethod43;

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
    pub fn invokeMethod43(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod43(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod54` instead
    ///
    pub const InvokeMethod54 = invokeMethod54;

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
    pub fn invokeMethod54(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod54(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod64` instead
    ///
    pub const InvokeMethod64 = invokeMethod64;

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
    pub fn invokeMethod64(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod64(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod74` instead
    ///
    pub const InvokeMethod74 = invokeMethod74;

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
    pub fn invokeMethod74(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        const member_Cstring = member.ptr;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaObject_InvokeMethod74(@ptrCast(obj.ptr), member_Cstring, @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeMethod84` instead
    ///
    pub const InvokeMethod84 = invokeMethod84;

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
    pub fn invokeMethod84(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod94` instead
    ///
    pub const InvokeMethod94 = invokeMethod94;

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
    pub fn invokeMethod94(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod104` instead
    ///
    pub const InvokeMethod104 = invokeMethod104;

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
    pub fn invokeMethod104(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod114` instead
    ///
    pub const InvokeMethod114 = invokeMethod114;

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
    pub fn invokeMethod114(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeMethod124` instead
    ///
    pub const InvokeMethod124 = invokeMethod124;

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
    pub fn invokeMethod124(obj: anytype, member: [:0]const u8, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `newInstance2` instead
    ///
    pub const NewInstance2 = newInstance2;

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
    pub fn newInstance2(self: QMetaObject, val0: anytype, val1: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance2(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance3` instead
    ///
    pub const NewInstance3 = newInstance3;

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
    pub fn newInstance3(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance3(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance4` instead
    ///
    pub const NewInstance4 = newInstance4;

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
    pub fn newInstance4(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance4(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance5` instead
    ///
    pub const NewInstance5 = newInstance5;

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
    pub fn newInstance5(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance5(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance6` instead
    ///
    pub const NewInstance6 = newInstance6;

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
    pub fn newInstance6(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance6(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance7` instead
    ///
    pub const NewInstance7 = newInstance7;

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
    pub fn newInstance7(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) QObject {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return .{ .ptr = qtc.QMetaObject_NewInstance7(@ptrCast(self.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr)) };
    }

    /// ### DEPRECATED: Use `newInstance8` instead
    ///
    pub const NewInstance8 = newInstance8;

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
    pub fn newInstance8(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) QObject {
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

    /// ### DEPRECATED: Use `newInstance9` instead
    ///
    pub const NewInstance9 = newInstance9;

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
    pub fn newInstance9(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) QObject {
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

    /// ### DEPRECATED: Use `newInstance10` instead
    ///
    pub const NewInstance10 = newInstance10;

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
    pub fn newInstance10(self: QMetaObject, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) QObject {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#dtor.QMetaObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject `
    ///
    pub fn delete(self: QMetaObject) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaObject::Connection object in C++ memory
    ///
    pub fn new() QMetaObject__Connection {
        return .{ .ptr = qtc.QMetaObject__Connection_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaObject::Connection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn new2(other: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        return .{ .ptr = qtc.QMetaObject__Connection_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Connection `
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn operatorAssign(self: QMetaObject__Connection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        qtc.QMetaObject__Connection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-connection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Connection `
    ///
    /// ` other: QMetaObject__Connection `
    ///
    pub fn swap(self: QMetaObject__Connection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMetaObject__Connection;
        qtc.QMetaObject__Connection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__Connection `
    ///
    pub fn delete(self: QMetaObject__Connection) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaObject::SuperData object in C++ memory
    ///
    pub fn new() QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__SuperData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaObject::SuperData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mo: QMetaObject `
    ///
    pub fn new2(mo: anytype) QMetaObject__SuperData {
        comptime _ = @TypeOf(mo)._is_QMetaObject;
        return .{ .ptr = qtc.QMetaObject__SuperData_new2(@ptrCast(mo.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaObject::SuperData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` g: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn new3(g: *const fn () callconv(.c) QMetaObject) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__SuperData_new3(@bitCast(@intFromPtr(g))) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaObject::SuperData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__SuperData `
    ///
    pub fn new4(param1: anytype) QMetaObject__SuperData {
        comptime _ = @TypeOf(param1)._is_QMetaObject__SuperData;
        return .{ .ptr = qtc.QMetaObject__SuperData_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `direct` instead
    ///
    pub const Direct = direct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn direct(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_Direct(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDirect` instead
    ///
    pub const SetDirect = setDirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    /// ` _direct: QMetaObject `
    ///
    pub fn setDirect(self: QMetaObject__SuperData, _direct: anytype) void {
        comptime _ = @TypeOf(_direct)._is_QMetaObject;
        qtc.QMetaObject__SuperData_SetDirect(@ptrCast(self.ptr), @ptrCast(_direct.ptr));
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn operatorMinusGreater(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toConstQMetaObjectMultiply` instead
    ///
    pub const ToConstQMetaObjectMultiply = toConstQMetaObjectMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn toConstQMetaObjectMultiply(self: QMetaObject__SuperData) QMetaObject {
        return .{ .ptr = qtc.QMetaObject__SuperData_ToConstQMetaObjectMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    /// ` param1: QMetaObject__SuperData `
    ///
    pub fn operatorAssign(self: QMetaObject__SuperData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaObject__SuperData;
        qtc.QMetaObject__SuperData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__SuperData `
    ///
    pub fn delete(self: QMetaObject__SuperData) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaObject::Data object in C++ memory
    ///
    pub fn new() QMetaObject__Data {
        return .{ .ptr = qtc.QMetaObject__Data_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaObject::Data object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Data `
    ///
    pub fn new2(param1: anytype) QMetaObject__Data {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Data;
        return .{ .ptr = qtc.QMetaObject__Data_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `superdata` instead
    ///
    pub const Superdata = superdata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn superdata(self: QMetaObject__Data) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__Data_Superdata(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSuperdata` instead
    ///
    pub const SetSuperdata = setSuperdata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` _superdata: QMetaObject__SuperData `
    ///
    pub fn setSuperdata(self: QMetaObject__Data, _superdata: anytype) void {
        comptime _ = @TypeOf(_superdata)._is_QMetaObject__SuperData;
        qtc.QMetaObject__Data_SetSuperdata(@ptrCast(self.ptr), @ptrCast(_superdata.ptr));
    }

    /// ### DEPRECATED: Use `stringdata` instead
    ///
    pub const Stringdata = stringdata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn stringdata(self: QMetaObject__Data) ?*const u32 {
        return @ptrCast(qtc.QMetaObject__Data_Stringdata(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `setStringdata` instead
    ///
    pub const SetStringdata = setStringdata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` _stringdata: *const u32 `
    ///
    pub fn setStringdata(self: QMetaObject__Data, _stringdata: *const u32) void {
        qtc.QMetaObject__Data_SetStringdata(@ptrCast(self.ptr), @ptrCast(_stringdata));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn data(self: QMetaObject__Data) ?*const u32 {
        return @ptrCast(qtc.QMetaObject__Data_Data(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` _data: *const u32 `
    ///
    pub fn setData(self: QMetaObject__Data, _data: *const u32) void {
        qtc.QMetaObject__Data_SetData(@ptrCast(self.ptr), @ptrCast(_data));
    }

    /// ### DEPRECATED: Use `relatedMetaObjects` instead
    ///
    pub const RelatedMetaObjects = relatedMetaObjects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn relatedMetaObjects(self: QMetaObject__Data) QMetaObject__SuperData {
        return .{ .ptr = qtc.QMetaObject__Data_RelatedMetaObjects(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRelatedMetaObjects` instead
    ///
    pub const SetRelatedMetaObjects = setRelatedMetaObjects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` _relatedMetaObjects: QMetaObject__SuperData `
    ///
    pub fn setRelatedMetaObjects(self: QMetaObject__Data, _relatedMetaObjects: anytype) void {
        comptime _ = @TypeOf(_relatedMetaObjects)._is_QMetaObject__SuperData;
        qtc.QMetaObject__Data_SetRelatedMetaObjects(@ptrCast(self.ptr), @ptrCast(_relatedMetaObjects.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject-data.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaObject__Data `
    ///
    /// ` param1: QMetaObject__Data `
    ///
    pub fn operatorAssign(self: QMetaObject__Data, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Data;
        qtc.QMetaObject__Data_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaObject__Data `
    ///
    pub fn delete(self: QMetaObject__Data) void {
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
