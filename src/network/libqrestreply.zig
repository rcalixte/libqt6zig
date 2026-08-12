const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonDocument = @import("libqt6").QJsonDocument;
const QJsonParseError = @import("libqt6").QJsonParseError;
const QNetworkReply = @import("libqt6").QNetworkReply;
const qnetworkreply_enums = @import("libqnetworkreply.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html)
pub const QRestReply = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRestReply,

    pub const _is_QRestReply = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRestReply object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn new(reply: anytype) QRestReply {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        return .{ .ptr = qtc.QRestReply_new(@ptrCast(reply.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` other: QRestReply `
    ///
    pub fn swap(self: QRestReply, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRestReply;
        qtc.QRestReply_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `networkReply` instead
    ///
    pub const NetworkReply = networkReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn networkReply(self: QRestReply) QNetworkReply {
        return .{ .ptr = qtc.QRestReply_NetworkReply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readJson` instead
    ///
    pub const ReadJson = readJson;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ## Returns:
    ///
    /// ` QJsonDocument ` (NOTE: The `ptr` field could be `null`.)
    ///
    pub fn readJson(self: QRestReply) QJsonDocument {
        return .{ .ptr = qtc.QRestReply_ReadJson(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readBody` instead
    ///
    pub const ReadBody = readBody;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readBody(self: QRestReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QRestReply_ReadBody(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QRestReply.readBody: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readText` instead
    ///
    pub const ReadText = readText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readText(self: QRestReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRestReply_ReadText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestReply.readText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSuccess` instead
    ///
    pub const IsSuccess = isSuccess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn isSuccess(self: QRestReply) bool {
        return qtc.QRestReply_IsSuccess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `httpStatus` instead
    ///
    pub const HttpStatus = httpStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn httpStatus(self: QRestReply) i32 {
        return qtc.QRestReply_HttpStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHttpStatusSuccess` instead
    ///
    pub const IsHttpStatusSuccess = isHttpStatusSuccess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn isHttpStatusSuccess(self: QRestReply) bool {
        return qtc.QRestReply_IsHttpStatusSuccess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn hasError(self: QRestReply) bool {
        return qtc.QRestReply_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkreply_enums.NetworkError `
    ///
    pub fn error0(self: QRestReply) i32 {
        return qtc.QRestReply_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QRestReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRestReply_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestReply.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readJson1` instead
    ///
    pub const ReadJson1 = readJson1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` errorVal: QJsonParseError `
    ///
    /// ## Returns:
    ///
    /// ` QJsonDocument ` (NOTE: The `ptr` field could be `null`.)
    ///
    pub fn readJson1(self: QRestReply, errorVal: anytype) QJsonDocument {
        comptime _ = @TypeOf(errorVal)._is_QJsonParseError;
        return .{ .ptr = qtc.QRestReply_ReadJson1(@ptrCast(self.ptr), @ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRestReply `
    ///
    pub fn delete(self: QRestReply) void {
        qtc.QRestReply_Delete(@ptrCast(self.ptr));
    }
};
