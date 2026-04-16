const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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

    /// New constructs a new QRestReply object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn New(reply: anytype) QRestReply {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        return .{ .ptr = qtc.QRestReply_new(@ptrCast(reply.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` other: QRestReply `
    ///
    pub fn Swap(self: QRestReply, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRestReply;
        qtc.QRestReply_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn NetworkReply(self: QRestReply) QNetworkReply {
        return .{ .ptr = qtc.QRestReply_NetworkReply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadBody(self: QRestReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QRestReply_ReadBody(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrestreply.ReadBody: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadText(self: QRestReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRestReply_ReadText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ReadText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn IsSuccess(self: QRestReply) bool {
        return qtc.QRestReply_IsSuccess(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn HttpStatus(self: QRestReply) i32 {
        return qtc.QRestReply_HttpStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn IsHttpStatusSuccess(self: QRestReply) bool {
        return qtc.QRestReply_IsHttpStatusSuccess(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    pub fn HasError(self: QRestReply) bool {
        return qtc.QRestReply_HasError(@ptrCast(self.ptr));
    }

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
    pub fn Error(self: QRestReply) i32 {
        return qtc.QRestReply_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QRestReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QRestReply_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRestReply `
    ///
    pub fn Delete(self: QRestReply) void {
        qtc.QRestReply_Delete(@ptrCast(self.ptr));
    }
};
