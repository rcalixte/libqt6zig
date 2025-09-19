const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kremoteencoding.html
pub const kremoteencoding = struct {
    /// New constructs a new KRemoteEncoding object.
    ///
    ///
    pub fn New() QtC.KRemoteEncoding {
        return qtc.KRemoteEncoding_new();
    }

    /// New2 constructs a new KRemoteEncoding object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.KRemoteEncoding {
        const name_Cstring = name.ptr;

        return qtc.KRemoteEncoding_new2(name_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#decode)
    ///
    /// ``` self: QtC.KRemoteEncoding, name: []u8, allocator: std.mem.Allocator ```
    pub fn Decode(self: ?*anyopaque, name: []u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KRemoteEncoding_Decode(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kremoteencoding.Decode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#encode)
    ///
    /// ``` self: QtC.KRemoteEncoding, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Encode(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#encode)
    ///
    /// ``` self: QtC.KRemoteEncoding, url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Encode2(self: ?*anyopaque, url: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode2(@ptrCast(self), @ptrCast(url));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#directory)
    ///
    /// ``` self: QtC.KRemoteEncoding, url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Directory(self: ?*anyopaque, url: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory(@ptrCast(self), @ptrCast(url));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Directory: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#fileName)
    ///
    /// ``` self: QtC.KRemoteEncoding, url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, url: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_FileName(@ptrCast(self), @ptrCast(url));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.FileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#encoding)
    ///
    /// ``` self: QtC.KRemoteEncoding ```
    pub fn Encoding(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KRemoteEncoding_Encoding(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#setEncoding)
    ///
    /// ``` self: QtC.KRemoteEncoding, name: []const u8 ```
    pub fn SetEncoding(self: ?*anyopaque, name: []const u8) void {
        const name_Cstring = name.ptr;
        qtc.KRemoteEncoding_SetEncoding(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// ``` self: QtC.KRemoteEncoding, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRemoteEncoding, callback: *const fn (self: QtC.KRemoteEncoding, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KRemoteEncoding_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRemoteEncoding, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#directory)
    ///
    /// ``` self: QtC.KRemoteEncoding, url: QtC.QUrl, ignore_trailing_slash: bool, allocator: std.mem.Allocator ```
    pub fn Directory2(self: ?*anyopaque, url: ?*anyopaque, ignore_trailing_slash: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory2(@ptrCast(self), @ptrCast(url), ignore_trailing_slash);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Directory2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kremoteencoding.html#dtor.KRemoteEncoding)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRemoteEncoding ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRemoteEncoding_Delete(@ptrCast(self));
    }
};
