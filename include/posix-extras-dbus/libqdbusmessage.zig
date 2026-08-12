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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusMessage object in C++ memory
    ///
    pub fn new() QDBusMessage {
        return .{ .ptr = qtc.QDBusMessage_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusMessage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn new2(other: anytype) QDBusMessage {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusMessage_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn operatorAssign(self: QDBusMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        qtc.QDBusMessage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` other: QDBusMessage `
    ///
    pub fn swap(self: QDBusMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusMessage;
        qtc.QDBusMessage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `createSignal` instead
    ///
    pub const CreateSignal = createSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn createSignal(_path: []const u8, _interface: []const u8, name: []const u8) QDBusMessage {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateSignal(path_str, interface_str, name_str) };
    }

    /// ### DEPRECATED: Use `createTargetedSignal` instead
    ///
    pub const CreateTargetedSignal = createTargetedSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createTargetedSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` _service: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn createTargetedSignal(_service: []const u8, _path: []const u8, _interface: []const u8, name: []const u8) QDBusMessage {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateTargetedSignal(service_str, path_str, interface_str, name_str) };
    }

    /// ### DEPRECATED: Use `createMethodCall` instead
    ///
    pub const CreateMethodCall = createMethodCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createMethodCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` destination: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` method: []const u8 `
    ///
    pub fn createMethodCall(destination: []const u8, _path: []const u8, _interface: []const u8, method: []const u8) QDBusMessage {
        const destination_str = qtc.libqt_string{
            .len = destination.len,
            .data = destination.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateMethodCall(destination_str, path_str, interface_str, method_str) };
    }

    /// ### DEPRECATED: Use `createError` instead
    ///
    pub const CreateError = createError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn createError(name: []const u8, msg: []const u8) QDBusMessage {
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

    /// ### DEPRECATED: Use `createError2` instead
    ///
    pub const CreateError2 = createError2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` err: QDBusError `
    ///
    pub fn createError2(err: anytype) QDBusMessage {
        comptime _ = @TypeOf(err)._is_QDBusError;
        return .{ .ptr = qtc.QDBusMessage_CreateError2(@ptrCast(err.ptr)) };
    }

    /// ### DEPRECATED: Use `createError3` instead
    ///
    pub const CreateError3 = createError3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn createError3(typeVal: i32, msg: []const u8) QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateError3(@bitCast(typeVal), msg_str) };
    }

    /// ### DEPRECATED: Use `createReply` instead
    ///
    pub const CreateReply = createReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn createReply(self: QDBusMessage) QDBusMessage {
        return .{ .ptr = qtc.QDBusMessage_CreateReply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createReply2` instead
    ///
    pub const CreateReply2 = createReply2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` argument: QVariant `
    ///
    pub fn createReply2(self: QDBusMessage, argument: anytype) QDBusMessage {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QDBusMessage_CreateReply2(@ptrCast(self.ptr), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `createErrorReply` instead
    ///
    pub const CreateErrorReply = createErrorReply;

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
    pub fn createErrorReply(self: QDBusMessage, name: []const u8, msg: []const u8) QDBusMessage {
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

    /// ### DEPRECATED: Use `createErrorReply2` instead
    ///
    pub const CreateErrorReply2 = createErrorReply2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` err: QDBusError `
    ///
    pub fn createErrorReply2(self: QDBusMessage, err: anytype) QDBusMessage {
        comptime _ = @TypeOf(err)._is_QDBusError;
        return .{ .ptr = qtc.QDBusMessage_CreateErrorReply2(@ptrCast(self.ptr), @ptrCast(err.ptr)) };
    }

    /// ### DEPRECATED: Use `createErrorReply3` instead
    ///
    pub const CreateErrorReply3 = createErrorReply3;

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
    pub fn createErrorReply3(self: QDBusMessage, typeVal: i32, msg: []const u8) QDBusMessage {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return .{ .ptr = qtc.QDBusMessage_CreateErrorReply3(@ptrCast(self.ptr), @bitCast(typeVal), msg_str) };
    }

    /// ### DEPRECATED: Use `service` instead
    ///
    pub const Service = service;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#service)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn service(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `interface` instead
    ///
    pub const Interface = interface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn interface(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `member` instead
    ///
    pub const Member = member;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#member)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn member(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Member(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.member: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorName` instead
    ///
    pub const ErrorName = errorName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorName(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.errorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorMessage` instead
    ///
    pub const ErrorMessage = errorMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorMessage(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.errorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDBusMessage) i32 {
        return qtc.QDBusMessage_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signature` instead
    ///
    pub const Signature = signature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signature(self: QDBusMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusMessage_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusMessage.signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReplyRequired` instead
    ///
    pub const IsReplyRequired = isReplyRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isReplyRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn isReplyRequired(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsReplyRequired(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelayedReply` instead
    ///
    pub const SetDelayedReply = setDelayedReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn setDelayedReply(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetDelayedReply(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isDelayedReply` instead
    ///
    pub const IsDelayedReply = isDelayedReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn isDelayedReply(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsDelayedReply(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoStartService` instead
    ///
    pub const SetAutoStartService = setAutoStartService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setAutoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoStartService(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetAutoStartService(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `autoStartService` instead
    ///
    pub const AutoStartService = autoStartService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#autoStartService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn autoStartService(self: QDBusMessage) bool {
        return qtc.QDBusMessage_AutoStartService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInteractiveAuthorizationAllowed` instead
    ///
    pub const SetInteractiveAuthorizationAllowed = setInteractiveAuthorizationAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` enable: bool `
    ///
    pub fn setInteractiveAuthorizationAllowed(self: QDBusMessage, enable: bool) void {
        qtc.QDBusMessage_SetInteractiveAuthorizationAllowed(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isInteractiveAuthorizationAllowed` instead
    ///
    pub const IsInteractiveAuthorizationAllowed = isInteractiveAuthorizationAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn isInteractiveAuthorizationAllowed(self: QDBusMessage) bool {
        return qtc.QDBusMessage_IsInteractiveAuthorizationAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setArguments` instead
    ///
    pub const SetArguments = setArguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` _arguments: []QVariant `
    ///
    pub fn setArguments(self: QDBusMessage, _arguments: []QVariant) void {
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = @ptrCast(_arguments.ptr),
        };
        qtc.QDBusMessage_SetArguments(@ptrCast(self.ptr), arguments_list);
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn arguments(self: QDBusMessage, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QDBusMessage_Arguments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QDBusMessage.arguments: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` arg: QVariant `
    ///
    pub fn operatorShiftLeft(self: QDBusMessage, arg: anytype) QDBusMessage {
        comptime _ = @TypeOf(arg)._is_QVariant;
        return .{ .ptr = qtc.QDBusMessage_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `createReply1` instead
    ///
    pub const CreateReply1 = createReply1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusMessage `
    ///
    /// ` _arguments: []QVariant `
    ///
    pub fn createReply1(self: QDBusMessage, _arguments: []QVariant) QDBusMessage {
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = @ptrCast(_arguments.ptr),
        };
        return .{ .ptr = qtc.QDBusMessage_CreateReply1(@ptrCast(self.ptr), arguments_list) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmessage.html#dtor.QDBusMessage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusMessage `
    ///
    pub fn delete(self: QDBusMessage) void {
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
