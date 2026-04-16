const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KUnitConversion__Unit = @import("libqt6").KUnitConversion__Unit;
const QChar = @import("libqt6").QChar;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const unit_enums = @import("libunit.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html)
pub const KUnitConversion__Value = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUnitConversion__Value,

    pub const _is_KUnitConversion__Value = {};

    /// New constructs a new KUnitConversion::Value object.
    ///
    pub fn New() KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_new() };
    }

    /// New2 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unit: KUnitConversion__Unit `
    ///
    pub fn New2(number: f64, unit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(unit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Value_new2(@bitCast(number), @ptrCast(unit.ptr)) };
    }

    /// New3 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn New3(number: f64, unitString: []const u8) KUnitConversion__Value {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_new3(@bitCast(number), unitString_str) };
    }

    /// New4 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: f64 `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn New4(number: f64, unitId: i32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_new4(@bitCast(number), @bitCast(unitId)) };
    }

    /// New5 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` number: QVariant `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn New5(number: anytype, unitString: []const u8) KUnitConversion__Value {
        comptime _ = @TypeOf(number)._is_QVariant;
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_new5(@ptrCast(number.ptr), unitString_str) };
    }

    /// New6 constructs a new KUnitConversion::Value object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn New6(other: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Value_new6(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn OperatorAssign(self: KUnitConversion__Value, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        qtc.KUnitConversion__Value_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn Swap(self: KUnitConversion__Value, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        qtc.KUnitConversion__Value_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn OperatorEqual(self: KUnitConversion__Value, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return qtc.KUnitConversion__Value_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn OperatorNotEqual(self: KUnitConversion__Value, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return qtc.KUnitConversion__Value_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn IsNull(self: KUnitConversion__Value) bool {
        return qtc.KUnitConversion__Value_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn IsValid(self: KUnitConversion__Value) bool {
        return qtc.KUnitConversion__Value_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn Number(self: KUnitConversion__Value) f64 {
        return qtc.KUnitConversion__Value_Number(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn Unit(self: KUnitConversion__Value) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__Value_Unit(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KUnitConversion__Value, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToSymbolString(self: KUnitConversion__Value, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#round)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` decimals: u32 `
    ///
    pub fn Round(self: KUnitConversion__Value, decimals: u32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_Round(@ptrCast(self.ptr), @bitCast(decimals)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` unit: KUnitConversion__Unit `
    ///
    pub fn ConvertTo(self: KUnitConversion__Value, unit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(unit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo(@ptrCast(self.ptr), @ptrCast(unit.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` unit: unit_enums.UnitId `
    ///
    pub fn ConvertTo2(self: KUnitConversion__Value, unit: i32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo2(@ptrCast(self.ptr), @bitCast(unit)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn ConvertTo3(self: KUnitConversion__Value, unit: []const u8) KUnitConversion__Value {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo3(@ptrCast(self.ptr), unit_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn ToString1(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString1(@ptrCast(self.ptr), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn ToString2(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString2(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn ToString3(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString3(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn ToString4(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Value_ToString4(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn ToSymbolString1(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString1(@ptrCast(self.ptr), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn ToSymbolString2(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString2(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn ToSymbolString3(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString3(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__value.ToSymbolString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn ToSymbolString4(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Value_ToSymbolString4(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
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
    /// ` self: KUnitConversion__Value `
    ///
    pub fn Delete(self: KUnitConversion__Value) void {
        qtc.KUnitConversion__Value_Delete(@ptrCast(self.ptr));
    }
};
