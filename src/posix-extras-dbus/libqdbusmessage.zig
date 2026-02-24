const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbuserror_enums = @import("libqdbuserror.zig").enums;
const qdbusmessage_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html)
pub const qdbusmessage = struct {
    /// New constructs a new QDBusMessage object.
    ///
    pub fn New() QtC.QDBusMessage {
        return qtc.QDBusMessage_new();
    }

    /// New2 constructs a new QDBusMessage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDBusMessage `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` other: QtC.QDBusMessage `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMessage_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` other: QtC.QDBusMessage `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMessage_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateSignal(path: []const u8, interface: []const u8, name: []const u8) QtC.QDBusMessage {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDBusMessage_CreateSignal(path_str, interface_str, name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createTargetedSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateTargetedSignal(service: []const u8, path: []const u8, interface: []const u8, name: []const u8) QtC.QDBusMessage {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDBusMessage_CreateTargetedSignal(service_str, path_str, interface_str, name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createMethodCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` destination: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` method: []const u8 `
    ///
    pub fn CreateMethodCall(destination: []const u8, path: []const u8, interface: []const u8, method: []const u8) QtC.QDBusMessage {
        const destination_str = qtc.libqt_string{
            .len = destination.len,
            .data = destination.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusMessage_CreateMethodCall(destination_str, path_str, interface_str, method_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateError(name: []const u8, msg: []const u8) QtC.QDBusMessage {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QDBusMessage_CreateError(name_str, msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` err: QtC.QDBusError `
    ///
    pub fn CreateError2(err: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_CreateError2(@ptrCast(err));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateError3(typeVal: i32, msg: []const u8) QtC.QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QDBusMessage_CreateError3(@bitCast(typeVal), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn CreateReply(self: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_CreateReply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` argument: QtC.QVariant `
    ///
    pub fn CreateReply2(self: ?*anyopaque, argument: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_CreateReply2(@ptrCast(self), @ptrCast(argument));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateErrorReply(self: ?*anyopaque, name: []const u8, msg: []const u8) QtC.QDBusMessage {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QDBusMessage_CreateErrorReply(@ptrCast(self), name_str, msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` err: QtC.QDBusError `
    ///
    pub fn CreateErrorReply2(self: ?*anyopaque, err: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_CreateErrorReply2(@ptrCast(self), @ptrCast(err));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateErrorReply3(self: ?*anyopaque, typeVal: i32, msg: []const u8) QtC.QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.QDBusMessage_CreateErrorReply3(@ptrCast(self), @bitCast(typeVal), msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#service)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Service(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Interface(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Interface(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#member)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Member(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Member(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Member: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.ErrorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMessage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorMessage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.ErrorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ## Returns:
    ///
    /// ` qdbusmessage_enums.MessageType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QDBusMessage_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signature(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Signature(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isReplyRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn IsReplyRequired(self: ?*anyopaque) bool {
        return qtc.QDBusMessage_IsReplyRequired(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDelayedReply(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusMessage_SetDelayedReply(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn IsDelayedReply(self: ?*anyopaque) bool {
        return qtc.QDBusMessage_IsDelayedReply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setAutoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoStartService(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusMessage_SetAutoStartService(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#autoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn AutoStartService(self: ?*anyopaque) bool {
        return qtc.QDBusMessage_AutoStartService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetInteractiveAuthorizationAllowed(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusMessage_SetInteractiveAuthorizationAllowed(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn IsInteractiveAuthorizationAllowed(self: ?*anyopaque) bool {
        return qtc.QDBusMessage_IsInteractiveAuthorizationAllowed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` arguments: []QtC.QVariant `
    ///
    pub fn SetArguments(self: ?*anyopaque, arguments: []QtC.QVariant) void {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        qtc.QDBusMessage_SetArguments(@ptrCast(self), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QDBusMessage_Arguments(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qdbusmessage.Arguments: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` arg: QtC.QVariant `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusMessage_OperatorShiftLeft(@ptrCast(self), @ptrCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    /// ` arguments: []QtC.QVariant `
    ///
    pub fn CreateReply1(self: ?*anyopaque, arguments: []QtC.QVariant) QtC.QDBusMessage {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return qtc.QDBusMessage_CreateReply1(@ptrCast(self), arguments_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#dtor.QDBusMessage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDBusMessage `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDBusMessage_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#public-types)
pub const enums = struct {
    pub const MessageType = enum(i32) {
        pub const InvalidMessage: i32 = 0;
        pub const MethodCallMessage: i32 = 1;
        pub const ReplyMessage: i32 = 2;
        pub const ErrorMessage: i32 = 3;
        pub const SignalMessage: i32 = 4;
    };
};
