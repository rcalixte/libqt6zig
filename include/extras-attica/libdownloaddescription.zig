const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const downloaddescription_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html)
pub const Attica__DownloadDescription = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__DownloadDescription,

    pub const _is_Attica__DownloadDescription = {};

    /// New constructs a new Attica::DownloadDescription object.
    ///
    pub fn New() Attica__DownloadDescription {
        return .{ .ptr = qtc.Attica__DownloadDescription_new() };
    }

    /// New2 constructs a new Attica::DownloadDescription object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__DownloadDescription `
    ///
    pub fn New2(other: anytype) Attica__DownloadDescription {
        comptime _ = @TypeOf(other)._is_Attica__DownloadDescription;
        return .{ .ptr = qtc.Attica__DownloadDescription_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` other: Attica__DownloadDescription `
    ///
    pub fn OperatorAssign(self: Attica__DownloadDescription, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__DownloadDescription;
        qtc.Attica__DownloadDescription_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn Id(self: Attica__DownloadDescription) i32 {
        return qtc.Attica__DownloadDescription_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ## Returns:
    ///
    /// ` downloaddescription_enums.Type `
    ///
    pub fn Type(self: Attica__DownloadDescription) i32 {
        return qtc.Attica__DownloadDescription_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#hasPrice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn HasPrice(self: Attica__DownloadDescription) bool {
        return qtc.Attica__DownloadDescription_HasPrice(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Link(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Link(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.Link: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#distributionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DistributionType(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_DistributionType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.DistributionType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#priceReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PriceReason(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PriceReason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.PriceReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#priceAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PriceAmount(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PriceAmount(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.PriceAmount: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn Size(self: Attica__DownloadDescription) u32 {
        return qtc.Attica__DownloadDescription_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#gpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgFingerprint(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_GpgFingerprint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.GpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#gpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GpgSignature(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_GpgSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.GpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#packageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageName(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PackageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.PackageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#repository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Repository(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Repository(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.Repository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__DownloadDescription_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica__downloaddescription.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__downloaddescription.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` id: i32 `
    ///
    pub fn SetId(self: Attica__DownloadDescription, id: i32) void {
        qtc.Attica__DownloadDescription_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` typeVal: downloaddescription_enums.Type `
    ///
    pub fn SetType(self: Attica__DownloadDescription, typeVal: i32) void {
        qtc.Attica__DownloadDescription_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setHasPrice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` hasPrice: bool `
    ///
    pub fn SetHasPrice(self: Attica__DownloadDescription, hasPrice: bool) void {
        qtc.Attica__DownloadDescription_SetHasPrice(@ptrCast(self.ptr), hasPrice);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` category: []const u8 `
    ///
    pub fn SetCategory(self: Attica__DownloadDescription, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.Attica__DownloadDescription_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__DownloadDescription, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__DownloadDescription_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` link: []const u8 `
    ///
    pub fn SetLink(self: Attica__DownloadDescription, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.Attica__DownloadDescription_SetLink(@ptrCast(self.ptr), link_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setDistributionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` distributionType: []const u8 `
    ///
    pub fn SetDistributionType(self: Attica__DownloadDescription, distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = distributionType.len,
            .data = distributionType.ptr,
        };
        qtc.Attica__DownloadDescription_SetDistributionType(@ptrCast(self.ptr), distributionType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPriceReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` priceReason: []const u8 `
    ///
    pub fn SetPriceReason(self: Attica__DownloadDescription, priceReason: []const u8) void {
        const priceReason_str = qtc.libqt_string{
            .len = priceReason.len,
            .data = priceReason.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceReason(@ptrCast(self.ptr), priceReason_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPriceAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` priceAmount: []const u8 `
    ///
    pub fn SetPriceAmount(self: Attica__DownloadDescription, priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = priceAmount.len,
            .data = priceAmount.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceAmount(@ptrCast(self.ptr), priceAmount_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` size: u32 `
    ///
    pub fn SetSize(self: Attica__DownloadDescription, size: u32) void {
        qtc.Attica__DownloadDescription_SetSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setGpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` fingerprint: []const u8 `
    ///
    pub fn SetGpgFingerprint(self: Attica__DownloadDescription, fingerprint: []const u8) void {
        const fingerprint_str = qtc.libqt_string{
            .len = fingerprint.len,
            .data = fingerprint.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgFingerprint(@ptrCast(self.ptr), fingerprint_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setGpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn SetGpgSignature(self: Attica__DownloadDescription, signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgSignature(@ptrCast(self.ptr), signature_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPackageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` packageName: []const u8 `
    ///
    pub fn SetPackageName(self: Attica__DownloadDescription, packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        qtc.Attica__DownloadDescription_SetPackageName(@ptrCast(self.ptr), packageName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` repository: []const u8 `
    ///
    pub fn SetRepository(self: Attica__DownloadDescription, repository: []const u8) void {
        const repository_str = qtc.libqt_string{
            .len = repository.len,
            .data = repository.ptr,
        };
        qtc.Attica__DownloadDescription_SetRepository(@ptrCast(self.ptr), repository_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    pub fn SetTags(self: Attica__DownloadDescription, allocator: std.mem.Allocator, tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("attica__downloaddescription.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i|
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.Attica__DownloadDescription_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__downloaddescription.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: Attica__DownloadDescription, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__DownloadDescription_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn Delete(self: Attica__DownloadDescription) void {
        qtc.Attica__DownloadDescription_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const FileDownload: i32 = 0;
        pub const LinkDownload: i32 = 1;
        pub const PackageDownload: i32 = 2;
    };
};
