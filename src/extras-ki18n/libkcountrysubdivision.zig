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

    /// New constructs a new KCountrySubdivision object.
    ///
    pub fn New() KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_new() };
    }

    /// New2 constructs a new KCountrySubdivision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KCountrySubdivision `
    ///
    pub fn New2(param1: anytype) KCountrySubdivision {
        comptime _ = @TypeOf(param1)._is_KCountrySubdivision;
        return .{ .ptr = qtc.KCountrySubdivision_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` param1: KCountrySubdivision `
    ///
    pub fn OperatorAssign(self: KCountrySubdivision, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KCountrySubdivision;
        qtc.KCountrySubdivision_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` other: KCountrySubdivision `
    ///
    pub fn OperatorEqual(self: KCountrySubdivision, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountrySubdivision;
        return qtc.KCountrySubdivision_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` other: KCountrySubdivision `
    ///
    pub fn OperatorNotEqual(self: KCountrySubdivision, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KCountrySubdivision;
        return qtc.KCountrySubdivision_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn IsValid(self: KCountrySubdivision) bool {
        return qtc.KCountrySubdivision_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#code)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Code(self: KCountrySubdivision, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Code(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountrysubdivision.Code: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KCountrySubdivision, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountrysubdivision.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn Country(self: KCountrySubdivision) KCountry {
        return .{ .ptr = qtc.KCountrySubdivision_Country(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn Parent(self: KCountrySubdivision) KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#timeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeZoneIds(self: KCountrySubdivision, allocator: std.mem.Allocator) [][:0]const u8 {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_TimeZoneIds(@ptrCast(self.ptr));
        const _str: [*]?[*:0]const u8 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc([:0]const u8, _arr.len) catch @panic("kcountrysubdivision.TimeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _cstr = _str[i];
            if (_cstr) |cstr| {
                const cstr_len = std.mem.len(cstr);
                const _buf = allocator.allocSentinel(u8, cstr_len, 0) catch @panic("kcountrysubdivision.TimeZoneIds: Buffer allocation failed");
                @memcpy(_buf, cstr[0..cstr_len]);
                _ret[i] = _buf;
            } else {
                _ret[i] = &[_:0]u8{};
            }
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#subdivisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subdivisions(self: KCountrySubdivision, allocator: std.mem.Allocator) []KCountrySubdivision {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_Subdivisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KCountrySubdivision, _arr.len) catch @panic("kcountrysubdivision.Subdivisions: Memory allocation failed");
        const _data: [*]QtC.KCountrySubdivision = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` code: [:0]const u8 `
    ///
    pub fn FromCode2(code: [:0]const u8) KCountrySubdivision {
        const code_Cstring = code.ptr;
        return .{ .ptr = qtc.KCountrySubdivision_FromCode2(code_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn FromLocation(latitude: f32, longitude: f32) KCountrySubdivision {
        return .{ .ptr = qtc.KCountrySubdivision_FromLocation(@bitCast(latitude), @bitCast(longitude)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#dtor.KCountrySubdivision)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCountrySubdivision `
    ///
    pub fn Delete(self: KCountrySubdivision) void {
        qtc.KCountrySubdivision_Delete(@ptrCast(self.ptr));
    }
};
