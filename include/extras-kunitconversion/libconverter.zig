const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const unit_enums = @import("libunit.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html)
pub const kunitconversion__converter = struct {
    /// New constructs a new KUnitConversion::Converter object.
    ///
    pub fn New() QtC.KUnitConversion__Converter {
        return qtc.KUnitConversion__Converter_new();
    }

    /// New2 constructs a new KUnitConversion::Converter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KUnitConversion__Converter `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KUnitConversion__Converter {
        return qtc.KUnitConversion__Converter_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` other: QtC.KUnitConversion__Converter `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KUnitConversion__Converter_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` value: QtC.KUnitConversion__Value `
    ///
    pub fn Convert(self: ?*anyopaque, value: ?*anyopaque) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Converter_Convert(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` value: QtC.KUnitConversion__Value `
    ///
    /// ` toUnit: unit_enums.UnitId `
    ///
    pub fn Convert2(self: ?*anyopaque, value: ?*anyopaque, toUnit: i32) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Converter_Convert2(@ptrCast(self), @ptrCast(value), @bitCast(toUnit));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` value: QtC.KUnitConversion__Value `
    ///
    /// ` toUnit: QtC.KUnitConversion__Unit `
    ///
    pub fn Convert3(self: ?*anyopaque, value: ?*anyopaque, toUnit: ?*anyopaque) QtC.KUnitConversion__Value {
        return qtc.KUnitConversion__Converter_Convert3(@ptrCast(self), @ptrCast(value), @ptrCast(toUnit));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categoryForUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn CategoryForUnit(self: ?*anyopaque, unit: []const u8) QtC.KUnitConversion__UnitCategory {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        return qtc.KUnitConversion__Converter_CategoryForUnit(@ptrCast(self), unit_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` unitString: []const u8 `
    ///
    pub fn Unit(self: ?*anyopaque, unitString: []const u8) QtC.KUnitConversion__Unit {
        const unitString_str = qtc.libqt_string{
            .len = unitString.len,
            .data = unitString.ptr,
        };
        return qtc.KUnitConversion__Converter_Unit(@ptrCast(self), unitString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn Unit2(self: ?*anyopaque, unitId: i32) QtC.KUnitConversion__Unit {
        return qtc.KUnitConversion__Converter_Unit2(@ptrCast(self), @bitCast(unitId));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` category: []const u8 `
    ///
    pub fn Category(self: ?*anyopaque, category: []const u8) QtC.KUnitConversion__UnitCategory {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        return qtc.KUnitConversion__Converter_Category(@ptrCast(self), category_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` categoryId: unit_enums.CategoryId `
    ///
    pub fn Category2(self: ?*anyopaque, categoryId: i32) QtC.KUnitConversion__UnitCategory {
        return qtc.KUnitConversion__Converter_Category2(@ptrCast(self), @bitCast(categoryId));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KUnitConversion__UnitCategory {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__Converter_Categories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KUnitConversion__UnitCategory, _arr.len) catch @panic("kunitconversion__converter.Categories: Memory allocation failed");
        const _data: [*]QtC.KUnitConversion__UnitCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    /// ` value: QtC.KUnitConversion__Value `
    ///
    /// ` toUnit: []const u8 `
    ///
    pub fn Convert22(self: ?*anyopaque, value: ?*anyopaque, toUnit: []const u8) QtC.KUnitConversion__Value {
        const toUnit_str = qtc.libqt_string{
            .len = toUnit.len,
            .data = toUnit.ptr,
        };
        return qtc.KUnitConversion__Converter_Convert22(@ptrCast(self), @ptrCast(value), toUnit_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KUnitConversion__Converter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KUnitConversion__Converter_Delete(@ptrCast(self));
    }
};
