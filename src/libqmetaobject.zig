const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGenericArgument = @import("libqt6").QGenericArgument;
const QGenericReturnArgument = @import("libqt6").QGenericReturnArgument;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaType = @import("libqt6").QMetaType;
const QObject = @import("libqt6").QObject;
const QUntypedBindable = @import("libqt6").QUntypedBindable;
const QVariant = @import("libqt6").QVariant;
const qmetaobject_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qvariant_enums = @import("libqvariant.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)
pub const QMetaMethod = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaMethod,

    pub const _is_QMetaMethod = {};

    /// New constructs a new QMetaMethod object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn New(other: anytype) QMetaMethod {
        comptime _ = @TypeOf(other)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn New2(other: anytype) QMetaMethod {
        comptime _ = @TypeOf(other)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaMethod object.
    ///
    pub fn New3() QMetaMethod {
        return .{ .ptr = qtc.QMetaMethod_new3() };
    }

    /// New4 constructs a new QMetaMethod object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn New4(param1: anytype) QMetaMethod {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn CopyAssign(self: QMetaMethod, other: QMetaMethod) void {
        qtc.QMetaMethod_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn MoveAssign(self: QMetaMethod, other: QMetaMethod) void {
        qtc.QMetaMethod_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MethodSignature(self: QMetaMethod, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_MethodSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.MethodSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QMetaMethod, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn TypeName(self: QMetaMethod) [:0]const u8 {
        const _ret = qtc.QMetaMethod_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn ReturnType(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_ReturnType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn ReturnMetaType(self: QMetaMethod) QMetaType {
        return .{ .ptr = qtc.QMetaMethod_ReturnMetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn ParameterCount(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_ParameterCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` index: i32 `
    ///
    pub fn ParameterType(self: QMetaMethod, index: i32) i32 {
        return qtc.QMetaMethod_ParameterType(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` index: i32 `
    ///
    pub fn ParameterMetaType(self: QMetaMethod, index: i32) QMetaType {
        return .{ .ptr = qtc.QMetaMethod_ParameterMetaType(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` types: *i32 `
    ///
    pub fn GetParameterTypes(self: QMetaMethod, types: *i32) void {
        qtc.QMetaMethod_GetParameterTypes(@ptrCast(self.ptr), @ptrCast(types));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParameterTypes(self: QMetaMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmetamethod.ParameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmetamethod.ParameterTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ParameterTypeName(self: QMetaMethod, allocator: std.mem.Allocator, index: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_ParameterTypeName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.ParameterTypeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParameterNames(self: QMetaMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmetamethod.ParameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmetamethod.ParameterNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn Tag(self: QMetaMethod) [:0]const u8 {
        const _ret = qtc.QMetaMethod_Tag(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#access)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ## Returns:
    ///
    /// ` qmetaobject_enums.Access `
    ///
    pub fn Access(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Access(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ## Returns:
    ///
    /// ` qmetaobject_enums.MethodType `
    ///
    pub fn MethodType(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_MethodType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn Attributes(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Attributes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn MethodIndex(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_MethodIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn RelativeMethodIndex(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_RelativeMethodIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn Revision(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Revision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn IsConst(self: QMetaMethod) bool {
        return qtc.QMetaMethod_IsConst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn EnclosingMetaObject(self: QMetaMethod) QMetaObject {
        return .{ .ptr = qtc.QMetaMethod_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    pub fn Invoke(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_Invoke(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    pub fn Invoke2(self: QMetaMethod, object: anytype, returnValue: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_Invoke2(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn Invoke3(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke3(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn Invoke4(self: QMetaMethod, object: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke4(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    pub fn InvokeOnGadget(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_InvokeOnGadget(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeOnGadget2(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget2(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn IsValid(self: QMetaMethod) bool {
        return qtc.QMetaMethod_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn Invoke42(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke42(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn Invoke5(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke5(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn Invoke6(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke6(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn Invoke7(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke7(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke8(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke8(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke9(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke9(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke10(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke10(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke11(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke11(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke12(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke12(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke13(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
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
        return qtc.QMetaMethod_Invoke13(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn Invoke32(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke32(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn Invoke43(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke43(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn Invoke52(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke52(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn Invoke62(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke62(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke72(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke72(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke82(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke82(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke92(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke92(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke102(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke102(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke112(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke112(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn Invoke122(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
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
        return qtc.QMetaMethod_Invoke122(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn Invoke44(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke44(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn Invoke53(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke53(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn Invoke63(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke63(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke73(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke73(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke83(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke83(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke93(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke93(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke103(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke103(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke113(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke113(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` connectionType: qnamespace_enums.ConnectionType `
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
    pub fn Invoke123(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
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
        return qtc.QMetaMethod_Invoke123(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn Invoke33(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke33(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn Invoke45(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke45(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn Invoke54(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke54(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke64(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke64(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke74(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke74(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke84(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke84(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke94(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke94(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke104(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke104(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` object: QObject `
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
    pub fn Invoke114(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
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
        return qtc.QMetaMethod_Invoke114(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    pub fn InvokeOnGadget3(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget3(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeOnGadget4(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget4(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeOnGadget5(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget5(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeOnGadget6(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget6(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget7(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget7(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget8(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget8(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget9(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget9(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget10(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget10(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget11(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget11(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` returnValue: QGenericReturnArgument `
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
    pub fn InvokeOnGadget12(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
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
        return qtc.QMetaMethod_InvokeOnGadget12(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    pub fn InvokeOnGadget32(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget32(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    pub fn InvokeOnGadget42(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget42(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` val0: QGenericArgument `
    ///
    /// ` val1: QGenericArgument `
    ///
    /// ` val2: QGenericArgument `
    ///
    /// ` val3: QGenericArgument `
    ///
    pub fn InvokeOnGadget52(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget52(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget62(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget62(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget72(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget72(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget82(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget82(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget92(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget92(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget102(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        comptime _ = @TypeOf(val7)._is_QGenericArgument;
        comptime _ = @TypeOf(val8)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget102(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` gadget: ?*anyopaque `
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
    pub fn InvokeOnGadget112(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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
        return qtc.QMetaMethod_InvokeOnGadget112(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr), @ptrCast(val7.ptr), @ptrCast(val8.ptr), @ptrCast(val9.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#dtor.QMetaMethod)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn Delete(self: QMetaMethod) void {
        qtc.QMetaMethod_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)
pub const QMetaEnum = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaEnum,

    pub const _is_QMetaEnum = {};

    /// New constructs a new QMetaEnum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn New(other: anytype) QMetaEnum {
        comptime _ = @TypeOf(other)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn New2(other: anytype) QMetaEnum {
        comptime _ = @TypeOf(other)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaEnum object.
    ///
    pub fn New3() QMetaEnum {
        return .{ .ptr = qtc.QMetaEnum_new3() };
    }

    /// New4 constructs a new QMetaEnum object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaEnum `
    ///
    pub fn New4(param1: anytype) QMetaEnum {
        comptime _ = @TypeOf(param1)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn CopyAssign(self: QMetaEnum, other: QMetaEnum) void {
        qtc.QMetaEnum_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn MoveAssign(self: QMetaEnum, other: QMetaEnum) void {
        qtc.QMetaEnum_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn Name(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn EnumName(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_EnumName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn MetaType(self: QMetaEnum) QMetaType {
        return .{ .ptr = qtc.QMetaEnum_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn IsFlag(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsFlag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn IsScoped(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsScoped(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn KeyCount(self: QMetaEnum) i32 {
        return qtc.QMetaEnum_KeyCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` index: i32 `
    ///
    pub fn Key(self: QMetaEnum, index: i32) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Key(@ptrCast(self.ptr), @bitCast(index));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` index: i32 `
    ///
    pub fn Value(self: QMetaEnum, index: i32) i32 {
        return qtc.QMetaEnum_Value(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#scope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn Scope(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Scope(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn KeyToValue(self: QMetaEnum, key: [:0]const u8) i32 {
        const key_Cstring = key.ptr;
        return qtc.QMetaEnum_KeyToValue(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` value: i32 `
    ///
    pub fn ValueToKey(self: QMetaEnum, value: i32) [:0]const u8 {
        const _ret = qtc.QMetaEnum_ValueToKey(@ptrCast(self.ptr), @bitCast(value));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` keys: [:0]const u8 `
    ///
    pub fn KeysToValue(self: QMetaEnum, keys: [:0]const u8) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue(@ptrCast(self.ptr), keys_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: i32 `
    ///
    pub fn ValueToKeys(self: QMetaEnum, allocator: std.mem.Allocator, value: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaEnum_ValueToKeys(@ptrCast(self.ptr), @bitCast(value));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaenum.ValueToKeys: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn EnclosingMetaObject(self: QMetaEnum) QMetaObject {
        return .{ .ptr = qtc.QMetaEnum_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn IsValid(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` ok: *bool `
    ///
    pub fn KeyToValue2(self: QMetaEnum, key: [:0]const u8, ok: *bool) i32 {
        const key_Cstring = key.ptr;
        return qtc.QMetaEnum_KeyToValue2(@ptrCast(self.ptr), key_Cstring, @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` keys: [:0]const u8 `
    ///
    /// ` ok: *bool `
    ///
    pub fn KeysToValue2(self: QMetaEnum, keys: [:0]const u8, ok: *bool) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue2(@ptrCast(self.ptr), keys_Cstring, @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#dtor.QMetaEnum)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn Delete(self: QMetaEnum) void {
        qtc.QMetaEnum_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html)
pub const QMetaProperty = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaProperty,

    pub const _is_QMetaProperty = {};

    /// New constructs a new QMetaProperty object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn New(other: anytype) QMetaProperty {
        comptime _ = @TypeOf(other)._is_QMetaProperty;
        return .{ .ptr = qtc.QMetaProperty_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn New2(other: anytype) QMetaProperty {
        comptime _ = @TypeOf(other)._is_QMetaProperty;
        return .{ .ptr = qtc.QMetaProperty_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaProperty object.
    ///
    pub fn New3() QMetaProperty {
        return .{ .ptr = qtc.QMetaProperty_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn CopyAssign(self: QMetaProperty, other: QMetaProperty) void {
        qtc.QMetaProperty_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn MoveAssign(self: QMetaProperty, other: QMetaProperty) void {
        qtc.QMetaProperty_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn Name(self: QMetaProperty) [:0]const u8 {
        const _ret = qtc.QMetaProperty_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn TypeName(self: QMetaProperty) [:0]const u8 {
        const _ret = qtc.QMetaProperty_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn Type(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn UserType(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_UserType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn TypeId(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_TypeId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn MetaType(self: QMetaProperty) QMetaType {
        return .{ .ptr = qtc.QMetaProperty_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn PropertyIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_PropertyIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn RelativePropertyIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_RelativePropertyIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsReadable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsReadable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsWritable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsResettable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsResettable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsDesignable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsDesignable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsScriptable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsScriptable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsStored(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsStored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsUser(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsUser(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsConstant(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsConstant(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsFinal(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsFinal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsRequired(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsRequired(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsBindable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsBindable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsFlagType(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsFlagType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsEnumType(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsEnumType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn Enumerator(self: QMetaProperty) QMetaEnum {
        return .{ .ptr = qtc.QMetaProperty_Enumerator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn HasNotifySignal(self: QMetaProperty) bool {
        return qtc.QMetaProperty_HasNotifySignal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn NotifySignal(self: QMetaProperty) QMetaMethod {
        return .{ .ptr = qtc.QMetaProperty_NotifySignal(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn NotifySignalIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_NotifySignalIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn Revision(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_Revision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    pub fn Read(self: QMetaProperty, obj: anytype) QVariant {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaProperty_Read(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    /// ` value: QVariant `
    ///
    pub fn Write(self: QMetaProperty, obj: anytype, value: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QMetaProperty_Write(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    pub fn Reset(self: QMetaProperty, obj: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        return qtc.QMetaProperty_Reset(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` object: QObject `
    ///
    pub fn Bindable(self: QMetaProperty, object: anytype) QUntypedBindable {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QMetaProperty_Bindable(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*const anyopaque `
    ///
    pub fn ReadOnGadget(self: QMetaProperty, gadget: ?*const anyopaque) QVariant {
        return .{ .ptr = qtc.QMetaProperty_ReadOnGadget(@ptrCast(self.ptr), @ptrCast(gadget)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` value: QVariant `
    ///
    pub fn WriteOnGadget(self: QMetaProperty, gadget: ?*anyopaque, value: anytype) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QMetaProperty_WriteOnGadget(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    pub fn ResetOnGadget(self: QMetaProperty, gadget: ?*anyopaque) bool {
        return qtc.QMetaProperty_ResetOnGadget(@ptrCast(self.ptr), @ptrCast(gadget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn HasStdCppSet(self: QMetaProperty) bool {
        return qtc.QMetaProperty_HasStdCppSet(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsAlias(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsAlias(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn IsValid(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn EnclosingMetaObject(self: QMetaProperty) QMetaObject {
        return .{ .ptr = qtc.QMetaProperty_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#dtor.QMetaProperty)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn Delete(self: QMetaProperty) void {
        qtc.QMetaProperty_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)
pub const QMetaClassInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaClassInfo,

    pub const _is_QMetaClassInfo = {};

    /// New constructs a new QMetaClassInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn New(other: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(other)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn New2(other: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(other)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaClassInfo object.
    ///
    pub fn New3() QMetaClassInfo {
        return .{ .ptr = qtc.QMetaClassInfo_new3() };
    }

    /// New4 constructs a new QMetaClassInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaClassInfo `
    ///
    pub fn New4(param1: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(param1)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaClassInfo `
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn CopyAssign(self: QMetaClassInfo, other: QMetaClassInfo) void {
        qtc.QMetaClassInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaClassInfo `
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn MoveAssign(self: QMetaClassInfo, other: QMetaClassInfo) void {
        qtc.QMetaClassInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn Name(self: QMetaClassInfo) [:0]const u8 {
        const _ret = qtc.QMetaClassInfo_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn Value(self: QMetaClassInfo) [:0]const u8 {
        const _ret = qtc.QMetaClassInfo_Value(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn EnclosingMetaObject(self: QMetaClassInfo) QMetaObject {
        return .{ .ptr = qtc.QMetaClassInfo_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#dtor.QMetaClassInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn Delete(self: QMetaClassInfo) void {
        qtc.QMetaClassInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#public-types)
pub const enums = struct {
    pub const Access = enum(i32) {
        pub const Private: i32 = 0;
        pub const Protected: i32 = 1;
        pub const Public: i32 = 2;
    };

    pub const MethodType = enum(i32) {
        pub const Method: i32 = 0;
        pub const Signal: i32 = 1;
        pub const Slot: i32 = 2;
        pub const Constructor: i32 = 3;
    };

    pub const Attributes = enum(i32) {
        pub const Compatibility: i32 = 1;
        pub const Cloned: i32 = 2;
        pub const Scriptable: i32 = 4;
    };
};
