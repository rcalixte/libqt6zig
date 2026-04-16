const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KUnitConversion__Unit = @import("libqt6").KUnitConversion__Unit;
const KUnitConversion__UnitCategory = @import("libqt6").KUnitConversion__UnitCategory;
const KUnitConversion__Value = @import("libqt6").KUnitConversion__Value;
const std = @import("std");
const unit_enums = @import("libunit.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html)
pub const KUnitConversion__Converter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUnitConversion__Converter,

    pub const _is_KUnitConversion__Converter = {};

    /// New constructs a new KUnitConversion::Converter object.
    ///
    pub fn New() KUnitConversion__Converter {
        return .{ .ptr = qtc.KUnitConversion__Converter_new() };
    }

    /// New2 constructs a new KUnitConversion::Converter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__Converter `
    ///
    pub fn New2(other: anytype) KUnitConversion__Converter {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Converter;
        return .{ .ptr = qtc.KUnitConversion__Converter_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` other: KUnitConversion__Converter `
    ///
    pub fn OperatorAssign(self: KUnitConversion__Converter, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Converter;
        qtc.KUnitConversion__Converter_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    pub fn Convert(self: KUnitConversion__Converter, value: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: unit_enums.UnitId `
    ///
    pub fn Convert2(self: KUnitConversion__Converter, value: anytype, toUnit: i32) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert2(@ptrCast(self.ptr), @ptrCast(value.ptr), @bitCast(toUnit)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: KUnitConversion__Unit `
    ///
    pub fn Convert3(self: KUnitConversion__Converter, value: anytype, toUnit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        comptime _ = @TypeOf(toUnit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert3(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(toUnit.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categoryForUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn CategoryForUnit(self: KUnitConversion__Converter, unit: []const u8) KUnitConversion__UnitCategory {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_CategoryForUnit(@ptrCast(self.ptr), unit_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn Unit(self: KUnitConversion__Converter, unitString: []const u8) KUnitConversion__Unit {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Unit(@ptrCast(self.ptr), unitString_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn Unit2(self: KUnitConversion__Converter, unitId: i32) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__Converter_Unit2(@ptrCast(self.ptr), @bitCast(unitId)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` category: []const u8 `
    ///
    pub fn Category(self: KUnitConversion__Converter, category: []const u8) KUnitConversion__UnitCategory {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Category(@ptrCast(self.ptr), category_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` categoryId: unit_enums.CategoryId `
    ///
    pub fn Category2(self: KUnitConversion__Converter, categoryId: i32) KUnitConversion__UnitCategory {
        return .{ .ptr = qtc.KUnitConversion__Converter_Category2(@ptrCast(self.ptr), @bitCast(categoryId)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: KUnitConversion__Converter, allocator: std.mem.Allocator) []KUnitConversion__UnitCategory {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__Converter_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUnitConversion__UnitCategory, _arr.len) catch @panic("kunitconversion__converter.Categories: Memory allocation failed");
        const _data: [*]QtC.KUnitConversion__UnitCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: []const u8 `
    ///
    pub fn Convert22(self: KUnitConversion__Converter, value: anytype, toUnit: []const u8) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        const toUnit_str = qtc.libqt_string{
            .len = toUnit.len,
            .data = toUnit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert22(@ptrCast(self.ptr), @ptrCast(value.ptr), toUnit_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    pub fn Delete(self: KUnitConversion__Converter) void {
        qtc.KUnitConversion__Converter_Delete(@ptrCast(self.ptr));
    }
};
