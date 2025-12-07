const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kprotocolinfo_enums = @import("libkprotocolinfo.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html)
pub const kprotocolmanager = struct {
    /// New constructs a new KProtocolManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KProtocolManager `
    ///
    pub fn New(other: ?*anyopaque) QtC.KProtocolManager {
        return qtc.KProtocolManager_new(@ptrCast(other));
    }

    /// New2 constructs a new KProtocolManager object and invalidates the source KProtocolManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KProtocolManager `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KProtocolManager {
        return qtc.KProtocolManager_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProtocolManager `
    ///
    /// ` other: QtC.KProtocolManager `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KProtocolManager_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProtocolManager `
    ///
    /// ` other: QtC.KProtocolManager `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KProtocolManager_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#readTimeout)
    ///
    pub fn ReadTimeout() i32 {
        return qtc.KProtocolManager_ReadTimeout();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#connectTimeout)
    ///
    pub fn ConnectTimeout() i32 {
        return qtc.KProtocolManager_ConnectTimeout();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#proxyConnectTimeout)
    ///
    pub fn ProxyConnectTimeout() i32 {
        return qtc.KProtocolManager_ProxyConnectTimeout();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#responseTimeout)
    ///
    pub fn ResponseTimeout() i32 {
        return qtc.KProtocolManager_ResponseTimeout();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#autoResume)
    ///
    pub fn AutoResume() bool {
        return qtc.KProtocolManager_AutoResume();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#markPartial)
    ///
    pub fn MarkPartial() bool {
        return qtc.KProtocolManager_MarkPartial();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#minimumKeepSize)
    ///
    pub fn MinimumKeepSize() i32 {
        return qtc.KProtocolManager_MinimumKeepSize();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsListing(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsListing(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsReading(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsReading(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsWriting(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsWriting(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsMakeDir(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsMakeDir(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsDeleting(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsDeleting(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsLinking)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsLinking(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsLinking(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsMoving(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsMoving(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsOpening)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsOpening(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsOpening(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsTruncating(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsTruncating(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn CanCopyFromFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanCopyFromFile(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn CanCopyToFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanCopyToFile(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn CanRenameFromFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanRenameFromFile(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn CanRenameToFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanRenameToFile(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn CanDeleteRecursive(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanDeleteRecursive(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultMimetype(url: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProtocolManager_DefaultMimetype(@ptrCast(url));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.DefaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#inputType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn InputType(url: ?*anyopaque) i32 {
        return qtc.KProtocolManager_InputType(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#outputType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn OutputType(url: ?*anyopaque) i32 {
        return qtc.KProtocolManager_OutputType(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#listing)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Listing(url: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KProtocolManager_Listing(@ptrCast(url));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprotocolmanager.Listing: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprotocolmanager.Listing: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#isSourceProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn IsSourceProtocol(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_IsSourceProtocol(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolForArchiveMimetype(mimeType: []const u8, allocator: std.mem.Allocator) []const u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        var _str = qtc.KProtocolManager_ProtocolForArchiveMimetype(mimeType_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.ProtocolForArchiveMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#reparseConfiguration)
    ///
    pub fn ReparseConfiguration() void {
        qtc.KProtocolManager_ReparseConfiguration();
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#charsetFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CharsetFor(url: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KProtocolManager_CharsetFor(@ptrCast(url));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.CharsetFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SupportsPermissions(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsPermissions(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KProtocolManager `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProtocolManager_Delete(@ptrCast(self));
    }
};
