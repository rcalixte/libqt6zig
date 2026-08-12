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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    pub fn new() KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _number: f64 `
    ///
    /// ` _unit: KUnitConversion__Unit `
    ///
    pub fn new2(_number: f64, _unit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(_unit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Value_new2(@bitCast(_number), @ptrCast(_unit.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _number: f64 `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn new3(_number: f64, unitString: []const u8) KUnitConversion__Value {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_new3(@bitCast(_number), unitString_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _number: f64 `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn new4(_number: f64, unitId: i32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_new4(@bitCast(_number), @bitCast(unitId)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _number: QVariant `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn new5(_number: anytype, unitString: []const u8) KUnitConversion__Value {
        comptime _ = @TypeOf(_number)._is_QVariant;
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_new5(@ptrCast(_number.ptr), unitString_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KUnitConversion::Value object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn new6(other: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Value_new6(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn operatorAssign(self: KUnitConversion__Value, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        qtc.KUnitConversion__Value_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn swap(self: KUnitConversion__Value, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        qtc.KUnitConversion__Value_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn operatorEqual(self: KUnitConversion__Value, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return qtc.KUnitConversion__Value_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` other: KUnitConversion__Value `
    ///
    pub fn operatorNotEqual(self: KUnitConversion__Value, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Value;
        return qtc.KUnitConversion__Value_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn isNull(self: KUnitConversion__Value) bool {
        return qtc.KUnitConversion__Value_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn isValid(self: KUnitConversion__Value) bool {
        return qtc.KUnitConversion__Value_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `number` instead
    ///
    pub const Number = number;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn number(self: KUnitConversion__Value) f64 {
        return qtc.KUnitConversion__Value_Number(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unit` instead
    ///
    pub const Unit = unit;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn unit(self: KUnitConversion__Value) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__Value_Unit(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KUnitConversion__Value, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSymbolString` instead
    ///
    pub const ToSymbolString = toSymbolString;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toSymbolString(self: KUnitConversion__Value, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toSymbolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `round` instead
    ///
    pub const Round = round;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#round)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` decimals: u32 `
    ///
    pub fn round(self: KUnitConversion__Value, decimals: u32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_Round(@ptrCast(self.ptr), @bitCast(decimals)) };
    }

    /// ### DEPRECATED: Use `convertTo` instead
    ///
    pub const ConvertTo = convertTo;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` _unit: KUnitConversion__Unit `
    ///
    pub fn convertTo(self: KUnitConversion__Value, _unit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(_unit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo(@ptrCast(self.ptr), @ptrCast(_unit.ptr)) };
    }

    /// ### DEPRECATED: Use `convertTo2` instead
    ///
    pub const ConvertTo2 = convertTo2;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` _unit: unit_enums.UnitId `
    ///
    pub fn convertTo2(self: KUnitConversion__Value, _unit: i32) KUnitConversion__Value {
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo2(@ptrCast(self.ptr), @bitCast(_unit)) };
    }

    /// ### DEPRECATED: Use `convertTo3` instead
    ///
    pub const ConvertTo3 = convertTo3;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Value `
    ///
    /// ` _unit: []const u8 `
    ///
    pub fn convertTo3(self: KUnitConversion__Value, _unit: []const u8) KUnitConversion__Value {
        const unit_str = qtc.libqt_string{
            .len = _unit.len,
            .data = _unit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Value_ConvertTo3(@ptrCast(self.ptr), unit_str) };
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString1(@ptrCast(self.ptr), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

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
    pub fn toString2(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString2(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToString3(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString4` instead
    ///
    pub const ToString4 = toString4;

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
    pub fn toString4(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Value_ToString4(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSymbolString1` instead
    ///
    pub const ToSymbolString1 = toSymbolString1;

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
    pub fn toSymbolString1(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString1(@ptrCast(self.ptr), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toSymbolString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSymbolString2` instead
    ///
    pub const ToSymbolString2 = toSymbolString2;

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
    pub fn toSymbolString2(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString2(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toSymbolString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSymbolString3` instead
    ///
    pub const ToSymbolString3 = toSymbolString3;

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
    pub fn toSymbolString3(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Value_ToSymbolString3(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toSymbolString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSymbolString4` instead
    ///
    pub const ToSymbolString4 = toSymbolString4;

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
    pub fn toSymbolString4(self: KUnitConversion__Value, allocator: std.mem.Allocator, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Value_ToSymbolString4(@ptrCast(self.ptr), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUnitConversion__Value.toSymbolString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUnitConversion__Value `
    ///
    pub fn delete(self: KUnitConversion__Value) void {
        qtc.KUnitConversion__Value_Delete(@ptrCast(self.ptr));
    }
};
