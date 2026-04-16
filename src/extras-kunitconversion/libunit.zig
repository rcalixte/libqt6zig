const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KUnitConversion__UnitCategory = @import("libqt6").KUnitConversion__UnitCategory;
const QChar = @import("libqt6").QChar;
const std = @import("std");
const unit_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html)
pub const KUnitConversion__Unit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUnitConversion__Unit,

    pub const _is_KUnitConversion__Unit = {};

    /// New constructs a new KUnitConversion::Unit object.
    ///
    pub fn New() KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__Unit_new() };
    }

    /// New2 constructs a new KUnitConversion::Unit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__Unit `
    ///
    pub fn New2(other: anytype) KUnitConversion__Unit {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__Unit_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` other: KUnitConversion__Unit `
    ///
    pub fn OperatorAssign(self: KUnitConversion__Unit, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Unit;
        qtc.KUnitConversion__Unit_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` other: KUnitConversion__Unit `
    ///
    pub fn OperatorEqual(self: KUnitConversion__Unit, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Unit;
        return qtc.KUnitConversion__Unit_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` other: KUnitConversion__Unit `
    ///
    pub fn OperatorNotEqual(self: KUnitConversion__Unit, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__Unit;
        return qtc.KUnitConversion__Unit_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    pub fn IsNull(self: KUnitConversion__Unit) bool {
        return qtc.KUnitConversion__Unit_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    pub fn IsValid(self: KUnitConversion__Unit) bool {
        return qtc.KUnitConversion__Unit_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ## Returns:
    ///
    /// ` unit_enums.UnitId `
    ///
    pub fn Id(self: KUnitConversion__Unit) i32 {
        return qtc.KUnitConversion__Unit_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#categoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ## Returns:
    ///
    /// ` unit_enums.CategoryId `
    ///
    pub fn CategoryId(self: KUnitConversion__Unit) i32 {
        return qtc.KUnitConversion__Unit_CategoryId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    pub fn Category(self: KUnitConversion__Unit) KUnitConversion__UnitCategory {
        return .{ .ptr = qtc.KUnitConversion__Unit_Category(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KUnitConversion__Unit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Unit_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#symbol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Symbol(self: KUnitConversion__Unit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__Unit_Symbol(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.Symbol: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    pub fn ToString(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToString(@ptrCast(self.ptr), @bitCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    pub fn ToSymbolString(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToSymbolString(@ptrCast(self.ptr), @bitCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToSymbolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn ToString2(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToString2(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn ToString3(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToString3(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn ToString4(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToString4(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn ToString5(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Unit_ToString5(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToString5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn ToSymbolString2(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToSymbolString2(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToSymbolString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    pub fn ToSymbolString3(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToSymbolString3(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToSymbolString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn ToSymbolString4(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8, precision: i32) []const u8 {
        var _str = qtc.KUnitConversion__Unit_ToSymbolString4(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToSymbolString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unit.html#toSymbolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__Unit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` fillChar: QChar `
    ///
    pub fn ToSymbolString5(self: KUnitConversion__Unit, allocator: std.mem.Allocator, value: f64, fieldWidth: i32, format: u8, precision: i32, fillChar: anytype) []const u8 {
        comptime _ = @TypeOf(fillChar)._is_QChar;
        var _str = qtc.KUnitConversion__Unit_ToSymbolString5(@ptrCast(self.ptr), @bitCast(value), @bitCast(fieldWidth), @bitCast(format), @bitCast(precision), @ptrCast(fillChar.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unit.ToSymbolString5: Memory allocation failed");
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
    /// ` self: KUnitConversion__Unit `
    ///
    pub fn Delete(self: KUnitConversion__Unit) void {
        qtc.KUnitConversion__Unit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kunitconversion.html#public-types)
pub const enums = struct {
    pub const CategoryId = enum(i32) {
        pub const InvalidCategory: i32 = -1;
        pub const LengthCategory: i32 = 0;
        pub const AreaCategory: i32 = 1;
        pub const VolumeCategory: i32 = 2;
        pub const TemperatureCategory: i32 = 3;
        pub const VelocityCategory: i32 = 4;
        pub const MassCategory: i32 = 5;
        pub const PressureCategory: i32 = 6;
        pub const EnergyCategory: i32 = 7;
        pub const CurrencyCategory: i32 = 8;
        pub const PowerCategory: i32 = 9;
        pub const TimeCategory: i32 = 10;
        pub const FuelEfficiencyCategory: i32 = 11;
        pub const DensityCategory: i32 = 12;
        pub const WeightPerAreaCategory: i32 = 13;
        pub const AccelerationCategory: i32 = 14;
        pub const AngleCategory: i32 = 15;
        pub const FrequencyCategory: i32 = 16;
        pub const ForceCategory: i32 = 17;
        pub const ThermalConductivityCategory: i32 = 18;
        pub const ThermalFluxCategory: i32 = 19;
        pub const ThermalGenerationCategory: i32 = 20;
        pub const VoltageCategory: i32 = 21;
        pub const ElectricalCurrentCategory: i32 = 22;
        pub const ElectricalResistanceCategory: i32 = 23;
        pub const PermeabilityCategory: i32 = 24;
        pub const BinaryDataCategory: i32 = 25;
    };

    pub const UnitId = enum(i32) {
        pub const InvalidUnit: i32 = -1;
        pub const NoUnit: i32 = 0;
        pub const Percent: i32 = 1;
        pub const SquareYottameter: i32 = 1000;
        pub const SquareZettameter: i32 = 1001;
        pub const SquareExameter: i32 = 1002;
        pub const SquarePetameter: i32 = 1003;
        pub const SquareTerameter: i32 = 1004;
        pub const SquareGigameter: i32 = 1005;
        pub const SquareMegameter: i32 = 1006;
        pub const SquareKilometer: i32 = 1007;
        pub const SquareHectometer: i32 = 1008;
        pub const SquareDecameter: i32 = 1009;
        pub const SquareMeter: i32 = 1010;
        pub const SquareDecimeter: i32 = 1011;
        pub const SquareCentimeter: i32 = 1012;
        pub const SquareMillimeter: i32 = 1013;
        pub const SquareMicrometer: i32 = 1014;
        pub const SquareNanometer: i32 = 1015;
        pub const SquarePicometer: i32 = 1016;
        pub const SquareFemtometer: i32 = 1017;
        pub const SquareAttometer: i32 = 1018;
        pub const SquareZeptometer: i32 = 1019;
        pub const SquareYoctometer: i32 = 1020;
        pub const Acre: i32 = 1021;
        pub const SquareFoot: i32 = 1022;
        pub const SquareInch: i32 = 1023;
        pub const SquareMile: i32 = 1024;
        pub const Yottameter: i32 = 2000;
        pub const Zettameter: i32 = 2001;
        pub const Exameter: i32 = 2002;
        pub const Petameter: i32 = 2003;
        pub const Terameter: i32 = 2004;
        pub const Gigameter: i32 = 2005;
        pub const Megameter: i32 = 2006;
        pub const Kilometer: i32 = 2007;
        pub const Hectometer: i32 = 2008;
        pub const Decameter: i32 = 2009;
        pub const Meter: i32 = 2010;
        pub const Decimeter: i32 = 2011;
        pub const Centimeter: i32 = 2012;
        pub const Millimeter: i32 = 2013;
        pub const Micrometer: i32 = 2014;
        pub const Nanometer: i32 = 2015;
        pub const Picometer: i32 = 2016;
        pub const Femtometer: i32 = 2017;
        pub const Attometer: i32 = 2018;
        pub const Zeptometer: i32 = 2019;
        pub const Yoctometer: i32 = 2020;
        pub const Inch: i32 = 2021;
        pub const Foot: i32 = 2022;
        pub const Yard: i32 = 2023;
        pub const Mile: i32 = 2024;
        pub const NauticalMile: i32 = 2025;
        pub const LightYear: i32 = 2026;
        pub const Parsec: i32 = 2027;
        pub const AstronomicalUnit: i32 = 2028;
        pub const Thou: i32 = 2029;
        pub const Angstrom: i32 = 2030;
        pub const RackUnit: i32 = 2031;
        pub const CubicYottameter: i32 = 3000;
        pub const CubicZettameter: i32 = 3001;
        pub const CubicExameter: i32 = 3002;
        pub const CubicPetameter: i32 = 3003;
        pub const CubicTerameter: i32 = 3004;
        pub const CubicGigameter: i32 = 3005;
        pub const CubicMegameter: i32 = 3006;
        pub const CubicKilometer: i32 = 3007;
        pub const CubicHectometer: i32 = 3008;
        pub const CubicDecameter: i32 = 3009;
        pub const CubicMeter: i32 = 3010;
        pub const CubicDecimeter: i32 = 3011;
        pub const CubicCentimeter: i32 = 3012;
        pub const CubicMillimeter: i32 = 3013;
        pub const CubicMicrometer: i32 = 3014;
        pub const CubicNanometer: i32 = 3015;
        pub const CubicPicometer: i32 = 3016;
        pub const CubicFemtometer: i32 = 3017;
        pub const CubicAttometer: i32 = 3018;
        pub const CubicZeptometer: i32 = 3019;
        pub const CubicYoctometer: i32 = 3020;
        pub const Yottaliter: i32 = 3021;
        pub const Zettaliter: i32 = 3022;
        pub const Exaliter: i32 = 3023;
        pub const Petaliter: i32 = 3024;
        pub const Teraliter: i32 = 3025;
        pub const Gigaliter: i32 = 3026;
        pub const Megaliter: i32 = 3027;
        pub const Kiloliter: i32 = 3028;
        pub const Hectoliter: i32 = 3029;
        pub const Decaliter: i32 = 3030;
        pub const Liter: i32 = 3031;
        pub const Deciliter: i32 = 3032;
        pub const Centiliter: i32 = 3033;
        pub const Milliliter: i32 = 3034;
        pub const Microliter: i32 = 3035;
        pub const Nanoliter: i32 = 3036;
        pub const Picoliter: i32 = 3037;
        pub const Femtoliter: i32 = 3038;
        pub const Attoliter: i32 = 3039;
        pub const Zeptoliter: i32 = 3040;
        pub const Yoctoliter: i32 = 3041;
        pub const CubicFoot: i32 = 3042;
        pub const CubicInch: i32 = 3043;
        pub const CubicMile: i32 = 3044;
        pub const FluidOunce: i32 = 3045;
        pub const Cup: i32 = 3046;
        pub const Teaspoon: i32 = 3047;
        pub const Tablespoon: i32 = 3048;
        pub const GallonUS: i32 = 3049;
        pub const PintImperial: i32 = 3050;
        pub const OilBarrel: i32 = 3051;
        pub const GallonImperial: i32 = 3052;
        pub const PintUS: i32 = 3053;
        pub const Yottagram: i32 = 4000;
        pub const Zettagram: i32 = 4001;
        pub const Exagram: i32 = 4002;
        pub const Petagram: i32 = 4003;
        pub const Teragram: i32 = 4004;
        pub const Gigagram: i32 = 4005;
        pub const Megagram: i32 = 4006;
        pub const Kilogram: i32 = 4007;
        pub const Hectogram: i32 = 4008;
        pub const Decagram: i32 = 4009;
        pub const Gram: i32 = 4010;
        pub const Decigram: i32 = 4011;
        pub const Centigram: i32 = 4012;
        pub const Milligram: i32 = 4013;
        pub const Microgram: i32 = 4014;
        pub const Nanogram: i32 = 4015;
        pub const Picogram: i32 = 4016;
        pub const Femtogram: i32 = 4017;
        pub const Attogram: i32 = 4018;
        pub const Zeptogram: i32 = 4019;
        pub const Yoctogram: i32 = 4020;
        pub const Ton: i32 = 4021;
        pub const Carat: i32 = 4022;
        pub const Pound: i32 = 4023;
        pub const Ounce: i32 = 4024;
        pub const TroyOunce: i32 = 4025;
        pub const MassNewton: i32 = 4026;
        pub const Kilonewton: i32 = 4027;
        pub const Stone: i32 = 4028;
        pub const Yottapascal: i32 = 5000;
        pub const Zettapascal: i32 = 5001;
        pub const Exapascal: i32 = 5002;
        pub const Petapascal: i32 = 5003;
        pub const Terapascal: i32 = 5004;
        pub const Gigapascal: i32 = 5005;
        pub const Megapascal: i32 = 5006;
        pub const Kilopascal: i32 = 5007;
        pub const Hectopascal: i32 = 5008;
        pub const Decapascal: i32 = 5009;
        pub const Pascal: i32 = 5010;
        pub const Decipascal: i32 = 5011;
        pub const Centipascal: i32 = 5012;
        pub const Millipascal: i32 = 5013;
        pub const Micropascal: i32 = 5014;
        pub const Nanopascal: i32 = 5015;
        pub const Picopascal: i32 = 5016;
        pub const Femtopascal: i32 = 5017;
        pub const Attopascal: i32 = 5018;
        pub const Zeptopascal: i32 = 5019;
        pub const Yoctopascal: i32 = 5020;
        pub const Bar: i32 = 5021;
        pub const Millibar: i32 = 5022;
        pub const Decibar: i32 = 5023;
        pub const Torr: i32 = 5024;
        pub const TechnicalAtmosphere: i32 = 5025;
        pub const Atmosphere: i32 = 5026;
        pub const PoundForcePerSquareInch: i32 = 5027;
        pub const InchesOfMercury: i32 = 5028;
        pub const MillimetersOfMercury: i32 = 5029;
        pub const Kelvin: i32 = 6000;
        pub const Celsius: i32 = 6001;
        pub const Fahrenheit: i32 = 6002;
        pub const Rankine: i32 = 6003;
        pub const Delisle: i32 = 6004;
        pub const TemperatureNewton: i32 = 6005;
        pub const Reaumur: i32 = 6006;
        pub const Romer: i32 = 6007;
        pub const Yottajoule: i32 = 7000;
        pub const Zettajoule: i32 = 7001;
        pub const Exajoule: i32 = 7002;
        pub const Petajoule: i32 = 7003;
        pub const Terajoule: i32 = 7004;
        pub const Gigajoule: i32 = 7005;
        pub const Megajoule: i32 = 7006;
        pub const Kilojoule: i32 = 7007;
        pub const Hectojoule: i32 = 7008;
        pub const Decajoule: i32 = 7009;
        pub const Joule: i32 = 7010;
        pub const Decijoule: i32 = 7011;
        pub const Centijoule: i32 = 7012;
        pub const Millijoule: i32 = 7013;
        pub const Microjoule: i32 = 7014;
        pub const Nanojoule: i32 = 7015;
        pub const Picojoule: i32 = 7016;
        pub const Femtojoule: i32 = 7017;
        pub const Attojoule: i32 = 7018;
        pub const Zeptojoule: i32 = 7019;
        pub const Yoctojoule: i32 = 7020;
        pub const GuidelineDailyAmount: i32 = 7021;
        pub const Electronvolt: i32 = 7022;
        pub const Rydberg: i32 = 7023;
        pub const Kilocalorie: i32 = 7024;
        pub const PhotonWavelength: i32 = 7025;
        pub const KiloJoulePerMole: i32 = 7026;
        pub const JoulePerMole: i32 = 7027;
        pub const Btu: i32 = 7028;
        pub const Erg: i32 = 7029;
        pub const Eur: i32 = 8000;
        pub const Ats: i32 = 8001;
        pub const Bef: i32 = 8002;
        pub const Nlg: i32 = 8003;
        pub const Fim: i32 = 8004;
        pub const Frf: i32 = 8005;
        pub const Dem: i32 = 8006;
        pub const Iep: i32 = 8007;
        pub const Itl: i32 = 8008;
        pub const Luf: i32 = 8009;
        pub const Pte: i32 = 8010;
        pub const Esp: i32 = 8011;
        pub const Grd: i32 = 8012;
        pub const Sit: i32 = 8013;
        pub const Cyp: i32 = 8014;
        pub const Mtl: i32 = 8015;
        pub const Skk: i32 = 8016;
        pub const Usd: i32 = 8017;
        pub const Jpy: i32 = 8018;
        pub const Bgn: i32 = 8019;
        pub const Czk: i32 = 8020;
        pub const Dkk: i32 = 8021;
        pub const Eek: i32 = 8022;
        pub const Gbp: i32 = 8023;
        pub const Huf: i32 = 8024;
        pub const Ltl: i32 = 8025;
        pub const Lvl: i32 = 8026;
        pub const Pln: i32 = 8027;
        pub const Ron: i32 = 8028;
        pub const Sek: i32 = 8029;
        pub const Chf: i32 = 8030;
        pub const Nok: i32 = 8031;
        pub const Hrk: i32 = 8032;
        pub const Rub: i32 = 8033;
        pub const Try: i32 = 8034;
        pub const Aud: i32 = 8035;
        pub const Brl: i32 = 8036;
        pub const Cad: i32 = 8037;
        pub const Cny: i32 = 8038;
        pub const Hkd: i32 = 8039;
        pub const Idr: i32 = 8040;
        pub const Inr: i32 = 8041;
        pub const Krw: i32 = 8042;
        pub const Mxn: i32 = 8043;
        pub const Myr: i32 = 8044;
        pub const Nzd: i32 = 8045;
        pub const Php: i32 = 8046;
        pub const Sgd: i32 = 8047;
        pub const Thb: i32 = 8048;
        pub const Zar: i32 = 8049;
        pub const Ils: i32 = 8050;
        pub const Isk: i32 = 8051;
        pub const Xpf: i32 = 8052;
        pub const MeterPerSecond: i32 = 9000;
        pub const KilometerPerHour: i32 = 9001;
        pub const MilePerHour: i32 = 9002;
        pub const FootPerSecond: i32 = 9003;
        pub const InchPerSecond: i32 = 9004;
        pub const Knot: i32 = 9005;
        pub const Mach: i32 = 9006;
        pub const SpeedOfLight: i32 = 9007;
        pub const Beaufort: i32 = 9008;
        pub const Yottawatt: i32 = 10000;
        pub const Zettawatt: i32 = 10001;
        pub const Exawatt: i32 = 10002;
        pub const Petawatt: i32 = 10003;
        pub const Terawatt: i32 = 10004;
        pub const Gigawatt: i32 = 10005;
        pub const Megawatt: i32 = 10006;
        pub const Kilowatt: i32 = 10007;
        pub const Hectowatt: i32 = 10008;
        pub const Decawatt: i32 = 10009;
        pub const Watt: i32 = 10010;
        pub const Deciwatt: i32 = 10011;
        pub const Centiwatt: i32 = 10012;
        pub const Milliwatt: i32 = 10013;
        pub const Microwatt: i32 = 10014;
        pub const Nanowatt: i32 = 10015;
        pub const Picowatt: i32 = 10016;
        pub const Femtowatt: i32 = 10017;
        pub const Attowatt: i32 = 10018;
        pub const Zeptowatt: i32 = 10019;
        pub const Yoctowatt: i32 = 10020;
        pub const Horsepower: i32 = 10021;
        pub const DecibelKilowatt: i32 = 10022;
        pub const DecibelWatt: i32 = 10023;
        pub const DecibelMilliwatt: i32 = 10024;
        pub const DecibelMicrowatt: i32 = 10025;
        pub const Yottasecond: i32 = 11000;
        pub const Zettasecond: i32 = 11001;
        pub const Exasecond: i32 = 11002;
        pub const Petasecond: i32 = 11003;
        pub const Terasecond: i32 = 11004;
        pub const Gigasecond: i32 = 11005;
        pub const Megasecond: i32 = 11006;
        pub const Kilosecond: i32 = 11007;
        pub const Hectosecond: i32 = 11008;
        pub const Decasecond: i32 = 11009;
        pub const Second: i32 = 11010;
        pub const Decisecond: i32 = 11011;
        pub const Centisecond: i32 = 11012;
        pub const Millisecond: i32 = 11013;
        pub const Microsecond: i32 = 11014;
        pub const Nanosecond: i32 = 11015;
        pub const Picosecond: i32 = 11016;
        pub const Femtosecond: i32 = 11017;
        pub const Attosecond: i32 = 11018;
        pub const Zeptosecond: i32 = 11019;
        pub const Yoctosecond: i32 = 11020;
        pub const Minute: i32 = 11021;
        pub const Hour: i32 = 11022;
        pub const Day: i32 = 11023;
        pub const Week: i32 = 11024;
        pub const JulianYear: i32 = 11025;
        pub const LeapYear: i32 = 11026;
        pub const Year: i32 = 11027;
        pub const LitersPer100Kilometers: i32 = 12000;
        pub const MilePerUsGallon: i32 = 12001;
        pub const MilePerImperialGallon: i32 = 12002;
        pub const KilometrePerLitre: i32 = 12003;
        pub const YottakilogramsPerCubicMeter: i32 = 13000;
        pub const ZettakilogramPerCubicMeter: i32 = 13001;
        pub const ExakilogramPerCubicMeter: i32 = 13002;
        pub const PetakilogramPerCubicMeter: i32 = 13003;
        pub const TerakilogramPerCubicMeter: i32 = 13004;
        pub const GigakilogramPerCubicMeter: i32 = 13005;
        pub const MegakilogramPerCubicMeter: i32 = 13006;
        pub const KilokilogramPerCubicMeter: i32 = 13007;
        pub const HectokilogramsPerCubicMeter: i32 = 13008;
        pub const DecakilogramsPerCubicMeter: i32 = 13009;
        pub const KilogramsPerCubicMeter: i32 = 13010;
        pub const DecikilogramsPerCubicMeter: i32 = 13011;
        pub const CentikilogramsPerCubicMeter: i32 = 13012;
        pub const MillikilogramsPerCubicMeter: i32 = 13013;
        pub const MicrokilogramsPerCubicMeter: i32 = 13014;
        pub const NanokilogramsPerCubicMeter: i32 = 13015;
        pub const PicokilogramsPerCubicMeter: i32 = 13016;
        pub const FemtokilogramsPerCubicMeter: i32 = 13017;
        pub const AttokilogramsPerCubicMeter: i32 = 13018;
        pub const ZeptokilogramsPerCubicMeter: i32 = 13019;
        pub const YoctokilogramsPerCubicMeter: i32 = 13020;
        pub const KilogramPerLiter: i32 = 13021;
        pub const GramPerLiter: i32 = 13022;
        pub const GramPerMilliliter: i32 = 13023;
        pub const OuncePerCubicInch: i32 = 13024;
        pub const OuncePerCubicFoot: i32 = 13025;
        pub const OuncePerCubicYard: i32 = 13026;
        pub const PoundPerCubicInch: i32 = 13027;
        pub const PoundPerCubicFoot: i32 = 13028;
        pub const PoundPerCubicYard: i32 = 13029;
        pub const GramsPerSquareMeter: i32 = 13030;
        pub const OuncesPerSquareYard: i32 = 13031;
        pub const MetresPerSecondSquared: i32 = 14000;
        pub const FeetPerSecondSquared: i32 = 14001;
        pub const StandardGravity: i32 = 14002;
        pub const Yottanewton: i32 = 15000;
        pub const Zettanewton: i32 = 15001;
        pub const Exanewton: i32 = 15002;
        pub const Petanewton: i32 = 15003;
        pub const Teranewton: i32 = 15004;
        pub const Giganewton: i32 = 15005;
        pub const Meganewton: i32 = 15006;
        pub const KilonewtonForce: i32 = 15007;
        pub const Hectonewton: i32 = 15008;
        pub const Decanewton: i32 = 15009;
        pub const Newton: i32 = 15010;
        pub const Decinewton: i32 = 15011;
        pub const Centinewton: i32 = 15012;
        pub const Millinewton: i32 = 15013;
        pub const Micronewton: i32 = 15014;
        pub const Nanonewton: i32 = 15015;
        pub const Piconewton: i32 = 15016;
        pub const Femtonewton: i32 = 15017;
        pub const Attonewton: i32 = 15018;
        pub const Zeptonewton: i32 = 15019;
        pub const Yoctonewton: i32 = 15020;
        pub const Dyne: i32 = 15021;
        pub const Kilopond: i32 = 15022;
        pub const PoundForce: i32 = 15023;
        pub const Poundal: i32 = 15024;
        pub const Degree: i32 = 16000;
        pub const Radian: i32 = 16001;
        pub const Gradian: i32 = 16002;
        pub const ArcMinute: i32 = 16003;
        pub const ArcSecond: i32 = 16004;
        pub const Yottahertz: i32 = 17000;
        pub const Zettahertz: i32 = 17001;
        pub const Exahertz: i32 = 17002;
        pub const Petahertz: i32 = 17003;
        pub const Terahertz: i32 = 17004;
        pub const Gigahertz: i32 = 17005;
        pub const Megahertz: i32 = 17006;
        pub const Kilohertz: i32 = 17007;
        pub const Hectohertz: i32 = 17008;
        pub const Decahertz: i32 = 17009;
        pub const Hertz: i32 = 17010;
        pub const Decihertz: i32 = 17011;
        pub const Centihertz: i32 = 17012;
        pub const Millihertz: i32 = 17013;
        pub const Microhertz: i32 = 17014;
        pub const Nanohertz: i32 = 17015;
        pub const Picohertz: i32 = 17016;
        pub const Femtohertz: i32 = 17017;
        pub const Attohertz: i32 = 17018;
        pub const Zeptohertz: i32 = 17019;
        pub const Yoctohertz: i32 = 17020;
        pub const RPM: i32 = 17021;
        pub const WattPerMeterKelvin: i32 = 18000;
        pub const BtuPerFootHourFahrenheit: i32 = 18001;
        pub const BtuPerSquareFootHourFahrenheitPerInch: i32 = 18002;
        pub const WattPerSquareMeter: i32 = 19000;
        pub const BtuPerHourPerSquareFoot: i32 = 19001;
        pub const WattPerCubicMeter: i32 = 20000;
        pub const BtuPerHourPerCubicFoot: i32 = 20001;
        pub const Yottavolts: i32 = 30000;
        pub const Zettavolts: i32 = 30001;
        pub const Exavolts: i32 = 30002;
        pub const Petavolts: i32 = 30003;
        pub const Teravolts: i32 = 30004;
        pub const Gigavolts: i32 = 30005;
        pub const Megavolts: i32 = 30006;
        pub const Kilovolts: i32 = 30007;
        pub const Hectovolts: i32 = 30008;
        pub const Decavolts: i32 = 30009;
        pub const Volts: i32 = 30010;
        pub const Decivolts: i32 = 30011;
        pub const Centivolts: i32 = 30012;
        pub const Millivolts: i32 = 30013;
        pub const Microvolts: i32 = 30014;
        pub const Nanovolts: i32 = 30015;
        pub const Picovolts: i32 = 30016;
        pub const Femtovolts: i32 = 30017;
        pub const Attovolts: i32 = 30018;
        pub const Zeptovolts: i32 = 30019;
        pub const Yoctovolts: i32 = 30020;
        pub const Statvolts: i32 = 30021;
        pub const Yottaampere: i32 = 31000;
        pub const Zettaampere: i32 = 31001;
        pub const Exaampere: i32 = 31002;
        pub const Petaampere: i32 = 31003;
        pub const Teraampere: i32 = 31004;
        pub const Gigaampere: i32 = 31005;
        pub const Megaampere: i32 = 31006;
        pub const Kiloampere: i32 = 31007;
        pub const Hectoampere: i32 = 31008;
        pub const Decaampere: i32 = 31009;
        pub const Ampere: i32 = 31010;
        pub const Deciampere: i32 = 31011;
        pub const Centiampere: i32 = 31012;
        pub const Milliampere: i32 = 31013;
        pub const Microampere: i32 = 31014;
        pub const Nanoampere: i32 = 31015;
        pub const Picoampere: i32 = 31016;
        pub const Femtoampere: i32 = 31017;
        pub const Attoampere: i32 = 31018;
        pub const Zeptoampere: i32 = 31019;
        pub const Yoctoampere: i32 = 31020;
        pub const Yottaohms: i32 = 32000;
        pub const Zettaohms: i32 = 32001;
        pub const Exaohms: i32 = 32002;
        pub const Petaohms: i32 = 32003;
        pub const Teraohms: i32 = 32004;
        pub const Gigaohms: i32 = 32005;
        pub const Megaohms: i32 = 32006;
        pub const Kiloohms: i32 = 32007;
        pub const Hectoohms: i32 = 32008;
        pub const Decaohms: i32 = 32009;
        pub const Ohms: i32 = 32010;
        pub const Deciohms: i32 = 32011;
        pub const Centiohms: i32 = 32012;
        pub const Milliohms: i32 = 32013;
        pub const Microohms: i32 = 32014;
        pub const Nanoohms: i32 = 32015;
        pub const Picoohms: i32 = 32016;
        pub const Femtoohms: i32 = 32017;
        pub const Attoohms: i32 = 32018;
        pub const Zeptoohms: i32 = 32019;
        pub const Yoctoohms: i32 = 32020;
        pub const Darcy: i32 = 33000;
        pub const MiliDarcy: i32 = 33001;
        pub const PermeabilitySquareMicrometer: i32 = 33002;
        pub const Yobibyte: i32 = 34000;
        pub const Yobibit: i32 = 34001;
        pub const Yottabyte: i32 = 34002;
        pub const Yottabit: i32 = 34003;
        pub const Zebibyte: i32 = 34004;
        pub const Zebibit: i32 = 34005;
        pub const Zettabyte: i32 = 34006;
        pub const Zettabit: i32 = 34007;
        pub const Exbibyte: i32 = 34008;
        pub const Exbibit: i32 = 34009;
        pub const Exabyte: i32 = 34010;
        pub const Exabit: i32 = 34011;
        pub const Pebibyte: i32 = 34012;
        pub const Pebibit: i32 = 34013;
        pub const Petabyte: i32 = 34014;
        pub const Petabit: i32 = 34015;
        pub const Tebibyte: i32 = 34016;
        pub const Tebibit: i32 = 34017;
        pub const Terabyte: i32 = 34018;
        pub const Terabit: i32 = 34019;
        pub const Gibibyte: i32 = 34020;
        pub const Gibibit: i32 = 34021;
        pub const Gigabyte: i32 = 34022;
        pub const Gigabit: i32 = 34023;
        pub const Mebibyte: i32 = 34024;
        pub const Mebibit: i32 = 34025;
        pub const Megabyte: i32 = 34026;
        pub const Megabit: i32 = 34027;
        pub const Kibibyte: i32 = 34028;
        pub const Kibibit: i32 = 34029;
        pub const Kilobyte: i32 = 34030;
        pub const Kilobit: i32 = 34031;
        pub const Byte: i32 = 34032;
        pub const Bit: i32 = 34033;
    };
};
