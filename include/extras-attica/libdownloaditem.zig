const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const downloaddescription_enums = @import("libdownloaddescription.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html)
pub const Attica__DownloadItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__DownloadItem,

    pub const _is_Attica__DownloadItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::DownloadItem object in C++ memory
    ///
    pub fn new() Attica__DownloadItem {
        return .{ .ptr = qtc.Attica__DownloadItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::DownloadItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__DownloadItem `
    ///
    pub fn new2(other: anytype) Attica__DownloadItem {
        comptime _ = @TypeOf(other)._is_Attica__DownloadItem;
        return .{ .ptr = qtc.Attica__DownloadItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` other: Attica__DownloadItem `
    ///
    pub fn operatorAssign(self: Attica__DownloadItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__DownloadItem;
        qtc.Attica__DownloadItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: Attica__DownloadItem, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.Attica__DownloadItem_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    pub fn url(self: Attica__DownloadItem) QUrl {
        return .{ .ptr = qtc.Attica__DownloadItem_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMimeType` instead
    ///
    pub const SetMimeType = setMimeType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _mimeType: []const u8 `
    ///
    pub fn setMimeType(self: Attica__DownloadItem, _mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = _mimeType.len,
            .data = _mimeType.ptr,
        };
        qtc.Attica__DownloadItem_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadItem.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPackageName` instead
    ///
    pub const SetPackageName = setPackageName;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _packageName: []const u8 `
    ///
    pub fn setPackageName(self: Attica__DownloadItem, _packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = _packageName.len,
            .data = _packageName.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageName(@ptrCast(self.ptr), packageName_str);
    }

    /// ### DEPRECATED: Use `packageName` instead
    ///
    pub const PackageName = packageName;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn packageName(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadItem.packageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPackageRepository` instead
    ///
    pub const SetPackageRepository = setPackageRepository;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _packageRepository: []const u8 `
    ///
    pub fn setPackageRepository(self: Attica__DownloadItem, _packageRepository: []const u8) void {
        const packageRepository_str = qtc.libqt_string{
            .len = _packageRepository.len,
            .data = _packageRepository.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageRepository(@ptrCast(self.ptr), packageRepository_str);
    }

    /// ### DEPRECATED: Use `packageRepository` instead
    ///
    pub const PackageRepository = packageRepository;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn packageRepository(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageRepository(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadItem.packageRepository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGpgFingerprint` instead
    ///
    pub const SetGpgFingerprint = setGpgFingerprint;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _gpgFingerprint: []const u8 `
    ///
    pub fn setGpgFingerprint(self: Attica__DownloadItem, _gpgFingerprint: []const u8) void {
        const gpgFingerprint_str = qtc.libqt_string{
            .len = _gpgFingerprint.len,
            .data = _gpgFingerprint.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgFingerprint(@ptrCast(self.ptr), gpgFingerprint_str);
    }

    /// ### DEPRECATED: Use `gpgFingerprint` instead
    ///
    pub const GpgFingerprint = gpgFingerprint;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gpgFingerprint(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgFingerprint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadItem.gpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGpgSignature` instead
    ///
    pub const SetGpgSignature = setGpgSignature;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` _gpgSignature: []const u8 `
    ///
    pub fn setGpgSignature(self: Attica__DownloadItem, _gpgSignature: []const u8) void {
        const gpgSignature_str = qtc.libqt_string{
            .len = _gpgSignature.len,
            .data = _gpgSignature.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgSignature(@ptrCast(self.ptr), gpgSignature_str);
    }

    /// ### DEPRECATED: Use `gpgSignature` instead
    ///
    pub const GpgSignature = gpgSignature;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gpgSignature(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadItem.gpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` typeVal: downloaddescription_enums.Type `
    ///
    pub fn setType(self: Attica__DownloadItem, typeVal: i32) void {
        qtc.Attica__DownloadItem_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ## Returns:
    ///
    /// ` downloaddescription_enums.Type `
    ///
    pub fn type0(self: Attica__DownloadItem) i32 {
        return qtc.Attica__DownloadItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__DownloadItem `
    ///
    pub fn delete(self: Attica__DownloadItem) void {
        qtc.Attica__DownloadItem_Delete(@ptrCast(self.ptr));
    }
};
