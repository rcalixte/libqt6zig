const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const unit_enums = @import("libunit.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html)
pub const kunitconversion__value = struct {
    /// New constructs a new KUnitConversion::Value object.
    ///
    pub fn New() QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_new();
    }

    /// New2 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unit: QtC.KUnitConversion__Unit `
    ///
    pub fn New2(number: f64, unit: ?*anyopaque) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_new2(@bitCast(number), @ptrCast(unit));
    }

    /// New3 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn New3(number: f64, unitString: []const u8) QtC.KUnitConversion__Value {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };

        return qtc.KUnitConversion__Value_new3(@bitCast(number), unitString_str);
    }

    /// New4 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn New4(number: f64, unitId: i32) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_new4(@bitCast(number), @bitCast(unitId));
    }

    /// New5 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: QtC.QVariant `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn New5(number: ?*anyopaque, unitString: []const u8) QtC.KUnitConversion__Value {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };

        return qtc.KUnitConversion__Value_new5(@ptrCast(number), unitString_str);
    }

    /// New6 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KUnitConversion__Value `
    ///
    pub fn New6(other: ?*anyopaque) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_new6(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` other: QtC.KUnitConversion__Value `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KUnitConversion__Value_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` other: QtC.KUnitConversion__Value `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KUnitConversion__Value_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` other: QtC.KUnitConversion__Value `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KUnitConversion__Value_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` other: QtC.KUnitConversion__Value `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KUnitConversion__Value_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KUnitConversion__Value_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KUnitConversion__Value_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    pub fn Number(self: ?*anyopaque) f64 {
        return qtc.KUnitConversion__Value_Number(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    pub fn Unit(self: ?*anyopaque) QtC.KUnitConversion__Unit {
        return qtc.KUnitConversion__Value_Unit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#round)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` decimals: u32 `
    ///
    pub fn Round(self: ?*anyopaque, decimals: u32) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_Round(@ptrCast(self), @bitCast(decimals));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` unit: QtC.KUnitConversion__Unit `
    ///
    pub fn ConvertTo(self: ?*anyopaque, unit: ?*anyopaque) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_ConvertTo(@ptrCast(self), @ptrCast(unit));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` unit: unit_enums.UnitId `
    ///
    pub fn ConvertTo2(self: ?*anyopaque, unit: i32) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Value_ConvertTo2(@ptrCast(self), @bitCast(unit));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn ConvertTo3(self: ?*anyopaque, unit: []const u8) QtC.KUnitConversion__Value {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        return qtc.KUnitConversion__Value_ConvertTo3(@ptrCast(self), unit_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString1(@ptrCast(self), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString2(self: ?*anyopaque, fieldWidth: i32, format: u8, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString2(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString3(self: ?*anyopaque, fieldWidth: i32, format: u8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString3(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString4(self: ?*anyopaque, fieldWidth: i32, format: u8, precision: i32, fillChar: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString4(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString1(self: ?*anyopaque, fieldWidth: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString1(@ptrCast(self), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString2(self: ?*anyopaque, fieldWidth: i32, format: u8, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString2(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString3(self: ?*anyopaque, fieldWidth: i32, format: u8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString3(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QtC.QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString4(self: ?*anyopaque, fieldWidth: i32, format: u8, precision: i32, fillChar: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString4(@ptrCast(self), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KUnitConversion__Value `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KUnitConversion__Value_Delete(@ptrCast(self));
    }
};
