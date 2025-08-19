const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmetaobject_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qvariant_enums = @import("libqvariant.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmetamethod.html
pub const qmetamethod = struct {
    /// New constructs a new QMetaMethod object.
    ///
    /// ``` other: QtC.QMetaMethod ```
    pub fn New(other: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
    ///
    /// ``` other: QtC.QMetaMethod ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaMethod object.
    ///
    ///
    pub fn New3() QtC.QMetaMethod {
        return qtc.QMetaMethod_new3();
    }

    /// New4 constructs a new QMetaMethod object.
    ///
    /// ``` param1: QtC.QMetaMethod ```
    pub fn New4(param1: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaMethod_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaMethod, other: QtC.QMetaMethod ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaMethod_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaMethod, other: QtC.QMetaMethod ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaMethod_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
    ///
    /// ``` self: QtC.QMetaMethod, allocator: std.mem.Allocator ```
    pub fn MethodSignature(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_MethodSignature(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.MethodSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#name)
    ///
    /// ``` self: QtC.QMetaMethod, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn TypeName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaMethod_TypeName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn ReturnType(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_ReturnType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn ReturnMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaMethod_ReturnMetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn ParameterCount(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_ParameterCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
    ///
    /// ``` self: QtC.QMetaMethod, index: i32 ```
    pub fn ParameterType(self: ?*anyopaque, index: i32) i32 {
        return qtc.QMetaMethod_ParameterType(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
    ///
    /// ``` self: QtC.QMetaMethod, index: i32 ```
    pub fn ParameterMetaType(self: ?*anyopaque, index: i32) QtC.QMetaType {
        return qtc.QMetaMethod_ParameterMetaType(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
    ///
    /// ``` self: QtC.QMetaMethod, types: *i32 ```
    pub fn GetParameterTypes(self: ?*anyopaque, types: *i32) void {
        qtc.QMetaMethod_GetParameterTypes(@ptrCast(self), @ptrCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
    ///
    /// ``` self: QtC.QMetaMethod, allocator: std.mem.Allocator ```
    pub fn ParameterTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
    ///
    /// ``` self: QtC.QMetaMethod, index: i32, allocator: std.mem.Allocator ```
    pub fn ParameterTypeName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaMethod_ParameterTypeName(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetamethod.ParameterTypeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
    ///
    /// ``` self: QtC.QMetaMethod, allocator: std.mem.Allocator ```
    pub fn ParameterNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMetaMethod_ParameterNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#tag)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn Tag(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaMethod_Tag(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#access)
    ///
    /// ``` self: QtC.QMetaMethod ```
    ///
    /// Returns: ``` qmetaobject_enums.Access ```
    pub fn Access(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_Access(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
    ///
    /// ``` self: QtC.QMetaMethod ```
    ///
    /// Returns: ``` qmetaobject_enums.MethodType ```
    pub fn MethodType(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_MethodType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn Attributes(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_Attributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn MethodIndex(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_MethodIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn RelativeMethodIndex(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_RelativeMethodIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#revision)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn Revision(self: ?*anyopaque) i32 {
        return qtc.QMetaMethod_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn IsConst(self: ?*anyopaque) bool {
        return qtc.QMetaMethod_IsConst(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn EnclosingMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaMethod_EnclosingMetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument ```
    pub fn Invoke(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument) bool {
        return qtc.QMetaMethod_Invoke(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument ```
    pub fn Invoke2(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument) bool {
        return qtc.QMetaMethod_Invoke2(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument ```
    pub fn Invoke3(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke3(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument ```
    pub fn Invoke4(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke4(@ptrCast(self), @ptrCast(object), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument ```
    pub fn InvokeOnGadget(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget(@ptrCast(self), gadget, @ptrCast(returnValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument ```
    pub fn InvokeOnGadget2(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget2(@ptrCast(self), gadget, @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QMetaMethod_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument ```
    pub fn Invoke42(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke42(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn Invoke5(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke5(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn Invoke6(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke6(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn Invoke7(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke7(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn Invoke8(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke8(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn Invoke9(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke9(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn Invoke10(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke10(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn Invoke11(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke11(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn Invoke12(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke12(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn Invoke13(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke13(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument ```
    pub fn Invoke32(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke32(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn Invoke43(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke43(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn Invoke52(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke52(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn Invoke62(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke62(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn Invoke72(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke72(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn Invoke82(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke82(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn Invoke92(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke92(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn Invoke102(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke102(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn Invoke112(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke112(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn Invoke122(self: ?*anyopaque, object: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke122(@ptrCast(self), @ptrCast(object), @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn Invoke44(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke44(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn Invoke53(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke53(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn Invoke63(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke63(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn Invoke73(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke73(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn Invoke83(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke83(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn Invoke93(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke93(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn Invoke103(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke103(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn Invoke113(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke113(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, connectionType: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn Invoke123(self: ?*anyopaque, object: ?*anyopaque, connectionType: i32, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke123(@ptrCast(self), @ptrCast(object), @intCast(connectionType), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn Invoke33(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke33(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn Invoke45(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke45(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn Invoke54(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke54(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn Invoke64(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke64(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn Invoke74(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke74(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn Invoke84(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke84(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn Invoke94(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke94(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn Invoke104(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke104(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
    ///
    /// ``` self: QtC.QMetaMethod, object: QtC.QObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn Invoke114(self: ?*anyopaque, object: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_Invoke114(@ptrCast(self), @ptrCast(object), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument ```
    pub fn InvokeOnGadget3(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget3(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeOnGadget4(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget4(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeOnGadget5(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget5(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeOnGadget6(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget6(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeOnGadget7(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget7(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeOnGadget8(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget8(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeOnGadget9(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget9(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeOnGadget10(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget10(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeOnGadget11(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget11(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeOnGadget12(self: ?*anyopaque, gadget: ?*anyopaque, returnValue: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget12(@ptrCast(self), gadget, @ptrCast(returnValue), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeOnGadget32(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget32(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeOnGadget42(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget42(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeOnGadget52(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget52(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeOnGadget62(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget62(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeOnGadget72(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget72(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeOnGadget82(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget82(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeOnGadget92(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget92(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeOnGadget102(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget102(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
    ///
    /// ``` self: QtC.QMetaMethod, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeOnGadget112(self: ?*anyopaque, gadget: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        return qtc.QMetaMethod_InvokeOnGadget112(@ptrCast(self), gadget, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#dtor.QMetaMethod)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaMethod ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaMethod_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaenum.html
pub const qmetaenum = struct {
    /// New constructs a new QMetaEnum object.
    ///
    /// ``` other: QtC.QMetaEnum ```
    pub fn New(other: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
    ///
    /// ``` other: QtC.QMetaEnum ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaEnum object.
    ///
    ///
    pub fn New3() QtC.QMetaEnum {
        return qtc.QMetaEnum_new3();
    }

    /// New4 constructs a new QMetaEnum object.
    ///
    /// ``` param1: QtC.QMetaEnum ```
    pub fn New4(param1: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaEnum_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaEnum, other: QtC.QMetaEnum ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaEnum_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaEnum, other: QtC.QMetaEnum ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaEnum_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#name)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaEnum_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn EnumName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaEnum_EnumName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#metaType)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaEnum_MetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn IsFlag(self: ?*anyopaque) bool {
        return qtc.QMetaEnum_IsFlag(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn IsScoped(self: ?*anyopaque) bool {
        return qtc.QMetaEnum_IsScoped(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn KeyCount(self: ?*anyopaque) i32 {
        return qtc.QMetaEnum_KeyCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#key)
    ///
    /// ``` self: QtC.QMetaEnum, index: i32 ```
    pub fn Key(self: ?*anyopaque, index: i32) []const u8 {
        const _ret = qtc.QMetaEnum_Key(@ptrCast(self), @intCast(index));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#value)
    ///
    /// ``` self: QtC.QMetaEnum, index: i32 ```
    pub fn Value(self: ?*anyopaque, index: i32) i32 {
        return qtc.QMetaEnum_Value(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#scope)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn Scope(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaEnum_Scope(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ``` self: QtC.QMetaEnum, key: []const u8 ```
    pub fn KeyToValue(self: ?*anyopaque, key: []const u8) i32 {
        const key_Cstring = key.ptr;
        return qtc.QMetaEnum_KeyToValue(@ptrCast(self), key_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
    ///
    /// ``` self: QtC.QMetaEnum, value: i32 ```
    pub fn ValueToKey(self: ?*anyopaque, value: i32) []const u8 {
        const _ret = qtc.QMetaEnum_ValueToKey(@ptrCast(self), @intCast(value));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
    ///
    /// ``` self: QtC.QMetaEnum, keys: []const u8 ```
    pub fn KeysToValue(self: ?*anyopaque, keys: []const u8) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue(@ptrCast(self), keys_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
    ///
    /// ``` self: QtC.QMetaEnum, value: i32, allocator: std.mem.Allocator ```
    pub fn ValueToKeys(self: ?*anyopaque, value: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMetaEnum_ValueToKeys(@ptrCast(self), @intCast(value));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaenum.ValueToKeys: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn EnclosingMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaEnum_EnclosingMetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QMetaEnum_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
    ///
    /// ``` self: QtC.QMetaEnum, key: []const u8, ok: *bool ```
    pub fn KeyToValue2(self: ?*anyopaque, key: []const u8, ok: *bool) i32 {
        const key_Cstring = key.ptr;
        return qtc.QMetaEnum_KeyToValue2(@ptrCast(self), key_Cstring, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
    ///
    /// ``` self: QtC.QMetaEnum, keys: []const u8, ok: *bool ```
    pub fn KeysToValue2(self: ?*anyopaque, keys: []const u8, ok: *bool) i32 {
        const keys_Cstring = keys.ptr;
        return qtc.QMetaEnum_KeysToValue2(@ptrCast(self), keys_Cstring, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#dtor.QMetaEnum)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaEnum ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaEnum_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaproperty.html
pub const qmetaproperty = struct {
    /// New constructs a new QMetaProperty object.
    ///
    /// ``` other: QtC.QMetaProperty ```
    pub fn New(other: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaProperty_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
    ///
    /// ``` other: QtC.QMetaProperty ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaProperty_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaProperty object.
    ///
    ///
    pub fn New3() QtC.QMetaProperty {
        return qtc.QMetaProperty_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaProperty, other: QtC.QMetaProperty ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaProperty_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaProperty, other: QtC.QMetaProperty ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaProperty_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#name)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaProperty_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn TypeName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaProperty_TypeName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#type)
    ///
    /// ``` self: QtC.QMetaProperty ```
    ///
    /// Returns: ``` qvariant_enums.Type ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QMetaProperty_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn UserType(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_UserType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn TypeId(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_TypeId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaProperty_MetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn PropertyIndex(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_PropertyIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn RelativePropertyIndex(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_RelativePropertyIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsReadable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsResettable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsResettable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsDesignable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsDesignable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsScriptable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsScriptable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsStored(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsStored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsUser(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsUser(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsConstant(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsConstant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsFinal(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsFinal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsRequired(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsRequired(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsBindable(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsBindable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsFlagType(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsFlagType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsEnumType(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsEnumType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn Enumerator(self: ?*anyopaque) QtC.QMetaEnum {
        return qtc.QMetaProperty_Enumerator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn HasNotifySignal(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_HasNotifySignal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn NotifySignal(self: ?*anyopaque) QtC.QMetaMethod {
        return qtc.QMetaProperty_NotifySignal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn NotifySignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_NotifySignalIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn Revision(self: ?*anyopaque) i32 {
        return qtc.QMetaProperty_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#read)
    ///
    /// ``` self: QtC.QMetaProperty, obj: QtC.QObject ```
    pub fn Read(self: ?*anyopaque, obj: ?*anyopaque) QtC.QVariant {
        return qtc.QMetaProperty_Read(@ptrCast(self), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#write)
    ///
    /// ``` self: QtC.QMetaProperty, obj: QtC.QObject, value: QtC.QVariant ```
    pub fn Write(self: ?*anyopaque, obj: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QMetaProperty_Write(@ptrCast(self), @ptrCast(obj), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
    ///
    /// ``` self: QtC.QMetaProperty, obj: QtC.QObject ```
    pub fn Reset(self: ?*anyopaque, obj: ?*anyopaque) bool {
        return qtc.QMetaProperty_Reset(@ptrCast(self), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
    ///
    /// ``` self: QtC.QMetaProperty, object: QtC.QObject ```
    pub fn Bindable(self: ?*anyopaque, object: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QMetaProperty_Bindable(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
    ///
    /// ``` self: QtC.QMetaProperty, gadget: ?*anyopaque ```
    pub fn ReadOnGadget(self: ?*anyopaque, gadget: ?*anyopaque) QtC.QVariant {
        return qtc.QMetaProperty_ReadOnGadget(@ptrCast(self), gadget);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
    ///
    /// ``` self: QtC.QMetaProperty, gadget: ?*anyopaque, value: QtC.QVariant ```
    pub fn WriteOnGadget(self: ?*anyopaque, gadget: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QMetaProperty_WriteOnGadget(@ptrCast(self), gadget, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
    ///
    /// ``` self: QtC.QMetaProperty, gadget: ?*anyopaque ```
    pub fn ResetOnGadget(self: ?*anyopaque, gadget: ?*anyopaque) bool {
        return qtc.QMetaProperty_ResetOnGadget(@ptrCast(self), gadget);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn HasStdCppSet(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_HasStdCppSet(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsAlias(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsAlias(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QMetaProperty_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn EnclosingMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaProperty_EnclosingMetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#dtor.QMetaProperty)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaProperty ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaProperty_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaclassinfo.html
pub const qmetaclassinfo = struct {
    /// New constructs a new QMetaClassInfo object.
    ///
    /// ``` other: QtC.QMetaClassInfo ```
    pub fn New(other: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
    ///
    /// ``` other: QtC.QMetaClassInfo ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaClassInfo object.
    ///
    ///
    pub fn New3() QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new3();
    }

    /// New4 constructs a new QMetaClassInfo object.
    ///
    /// ``` param1: QtC.QMetaClassInfo ```
    pub fn New4(param1: ?*anyopaque) QtC.QMetaClassInfo {
        return qtc.QMetaClassInfo_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaClassInfo, other: QtC.QMetaClassInfo ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaClassInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaClassInfo, other: QtC.QMetaClassInfo ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaClassInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
    ///
    /// ``` self: QtC.QMetaClassInfo ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaClassInfo_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
    ///
    /// ``` self: QtC.QMetaClassInfo ```
    pub fn Value(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaClassInfo_Value(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
    ///
    /// ``` self: QtC.QMetaClassInfo ```
    pub fn EnclosingMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaClassInfo_EnclosingMetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#dtor.QMetaClassInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaClassInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaClassInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject.html#types
pub const enums = struct {
    pub const Access = enum {
        pub const Private: i32 = 0;
        pub const Protected: i32 = 1;
        pub const Public: i32 = 2;
    };

    pub const MethodType = enum {
        pub const Method: i32 = 0;
        pub const Signal: i32 = 1;
        pub const Slot: i32 = 2;
        pub const Constructor: i32 = 3;
    };

    pub const Attributes = enum {
        pub const Compatibility: i32 = 1;
        pub const Cloned: i32 = 2;
        pub const Scriptable: i32 = 4;
    };
};
