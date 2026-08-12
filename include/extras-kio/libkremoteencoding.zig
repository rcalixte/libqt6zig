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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KRemoteEncoding object in C++ memory
    ///
    pub fn new() KRemoteEncoding {
        return .{ .ptr = qtc.KRemoteEncoding_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KRemoteEncoding object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn new2(name: [:0]const u8) KRemoteEncoding {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.KRemoteEncoding_new2(name_Cstring) };
    }

    /// ### DEPRECATED: Use `decode` instead
    ///
    pub const Decode = decode;

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
    pub fn decode(self: KRemoteEncoding, allocator: std.mem.Allocator, name: []u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KRemoteEncoding_Decode(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRemoteEncoding.decode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encode` instead
    ///
    pub const Encode = encode;

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
    pub fn encode(self: KRemoteEncoding, allocator: std.mem.Allocator, name: []const u8) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KRemoteEncoding.encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encode2` instead
    ///
    pub const Encode2 = encode2;

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
    pub fn encode2(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Encode2(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KRemoteEncoding.encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `directory` instead
    ///
    pub const Directory = directory;

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
    pub fn directory(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KRemoteEncoding.directory: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

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
    pub fn fileName(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_FileName(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KRemoteEncoding.fileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encoding` instead
    ///
    pub const Encoding = encoding;

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    pub fn encoding(self: KRemoteEncoding) [:0]const u8 {
        const _ret = qtc.KRemoteEncoding_Encoding(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `setEncoding` instead
    ///
    pub const SetEncoding = setEncoding;

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRemoteEncoding `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn setEncoding(self: KRemoteEncoding, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.KRemoteEncoding_SetEncoding(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KRemoteEncoding, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KRemoteEncoding, callback: *const fn (KRemoteEncoding, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KRemoteEncoding_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KRemoteEncoding, id: i32, data: ?*anyopaque) void {
        qtc.KRemoteEncoding_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `directory2` instead
    ///
    pub const Directory2 = directory2;

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
    pub fn directory2(self: KRemoteEncoding, allocator: std.mem.Allocator, url: anytype, ignore_trailing_slash: bool) []u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _bytearray: qtc.libqt_string = qtc.KRemoteEncoding_Directory2(@ptrCast(self.ptr), @ptrCast(url.ptr), ignore_trailing_slash);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KRemoteEncoding.directory2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kremoteencoding.html#dtor.KRemoteEncoding)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KRemoteEncoding `
    ///
    pub fn delete(self: KRemoteEncoding) void {
        qtc.KRemoteEncoding_Delete(@ptrCast(self.ptr));
    }
};
