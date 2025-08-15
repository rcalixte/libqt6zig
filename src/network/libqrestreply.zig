const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkreply_enums = @import("libqnetworkreply.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qrestreply.html
pub const qrestreply = struct {
    /// New constructs a new QRestReply object.
    ///
    /// ``` reply: QtC.QNetworkReply ```
    pub fn New(reply: ?*anyopaque) QtC.QRestReply {
        return qtc.QRestReply_new(@ptrCast(reply));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#swap)
    ///
    /// ``` self: QtC.QRestReply, other: QtC.QRestReply ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRestReply_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn NetworkReply(self: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestReply_NetworkReply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readBody)
    ///
    /// ``` self: QtC.QRestReply, allocator: std.mem.Allocator ```
    pub fn ReadBody(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QRestReply_ReadBody(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qrestreply.ReadBody: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readText)
    ///
    /// ``` self: QtC.QRestReply, allocator: std.mem.Allocator ```
    pub fn ReadText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestReply_ReadText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ReadText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn IsSuccess(self: ?*anyopaque) bool {
        return qtc.QRestReply_IsSuccess(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn HttpStatus(self: ?*anyopaque) i32 {
        return qtc.QRestReply_HttpStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn IsHttpStatusSuccess(self: ?*anyopaque) bool {
        return qtc.QRestReply_IsHttpStatusSuccess(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#hasError)
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QRestReply_HasError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#error)
    ///
    /// ``` self: QtC.QRestReply ```
    ///
    /// Returns: ``` qnetworkreply_enums.NetworkError ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QRestReply_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#errorString)
    ///
    /// ``` self: QtC.QRestReply, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestReply_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestreply.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRestReply ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRestReply_Delete(@ptrCast(self));
    }
};
