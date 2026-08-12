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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaMethod object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn new(other: anytype) QMetaMethod {
        comptime _ = @TypeOf(other)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaMethod object and invalidate the source QMetaMethod object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn new2(other: anytype) QMetaMethod {
        comptime _ = @TypeOf(other)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaMethod object in C++ memory
    ///
    pub fn new3() QMetaMethod {
        return .{ .ptr = qtc.QMetaMethod_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaMethod object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn new4(param1: anytype) QMetaMethod {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        return .{ .ptr = qtc.QMetaMethod_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn copyAssign(self: QMetaMethod, other: QMetaMethod) void {
        qtc.QMetaMethod_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` other: QMetaMethod `
    ///
    pub fn moveAssign(self: QMetaMethod, other: QMetaMethod) void {
        qtc.QMetaMethod_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `methodSignature` instead
    ///
    pub const MethodSignature = methodSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn methodSignature(self: QMetaMethod, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_MethodSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaMethod.methodSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QMetaMethod, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaMethod.name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `typeName` instead
    ///
    pub const TypeName = typeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn typeName(self: QMetaMethod) [:0]const u8 {
        const _ret = qtc.QMetaMethod_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `returnType` instead
    ///
    pub const ReturnType = returnType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn returnType(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_ReturnType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `returnMetaType` instead
    ///
    pub const ReturnMetaType = returnMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn returnMetaType(self: QMetaMethod) QMetaType {
        return .{ .ptr = qtc.QMetaMethod_ReturnMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parameterCount` instead
    ///
    pub const ParameterCount = parameterCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn parameterCount(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_ParameterCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parameterType` instead
    ///
    pub const ParameterType = parameterType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` index: i32 `
    ///
    pub fn parameterType(self: QMetaMethod, index: i32) i32 {
        return qtc.QMetaMethod_ParameterType(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `parameterMetaType` instead
    ///
    pub const ParameterMetaType = parameterMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` index: i32 `
    ///
    pub fn parameterMetaType(self: QMetaMethod, index: i32) QMetaType {
        return .{ .ptr = qtc.QMetaMethod_ParameterMetaType(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `getParameterTypes` instead
    ///
    pub const GetParameterTypes = getParameterTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` types: *i32 `
    ///
    pub fn getParameterTypes(self: QMetaMethod, types: *i32) void {
        qtc.QMetaMethod_GetParameterTypes(@ptrCast(self.ptr), @ptrCast(types));
    }

    /// ### DEPRECATED: Use `parameterTypes` instead
    ///
    pub const ParameterTypes = parameterTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parameterTypes(self: QMetaMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMetaMethod.parameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMetaMethod.parameterTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `parameterTypeName` instead
    ///
    pub const ParameterTypeName = parameterTypeName;

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
    pub fn parameterTypeName(self: QMetaMethod, allocator: std.mem.Allocator, index: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaMethod_ParameterTypeName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaMethod.parameterTypeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parameterNames` instead
    ///
    pub const ParameterNames = parameterNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parameterNames(self: QMetaMethod, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMetaMethod.parameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMetaMethod.parameterNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `tag` instead
    ///
    pub const Tag = tag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn tag(self: QMetaMethod) [:0]const u8 {
        const _ret = qtc.QMetaMethod_Tag(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `access` instead
    ///
    pub const Access = access;

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
    pub fn access(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Access(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `methodType` instead
    ///
    pub const MethodType = methodType;

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
    pub fn methodType(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_MethodType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn attributes(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Attributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `methodIndex` instead
    ///
    pub const MethodIndex = methodIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn methodIndex(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_MethodIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `relativeMethodIndex` instead
    ///
    pub const RelativeMethodIndex = relativeMethodIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn relativeMethodIndex(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_RelativeMethodIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn revision(self: QMetaMethod) i32 {
        return qtc.QMetaMethod_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isConst` instead
    ///
    pub const IsConst = isConst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn isConst(self: QMetaMethod) bool {
        return qtc.QMetaMethod_IsConst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enclosingMetaObject` instead
    ///
    pub const EnclosingMetaObject = enclosingMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn enclosingMetaObject(self: QMetaMethod) QMetaObject {
        return .{ .ptr = qtc.QMetaMethod_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `invoke` instead
    ///
    pub const Invoke = invoke;

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
    pub fn invoke(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_Invoke(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr));
    }

    /// ### DEPRECATED: Use `invoke2` instead
    ///
    pub const Invoke2 = invoke2;

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
    pub fn invoke2(self: QMetaMethod, object: anytype, returnValue: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_Invoke2(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr));
    }

    /// ### DEPRECATED: Use `invoke3` instead
    ///
    pub const Invoke3 = invoke3;

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
    pub fn invoke3(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke3(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invoke4` instead
    ///
    pub const Invoke4 = invoke4;

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
    pub fn invoke4(self: QMetaMethod, object: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke4(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget` instead
    ///
    pub const InvokeOnGadget = invokeOnGadget;

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
    pub fn invokeOnGadget(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        return qtc.QMetaMethod_InvokeOnGadget(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget2` instead
    ///
    pub const InvokeOnGadget2 = invokeOnGadget2;

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
    pub fn invokeOnGadget2(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget2(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn isValid(self: QMetaMethod) bool {
        return qtc.QMetaMethod_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invoke42` instead
    ///
    pub const Invoke42 = invoke42;

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
    pub fn invoke42(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke42(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invoke5` instead
    ///
    pub const Invoke5 = invoke5;

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
    pub fn invoke5(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke5(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invoke6` instead
    ///
    pub const Invoke6 = invoke6;

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
    pub fn invoke6(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke6(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invoke7` instead
    ///
    pub const Invoke7 = invoke7;

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
    pub fn invoke7(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke7(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invoke8` instead
    ///
    pub const Invoke8 = invoke8;

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
    pub fn invoke8(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke8(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invoke9` instead
    ///
    pub const Invoke9 = invoke9;

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
    pub fn invoke9(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke10` instead
    ///
    pub const Invoke10 = invoke10;

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
    pub fn invoke10(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke11` instead
    ///
    pub const Invoke11 = invoke11;

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
    pub fn invoke11(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke12` instead
    ///
    pub const Invoke12 = invoke12;

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
    pub fn invoke12(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke13` instead
    ///
    pub const Invoke13 = invoke13;

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
    pub fn invoke13(self: QMetaMethod, object: anytype, connectionType: i32, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke32` instead
    ///
    pub const Invoke32 = invoke32;

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
    pub fn invoke32(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke32(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invoke43` instead
    ///
    pub const Invoke43 = invoke43;

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
    pub fn invoke43(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke43(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invoke52` instead
    ///
    pub const Invoke52 = invoke52;

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
    pub fn invoke52(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke52(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invoke62` instead
    ///
    pub const Invoke62 = invoke62;

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
    pub fn invoke62(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke62(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invoke72` instead
    ///
    pub const Invoke72 = invoke72;

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
    pub fn invoke72(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke72(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invoke82` instead
    ///
    pub const Invoke82 = invoke82;

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
    pub fn invoke82(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke92` instead
    ///
    pub const Invoke92 = invoke92;

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
    pub fn invoke92(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke102` instead
    ///
    pub const Invoke102 = invoke102;

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
    pub fn invoke102(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke112` instead
    ///
    pub const Invoke112 = invoke112;

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
    pub fn invoke112(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke122` instead
    ///
    pub const Invoke122 = invoke122;

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
    pub fn invoke122(self: QMetaMethod, object: anytype, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke44` instead
    ///
    pub const Invoke44 = invoke44;

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
    pub fn invoke44(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke44(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invoke53` instead
    ///
    pub const Invoke53 = invoke53;

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
    pub fn invoke53(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke53(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invoke63` instead
    ///
    pub const Invoke63 = invoke63;

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
    pub fn invoke63(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke63(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invoke73` instead
    ///
    pub const Invoke73 = invoke73;

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
    pub fn invoke73(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke73(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invoke83` instead
    ///
    pub const Invoke83 = invoke83;

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
    pub fn invoke83(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke83(@ptrCast(self.ptr), @ptrCast(object.ptr), @bitCast(connectionType), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invoke93` instead
    ///
    pub const Invoke93 = invoke93;

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
    pub fn invoke93(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke103` instead
    ///
    pub const Invoke103 = invoke103;

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
    pub fn invoke103(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke113` instead
    ///
    pub const Invoke113 = invoke113;

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
    pub fn invoke113(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke123` instead
    ///
    pub const Invoke123 = invoke123;

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
    pub fn invoke123(self: QMetaMethod, object: anytype, connectionType: i32, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke33` instead
    ///
    pub const Invoke33 = invoke33;

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
    pub fn invoke33(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke33(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invoke45` instead
    ///
    pub const Invoke45 = invoke45;

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
    pub fn invoke45(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke45(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invoke54` instead
    ///
    pub const Invoke54 = invoke54;

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
    pub fn invoke54(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke54(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invoke64` instead
    ///
    pub const Invoke64 = invoke64;

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
    pub fn invoke64(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke64(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invoke74` instead
    ///
    pub const Invoke74 = invoke74;

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
    pub fn invoke74(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_Invoke74(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invoke84` instead
    ///
    pub const Invoke84 = invoke84;

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
    pub fn invoke84(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke94` instead
    ///
    pub const Invoke94 = invoke94;

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
    pub fn invoke94(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke104` instead
    ///
    pub const Invoke104 = invoke104;

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
    pub fn invoke104(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invoke114` instead
    ///
    pub const Invoke114 = invoke114;

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
    pub fn invoke114(self: QMetaMethod, object: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget3` instead
    ///
    pub const InvokeOnGadget3 = invokeOnGadget3;

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
    pub fn invokeOnGadget3(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget3(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget4` instead
    ///
    pub const InvokeOnGadget4 = invokeOnGadget4;

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
    pub fn invokeOnGadget4(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget4(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget5` instead
    ///
    pub const InvokeOnGadget5 = invokeOnGadget5;

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
    pub fn invokeOnGadget5(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget5(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget6` instead
    ///
    pub const InvokeOnGadget6 = invokeOnGadget6;

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
    pub fn invokeOnGadget6(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget6(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget7` instead
    ///
    pub const InvokeOnGadget7 = invokeOnGadget7;

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
    pub fn invokeOnGadget7(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget7(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget8` instead
    ///
    pub const InvokeOnGadget8 = invokeOnGadget8;

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
    pub fn invokeOnGadget8(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(returnValue)._is_QGenericReturnArgument;
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget8(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(returnValue.ptr), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget9` instead
    ///
    pub const InvokeOnGadget9 = invokeOnGadget9;

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
    pub fn invokeOnGadget9(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget10` instead
    ///
    pub const InvokeOnGadget10 = invokeOnGadget10;

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
    pub fn invokeOnGadget10(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget11` instead
    ///
    pub const InvokeOnGadget11 = invokeOnGadget11;

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
    pub fn invokeOnGadget11(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget12` instead
    ///
    pub const InvokeOnGadget12 = invokeOnGadget12;

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
    pub fn invokeOnGadget12(self: QMetaMethod, gadget: ?*anyopaque, returnValue: anytype, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget32` instead
    ///
    pub const InvokeOnGadget32 = invokeOnGadget32;

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
    pub fn invokeOnGadget32(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget32(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget42` instead
    ///
    pub const InvokeOnGadget42 = invokeOnGadget42;

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
    pub fn invokeOnGadget42(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget42(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget52` instead
    ///
    pub const InvokeOnGadget52 = invokeOnGadget52;

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
    pub fn invokeOnGadget52(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget52(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget62` instead
    ///
    pub const InvokeOnGadget62 = invokeOnGadget62;

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
    pub fn invokeOnGadget62(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget62(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget72` instead
    ///
    pub const InvokeOnGadget72 = invokeOnGadget72;

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
    pub fn invokeOnGadget72(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget72(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget82` instead
    ///
    pub const InvokeOnGadget82 = invokeOnGadget82;

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
    pub fn invokeOnGadget82(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype) bool {
        comptime _ = @TypeOf(val0)._is_QGenericArgument;
        comptime _ = @TypeOf(val1)._is_QGenericArgument;
        comptime _ = @TypeOf(val2)._is_QGenericArgument;
        comptime _ = @TypeOf(val3)._is_QGenericArgument;
        comptime _ = @TypeOf(val4)._is_QGenericArgument;
        comptime _ = @TypeOf(val5)._is_QGenericArgument;
        comptime _ = @TypeOf(val6)._is_QGenericArgument;
        return qtc.QMetaMethod_InvokeOnGadget82(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(val0.ptr), @ptrCast(val1.ptr), @ptrCast(val2.ptr), @ptrCast(val3.ptr), @ptrCast(val4.ptr), @ptrCast(val5.ptr), @ptrCast(val6.ptr));
    }

    /// ### DEPRECATED: Use `invokeOnGadget92` instead
    ///
    pub const InvokeOnGadget92 = invokeOnGadget92;

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
    pub fn invokeOnGadget92(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget102` instead
    ///
    pub const InvokeOnGadget102 = invokeOnGadget102;

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
    pub fn invokeOnGadget102(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype) bool {
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

    /// ### DEPRECATED: Use `invokeOnGadget112` instead
    ///
    pub const InvokeOnGadget112 = invokeOnGadget112;

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
    pub fn invokeOnGadget112(self: QMetaMethod, gadget: ?*anyopaque, val0: anytype, val1: anytype, val2: anytype, val3: anytype, val4: anytype, val5: anytype, val6: anytype, val7: anytype, val8: anytype, val9: anytype) bool {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#dtor.QMetaMethod)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaMethod `
    ///
    pub fn delete(self: QMetaMethod) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaEnum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn new(other: anytype) QMetaEnum {
        comptime _ = @TypeOf(other)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaEnum object and invalidate the source QMetaEnum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn new2(other: anytype) QMetaEnum {
        comptime _ = @TypeOf(other)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaEnum object in C++ memory
    ///
    pub fn new3() QMetaEnum {
        return .{ .ptr = qtc.QMetaEnum_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaEnum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaEnum `
    ///
    pub fn new4(param1: anytype) QMetaEnum {
        comptime _ = @TypeOf(param1)._is_QMetaEnum;
        return .{ .ptr = qtc.QMetaEnum_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn copyAssign(self: QMetaEnum, other: QMetaEnum) void {
        qtc.QMetaEnum_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` other: QMetaEnum `
    ///
    pub fn moveAssign(self: QMetaEnum, other: QMetaEnum) void {
        qtc.QMetaEnum_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn name(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `enumName` instead
    ///
    pub const EnumName = enumName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn enumName(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_EnumName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn metaType(self: QMetaEnum) QMetaType {
        return .{ .ptr = qtc.QMetaEnum_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isFlag` instead
    ///
    pub const IsFlag = isFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn isFlag(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsFlag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isScoped` instead
    ///
    pub const IsScoped = isScoped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn isScoped(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsScoped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyCount` instead
    ///
    pub const KeyCount = keyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn keyCount(self: QMetaEnum) i32 {
        return qtc.QMetaEnum_KeyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` index: i32 `
    ///
    pub fn key(self: QMetaEnum, index: i32) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Key(@ptrCast(self.ptr), @bitCast(index));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` index: i32 `
    ///
    pub fn value(self: QMetaEnum, index: i32) i32 {
        return qtc.QMetaEnum_Value(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `scope` instead
    ///
    pub const Scope = scope;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#scope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn scope(self: QMetaEnum) [:0]const u8 {
        const _ret = qtc.QMetaEnum_Scope(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `keyToValue` instead
    ///
    pub const KeyToValue = keyToValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` _key: [:0]const u8 `
    ///
    pub fn keyToValue(self: QMetaEnum, _key: [:0]const u8) i32 {
        const key_Cstring = _key.ptr;
        return qtc.QMetaEnum_KeyToValue(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### DEPRECATED: Use `valueToKey` instead
    ///
    pub const ValueToKey = valueToKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` _value: i32 `
    ///
    pub fn valueToKey(self: QMetaEnum, _value: i32) [:0]const u8 {
        const _ret = qtc.QMetaEnum_ValueToKey(@ptrCast(self.ptr), @bitCast(_value));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `keysToValue` instead
    ///
    pub const KeysToValue = keysToValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` keys: [:0]const u8 `
    ///
    pub fn keysToValue(self: QMetaEnum, keys: [:0]const u8) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue(@ptrCast(self.ptr), keys_Cstring);
    }

    /// ### DEPRECATED: Use `valueToKeys` instead
    ///
    pub const ValueToKeys = valueToKeys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _value: i32 `
    ///
    pub fn valueToKeys(self: QMetaEnum, allocator: std.mem.Allocator, _value: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMetaEnum_ValueToKeys(@ptrCast(self.ptr), @bitCast(_value));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMetaEnum.valueToKeys: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `enclosingMetaObject` instead
    ///
    pub const EnclosingMetaObject = enclosingMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn enclosingMetaObject(self: QMetaEnum) QMetaObject {
        return .{ .ptr = qtc.QMetaEnum_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn isValid(self: QMetaEnum) bool {
        return qtc.QMetaEnum_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyToValue2` instead
    ///
    pub const KeyToValue2 = keyToValue2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaEnum `
    ///
    /// ` _key: [:0]const u8 `
    ///
    /// ` ok: *bool `
    ///
    pub fn keyToValue2(self: QMetaEnum, _key: [:0]const u8, ok: *bool) i32 {
        const key_Cstring = _key.ptr;
        return qtc.QMetaEnum_KeyToValue2(@ptrCast(self.ptr), key_Cstring, @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `keysToValue2` instead
    ///
    pub const KeysToValue2 = keysToValue2;

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
    pub fn keysToValue2(self: QMetaEnum, keys: [:0]const u8, ok: *bool) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue2(@ptrCast(self.ptr), keys_Cstring, @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#dtor.QMetaEnum)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaEnum `
    ///
    pub fn delete(self: QMetaEnum) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn new(other: anytype) QMetaProperty {
        comptime _ = @TypeOf(other)._is_QMetaProperty;
        return .{ .ptr = qtc.QMetaProperty_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaProperty object and invalidate the source QMetaProperty object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn new2(other: anytype) QMetaProperty {
        comptime _ = @TypeOf(other)._is_QMetaProperty;
        return .{ .ptr = qtc.QMetaProperty_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaProperty object in C++ memory
    ///
    pub fn new3() QMetaProperty {
        return .{ .ptr = qtc.QMetaProperty_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn copyAssign(self: QMetaProperty, other: QMetaProperty) void {
        qtc.QMetaProperty_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` other: QMetaProperty `
    ///
    pub fn moveAssign(self: QMetaProperty, other: QMetaProperty) void {
        qtc.QMetaProperty_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn name(self: QMetaProperty) [:0]const u8 {
        const _ret = qtc.QMetaProperty_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `typeName` instead
    ///
    pub const TypeName = typeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn typeName(self: QMetaProperty) [:0]const u8 {
        const _ret = qtc.QMetaProperty_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `userType` instead
    ///
    pub const UserType = userType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn userType(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_UserType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeId` instead
    ///
    pub const TypeId = typeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn typeId(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_TypeId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn metaType(self: QMetaProperty) QMetaType {
        return .{ .ptr = qtc.QMetaProperty_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `propertyIndex` instead
    ///
    pub const PropertyIndex = propertyIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn propertyIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_PropertyIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `relativePropertyIndex` instead
    ///
    pub const RelativePropertyIndex = relativePropertyIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn relativePropertyIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_RelativePropertyIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isReadable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isWritable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isResettable` instead
    ///
    pub const IsResettable = isResettable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isResettable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsResettable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDesignable` instead
    ///
    pub const IsDesignable = isDesignable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isDesignable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsDesignable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isScriptable` instead
    ///
    pub const IsScriptable = isScriptable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isScriptable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsScriptable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStored` instead
    ///
    pub const IsStored = isStored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isStored(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsStored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUser` instead
    ///
    pub const IsUser = isUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isUser(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsUser(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isConstant` instead
    ///
    pub const IsConstant = isConstant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isConstant(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsConstant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinal` instead
    ///
    pub const IsFinal = isFinal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isFinal(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsFinal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRequired` instead
    ///
    pub const IsRequired = isRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isRequired(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsRequired(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBindable` instead
    ///
    pub const IsBindable = isBindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isBindable(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsBindable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFlagType` instead
    ///
    pub const IsFlagType = isFlagType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isFlagType(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsFlagType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnumType` instead
    ///
    pub const IsEnumType = isEnumType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isEnumType(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsEnumType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enumerator` instead
    ///
    pub const Enumerator = enumerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn enumerator(self: QMetaProperty) QMetaEnum {
        return .{ .ptr = qtc.QMetaProperty_Enumerator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasNotifySignal` instead
    ///
    pub const HasNotifySignal = hasNotifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn hasNotifySignal(self: QMetaProperty) bool {
        return qtc.QMetaProperty_HasNotifySignal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `notifySignal` instead
    ///
    pub const NotifySignal = notifySignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn notifySignal(self: QMetaProperty) QMetaMethod {
        return .{ .ptr = qtc.QMetaProperty_NotifySignal(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `notifySignalIndex` instead
    ///
    pub const NotifySignalIndex = notifySignalIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn notifySignalIndex(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_NotifySignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn revision(self: QMetaProperty) i32 {
        return qtc.QMetaProperty_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    pub fn read(self: QMetaProperty, obj: anytype) QVariant {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QMetaProperty_Read(@ptrCast(self.ptr), @ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    /// ` _value: QVariant `
    ///
    pub fn write(self: QMetaProperty, obj: anytype, _value: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QMetaProperty_Write(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` obj: QObject `
    ///
    pub fn reset(self: QMetaProperty, obj: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        return qtc.QMetaProperty_Reset(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `bindable` instead
    ///
    pub const Bindable = bindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` object: QObject `
    ///
    pub fn bindable(self: QMetaProperty, object: anytype) QUntypedBindable {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QMetaProperty_Bindable(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### DEPRECATED: Use `readOnGadget` instead
    ///
    pub const ReadOnGadget = readOnGadget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*const anyopaque `
    ///
    pub fn readOnGadget(self: QMetaProperty, gadget: ?*const anyopaque) QVariant {
        return .{ .ptr = qtc.QMetaProperty_ReadOnGadget(@ptrCast(self.ptr), @ptrCast(gadget)) };
    }

    /// ### DEPRECATED: Use `writeOnGadget` instead
    ///
    pub const WriteOnGadget = writeOnGadget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    /// ` _value: QVariant `
    ///
    pub fn writeOnGadget(self: QMetaProperty, gadget: ?*anyopaque, _value: anytype) bool {
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QMetaProperty_WriteOnGadget(@ptrCast(self.ptr), @ptrCast(gadget), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `resetOnGadget` instead
    ///
    pub const ResetOnGadget = resetOnGadget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    /// ` gadget: ?*anyopaque `
    ///
    pub fn resetOnGadget(self: QMetaProperty, gadget: ?*anyopaque) bool {
        return qtc.QMetaProperty_ResetOnGadget(@ptrCast(self.ptr), @ptrCast(gadget));
    }

    /// ### DEPRECATED: Use `hasStdCppSet` instead
    ///
    pub const HasStdCppSet = hasStdCppSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn hasStdCppSet(self: QMetaProperty) bool {
        return qtc.QMetaProperty_HasStdCppSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAlias` instead
    ///
    pub const IsAlias = isAlias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isAlias(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsAlias(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn isValid(self: QMetaProperty) bool {
        return qtc.QMetaProperty_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enclosingMetaObject` instead
    ///
    pub const EnclosingMetaObject = enclosingMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn enclosingMetaObject(self: QMetaProperty) QMetaObject {
        return .{ .ptr = qtc.QMetaProperty_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#dtor.QMetaProperty)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaProperty `
    ///
    pub fn delete(self: QMetaProperty) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaClassInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn new(other: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(other)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaClassInfo object and invalidate the source QMetaClassInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn new2(other: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(other)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaClassInfo object in C++ memory
    ///
    pub fn new3() QMetaClassInfo {
        return .{ .ptr = qtc.QMetaClassInfo_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaClassInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaClassInfo `
    ///
    pub fn new4(param1: anytype) QMetaClassInfo {
        comptime _ = @TypeOf(param1)._is_QMetaClassInfo;
        return .{ .ptr = qtc.QMetaClassInfo_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaClassInfo `
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn copyAssign(self: QMetaClassInfo, other: QMetaClassInfo) void {
        qtc.QMetaClassInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaClassInfo `
    ///
    /// ` other: QMetaClassInfo `
    ///
    pub fn moveAssign(self: QMetaClassInfo, other: QMetaClassInfo) void {
        qtc.QMetaClassInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn name(self: QMetaClassInfo) [:0]const u8 {
        const _ret = qtc.QMetaClassInfo_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn value(self: QMetaClassInfo) [:0]const u8 {
        const _ret = qtc.QMetaClassInfo_Value(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `enclosingMetaObject` instead
    ///
    pub const EnclosingMetaObject = enclosingMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn enclosingMetaObject(self: QMetaClassInfo) QMetaObject {
        return .{ .ptr = qtc.QMetaClassInfo_EnclosingMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#dtor.QMetaClassInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaClassInfo `
    ///
    pub fn delete(self: QMetaClassInfo) void {
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
