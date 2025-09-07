const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kformat_enums = enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const std = @import("std");

/// https://api.kde.org/kformat.html
pub const kformat = struct {
    /// New constructs a new KFormat object.
    ///
    ///
    pub fn New() QtC.KFormat {
        return qtc.KFormat_new();
    }

    /// New2 constructs a new KFormat object.
    ///
    /// ``` other: QtC.KFormat ```
    pub fn New2(other: ?*anyopaque) QtC.KFormat {
        return qtc.KFormat_new2(@ptrCast(other));
    }

    /// New3 constructs a new KFormat object.
    ///
    /// ``` locale: QtC.QLocale ```
    pub fn New3(locale: ?*anyopaque) QtC.KFormat {
        return qtc.KFormat_new3(@ptrCast(locale));
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#operator-eq)
    ///
    /// ``` self: QtC.KFormat, other: QtC.KFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ``` self: QtC.KFormat, size: f64, allocator: std.mem.Allocator ```
    pub fn FormatByteSize(self: ?*anyopaque, size: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatByteSize(@ptrCast(self), @floatCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDuration)
    ///
    /// ``` self: QtC.KFormat, msecs: u64, allocator: std.mem.Allocator ```
    pub fn FormatDuration(self: ?*anyopaque, msecs: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDuration(@ptrCast(self), @intCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDecimalDuration)
    ///
    /// ``` self: QtC.KFormat, msecs: u64, allocator: std.mem.Allocator ```
    pub fn FormatDecimalDuration(self: ?*anyopaque, msecs: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDecimalDuration(@ptrCast(self), @intCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDecimalDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatSpelloutDuration)
    ///
    /// ``` self: QtC.KFormat, msecs: u64, allocator: std.mem.Allocator ```
    pub fn FormatSpelloutDuration(self: ?*anyopaque, msecs: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatSpelloutDuration(@ptrCast(self), @intCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatSpelloutDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatRelativeDate)
    ///
    /// ``` self: QtC.KFormat, date: QtC.QDate, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn FormatRelativeDate(self: ?*anyopaque, date: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatRelativeDate(@ptrCast(self), @ptrCast(date), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatRelativeDate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatRelativeDateTime)
    ///
    /// ``` self: QtC.KFormat, dateTime: QtC.QDateTime, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn FormatRelativeDateTime(self: ?*anyopaque, dateTime: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatRelativeDateTime(@ptrCast(self), @ptrCast(dateTime), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatRelativeDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: kformat_enums.Unit, allocator: std.mem.Allocator ```
    pub fn FormatValue(self: ?*anyopaque, value: f64, unit: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatValue(@ptrCast(self), @floatCast(value), @intCast(unit));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: []const u8, allocator: std.mem.Allocator ```
    pub fn FormatValue2(self: ?*anyopaque, value: f64, unit: []const u8, allocator: std.mem.Allocator) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        const _str = qtc.KFormat_FormatValue2(@ptrCast(self), @floatCast(value), unit_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: []const u8, precision: i32, prefix: kformat_enums.UnitPrefix, dialect: kformat_enums.BinaryUnitDialect, allocator: std.mem.Allocator ```
    pub fn FormatValue3(self: ?*anyopaque, value: f64, unit: []const u8, precision: i32, prefix: i32, dialect: i32, allocator: std.mem.Allocator) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        const _str = qtc.KFormat_FormatValue3(@ptrCast(self), @floatCast(value), unit_str, @intCast(precision), @intCast(prefix), @intCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDistance)
    ///
    /// ``` self: QtC.KFormat, distance: f64, allocator: std.mem.Allocator ```
    pub fn FormatDistance(self: ?*anyopaque, distance: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDistance(@ptrCast(self), @floatCast(distance));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDistance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ``` self: QtC.KFormat, size: f64, precision: i32, allocator: std.mem.Allocator ```
    pub fn FormatByteSize2(self: ?*anyopaque, size: f64, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatByteSize2(@ptrCast(self), @floatCast(size), @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ``` self: QtC.KFormat, size: f64, precision: i32, dialect: kformat_enums.BinaryUnitDialect, allocator: std.mem.Allocator ```
    pub fn FormatByteSize3(self: ?*anyopaque, size: f64, precision: i32, dialect: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatByteSize3(@ptrCast(self), @floatCast(size), @intCast(precision), @intCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ``` self: QtC.KFormat, size: f64, precision: i32, dialect: kformat_enums.BinaryUnitDialect, units: kformat_enums.BinarySizeUnits, allocator: std.mem.Allocator ```
    pub fn FormatByteSize4(self: ?*anyopaque, size: f64, precision: i32, dialect: i32, units: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatByteSize4(@ptrCast(self), @floatCast(size), @intCast(precision), @intCast(dialect), @intCast(units));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDuration)
    ///
    /// ``` self: QtC.KFormat, msecs: u64, options: flag of kformat_enums.DurationFormatOption, allocator: std.mem.Allocator ```
    pub fn FormatDuration2(self: ?*anyopaque, msecs: u64, options: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDuration2(@ptrCast(self), @intCast(msecs), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDecimalDuration)
    ///
    /// ``` self: QtC.KFormat, msecs: u64, decimalPlaces: i32, allocator: std.mem.Allocator ```
    pub fn FormatDecimalDuration2(self: ?*anyopaque, msecs: u64, decimalPlaces: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDecimalDuration2(@ptrCast(self), @intCast(msecs), @intCast(decimalPlaces));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDecimalDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: kformat_enums.Unit, precision: i32, allocator: std.mem.Allocator ```
    pub fn FormatValue32(self: ?*anyopaque, value: f64, unit: i32, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatValue32(@ptrCast(self), @floatCast(value), @intCast(unit), @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: kformat_enums.Unit, precision: i32, prefix: kformat_enums.UnitPrefix, allocator: std.mem.Allocator ```
    pub fn FormatValue4(self: ?*anyopaque, value: f64, unit: i32, precision: i32, prefix: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatValue4(@ptrCast(self), @floatCast(value), @intCast(unit), @intCast(precision), @intCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: kformat_enums.Unit, precision: i32, prefix: kformat_enums.UnitPrefix, dialect: kformat_enums.BinaryUnitDialect, allocator: std.mem.Allocator ```
    pub fn FormatValue5(self: ?*anyopaque, value: f64, unit: i32, precision: i32, prefix: i32, dialect: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatValue5(@ptrCast(self), @floatCast(value), @intCast(unit), @intCast(precision), @intCast(prefix), @intCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: []const u8, precision: i32, allocator: std.mem.Allocator ```
    pub fn FormatValue33(self: ?*anyopaque, value: f64, unit: []const u8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        const _str = qtc.KFormat_FormatValue33(@ptrCast(self), @floatCast(value), unit_str, @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue33: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ``` self: QtC.KFormat, value: f64, unit: []const u8, precision: i32, prefix: kformat_enums.UnitPrefix, allocator: std.mem.Allocator ```
    pub fn FormatValue42(self: ?*anyopaque, value: f64, unit: []const u8, precision: i32, prefix: i32, allocator: std.mem.Allocator) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        const _str = qtc.KFormat_FormatValue42(@ptrCast(self), @floatCast(value), unit_str, @intCast(precision), @intCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue42: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#formatDistance)
    ///
    /// ``` self: QtC.KFormat, distance: f64, param2: flag of kformat_enums.DistanceFormatOption, allocator: std.mem.Allocator ```
    pub fn FormatDistance2(self: ?*anyopaque, distance: f64, param2: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFormat_FormatDistance2(@ptrCast(self), @floatCast(distance), @intCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDistance2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kformat.html#dtor.KFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFormat_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kformat.html#types
pub const enums = struct {
    pub const BinarySizeUnits = enum {
        pub const DefaultBinaryUnits: i32 = -1;
        pub const UnitByte: i32 = 0;
        pub const UnitKiloByte: i32 = 1;
        pub const UnitMegaByte: i32 = 2;
        pub const UnitGigaByte: i32 = 3;
        pub const UnitTeraByte: i32 = 4;
        pub const UnitPetaByte: i32 = 5;
        pub const UnitExaByte: i32 = 6;
        pub const UnitZettaByte: i32 = 7;
        pub const UnitYottaByte: i32 = 8;
        pub const UnitLastUnit: i32 = 8;
    };

    pub const Unit = enum {
        pub const Other: i32 = 0;
        pub const Bit: i32 = 1;
        pub const Byte: i32 = 2;
        pub const Meter: i32 = 3;
        pub const Hertz: i32 = 4;
    };

    pub const UnitPrefix = enum {
        pub const AutoAdjust: i32 = -128;
        pub const Yocto: i32 = 0;
        pub const Zepto: i32 = 1;
        pub const Atto: i32 = 2;
        pub const Femto: i32 = 3;
        pub const Pico: i32 = 4;
        pub const Nano: i32 = 5;
        pub const Micro: i32 = 6;
        pub const Milli: i32 = 7;
        pub const Centi: i32 = 8;
        pub const Deci: i32 = 9;
        pub const Unity: i32 = 10;
        pub const Deca: i32 = 11;
        pub const Hecto: i32 = 12;
        pub const Kilo: i32 = 13;
        pub const Mega: i32 = 14;
        pub const Giga: i32 = 15;
        pub const Tera: i32 = 16;
        pub const Peta: i32 = 17;
        pub const Exa: i32 = 18;
        pub const Zetta: i32 = 19;
        pub const Yotta: i32 = 20;
    };

    pub const BinaryUnitDialect = enum {
        pub const DefaultBinaryDialect: i32 = -1;
        pub const IECBinaryDialect: i32 = 0;
        pub const JEDECBinaryDialect: i32 = 1;
        pub const MetricBinaryDialect: i32 = 2;
        pub const LastBinaryDialect: i32 = 2;
    };

    pub const DurationFormatOption = enum {
        pub const DefaultDuration: i32 = 0;
        pub const InitialDuration: i32 = 1;
        pub const ShowMilliseconds: i32 = 2;
        pub const HideSeconds: i32 = 4;
        pub const FoldHours: i32 = 8;
        pub const AbbreviatedDuration: i32 = 16;
    };

    pub const DistanceFormatOption = enum {
        pub const LocaleDistanceUnits: i32 = 0;
        pub const MetricDistanceUnits: i32 = 1;
    };
};
