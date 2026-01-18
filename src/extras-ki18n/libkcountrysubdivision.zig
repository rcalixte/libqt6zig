const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html)
pub const kcountrysubdivision = struct {
    /// New constructs a new KCountrySubdivision object.
    ///
    pub fn New() QtC.KCountrySubdivision {
        return qtc.KCountrySubdivision_new();
    }

    /// New2 constructs a new KCountrySubdivision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KCountrySubdivision `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KCountrySubdivision {
        return qtc.KCountrySubdivision_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` param1: QtC.KCountrySubdivision `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCountrySubdivision_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` other: QtC.KCountrySubdivision `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KCountrySubdivision_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` other: QtC.KCountrySubdivision `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KCountrySubdivision_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KCountrySubdivision_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#code)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Code(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Code(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountrysubdivision.Code: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountrySubdivision_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountrysubdivision.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    pub fn Country(self: ?*anyopaque) QtC.KCountry {
        return qtc.KCountrySubdivision_Country(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.KCountrySubdivision {
        return qtc.KCountrySubdivision_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#timeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeZoneIds(self: ?*anyopaque, allocator: std.mem.Allocator) [][:0]const u8 {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_TimeZoneIds(@ptrCast(self));
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
    /// ` self: QtC.KCountrySubdivision `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subdivisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KCountrySubdivision {
        const _arr: qtc.libqt_list = qtc.KCountrySubdivision_Subdivisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KCountrySubdivision, _arr.len) catch @panic("kcountrysubdivision.Subdivisions: Memory allocation failed");
        const _data: [*]QtC.KCountrySubdivision = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` code: [:0]const u8 `
    ///
    pub fn FromCode2(code: [:0]const u8) QtC.KCountrySubdivision {
        const code_Cstring = code.ptr;
        return qtc.KCountrySubdivision_FromCode2(code_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn FromLocation(latitude: f32, longitude: f32) QtC.KCountrySubdivision {
        return qtc.KCountrySubdivision_FromLocation(@floatCast(latitude), @floatCast(longitude));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountrysubdivision.html#dtor.KCountrySubdivision)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCountrySubdivision `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCountrySubdivision_Delete(@ptrCast(self));
    }
};
