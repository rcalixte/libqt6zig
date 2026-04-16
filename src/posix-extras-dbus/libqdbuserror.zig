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

    /// New constructs a new QDBusError object.
    ///
    pub fn New() QDBusError {
        return .{ .ptr = qtc.QDBusError_new() };
    }

    /// New2 constructs a new QDBusError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msg: QDBusMessage `
    ///
    pub fn New2(msg: anytype) QDBusError {
        comptime _ = @TypeOf(msg)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusError_new2(@ptrCast(msg.ptr)) };
    }

    /// New3 constructs a new QDBusError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qdbuserror_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New3(errorVal: i32, message: []const u8) QDBusError {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.QDBusError_new3(@bitCast(errorVal), message_str) };
    }

    /// New4 constructs a new QDBusError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusError `
    ///
    pub fn New4(other: anytype) QDBusError {
        comptime _ = @TypeOf(other)._is_QDBusError;
        return .{ .ptr = qtc.QDBusError_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` other: QDBusError `
    ///
    pub fn OperatorAssign(self: QDBusError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusError;
        qtc.QDBusError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` msg: QDBusMessage `
    ///
    pub fn OperatorAssign2(self: QDBusError, msg: anytype) void {
        comptime _ = @TypeOf(msg)._is_QDBusMessage;
        qtc.QDBusError_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(msg.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` other: QDBusError `
    ///
    pub fn Swap(self: QDBusError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusError;
        qtc.QDBusError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Type(self: QDBusError) i32 {
        return qtc.QDBusError_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDBusError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusError_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: QDBusError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusError_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusError `
    ///
    pub fn IsValid(self: QDBusError) bool {
        return qtc.QDBusError_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` errorVal: qdbuserror_enums.ErrorType `
    ///
    pub fn ErrorString(allocator: std.mem.Allocator, errorVal: i32) []const u8 {
        var _str = qtc.QDBusError_ErrorString(@bitCast(errorVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#dtor.QDBusError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusError `
    ///
    pub fn Delete(self: QDBusError) void {
        qtc.QDBusError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuserror.html#public-types)
pub const enums = struct {
    pub const ErrorType = enum(i32) {
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
