const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocale_enums = @import("../libqlocale.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktimezone.html)
pub const ktimezone = struct {
    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Country(param1: [:0]const u8) QtC.KCountry {
        const param1_Cstring = param1.ptr;
        return qtc.KTimeZone_Country(param1_Cstring);
    }
};

/// ### [Upstream resources](https://api.kde.org/kcountry.html)
pub const kcountry = struct {
    /// New constructs a new KCountry object.
    ///
    pub fn New() QtC.KCountry {
        return qtc.KCountry_new();
    }

    /// New2 constructs a new KCountry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KCountry `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KCountry {
        return qtc.KCountry_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` param1: QtC.KCountry `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCountry_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` other: QtC.KCountry `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KCountry_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` other: QtC.KCountry `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KCountry_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KCountry_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#alpha2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Alpha2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Alpha2(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountry.Alpha2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#alpha3)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Alpha3(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Alpha3(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountry.Alpha3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#emojiFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmojiFlag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_EmojiFlag(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountry.EmojiFlag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.Country `
    ///
    pub fn Country(self: ?*anyopaque) u16 {
        return qtc.KCountry_Country(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#timeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeZoneIds(self: ?*anyopaque, allocator: std.mem.Allocator) [][:0]const u8 {
        const _arr: qtc.libqt_list = qtc.KCountry_TimeZoneIds(@ptrCast(self));
        const _str: [*]?[*:0]const u8 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc([:0]const u8, _arr.len) catch @panic("kcountry.TimeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _cstr = _str[i];
            if (_cstr) |cstr| {
                const cstr_len = std.mem.len(cstr);
                const _buf = allocator.allocSentinel(u8, cstr_len, 0) catch @panic("kcountry.TimeZoneIds: Buffer allocation failed");
                @memcpy(_buf, cstr[0..cstr_len]);
                _ret[i] = _buf;
            } else {
                _ret[i] = &[_:0]u8{};
            }
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#currencyCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrencyCode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountry_CurrencyCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountry.CurrencyCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#subdivisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subdivisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KCountrySubdivision {
        const _arr: qtc.libqt_list = qtc.KCountry_Subdivisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KCountrySubdivision, _arr.len) catch @panic("kcountry.Subdivisions: Memory allocation failed");
        const _data: [*]QtC.KCountrySubdivision = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha2)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha2Code: [:0]const u8 `
    ///
    pub fn FromAlpha22(alpha2Code: [:0]const u8) QtC.KCountry {
        const alpha2Code_Cstring = alpha2Code.ptr;
        return qtc.KCountry_FromAlpha22(alpha2Code_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha3)
    ///
    /// ## Parameter(s):
    ///
    /// ` alpha3Code: [:0]const u8 `
    ///
    pub fn FromAlpha32(alpha3Code: [:0]const u8) QtC.KCountry {
        const alpha3Code_Cstring = alpha3Code.ptr;
        return qtc.KCountry_FromAlpha32(alpha3Code_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn FromLocation(latitude: f32, longitude: f32) QtC.KCountry {
        return qtc.KCountry_FromLocation(@floatCast(latitude), @floatCast(longitude));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#fromQLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` country: qlocale_enums.Country `
    ///
    pub fn FromQLocale(country: u16) QtC.KCountry {
        return qtc.KCountry_FromQLocale(@intCast(country));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#allCountries)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllCountries(allocator: std.mem.Allocator) []QtC.KCountry {
        const _arr: qtc.libqt_list = qtc.KCountry_AllCountries();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KCountry, _arr.len) catch @panic("kcountry.AllCountries: Memory allocation failed");
        const _data: [*]QtC.KCountry = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountry.html#dtor.KCountry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCountry `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCountry_Delete(@ptrCast(self));
    }
};
