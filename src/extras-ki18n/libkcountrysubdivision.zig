const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCountry = @import("libqt6").KCountry;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html)
pub const KCountrySubdivision = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCountrySubdivision,

    pub const _is_KCountrySubdivision = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCountrySubdivision object in C++ memory
    ///
    pub fn new() KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCountrySubdivision object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCountrySubdivision `
    ///
    pub fn new2(param1: anytype) KCountrySubdivision {
        comptime _ = @TypeOf(param1)._is_KCountrySubdivision;
        return .{ .ptr = qtc.KCountrySubdivision_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` param1: KCountrySubdivision `
    ///
    pub fn operatorAssign(self: KCountrySubdivision, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCountrySubdivision;
        qtc.KCountrySubdivision_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` other: KCountrySubdivision `
    ///
    pub fn operatorEqual(self: KCountrySubdivision, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountrySubdivision;
        return qtc.KCountrySubdivision_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` other: KCountrySubdivision `
    ///
    pub fn operatorNotEqual(self: KCountrySubdivision, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountrySubdivision;
        return qtc.KCountrySubdivision_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn isValid(self: KCountrySubdivision) bool {
        return qtc.KCountrySubdivision_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `code` instead
    ///
    pub const Code = code;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#code)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn code(self: KCountrySubdivision, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Code(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountrySubdivision.code: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KCountrySubdivision, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountrySubdivision.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn country(self: KCountrySubdivision) KCountry {
        return .{ .ptr = qtc.KCountrySubdivision_Country(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn parent(self: KCountrySubdivision) KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timeZoneIds` instead
    ///
    pub const TimeZoneIds = timeZoneIds;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#timeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn timeZoneIds(self: KCountrySubdivision, allocator: std.mem.Allocator) [][:0]const u8 {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_TimeZoneIds(@ptrCast(self.ptr));
        const _str: [*]?[*:0]const u8 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc([:0]const u8, _arr.len) catch @panic("KCountrySubdivision.timeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _cstr = _str[i];
            if (_cstr) |cstr| {
                const cstr_len = std.mem.len(cstr);
                const _buf = allocator.allocSentinel(u8, cstr_len, 0) catch @panic("KCountrySubdivision.timeZoneIds: Buffer allocation failed");
                @memcpy(_buf, cstr[0..cstr_len]);
                _ret[i] = _buf;
            } else {
                _ret[i] = &[_:0]u8{};
            }
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `subdivisions` instead
    ///
    pub const Subdivisions = subdivisions;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#subdivisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subdivisions(self: KCountrySubdivision, allocator: std.mem.Allocator) []KCountrySubdivision {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_Subdivisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCountrySubdivision, _arr.len) catch @panic("KCountrySubdivision.subdivisions: Memory allocation failed");
        const _data_val: [*]QtC.KCountrySubdivision = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromCode` instead
    ///
    pub const FromCode = fromCode;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` _code: []const u8 `
    ///
    pub fn fromCode(_code: []const u8) KCountrySubdivision {
        const code_str = qtc.libqt_string{
            .len = _code.len,
            .data = _code.ptr,
        };
        return .{ .ptr = qtc.KCountrySubdivision_FromCode(code_str) };
    }

    /// ### DEPRECATED: Use `fromCode2` instead
    ///
    pub const FromCode2 = fromCode2;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` _code: [:0]const u8 `
    ///
    pub fn fromCode2(_code: [:0]const u8) KCountrySubdivision {
        const code_Cstring = _code.ptr;
        return .{ .ptr = qtc.KCountrySubdivision_FromCode2(code_Cstring) };
    }

    /// ### DEPRECATED: Use `fromLocation` instead
    ///
    pub const FromLocation = fromLocation;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn fromLocation(latitude: f32, longitude: f32) KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_FromLocation(@bitCast(latitude), @bitCast(longitude)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#dtor.KCountrySubdivision)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn delete(self: KCountrySubdivision) void {
        qtc.KCountrySubdivision_Delete(@ptrCast(self.ptr));
    }
};
