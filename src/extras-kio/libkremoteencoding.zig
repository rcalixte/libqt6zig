const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kremoteencoding.html)
pub const KRemoteEncoding = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRemoteEncoding,

    pub const _is_KRemoteEncoding = {};

    /// New constructs a new KRemoteEncoding object.
    ///
    pub fn New() KRemoteEncoding {
        return .{ .ptr = qtc.KRemoteEncoding_new() };
    }

    /// New2 constructs a new KRemoteEncoding object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn New2(name: [:0]const u8) KRemoteEncoding {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.KRemoteEncoding_new2(name_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []u8 `
    ///
    pub fn Decode(self: KRemoteEncoding, allocator: std.mem.Allocator, name: []u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KRemoteEncoding_Decode(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kremoteencoding.Decode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Encode(self: KRemoteEncoding, allocator: std.mem.Allocator, name: []const u8) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn Encode2(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode2(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn Directory(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Directory: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn FileName(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_FileName(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.FileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    pub fn Encoding(self: KRemoteEncoding) [:0]const u8 {
        const _ret = qtc.KRemoteEncoding_Encoding(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn SetEncoding(self: KRemoteEncoding, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.KRemoteEncoding_SetEncoding(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KRemoteEncoding, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` callback: *const fn (self: KRemoteEncoding, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KRemoteEncoding, callback: *const fn (KRemoteEncoding, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KRemoteEncoding_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KRemoteEncoding, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    /// ` ignore_trailing_slash: bool `
    ///
    pub fn Directory2(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype, ignore_trailing_slash: bool) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory2(@ptrCast(self.ptr), @ptrCast(url.ptr), ignore_trailing_slash);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kremoteencoding.Directory2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#dtor.KRemoteEncoding)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRemoteEncoding `
    ///
    pub fn Delete(self: KRemoteEncoding) void {
        qtc.KRemoteEncoding_Delete(@ptrCast(self.ptr));
    }
};
