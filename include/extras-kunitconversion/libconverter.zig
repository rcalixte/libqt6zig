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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUnitConversion::Converter object in C++ memory
    ///
    pub fn new() KUnitConversion__Converter {
        return .{ .ptr = qtc.KUnitConversion__Converter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUnitConversion::Converter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__Converter `
    ///
    pub fn new2(other: anytype) KUnitConversion__Converter {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Converter;
        return .{ .ptr = qtc.KUnitConversion__Converter_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` other: KUnitConversion__Converter `
    ///
    pub fn operatorAssign(self: KUnitConversion__Converter, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Converter;
        qtc.KUnitConversion__Converter_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    pub fn convert(self: KUnitConversion__Converter, value: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `convert2` instead
    ///
    pub const Convert2 = convert2;

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
    pub fn convert2(self: KUnitConversion__Converter, value: anytype, toUnit: i32) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert2(@ptrCast(self.ptr), @ptrCast(value.ptr), @bitCast(toUnit)) };
    }

    /// ### DEPRECATED: Use `convert3` instead
    ///
    pub const Convert3 = convert3;

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
    pub fn convert3(self: KUnitConversion__Converter, value: anytype, toUnit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        comptime _ = @TypeOf(toUnit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert3(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(toUnit.ptr)) };
    }

    /// ### DEPRECATED: Use `categoryForUnit` instead
    ///
    pub const CategoryForUnit = categoryForUnit;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categoryForUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` _unit: []const u8 `
    ///
    pub fn categoryForUnit(self: KUnitConversion__Converter, _unit: []const u8) KUnitConversion__UnitCategory {
        const unit_str = qtc.libqt_string{
            .len = _unit.len,
            .data = _unit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_CategoryForUnit(@ptrCast(self.ptr), unit_str) };
    }

    /// ### DEPRECATED: Use `unit` instead
    ///
    pub const Unit = unit;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn unit(self: KUnitConversion__Converter, unitString: []const u8) KUnitConversion__Unit {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Unit(@ptrCast(self.ptr), unitString_str) };
    }

    /// ### DEPRECATED: Use `unit2` instead
    ///
    pub const Unit2 = unit2;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn unit2(self: KUnitConversion__Converter, unitId: i32) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__Converter_Unit2(@ptrCast(self.ptr), @bitCast(unitId)) };
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` _category: []const u8 `
    ///
    pub fn category(self: KUnitConversion__Converter, _category: []const u8) KUnitConversion__UnitCategory {
        const category_str = qtc.libqt_string{
            .len = _category.len,
            .data = _category.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Category(@ptrCast(self.ptr), category_str) };
    }

    /// ### DEPRECATED: Use `category2` instead
    ///
    pub const Category2 = category2;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` categoryId: unit_enums.CategoryId `
    ///
    pub fn category2(self: KUnitConversion__Converter, categoryId: i32) KUnitConversion__UnitCategory {
        return .{ .ptr = qtc.KUnitConversion__Converter_Category2(@ptrCast(self.ptr), @bitCast(categoryId)) };
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: KUnitConversion__Converter, allocator: std.mem.Allocator) []KUnitConversion__UnitCategory {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__Converter_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUnitConversion__UnitCategory, _arr.len) catch @panic("KUnitConversion__Converter.categories: Memory allocation failed");
        const _data_val: [*]QtC.KUnitConversion__UnitCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `convert22` instead
    ///
    pub const Convert22 = convert22;

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
    pub fn convert22(self: KUnitConversion__Converter, value: anytype, toUnit: []const u8) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        const toUnit_str = qtc.libqt_string{
            .len = toUnit.len,
            .data = toUnit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__Converter_Convert22(@ptrCast(self.ptr), @ptrCast(value.ptr), toUnit_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUnitConversion__Converter `
    ///
    pub fn delete(self: KUnitConversion__Converter) void {
        qtc.KUnitConversion__Converter_Delete(@ptrCast(self.ptr));
    }
};
