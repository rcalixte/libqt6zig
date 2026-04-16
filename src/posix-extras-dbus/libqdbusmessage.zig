const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusError = @import("libqt6").QDBusError;
const QVariant = @import("libqt6").QVariant;
const qdbuserror_enums = @import("libqdbuserror.zig").enums;
const qdbusmessage_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html)
pub const QDBusMessage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusMessage,

    pub const _is_QDBusMessage = {};

    /// New constructs a new QDBusMessage object.
    ///
    pub fn New() QDBusMessage {
        return .{ .ptr = qtc.QDBusMessage_new() };
    }

    /// New2 constructs a new QDBusMessage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn New2(other: anytype) QDBusMessage {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusMessage_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn OperatorAssign(self: QDBusMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        qtc.QDBusMessage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn Swap(self: QDBusMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        qtc.QDBusMessage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    pub fn CreateSignal(path: []const u8, interface: []const u8, name: []const u8) QDBusMessage {
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
        return .{ .ptr = qtc.QDBusMessage_CreateSignal(path_str, interface_str, name_str) };
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
    pub fn CreateTargetedSignal(service: []const u8, path: []const u8, interface: []const u8, name: []const u8) QDBusMessage {
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
        return .{ .ptr = qtc.QDBusMessage_CreateTargetedSignal(service_str, path_str, interface_str, name_str) };
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
    pub fn CreateMethodCall(destination: []const u8, path: []const u8, interface: []const u8, method: []const u8) QDBusMessage {
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
        return .{ .ptr = qtc.QDBusMessage_CreateMethodCall(destination_str, path_str, interface_str, method_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateError(name: []const u8, msg: []const u8) QDBusMessage {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateError(name_str, msg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` err: QDBusError `
    ///
    pub fn CreateError2(err: anytype) QDBusMessage {
        comptime _ = @TypeOf(err)._is_QDBusError;
        return .{ .ptr = qtc.QDBusMessage_CreateError2(@ptrCast(err.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateError3(typeVal: i32, msg: []const u8) QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateError3(@bitCast(typeVal), msg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn CreateReply(self: QDBusMessage) QDBusMessage {
        return .{ .ptr = qtc.QDBusMessage_CreateReply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` argument: QVariant `
    ///
    pub fn CreateReply2(self: QDBusMessage, argument: anytype) QDBusMessage {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QDBusMessage_CreateReply2(@ptrCast(self.ptr), @ptrCast(argument.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateErrorReply(self: QDBusMessage, name: []const u8, msg: []const u8) QDBusMessage {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateErrorReply(@ptrCast(self.ptr), name_str, msg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` err: QDBusError `
    ///
    pub fn CreateErrorReply2(self: QDBusMessage, err: anytype) QDBusMessage {
        comptime _ = @TypeOf(err)._is_QDBusError;
        return .{ .ptr = qtc.QDBusMessage_CreateErrorReply2(@ptrCast(self.ptr), @ptrCast(err.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn CreateErrorReply3(self: QDBusMessage, typeVal: i32, msg: []const u8) QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateErrorReply3(@ptrCast(self.ptr), @bitCast(typeVal), msg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#service)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Interface(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#member)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Member(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Member(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Member: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorName(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.ErrorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMessage(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.ErrorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ## Returns:
    ///
    /// ` qdbusmessage_enums.MessageType `
    ///
    pub fn Type(self: QDBusMessage) i32 {
        return qtc.QDBusMessage_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signature(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusmessage.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isReplyRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn IsReplyRequired(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsReplyRequired(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDelayedReply(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetDelayedReply(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn IsDelayedReply(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsDelayedReply(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setAutoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoStartService(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetAutoStartService(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#autoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn AutoStartService(self: QDBusMessage) bool {
        return qtc.QDBusMessage_AutoStartService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn SetInteractiveAuthorizationAllowed(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetInteractiveAuthorizationAllowed(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn IsInteractiveAuthorizationAllowed(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsInteractiveAuthorizationAllowed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` arguments: []QVariant `
    ///
    pub fn SetArguments(self: QDBusMessage, arguments: []QVariant) void {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        qtc.QDBusMessage_SetArguments(@ptrCast(self.ptr), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: QDBusMessage, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QDBusMessage_Arguments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qdbusmessage.Arguments: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` arg: QVariant `
    ///
    pub fn OperatorShiftLeft(self: QDBusMessage, arg: anytype) QDBusMessage {
        comptime _ = @TypeOf(arg)._is_QVariant;
        return .{ .ptr = qtc.QDBusMessage_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` arguments: []QVariant `
    ///
    pub fn CreateReply1(self: QDBusMessage, arguments: []QVariant) QDBusMessage {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return .{ .ptr = qtc.QDBusMessage_CreateReply1(@ptrCast(self.ptr), arguments_list) };
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
    /// ` self: QDBusMessage `
    ///
    pub fn Delete(self: QDBusMessage) void {
        qtc.QDBusMessage_Delete(@ptrCast(self.ptr));
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
