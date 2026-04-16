const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const kprotocolinfo_enums = @import("libkprotocolinfo.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html)
pub const KProtocolManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProtocolManager,

    pub const _is_KProtocolManager = {};

    /// New constructs a new KProtocolManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn New(other: anytype) KProtocolManager {
        comptime _ = @TypeOf(other)._is_KProtocolManager;
        return .{ .ptr = qtc.KProtocolManager_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KProtocolManager object and invalidates the source KProtocolManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn New2(other: anytype) KProtocolManager {
        comptime _ = @TypeOf(other)._is_KProtocolManager;
        return .{ .ptr = qtc.KProtocolManager_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KProtocolManager `
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn CopyAssign(self: KProtocolManager, other: KProtocolManager) void {
        qtc.KProtocolManager_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KProtocolManager `
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn MoveAssign(self: KProtocolManager, other: KProtocolManager) void {
        qtc.KProtocolManager_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` url: QUrl `
    ///
    pub fn SupportsListing(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsListing(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsReading(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsReading(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsWriting(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsWriting(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsMakeDir(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsMakeDir(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsDeleting(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsDeleting(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsLinking)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsLinking(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsLinking(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsMoving(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsMoving(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsOpening)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsOpening(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsOpening(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsTruncating(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsTruncating(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CanCopyFromFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanCopyFromFile(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CanCopyToFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanCopyToFile(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CanRenameFromFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanRenameFromFile(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CanRenameToFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanRenameToFile(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CanDeleteRecursive(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanDeleteRecursive(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn DefaultMimetype(allocator: std.mem.Allocator, url: anytype) []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _str = qtc.KProtocolManager_DefaultMimetype(@ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.DefaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#inputType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn InputType(url: anytype) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_InputType(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#outputType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn OutputType(url: anytype) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_OutputType(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#listing)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn Listing(allocator: std.mem.Allocator, url: anytype) []const []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KProtocolManager_Listing(@ptrCast(url.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` url: QUrl `
    ///
    pub fn IsSourceProtocol(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_IsSourceProtocol(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn ProtocolForArchiveMimetype(allocator: std.mem.Allocator, mimeType: []const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn CharsetFor(allocator: std.mem.Allocator, url: anytype) []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _str = qtc.KProtocolManager_CharsetFor(@ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.CharsetFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn SupportsPermissions(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsPermissions(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KProtocolManager `
    ///
    pub fn Delete(self: KProtocolManager) void {
        qtc.KProtocolManager_Delete(@ptrCast(self.ptr));
    }
};
