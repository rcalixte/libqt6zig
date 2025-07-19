const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgenericargument.html
pub const qgenericargument = struct {
    /// New constructs a new QGenericArgument object.
    ///
    /// ``` other: QtC.QGenericArgument ```
    pub fn New(other: ?*anyopaque) QtC.QGenericArgument {
        return qtc.QGenericArgument_new(@ptrCast(other));
    }

    /// New2 constructs a new QGenericArgument object and invalidates the source QGenericArgument object.
    ///
    /// ``` other: QtC.QGenericArgument ```
    pub fn New2(other: ?*anyopaque) QtC.QGenericArgument {
        return qtc.QGenericArgument_new2(@ptrCast(other));
    }

    /// New3 constructs a new QGenericArgument object.
    ///
    ///
    pub fn New3() QtC.QGenericArgument {
        return qtc.QGenericArgument_new3();
    }

    /// New4 constructs a new QGenericArgument object.
    ///
    /// ``` param1: QtC.QGenericArgument ```
    pub fn New4(param1: ?*anyopaque) QtC.QGenericArgument {
        return qtc.QGenericArgument_new4(@ptrCast(param1));
    }

    /// New5 constructs a new QGenericArgument object.
    ///
    /// ``` aName: []const u8 ```
    pub fn New5(aName: []const u8) QtC.QGenericArgument {
        const aName_Cstring = aName.ptr;

        return qtc.QGenericArgument_new5(aName_Cstring);
    }

    /// New6 constructs a new QGenericArgument object.
    ///
    /// ``` aName: []const u8, aData: ?*anyopaque ```
    pub fn New6(aName: []const u8, aData: ?*anyopaque) QtC.QGenericArgument {
        const aName_Cstring = aName.ptr;

        return qtc.QGenericArgument_new6(aName_Cstring, aData);
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QGenericArgument, other: QtC.QGenericArgument ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericArgument_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QGenericArgument, other: QtC.QGenericArgument ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericArgument_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ``` self: QtC.QGenericArgument ```
    pub fn Data(self: ?*anyopaque) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ``` self: QtC.QGenericArgument ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#dtor.QGenericArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGenericArgument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgenericreturnargument.html
pub const qgenericreturnargument = struct {
    /// New constructs a new QGenericReturnArgument object.
    ///
    /// ``` other: QtC.QGenericReturnArgument ```
    pub fn New(other: ?*anyopaque) QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new(@ptrCast(other));
    }

    /// New2 constructs a new QGenericReturnArgument object and invalidates the source QGenericReturnArgument object.
    ///
    /// ``` other: QtC.QGenericReturnArgument ```
    pub fn New2(other: ?*anyopaque) QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new2(@ptrCast(other));
    }

    /// New3 constructs a new QGenericReturnArgument object.
    ///
    ///
    pub fn New3() QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new3();
    }

    /// New4 constructs a new QGenericReturnArgument object.
    ///
    /// ``` param1: QtC.QGenericReturnArgument ```
    pub fn New4(param1: ?*anyopaque) QtC.QGenericReturnArgument {
        return qtc.QGenericReturnArgument_new4(@ptrCast(param1));
    }

    /// New5 constructs a new QGenericReturnArgument object.
    ///
    /// ``` aName: []const u8 ```
    pub fn New5(aName: []const u8) QtC.QGenericReturnArgument {
        const aName_Cstring = aName.ptr;

        return qtc.QGenericReturnArgument_new5(aName_Cstring);
    }

    /// New6 constructs a new QGenericReturnArgument object.
    ///
    /// ``` aName: []const u8, aData: ?*anyopaque ```
    pub fn New6(aName: []const u8, aData: ?*anyopaque) QtC.QGenericReturnArgument {
        const aName_Cstring = aName.ptr;

        return qtc.QGenericReturnArgument_new6(aName_Cstring, aData);
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QGenericReturnArgument, other: QtC.QGenericReturnArgument ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericReturnArgument_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QGenericReturnArgument, other: QtC.QGenericReturnArgument ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGenericReturnArgument_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGenericArgument
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
    ///
    /// ``` self: QtC.QGenericReturnArgument ```
    pub fn Data(self: ?*anyopaque) ?*anyopaque {
        return qtc.QGenericArgument_Data(@ptrCast(self));
    }

    /// Inherited from QGenericArgument
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
    ///
    /// ``` self: QtC.QGenericReturnArgument ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QGenericArgument_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgenericreturnargument.html#dtor.QGenericReturnArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGenericReturnArgument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericReturnArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject.html
pub const qmetaobject = struct {
    /// New constructs a new QMetaObject object.
    ///
    ///
    pub fn New() QtC.QMetaObject {
        return qtc.QMetaObject_new();
    }

    /// New2 constructs a new QMetaObject object.
    ///
    /// ``` param1: QtC.QMetaObject ```
    pub fn New2(param1: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaObject_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#className)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn ClassName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QMetaObject_ClassName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#superClass)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn SuperClass(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaObject_SuperClass(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#inherits)
    ///
    /// ``` self: QtC.QMetaObject, metaObject: QtC.QMetaObject ```
    pub fn Inherits(self: ?*anyopaque, metaObject: ?*anyopaque) bool {
        return qtc.QMetaObject_Inherits(@ptrCast(self), @ptrCast(metaObject));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ``` self: QtC.QMetaObject, obj: QtC.QObject ```
    pub fn Cast(self: ?*anyopaque, obj: ?*anyopaque) QtC.QObject {
        return qtc.QMetaObject_Cast(@ptrCast(self), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
    ///
    /// ``` self: QtC.QMetaObject, obj: QtC.QObject ```
    pub fn Cast2(self: ?*anyopaque, obj: ?*anyopaque) QtC.QObject {
        return qtc.QMetaObject_Cast2(@ptrCast(self), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(self: ?*anyopaque, s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMetaObject_Tr(@ptrCast(self), s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metaType)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaObject_MetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodOffset)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn MethodOffset(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_MethodOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorOffset)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn EnumeratorOffset(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_EnumeratorOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyOffset)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn PropertyOffset(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_PropertyOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoOffset)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn ClassInfoOffset(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_ClassInfoOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructorCount)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn ConstructorCount(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_ConstructorCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodCount)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn MethodCount(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_MethodCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorCount)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn EnumeratorCount(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_EnumeratorCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyCount)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn PropertyCount(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_PropertyCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoCount)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn ClassInfoCount(self: ?*anyopaque) i32 {
        return qtc.QMetaObject_ClassInfoCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfConstructor)
    ///
    /// ``` self: QtC.QMetaObject, constructor: []const u8 ```
    pub fn IndexOfConstructor(self: ?*anyopaque, constructor: []const u8) i32 {
        const constructor_Cstring = constructor.ptr;
        return qtc.QMetaObject_IndexOfConstructor(@ptrCast(self), constructor_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfMethod)
    ///
    /// ``` self: QtC.QMetaObject, method: []const u8 ```
    pub fn IndexOfMethod(self: ?*anyopaque, method: []const u8) i32 {
        const method_Cstring = method.ptr;
        return qtc.QMetaObject_IndexOfMethod(@ptrCast(self), method_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSignal)
    ///
    /// ``` self: QtC.QMetaObject, signal: []const u8 ```
    pub fn IndexOfSignal(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMetaObject_IndexOfSignal(@ptrCast(self), signal_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSlot)
    ///
    /// ``` self: QtC.QMetaObject, slot: []const u8 ```
    pub fn IndexOfSlot(self: ?*anyopaque, slot: []const u8) i32 {
        const slot_Cstring = slot.ptr;
        return qtc.QMetaObject_IndexOfSlot(@ptrCast(self), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfEnumerator)
    ///
    /// ``` self: QtC.QMetaObject, name: []const u8 ```
    pub fn IndexOfEnumerator(self: ?*anyopaque, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfEnumerator(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfProperty)
    ///
    /// ``` self: QtC.QMetaObject, name: []const u8 ```
    pub fn IndexOfProperty(self: ?*anyopaque, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfProperty(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfClassInfo)
    ///
    /// ``` self: QtC.QMetaObject, name: []const u8 ```
    pub fn IndexOfClassInfo(self: ?*anyopaque, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QMetaObject_IndexOfClassInfo(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructor)
    ///
    /// ``` self: QtC.QMetaObject, index: i32 ```
    pub fn Constructor(self: ?*anyopaque, index: i32) QtC.QMetaMethod {
        return qtc.QMetaObject_Constructor(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#method)
    ///
    /// ``` self: QtC.QMetaObject, index: i32 ```
    pub fn Method(self: ?*anyopaque, index: i32) QtC.QMetaMethod {
        return qtc.QMetaObject_Method(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumerator)
    ///
    /// ``` self: QtC.QMetaObject, index: i32 ```
    pub fn Enumerator(self: ?*anyopaque, index: i32) QtC.QMetaEnum {
        return qtc.QMetaObject_Enumerator(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#property)
    ///
    /// ``` self: QtC.QMetaObject, index: i32 ```
    pub fn Property(self: ?*anyopaque, index: i32) QtC.QMetaProperty {
        return qtc.QMetaObject_Property(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfo)
    ///
    /// ``` self: QtC.QMetaObject, index: i32 ```
    pub fn ClassInfo(self: ?*anyopaque, index: i32) QtC.QMetaClassInfo {
        return qtc.QMetaObject_ClassInfo(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#userProperty)
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn UserProperty(self: ?*anyopaque) QtC.QMetaProperty {
        return qtc.QMetaObject_UserProperty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ``` signal: []const u8, method: []const u8 ```
    pub fn CheckConnectArgs(signal: []const u8, method: []const u8) bool {
        const signal_Cstring = signal.ptr;
        const method_Cstring = method.ptr;
        return qtc.QMetaObject_CheckConnectArgs(signal_Cstring, method_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
    ///
    /// ``` signal: QtC.QMetaMethod, method: QtC.QMetaMethod ```
    pub fn CheckConnectArgs2(signal: ?*anyopaque, method: ?*anyopaque) bool {
        return qtc.QMetaObject_CheckConnectArgs2(@ptrCast(signal), @ptrCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedSignature)
    ///
    /// ``` method: []const u8, allocator: std.mem.Allocator ```
    pub fn NormalizedSignature(method: []const u8, allocator: std.mem.Allocator) []u8 {
        const method_Cstring = method.ptr;
        const _bytearray: qtc.struct_libqt_string = qtc.QMetaObject_NormalizedSignature(method_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedSignature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedType)
    ///
    /// ``` typeVal: []const u8, allocator: std.mem.Allocator ```
    pub fn NormalizedType(typeVal: []const u8, allocator: std.mem.Allocator) []u8 {
        const typeVal_Cstring = typeVal.ptr;
        const _bytearray: qtc.struct_libqt_string = qtc.QMetaObject_NormalizedType(typeVal_Cstring);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmetaobject.NormalizedType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, receiver: QtC.QObject, method_index: i32 ```
    pub fn Connect(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32) QtC.QMetaObject__Connection {
        return qtc.QMetaObject_Connect(@ptrCast(sender), @intCast(signal_index), @ptrCast(receiver), @intCast(method_index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, receiver: QtC.QObject, method_index: i32 ```
    pub fn Disconnect(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32) bool {
        return qtc.QMetaObject_Disconnect(@ptrCast(sender), @intCast(signal_index), @ptrCast(receiver), @intCast(method_index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnectOne)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, receiver: QtC.QObject, method_index: i32 ```
    pub fn DisconnectOne(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32) bool {
        return qtc.QMetaObject_DisconnectOne(@ptrCast(sender), @intCast(signal_index), @ptrCast(receiver), @intCast(method_index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connectSlotsByName)
    ///
    /// ``` o: QtC.QObject ```
    pub fn ConnectSlotsByName(o: ?*anyopaque) void {
        qtc.QMetaObject_ConnectSlotsByName(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, argv: ?*anyopaque ```
    pub fn Activate(sender: ?*anyopaque, signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate(@ptrCast(sender), @intCast(signal_index), argv);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ``` sender: QtC.QObject, param2: QtC.QMetaObject, local_signal_index: i32, argv: ?*anyopaque ```
    pub fn Activate2(sender: ?*anyopaque, param2: ?*anyopaque, local_signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate2(@ptrCast(sender), @ptrCast(param2), @intCast(local_signal_index), argv);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
    ///
    /// ``` sender: QtC.QObject, signal_offset: i32, local_signal_index: i32, argv: ?*anyopaque ```
    pub fn Activate3(sender: ?*anyopaque, signal_offset: i32, local_signal_index: i32, argv: ?*anyopaque) void {
        qtc.QMetaObject_Activate3(@ptrCast(sender), @intCast(signal_offset), @intCast(local_signal_index), argv);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument ```
    pub fn InvokeMethod(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument ```
    pub fn InvokeMethod2(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod2(@ptrCast(obj), member_Cstring, @ptrCast(retVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument ```
    pub fn InvokeMethod3(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod3(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument ```
    pub fn InvokeMethod4(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod4(@ptrCast(obj), member_Cstring, @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument ```
    pub fn NewInstance(self: ?*anyopaque, val0: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance(@ptrCast(self), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#static_metacall)
    ///
    /// ``` self: QtC.QMetaObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn StaticMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMetaObject_StaticMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metacall)
    ///
    /// ``` param1: QtC.QObject, param2: qobjectdefs_enums.Call, param3: i32, param4: ?*anyopaque ```
    pub fn Metacall(param1: ?*anyopaque, param2: i64, param3: i32, param4: ?*anyopaque) i32 {
        return qtc.QMetaObject_Metacall(@ptrCast(param1), @intCast(param2), @intCast(param3), param4);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(self: ?*anyopaque, s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMetaObject_Tr3(@ptrCast(self), s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmetaobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, receiver: QtC.QObject, method_index: i32, typeVal: i32 ```
    pub fn Connect5(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QMetaObject_Connect5(@ptrCast(sender), @intCast(signal_index), @ptrCast(receiver), @intCast(method_index), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal_index: i32, receiver: QtC.QObject, method_index: i32, typeVal: i32, types: *i32 ```
    pub fn Connect6(sender: ?*anyopaque, signal_index: i32, receiver: ?*anyopaque, method_index: i32, typeVal: i32, types: *i32) QtC.QMetaObject__Connection {
        return qtc.QMetaObject_Connect6(@ptrCast(sender), @intCast(signal_index), @ptrCast(receiver), @intCast(method_index), @intCast(typeVal), @ptrCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument ```
    pub fn InvokeMethod5(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod5(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeMethod6(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod6(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeMethod7(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod7(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeMethod8(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod8(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeMethod9(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod9(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeMethod10(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod10(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeMethod11(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod11(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeMethod12(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod12(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeMethod13(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod13(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, param3: qnamespace_enums.ConnectionType, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeMethod14(obj: ?*anyopaque, member: []const u8, param3: i64, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod14(@ptrCast(obj), member_Cstring, @intCast(param3), @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument ```
    pub fn InvokeMethod42(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod42(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeMethod52(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod52(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeMethod62(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod62(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeMethod72(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod72(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeMethod82(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod82(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeMethod92(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod92(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeMethod102(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod102(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeMethod112(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod112(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeMethod122(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod122(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeMethod132(obj: ?*anyopaque, member: []const u8, retVal: QtC.QGenericReturnArgument, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod132(@ptrCast(obj), member_Cstring, @ptrCast(retVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeMethod53(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod53(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeMethod63(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod63(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeMethod73(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod73(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeMethod83(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod83(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeMethod93(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod93(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeMethod103(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod103(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeMethod113(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod113(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeMethod123(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod123(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, typeVal: qnamespace_enums.ConnectionType, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeMethod133(obj: ?*anyopaque, member: []const u8, typeVal: i64, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod133(@ptrCast(obj), member_Cstring, @intCast(typeVal), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn InvokeMethod43(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod43(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn InvokeMethod54(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod54(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn InvokeMethod64(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod64(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn InvokeMethod74(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod74(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn InvokeMethod84(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod84(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn InvokeMethod94(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod94(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn InvokeMethod104(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod104(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn InvokeMethod114(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod114(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
    ///
    /// ``` obj: QtC.QObject, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn InvokeMethod124(obj: ?*anyopaque, member: []const u8, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) bool {
        const member_Cstring = member.ptr;
        return qtc.QMetaObject_InvokeMethod124(@ptrCast(obj), member_Cstring, @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument ```
    pub fn NewInstance2(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance2(@ptrCast(self), @ptrCast(val0), @ptrCast(val1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument ```
    pub fn NewInstance3(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance3(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument ```
    pub fn NewInstance4(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance4(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument ```
    pub fn NewInstance5(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance5(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument ```
    pub fn NewInstance6(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance6(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument ```
    pub fn NewInstance7(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance7(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument ```
    pub fn NewInstance8(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance8(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument ```
    pub fn NewInstance9(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance9(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
    ///
    /// ``` self: QtC.QMetaObject, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument ```
    pub fn NewInstance10(self: ?*anyopaque, val0: QtC.QGenericArgument, val1: QtC.QGenericArgument, val2: QtC.QGenericArgument, val3: QtC.QGenericArgument, val4: QtC.QGenericArgument, val5: QtC.QGenericArgument, val6: QtC.QGenericArgument, val7: QtC.QGenericArgument, val8: QtC.QGenericArgument, val9: QtC.QGenericArgument) QtC.QObject {
        return qtc.QMetaObject_NewInstance10(@ptrCast(self), @ptrCast(val0), @ptrCast(val1), @ptrCast(val2), @ptrCast(val3), @ptrCast(val4), @ptrCast(val5), @ptrCast(val6), @ptrCast(val7), @ptrCast(val8), @ptrCast(val9));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#dtor.QMetaObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-connection.html
pub const qmetaobject__connection = struct {
    /// New constructs a new QMetaObject::Connection object.
    ///
    ///
    pub fn New() QtC.QMetaObject__Connection {
        return qtc.QMetaObject__Connection_new();
    }

    /// New2 constructs a new QMetaObject::Connection object.
    ///
    /// ``` other: QtC.QMetaObject__Connection ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QMetaObject__Connection_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__connection.html#operator-eq)
    ///
    /// ``` self: QtC.QMetaObject__Connection, other: QtC.QMetaObject__Connection ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaObject__Connection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__connection.html#swap)
    ///
    /// ``` self: QtC.QMetaObject__Connection, other: QtC.QMetaObject__Connection ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaObject__Connection_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaObject__Connection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__Connection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-superdata.html
pub const qmetaobject__superdata = struct {
    /// New constructs a new QMetaObject::SuperData object.
    ///
    ///
    pub fn New() QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new();
    }

    /// New2 constructs a new QMetaObject::SuperData object.
    ///
    /// ``` mo: QtC.QMetaObject ```
    pub fn New2(mo: ?*anyopaque) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new2(@ptrCast(mo));
    }

    /// New3 constructs a new QMetaObject::SuperData object.
    ///
    /// ``` param1: QtC.QMetaObject__SuperData ```
    pub fn New3(param1: ?*anyopaque) QtC.QMetaObject__SuperData {
        return qtc.QMetaObject__SuperData_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator--gt)
    ///
    /// ``` self: QtC.QMetaObject__SuperData ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaObject__SuperData_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator-2a)
    ///
    /// ``` self: QtC.QMetaObject__SuperData ```
    pub fn ToConstQMetaObjectMultiply(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMetaObject__SuperData_ToConstQMetaObjectMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator-eq)
    ///
    /// ``` self: QtC.QMetaObject__SuperData, param1: QtC.QMetaObject__SuperData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMetaObject__SuperData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaObject__SuperData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__SuperData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaobject-data.html
pub const qmetaobject__data = struct {
    /// New constructs a new QMetaObject::Data object.
    ///
    ///
    pub fn New() QtC.QMetaObject__Data {
        return qtc.QMetaObject__Data_new();
    }

    /// New2 constructs a new QMetaObject::Data object.
    ///
    /// ``` param1: QtC.QMetaObject__Data ```
    pub fn New2(param1: ?*anyopaque) QtC.QMetaObject__Data {
        return qtc.QMetaObject__Data_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__data.html#operator-eq)
    ///
    /// ``` self: QtC.QMetaObject__Data, param1: QtC.QMetaObject__Data ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMetaObject__Data_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaObject__Data ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaObject__Data_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qobjectdefs.html#types
pub const enums = struct {
    pub const Call = enum {
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
