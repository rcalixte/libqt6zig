const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbuserror_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbuserror.html
pub const qdbuserror = struct {
    /// New constructs a new QDBusError object.
    ///
    ///
    pub fn New() QtC.QDBusError {
        return qtc.QDBusError_new();
    }

    /// New2 constructs a new QDBusError object.
    ///
    /// ``` msg: QtC.QDBusMessage ```
    pub fn New2(msg: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusError_new2(@ptrCast(msg));
    }

    /// New3 constructs a new QDBusError object.
    ///
    /// ``` errorVal: qdbuserror_enums.ErrorType, message: []const u8 ```
    pub fn New3(errorVal: i32, message: []const u8) QtC.QDBusError {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };

        return qtc.QDBusError_new3(@intCast(errorVal), message_str);
    }

    /// New4 constructs a new QDBusError object.
    ///
    /// ``` other: QtC.QDBusError ```
    pub fn New4(other: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusError_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusError, other: QtC.QDBusError ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusError, msg: QtC.QDBusMessage ```
    pub fn OperatorAssign2(self: ?*anyopaque, msg: ?*anyopaque) void {
        qtc.QDBusError_OperatorAssign2(@ptrCast(self), @ptrCast(msg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#swap)
    ///
    /// ``` self: QtC.QDBusError, other: QtC.QDBusError ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusError_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#type)
    ///
    /// ``` self: QtC.QDBusError ```
    ///
    /// Returns: ``` qdbuserror_enums.ErrorType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QDBusError_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#name)
    ///
    /// ``` self: QtC.QDBusError, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusError_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#message)
    ///
    /// ``` self: QtC.QDBusError, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusError_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#isValid)
    ///
    /// ``` self: QtC.QDBusError ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusError_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#errorString)
    ///
    /// ``` errorVal: qdbuserror_enums.ErrorType, allocator: std.mem.Allocator ```
    pub fn ErrorString(errorVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusError_ErrorString(@intCast(errorVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuserror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#dtor.QDBusError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdbuserror.html#types
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
