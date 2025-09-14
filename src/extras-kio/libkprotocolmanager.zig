const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kprotocolinfo_enums = @import("libkprotocolinfo.zig").enums;
const std = @import("std");

/// https://api.kde.org/kprotocolmanager.html
pub const kprotocolmanager = struct {
    /// New constructs a new KProtocolManager object.
    ///
    /// ``` other: QtC.KProtocolManager ```
    pub fn New(other: ?*anyopaque) QtC.KProtocolManager {
        return qtc.KProtocolManager_new(@ptrCast(other));
    }

    /// New2 constructs a new KProtocolManager object and invalidates the source KProtocolManager object.
    ///
    /// ``` other: QtC.KProtocolManager ```
    pub fn New2(other: ?*anyopaque) QtC.KProtocolManager {
        return qtc.KProtocolManager_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KProtocolManager, other: QtC.KProtocolManager ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KProtocolManager_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KProtocolManager, other: QtC.KProtocolManager ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KProtocolManager_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#readTimeout)
    ///
    ///
    pub fn ReadTimeout() i32 {
        return qtc.KProtocolManager_ReadTimeout();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#connectTimeout)
    ///
    ///
    pub fn ConnectTimeout() i32 {
        return qtc.KProtocolManager_ConnectTimeout();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#proxyConnectTimeout)
    ///
    ///
    pub fn ProxyConnectTimeout() i32 {
        return qtc.KProtocolManager_ProxyConnectTimeout();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#responseTimeout)
    ///
    ///
    pub fn ResponseTimeout() i32 {
        return qtc.KProtocolManager_ResponseTimeout();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#autoResume)
    ///
    ///
    pub fn AutoResume() bool {
        return qtc.KProtocolManager_AutoResume();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#markPartial)
    ///
    ///
    pub fn MarkPartial() bool {
        return qtc.KProtocolManager_MarkPartial();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#minimumKeepSize)
    ///
    ///
    pub fn MinimumKeepSize() i32 {
        return qtc.KProtocolManager_MinimumKeepSize();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsListing)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsListing(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsListing(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsReading)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsReading(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsReading(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsWriting)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsWriting(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsWriting(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsMakeDir(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsMakeDir(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsDeleting(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsDeleting(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsLinking)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsLinking(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsLinking(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsMoving)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsMoving(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsMoving(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsOpening)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsOpening(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsOpening(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsTruncating(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsTruncating(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CanCopyFromFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanCopyFromFile(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CanCopyToFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanCopyToFile(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CanRenameFromFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanRenameFromFile(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CanRenameToFile(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanRenameToFile(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CanDeleteRecursive(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_CanDeleteRecursive(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
    ///
    /// ``` url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn DefaultMimetype(url: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KProtocolManager_DefaultMimetype(@ptrCast(url));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.DefaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#inputType)
    ///
    /// ``` url: QtC.QUrl ```
    ///
    /// Returns: ``` kprotocolinfo_enums.Type ```
    pub fn InputType(url: ?*anyopaque) i32 {
        return qtc.KProtocolManager_InputType(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#outputType)
    ///
    /// ``` url: QtC.QUrl ```
    ///
    /// Returns: ``` kprotocolinfo_enums.Type ```
    pub fn OutputType(url: ?*anyopaque) i32 {
        return qtc.KProtocolManager_OutputType(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#listing)
    ///
    /// ``` url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Listing(url: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KProtocolManager_Listing(@ptrCast(url));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#isSourceProtocol)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn IsSourceProtocol(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_IsSourceProtocol(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
    ///
    /// ``` mimeType: []const u8, allocator: std.mem.Allocator ```
    pub fn ProtocolForArchiveMimetype(mimeType: []const u8, allocator: std.mem.Allocator) []const u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _str = qtc.KProtocolManager_ProtocolForArchiveMimetype(mimeType_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.ProtocolForArchiveMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#reparseConfiguration)
    ///
    ///
    pub fn ReparseConfiguration() void {
        qtc.KProtocolManager_ReparseConfiguration();
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#charsetFor)
    ///
    /// ``` url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn CharsetFor(url: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KProtocolManager_CharsetFor(@ptrCast(url));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolmanager.CharsetFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn SupportsPermissions(url: ?*anyopaque) bool {
        return qtc.KProtocolManager_SupportsPermissions(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KProtocolManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProtocolManager_Delete(@ptrCast(self));
    }
};
