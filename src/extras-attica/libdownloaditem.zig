const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const downloaddescription_enums = @import("libdownloaddescription.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html)
pub const attica__downloaditem = struct {
    /// New constructs a new Attica::DownloadItem object.
    ///
    pub fn New() QtC.Attica__DownloadItem {
        return qtc.Attica__DownloadItem_new();
    }

    /// New2 constructs a new Attica::DownloadItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__DownloadItem `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__DownloadItem {
        return qtc.Attica__DownloadItem_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` other: QtC.Attica__DownloadItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__DownloadItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__DownloadItem_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__DownloadItem_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetMimeType(self: ?*anyopaque, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.Attica__DownloadItem_SetMimeType(@ptrCast(self), mimeType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaditem.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` packageName: []const u8 `
    ///
    pub fn SetPackageName(self: ?*anyopaque, packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageName(@ptrCast(self), packageName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaditem.PackageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setPackageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` packageRepository: []const u8 `
    ///
    pub fn SetPackageRepository(self: ?*anyopaque, packageRepository: []const u8) void {
        const packageRepository_str = qtc.libqt_string{
            .len = packageRepository.len,
            .data = packageRepository.ptr,
        };
        qtc.Attica__DownloadItem_SetPackageRepository(@ptrCast(self), packageRepository_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#packageRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageRepository(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_PackageRepository(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaditem.PackageRepository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` gpgFingerprint: []const u8 `
    ///
    pub fn SetGpgFingerprint(self: ?*anyopaque, gpgFingerprint: []const u8) void {
        const gpgFingerprint_str = qtc.libqt_string{
            .len = gpgFingerprint.len,
            .data = gpgFingerprint.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgFingerprint(@ptrCast(self), gpgFingerprint_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgFingerprint(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgFingerprint(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaditem.GpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setGpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` gpgSignature: []const u8 `
    ///
    pub fn SetGpgSignature(self: ?*anyopaque, gpgSignature: []const u8) void {
        const gpgSignature_str = qtc.libqt_string{
            .len = gpgSignature.len,
            .data = gpgSignature.ptr,
        };
        qtc.Attica__DownloadItem_SetGpgSignature(@ptrCast(self), gpgSignature_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#gpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgSignature(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadItem_GpgSignature(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaditem.GpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ` typeVal: downloaddescription_enums.Type `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Attica__DownloadItem_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaditem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    /// ## Returns:
    ///
    /// ` downloaddescription_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Attica__DownloadItem_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__DownloadItem `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__DownloadItem_Delete(@ptrCast(self));
    }
};
