const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusMessage = @import("libqt6").QDBusMessage;
const qdbuserror_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html)
pub const QDBusError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusError,

    pub const _is_QDBusError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusError object in C++ memory
    ///
    pub fn new() QDBusError {
        return .{ .ptr = qtc.QDBusError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` msg: QDBusMessage `
    ///
    pub fn new2(msg: anytype) QDBusError {
        comptime _ = @TypeOf(msg)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusError_new2(@ptrCast(msg.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qdbuserror_enums.ErrorType `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn new3(errorVal: i32, _message: []const u8) QDBusError {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        return .{ .ptr = qtc.QDBusError_new3(@bitCast(errorVal), message_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDBusError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusError `
    ///
    pub fn new4(other: anytype) QDBusError {
        comptime _ = @TypeOf(other)._is_QDBusError;
        return .{ .ptr = qtc.QDBusError_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` other: QDBusError `
    ///
    pub fn operatorAssign(self: QDBusError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusError;
        qtc.QDBusError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` msg: QDBusMessage `
    ///
    pub fn operatorAssign2(self: QDBusError, msg: anytype) void {
        comptime _ = @TypeOf(msg)._is_QDBusMessage;
        qtc.QDBusError_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(msg.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` other: QDBusError `
    ///
    pub fn swap(self: QDBusError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusError;
        qtc.QDBusError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ## Returns:
    ///
    /// ` qdbuserror_enums.ErrorType `
    ///
    pub fn type0(self: QDBusError) i32 {
        return qtc.QDBusError_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDBusError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusError_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusError.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: QDBusError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusError_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusError.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    pub fn isValid(self: QDBusError) bool {
        return qtc.QDBusError_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` errorVal: qdbuserror_enums.ErrorType `
    ///
    pub fn errorString(allocator: std.mem.Allocator, errorVal: i32) []const u8 {
        var _str = qtc.QDBusError_ErrorString(@bitCast(errorVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusError.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#dtor.QDBusError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusError `
    ///
    pub fn delete(self: QDBusError) void {
        qtc.QDBusError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#public-types)
pub const enums = struct {
    pub const ErrorType = enum {
        pub const NoError: i32 = 0;
        pub const Other: i32 = 1;
        pub const Failed: i32 = 2;
        pub const NoMemory: i32 = 3;
        pub const ServiceUnknown: i32 = 4;
        pub const NoReply: i32 = 5;
        pub const BadAddress: i32 = 6;
        pub const NotSupported: i32 = 7;
        pub const LimitsExceeded: i32 = 8;
        pub const AccessDenied: i32 = 9;
        pub const NoServer: i32 = 10;
        pub const Timeout: i32 = 11;
        pub const NoNetwork: i32 = 12;
        pub const AddressInUse: i32 = 13;
        pub const Disconnected: i32 = 14;
        pub const InvalidArgs: i32 = 15;
        pub const UnknownMethod: i32 = 16;
        pub const TimedOut: i32 = 17;
        pub const InvalidSignature: i32 = 18;
        pub const UnknownInterface: i32 = 19;
        pub const UnknownObject: i32 = 20;
        pub const UnknownProperty: i32 = 21;
        pub const PropertyReadOnly: i32 = 22;
        pub const InternalError: i32 = 23;
        pub const InvalidService: i32 = 24;
        pub const InvalidObjectPath: i32 = 25;
        pub const InvalidInterface: i32 = 26;
        pub const InvalidMember: i32 = 27;
        pub const LastErrorType: i32 = 27;
    };
};
