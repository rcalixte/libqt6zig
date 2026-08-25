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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::DownloadDescription object in C++ memory
    ///
    pub fn new() Attica__DownloadDescription {
        return .{ .ptr = qtc.Attica__DownloadDescription_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::DownloadDescription object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__DownloadDescription `
    ///
    pub fn new2(other: anytype) Attica__DownloadDescription {
        comptime _ = @TypeOf(other)._is_Attica__DownloadDescription;
        return .{ .ptr = qtc.Attica__DownloadDescription_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` other: Attica__DownloadDescription `
    ///
    pub fn operatorAssign(self: Attica__DownloadDescription, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__DownloadDescription;
        qtc.Attica__DownloadDescription_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn id(self: Attica__DownloadDescription) i32 {
        return qtc.Attica__DownloadDescription_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: Attica__DownloadDescription) i32 {
        return qtc.Attica__DownloadDescription_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasPrice` instead
    ///
    pub const HasPrice = hasPrice;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#hasPrice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn hasPrice(self: Attica__DownloadDescription) bool {
        return qtc.Attica__DownloadDescription_HasPrice(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `link` instead
    ///
    pub const Link = link;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn link(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Link(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.link: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `distributionType` instead
    ///
    pub const DistributionType = distributionType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#distributionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn distributionType(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_DistributionType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.distributionType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `priceReason` instead
    ///
    pub const PriceReason = priceReason;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#priceReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn priceReason(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PriceReason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.priceReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `priceAmount` instead
    ///
    pub const PriceAmount = priceAmount;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#priceAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn priceAmount(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PriceAmount(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.priceAmount: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn size(self: Attica__DownloadDescription) u32 {
        return qtc.Attica__DownloadDescription_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gpgFingerprint` instead
    ///
    pub const GpgFingerprint = gpgFingerprint;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#gpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gpgFingerprint(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_GpgFingerprint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.gpgFingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `gpgSignature` instead
    ///
    pub const GpgSignature = gpgSignature;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#gpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gpgSignature(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_GpgSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.gpgSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `packageName` instead
    ///
    pub const PackageName = packageName;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#packageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn packageName(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_PackageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.packageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `repository` instead
    ///
    pub const Repository = repository;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#repository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn repository(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Repository(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.repository: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__DownloadDescription_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__DownloadDescription.tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__DownloadDescription.tags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _id: i32 `
    ///
    pub fn setId(self: Attica__DownloadDescription, _id: i32) void {
        qtc.Attica__DownloadDescription_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` typeVal: downloaddescription_enums.Type `
    ///
    pub fn setType(self: Attica__DownloadDescription, typeVal: i32) void {
        qtc.Attica__DownloadDescription_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setHasPrice` instead
    ///
    pub const SetHasPrice = setHasPrice;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setHasPrice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _hasPrice: bool `
    ///
    pub fn setHasPrice(self: Attica__DownloadDescription, _hasPrice: bool) void {
        qtc.Attica__DownloadDescription_SetHasPrice(@ptrCast(self.ptr), _hasPrice);
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _category: []const u8 `
    ///
    pub fn setCategory(self: Attica__DownloadDescription, _category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = _category.len,
            .data = _category.ptr,
        };
        qtc.Attica__DownloadDescription_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__DownloadDescription, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__DownloadDescription_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setLink` instead
    ///
    pub const SetLink = setLink;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _link: []const u8 `
    ///
    pub fn setLink(self: Attica__DownloadDescription, _link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = _link.len,
            .data = _link.ptr,
        };
        qtc.Attica__DownloadDescription_SetLink(@ptrCast(self.ptr), link_str);
    }

    /// ### DEPRECATED: Use `setDistributionType` instead
    ///
    pub const SetDistributionType = setDistributionType;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setDistributionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _distributionType: []const u8 `
    ///
    pub fn setDistributionType(self: Attica__DownloadDescription, _distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = _distributionType.len,
            .data = _distributionType.ptr,
        };
        qtc.Attica__DownloadDescription_SetDistributionType(@ptrCast(self.ptr), distributionType_str);
    }

    /// ### DEPRECATED: Use `setPriceReason` instead
    ///
    pub const SetPriceReason = setPriceReason;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPriceReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _priceReason: []const u8 `
    ///
    pub fn setPriceReason(self: Attica__DownloadDescription, _priceReason: []const u8) void {
        const priceReason_str = qtc.libqt_string{
            .len = _priceReason.len,
            .data = _priceReason.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceReason(@ptrCast(self.ptr), priceReason_str);
    }

    /// ### DEPRECATED: Use `setPriceAmount` instead
    ///
    pub const SetPriceAmount = setPriceAmount;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPriceAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _priceAmount: []const u8 `
    ///
    pub fn setPriceAmount(self: Attica__DownloadDescription, _priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = _priceAmount.len,
            .data = _priceAmount.ptr,
        };
        qtc.Attica__DownloadDescription_SetPriceAmount(@ptrCast(self.ptr), priceAmount_str);
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _size: u32 `
    ///
    pub fn setSize(self: Attica__DownloadDescription, _size: u32) void {
        qtc.Attica__DownloadDescription_SetSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `setGpgFingerprint` instead
    ///
    pub const SetGpgFingerprint = setGpgFingerprint;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setGpgFingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` fingerprint: []const u8 `
    ///
    pub fn setGpgFingerprint(self: Attica__DownloadDescription, fingerprint: []const u8) void {
        const fingerprint_str = qtc.libqt_string{
            .len = fingerprint.len,
            .data = fingerprint.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgFingerprint(@ptrCast(self.ptr), fingerprint_str);
    }

    /// ### DEPRECATED: Use `setGpgSignature` instead
    ///
    pub const SetGpgSignature = setGpgSignature;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setGpgSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn setGpgSignature(self: Attica__DownloadDescription, signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.Attica__DownloadDescription_SetGpgSignature(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `setPackageName` instead
    ///
    pub const SetPackageName = setPackageName;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setPackageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _packageName: []const u8 `
    ///
    pub fn setPackageName(self: Attica__DownloadDescription, _packageName: []const u8) void {
        const packageName_str = qtc.libqt_string{
            .len = _packageName.len,
            .data = _packageName.ptr,
        };
        qtc.Attica__DownloadDescription_SetPackageName(@ptrCast(self.ptr), packageName_str);
    }

    /// ### DEPRECATED: Use `setRepository` instead
    ///
    pub const SetRepository = setRepository;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setRepository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _repository: []const u8 `
    ///
    pub fn setRepository(self: Attica__DownloadDescription, _repository: []const u8) void {
        const repository_str = qtc.libqt_string{
            .len = _repository.len,
            .data = _repository.ptr,
        };
        qtc.Attica__DownloadDescription_SetRepository(@ptrCast(self.ptr), repository_str);
    }

    /// ### DEPRECATED: Use `setTags` instead
    ///
    pub const SetTags = setTags;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tags: []const []const u8 `
    ///
    pub fn setTags(self: Attica__DownloadDescription, allocator: std.mem.Allocator, _tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, _tags.len) catch @panic("Attica__DownloadDescription.setTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (_tags, 0.._tags.len) |str_item, i|
            tags_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = _tags.len,
            .data = tags_arr.ptr,
        };
        qtc.Attica__DownloadDescription_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: Attica__DownloadDescription, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__DownloadDescription_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__DownloadDescription.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setVersion(self: Attica__DownloadDescription, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.Attica__DownloadDescription_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__DownloadDescription `
    ///
    pub fn delete(self: Attica__DownloadDescription) void {
        qtc.Attica__DownloadDescription_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-downloaddescription.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const FileDownload: i32 = 0;
        pub const LinkDownload: i32 = 1;
        pub const PackageDownload: i32 = 2;
    };
};
