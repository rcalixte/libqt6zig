const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCountrySubdivision = @import("libqt6").KCountrySubdivision;
const qlocale_enums = @import("../libqlocale.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktimezone.html)
pub const KTimeZone = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktimezone.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTimeZone,

    pub const _is_KTimeZone = {};

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn country(param1: [:0]const u8) KCountry {
        const param1_Cstring = param1.ptr;
        return .{ .ptr = qtc.KTimeZone_Country(param1_Cstring) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kcountry.html)
pub const KCountry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcountry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCountry,

    pub const _is_KCountry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCountry object in C++ memory
    ///
    pub fn new() KCountry {
        return .{ .ptr = qtc.KCountry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCountry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCountry `
    ///
    pub fn new2(param1: anytype) KCountry {
        comptime _ = @TypeOf(param1)._is_KCountry;
        return .{ .ptr = qtc.KCountry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` param1: KCountry `
    ///
    pub fn operatorAssign(self: KCountry, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCountry;
        qtc.KCountry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` other: KCountry `
    ///
    pub fn operatorEqual(self: KCountry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountry;
        return qtc.KCountry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` other: KCountry `
    ///
    pub fn operatorNotEqual(self: KCountry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountry;
        return qtc.KCountry_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    pub fn isValid(self: KCountry) bool {
        return qtc.KCountry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alpha2` instead
    ///
    pub const Alpha2 = alpha2;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#alpha2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn alpha2(self: KCountry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Alpha2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountry.alpha2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `alpha3` instead
    ///
    pub const Alpha3 = alpha3;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#alpha3)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn alpha3(self: KCountry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Alpha3(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountry.alpha3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KCountry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `emojiFlag` instead
    ///
    pub const EmojiFlag = emojiFlag;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#emojiFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn emojiFlag(self: KCountry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_EmojiFlag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountry.emojiFlag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.Country `
    ///
    pub fn country(self: KCountry) u16 {
        return qtc.KCountry_Country(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeZoneIds` instead
    ///
    pub const TimeZoneIds = timeZoneIds;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#timeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn timeZoneIds(self: KCountry, allocator: std.mem.Allocator) [][:0]const u8 {
        const _arr: qtc.libqt_list = qtc.KCountry_TimeZoneIds(@ptrCast(self.ptr));
        const _str: [*]?[*:0]const u8 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc([:0]const u8, _arr.len) catch @panic("KCountry.timeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _cstr = _str[i];
            if (_cstr) |cstr| {
                const cstr_len = std.mem.len(cstr);
                const _buf = allocator.allocSentinel(u8, cstr_len, 0) catch @panic("KCountry.timeZoneIds: Buffer allocation failed");
                @memcpy(_buf, cstr[0..cstr_len]);
                _ret[i] = _buf;
            } else {
                _ret[i] = &[_:0]u8{};
            }
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `currencyCode` instead
    ///
    pub const CurrencyCode = currencyCode;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#currencyCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currencyCode(self: KCountry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_CurrencyCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountry.currencyCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subdivisions` instead
    ///
    pub const Subdivisions = subdivisions;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#subdivisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subdivisions(self: KCountry, allocator: std.mem.Allocator) []KCountrySubdivision {
        const _arr: qtc.libqt_list = qtc.KCountry_Subdivisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCountrySubdivision, _arr.len) catch @panic("KCountry.subdivisions: Memory allocation failed");
        const _data_val: [*]QtC.KCountrySubdivision = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromAlpha2` instead
    ///
    pub const FromAlpha2 = fromAlpha2;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha2)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha2Code: []const u8 `
    ///
    pub fn fromAlpha2(alpha2Code: []const u8) KCountry {
        const alpha2Code_str = qtc.libqt_string{
            .len = alpha2Code.len,
            .data = alpha2Code.ptr,
        };
        return .{ .ptr = qtc.KCountry_FromAlpha2(alpha2Code_str) };
    }

    /// ### DEPRECATED: Use `fromAlpha22` instead
    ///
    pub const FromAlpha22 = fromAlpha22;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha2)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha2Code: [:0]const u8 `
    ///
    pub fn fromAlpha22(alpha2Code: [:0]const u8) KCountry {
        const alpha2Code_Cstring = alpha2Code.ptr;
        return .{ .ptr = qtc.KCountry_FromAlpha22(alpha2Code_Cstring) };
    }

    /// ### DEPRECATED: Use `fromAlpha3` instead
    ///
    pub const FromAlpha3 = fromAlpha3;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha3)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha3Code: []const u8 `
    ///
    pub fn fromAlpha3(alpha3Code: []const u8) KCountry {
        const alpha3Code_str = qtc.libqt_string{
            .len = alpha3Code.len,
            .data = alpha3Code.ptr,
        };
        return .{ .ptr = qtc.KCountry_FromAlpha3(alpha3Code_str) };
    }

    /// ### DEPRECATED: Use `fromAlpha32` instead
    ///
    pub const FromAlpha32 = fromAlpha32;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha3)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha3Code: [:0]const u8 `
    ///
    pub fn fromAlpha32(alpha3Code: [:0]const u8) KCountry {
        const alpha3Code_Cstring = alpha3Code.ptr;
        return .{ .ptr = qtc.KCountry_FromAlpha32(alpha3Code_Cstring) };
    }

    /// ### DEPRECATED: Use `fromLocation` instead
    ///
    pub const FromLocation = fromLocation;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn fromLocation(latitude: f32, longitude: f32) KCountry {
        return .{ .ptr = qtc.KCountry_FromLocation(@bitCast(latitude), @bitCast(longitude)) };
    }

    /// ### DEPRECATED: Use `fromQLocale` instead
    ///
    pub const FromQLocale = fromQLocale;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromQLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` _country: qlocale_enums.Country `
    ///
    pub fn fromQLocale(_country: u16) KCountry {
        return .{ .ptr = qtc.KCountry_FromQLocale(@bitCast(_country)) };
    }

    /// ### DEPRECATED: Use `fromName` instead
    ///
    pub const FromName = fromName;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn fromName(_name: []const u8) KCountry {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCountry_FromName(name_str) };
    }

    /// ### DEPRECATED: Use `allCountries` instead
    ///
    pub const AllCountries = allCountries;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#allCountries)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allCountries(allocator: std.mem.Allocator) []KCountry {
        const _arr: qtc.libqt_list = qtc.KCountry_AllCountries();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCountry, _arr.len) catch @panic("KCountry.allCountries: Memory allocation failed");
        const _data_val: [*]QtC.KCountry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#dtor.KCountry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCountry `
    ///
    pub fn delete(self: KCountry) void {
        qtc.KCountry_Delete(@ptrCast(self.ptr));
    }
};
