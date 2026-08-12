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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KProtocolManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn new(other: anytype) KProtocolManager {
        comptime _ = @TypeOf(other)._is_KProtocolManager;
        return .{ .ptr = qtc.KProtocolManager_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KProtocolManager object and invalidate the source KProtocolManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn new2(other: anytype) KProtocolManager {
        comptime _ = @TypeOf(other)._is_KProtocolManager;
        return .{ .ptr = qtc.KProtocolManager_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KProtocolManager `
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn copyAssign(self: KProtocolManager, other: KProtocolManager) void {
        qtc.KProtocolManager_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KProtocolManager `
    ///
    /// ` other: KProtocolManager `
    ///
    pub fn moveAssign(self: KProtocolManager, other: KProtocolManager) void {
        qtc.KProtocolManager_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `readTimeout` instead
    ///
    pub const ReadTimeout = readTimeout;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#readTimeout)
    ///
    pub fn readTimeout() i32 {
        return qtc.KProtocolManager_ReadTimeout();
    }

    /// ### DEPRECATED: Use `connectTimeout` instead
    ///
    pub const ConnectTimeout = connectTimeout;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#connectTimeout)
    ///
    pub fn connectTimeout() i32 {
        return qtc.KProtocolManager_ConnectTimeout();
    }

    /// ### DEPRECATED: Use `proxyConnectTimeout` instead
    ///
    pub const ProxyConnectTimeout = proxyConnectTimeout;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#proxyConnectTimeout)
    ///
    pub fn proxyConnectTimeout() i32 {
        return qtc.KProtocolManager_ProxyConnectTimeout();
    }

    /// ### DEPRECATED: Use `responseTimeout` instead
    ///
    pub const ResponseTimeout = responseTimeout;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#responseTimeout)
    ///
    pub fn responseTimeout() i32 {
        return qtc.KProtocolManager_ResponseTimeout();
    }

    /// ### DEPRECATED: Use `autoResume` instead
    ///
    pub const AutoResume = autoResume;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#autoResume)
    ///
    pub fn autoResume() bool {
        return qtc.KProtocolManager_AutoResume();
    }

    /// ### DEPRECATED: Use `markPartial` instead
    ///
    pub const MarkPartial = markPartial;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#markPartial)
    ///
    pub fn markPartial() bool {
        return qtc.KProtocolManager_MarkPartial();
    }

    /// ### DEPRECATED: Use `minimumKeepSize` instead
    ///
    pub const MinimumKeepSize = minimumKeepSize;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#minimumKeepSize)
    ///
    pub fn minimumKeepSize() i32 {
        return qtc.KProtocolManager_MinimumKeepSize();
    }

    /// ### DEPRECATED: Use `supportsListing` instead
    ///
    pub const SupportsListing = supportsListing;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsListing(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsListing(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsReading` instead
    ///
    pub const SupportsReading = supportsReading;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsReading)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsReading(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsReading(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsWriting` instead
    ///
    pub const SupportsWriting = supportsWriting;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsWriting(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsWriting(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsMakeDir` instead
    ///
    pub const SupportsMakeDir = supportsMakeDir;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsMakeDir(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsMakeDir(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsDeleting` instead
    ///
    pub const SupportsDeleting = supportsDeleting;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsDeleting(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsDeleting(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsLinking` instead
    ///
    pub const SupportsLinking = supportsLinking;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsLinking)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsLinking(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsLinking(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsMoving` instead
    ///
    pub const SupportsMoving = supportsMoving;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMoving)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsMoving(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsMoving(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsOpening` instead
    ///
    pub const SupportsOpening = supportsOpening;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsOpening)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsOpening(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsOpening(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `supportsTruncating` instead
    ///
    pub const SupportsTruncating = supportsTruncating;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsTruncating(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsTruncating(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `canCopyFromFile` instead
    ///
    pub const CanCopyFromFile = canCopyFromFile;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn canCopyFromFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanCopyFromFile(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `canCopyToFile` instead
    ///
    pub const CanCopyToFile = canCopyToFile;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn canCopyToFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanCopyToFile(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `canRenameFromFile` instead
    ///
    pub const CanRenameFromFile = canRenameFromFile;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn canRenameFromFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanRenameFromFile(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `canRenameToFile` instead
    ///
    pub const CanRenameToFile = canRenameToFile;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn canRenameToFile(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanRenameToFile(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `canDeleteRecursive` instead
    ///
    pub const CanDeleteRecursive = canDeleteRecursive;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn canDeleteRecursive(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_CanDeleteRecursive(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `defaultMimetype` instead
    ///
    pub const DefaultMimetype = defaultMimetype;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn defaultMimetype(allocator: std.mem.Allocator, url: anytype) []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _str = qtc.KProtocolManager_DefaultMimetype(@ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolManager.defaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inputType` instead
    ///
    pub const InputType = inputType;

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
    pub fn inputType(url: anytype) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_InputType(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `outputType` instead
    ///
    pub const OutputType = outputType;

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
    pub fn outputType(url: anytype) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_OutputType(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `listing` instead
    ///
    pub const Listing = listing;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#listing)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn listing(allocator: std.mem.Allocator, url: anytype) []const []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KProtocolManager_Listing(@ptrCast(url.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProtocolManager.listing: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProtocolManager.listing: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isSourceProtocol` instead
    ///
    pub const IsSourceProtocol = isSourceProtocol;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#isSourceProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn isSourceProtocol(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_IsSourceProtocol(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `protocolForArchiveMimetype` instead
    ///
    pub const ProtocolForArchiveMimetype = protocolForArchiveMimetype;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn protocolForArchiveMimetype(allocator: std.mem.Allocator, mimeType: []const u8) []const u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        var _str = qtc.KProtocolManager_ProtocolForArchiveMimetype(mimeType_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolManager.protocolForArchiveMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `reparseConfiguration` instead
    ///
    pub const ReparseConfiguration = reparseConfiguration;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#reparseConfiguration)
    ///
    pub fn reparseConfiguration() void {
        qtc.KProtocolManager_ReparseConfiguration();
    }

    /// ### DEPRECATED: Use `charsetFor` instead
    ///
    pub const CharsetFor = charsetFor;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#charsetFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn charsetFor(allocator: std.mem.Allocator, url: anytype) []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _str = qtc.KProtocolManager_CharsetFor(@ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolManager.charsetFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsPermissions` instead
    ///
    pub const SupportsPermissions = supportsPermissions;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn supportsPermissions(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolManager_SupportsPermissions(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KProtocolManager `
    ///
    pub fn delete(self: KProtocolManager) void {
        qtc.KProtocolManager_Delete(@ptrCast(self.ptr));
    }
};
