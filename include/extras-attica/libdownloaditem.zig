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

    /// New constructs a new Attica::DownloadItem object.
    ///
    pub fn New() Attica__DownloadItem {
        return .{ .ptr = qtc.Attica__DownloadItem_new() };
    }

    /// New2 constructs a new Attica::DownloadItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__DownloadItem `
    ///
    pub fn New2(other: anytype) Attica__DownloadItem {
        comptime _ = @TypeOf(other)._is_Attica__DownloadItem;
        return .{ .ptr = qtc.Attica__DownloadItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` other: Attica__DownloadItem `
    ///
    pub fn OperatorAssign(self: Attica__DownloadItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__DownloadItem;
        qtc.Attica__DownloadItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: Attica__DownloadItem, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__DownloadItem_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    pub fn Url(self: Attica__DownloadItem) QUrl {
        return .{ .ptr = qtc.Attica__DownloadItem_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetMimeType(self: Attica__DownloadItem, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.Attica__DownloadItem_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaditem.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` packageName: []const u8 `
    ///
    pub fn SetPackageName(self: Attica__DownloadItem, packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageName(@ptrCast(self.ptr), packageName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageName(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaditem.PackageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` packageRepository: []const u8 `
    ///
    pub fn SetPackageRepository(self: Attica__DownloadItem, packageRepository: []const u8) void {
        const packageRepository_str = qtc.libqt_string{
            .len = packageRepository.len,
            .data = packageRepository.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageRepository(@ptrCast(self.ptr), packageRepository_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageRepository(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageRepository(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaditem.PackageRepository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` gpgFingerprint: []const u8 `
    ///
    pub fn SetGpgFingerprint(self: Attica__DownloadItem, gpgFingerprint: []const u8) void {
        const gpgFingerprint_str = qtc.libqt_string{
            .len = gpgFingerprint.len,
            .data = gpgFingerprint.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgFingerprint(@ptrCast(self.ptr), gpgFingerprint_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgFingerprint(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgFingerprint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaditem.GpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` gpgSignature: []const u8 `
    ///
    pub fn SetGpgSignature(self: Attica__DownloadItem, gpgSignature: []const u8) void {
        const gpgSignature_str = qtc.libqt_string{
            .len = gpgSignature.len,
            .data = gpgSignature.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgSignature(@ptrCast(self.ptr), gpgSignature_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgSignature(self: Attica__DownloadItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaditem.GpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadItem `
    ///
    /// ` typeVal: downloaddescription_enums.Type `
    ///
    pub fn SetType(self: Attica__DownloadItem, typeVal: i32) void {
        qtc.Attica__DownloadItem_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn Type(self: Attica__DownloadItem) i32 {
        return qtc.Attica__DownloadItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__DownloadItem `
    ///
    pub fn Delete(self: Attica__DownloadItem) void {
        qtc.Attica__DownloadItem_Delete(@ptrCast(self.ptr));
    }
};
