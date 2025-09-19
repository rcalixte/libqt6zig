const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const downloaddescription_enums = enums;
const std = @import("std");

/// https://api.kde.org/attica-downloaddescription.html
pub const attica__downloaddescription = struct {
    /// New constructs a new Attica::DownloadDescription object.
    ///
    ///
    pub fn New() QtC.Attica__DownloadDescription {
        return qtc.Attica__DownloadDescription_new();
    }

    /// New2 constructs a new Attica::DownloadDescription object.
    ///
    /// ``` other: QtC.Attica__DownloadDescription ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__DownloadDescription {
        return qtc.Attica__DownloadDescription_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, other: QtC.Attica__DownloadDescription ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__DownloadDescription_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#id)
    ///
    /// ``` self: QtC.Attica__DownloadDescription ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Attica__DownloadDescription_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#type)
    ///
    /// ``` self: QtC.Attica__DownloadDescription ```
    ///
    /// Returns: ``` downloaddescription_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Attica__DownloadDescription_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#hasPrice)
    ///
    /// ``` self: QtC.Attica__DownloadDescription ```
    pub fn HasPrice(self: ?*anyopaque) bool {
        return qtc.Attica__DownloadDescription_HasPrice(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#category)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Category(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_Category(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#name)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#link)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Link(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_Link(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.Link: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#distributionType)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn DistributionType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_DistributionType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.DistributionType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#priceReason)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn PriceReason(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_PriceReason(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.PriceReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#priceAmount)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn PriceAmount(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_PriceAmount(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.PriceAmount: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#size)
    ///
    /// ``` self: QtC.Attica__DownloadDescription ```
    pub fn Size(self: ?*anyopaque) u32 {
        return qtc.Attica__DownloadDescription_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#gpgFingerprint)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn GpgFingerprint(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_GpgFingerprint(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.GpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#gpgSignature)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn GpgSignature(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_GpgSignature(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.GpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#packageName)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn PackageName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_PackageName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.PackageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#repository)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Repository(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_Repository(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.Repository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#tags)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__DownloadDescription_Tags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::downloaddescription.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::downloaddescription.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setId)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, id: i32 ```
    pub fn SetId(self: ?*anyopaque, id: i32) void {
        qtc.Attica__DownloadDescription_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setType)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, typeVal: downloaddescription_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Attica__DownloadDescription_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setHasPrice)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, hasPrice: bool ```
    pub fn SetHasPrice(self: ?*anyopaque, hasPrice: bool) void {
        qtc.Attica__DownloadDescription_SetHasPrice(@ptrCast(self), hasPrice);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setCategory)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, category: []const u8 ```
    pub fn SetCategory(self: ?*anyopaque, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.Attica__DownloadDescription_SetCategory(@ptrCast(self), category_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setName)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__DownloadDescription_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setLink)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, link: []const u8 ```
    pub fn SetLink(self: ?*anyopaque, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.Attica__DownloadDescription_SetLink(@ptrCast(self), link_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setDistributionType)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, distributionType: []const u8 ```
    pub fn SetDistributionType(self: ?*anyopaque, distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = distributionType.len,
            .data = distributionType.ptr,
        };
        qtc.Attica__DownloadDescription_SetDistributionType(@ptrCast(self), distributionType_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPriceReason)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, priceReason: []const u8 ```
    pub fn SetPriceReason(self: ?*anyopaque, priceReason: []const u8) void {
        const priceReason_str = qtc.libqt_string{
            .len = priceReason.len,
            .data = priceReason.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceReason(@ptrCast(self), priceReason_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPriceAmount)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, priceAmount: []const u8 ```
    pub fn SetPriceAmount(self: ?*anyopaque, priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = priceAmount.len,
            .data = priceAmount.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceAmount(@ptrCast(self), priceAmount_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setSize)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, size: u32 ```
    pub fn SetSize(self: ?*anyopaque, size: u32) void {
        qtc.Attica__DownloadDescription_SetSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setGpgFingerprint)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, fingerprint: []const u8 ```
    pub fn SetGpgFingerprint(self: ?*anyopaque, fingerprint: []const u8) void {
        const fingerprint_str = qtc.libqt_string{
            .len = fingerprint.len,
            .data = fingerprint.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgFingerprint(@ptrCast(self), fingerprint_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setGpgSignature)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, signature: []const u8 ```
    pub fn SetGpgSignature(self: ?*anyopaque, signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgSignature(@ptrCast(self), signature_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPackageName)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, packageName: []const u8 ```
    pub fn SetPackageName(self: ?*anyopaque, packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        qtc.Attica__DownloadDescription_SetPackageName(@ptrCast(self), packageName_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setRepository)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, repository: []const u8 ```
    pub fn SetRepository(self: ?*anyopaque, repository: []const u8) void {
        const repository_str = qtc.libqt_string{
            .len = repository.len,
            .data = repository.ptr,
        };
        qtc.Attica__DownloadDescription_SetRepository(@ptrCast(self), repository_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setTags)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, tags: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetTags(self: ?*anyopaque, tags: [][]const u8, allocator: std.mem.Allocator) void {
        var tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("attica::downloaddescription.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i| {
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.Attica__DownloadDescription_SetTags(@ptrCast(self), tags_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#version)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__DownloadDescription_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::downloaddescription.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setVersion)
    ///
    /// ``` self: QtC.Attica__DownloadDescription, version: []const u8 ```
    pub fn SetVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.Attica__DownloadDescription_SetVersion(@ptrCast(self), version_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__DownloadDescription ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__DownloadDescription_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-downloaddescription.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const FileDownload: i32 = 0;
        pub const LinkDownload: i32 = 1;
        pub const PackageDownload: i32 = 2;
    };
};
