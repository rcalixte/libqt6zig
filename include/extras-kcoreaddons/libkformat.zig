const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDate = @import("libqt6").QDate;
const QDateTime = @import("libqt6").QDateTime;
const QLocale = @import("libqt6").QLocale;
const kformat_enums = enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kformat.html)
pub const KFormat = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFormat,

    pub const _is_KFormat = {};

    /// New constructs a new KFormat object.
    ///
    pub fn New() KFormat {
        return .{ .ptr = qtc.KFormat_new() };
    }

    /// New2 constructs a new KFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFormat `
    ///
    pub fn New2(other: anytype) KFormat {
        comptime _ = @TypeOf(other)._is_KFormat;
        return .{ .ptr = qtc.KFormat_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QLocale `
    ///
    pub fn New3(locale: anytype) KFormat {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.KFormat_new3(@ptrCast(locale.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` other: KFormat `
    ///
    pub fn OperatorAssign(self: KFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFormat;
        qtc.KFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: f64 `
    ///
    pub fn FormatByteSize(self: KFormat, allocator: std.mem.Allocator, size: f64) []const u8 {
        var _str = qtc.KFormat_FormatByteSize(@ptrCast(self.ptr), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` msecs: u64 `
    ///
    pub fn FormatDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDecimalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` msecs: u64 `
    ///
    pub fn FormatDecimalDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatDecimalDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDecimalDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatSpelloutDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` msecs: u64 `
    ///
    pub fn FormatSpelloutDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatSpelloutDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatSpelloutDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatRelativeDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` date: QDate `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn FormatRelativeDate(self: KFormat, allocator: std.mem.Allocator, date: anytype, format: i32) []const u8 {
        comptime _ = @TypeOf(date)._is_QDate;
        var _str = qtc.KFormat_FormatRelativeDate(@ptrCast(self.ptr), @ptrCast(date.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatRelativeDate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatRelativeDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dateTime: QDateTime `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn FormatRelativeDateTime(self: KFormat, allocator: std.mem.Allocator, dateTime: anytype, format: i32) []const u8 {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        var _str = qtc.KFormat_FormatRelativeDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatRelativeDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: kformat_enums.Unit `
    ///
    pub fn FormatValue(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn FormatValue2(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue2(@ptrCast(self.ptr), @bitCast(value), unit_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: []const u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` prefix: kformat_enums.UnitPrefix `
    ///
    /// ` dialect: kformat_enums.BinaryUnitDialect `
    ///
    pub fn FormatValue3(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32, prefix: i32, dialect: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue3(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision), @bitCast(prefix), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` distance: f64 `
    ///
    pub fn FormatDistance(self: KFormat, allocator: std.mem.Allocator, distance: f64) []const u8 {
        var _str = qtc.KFormat_FormatDistance(@ptrCast(self.ptr), @bitCast(distance));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDistance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: f64 `
    ///
    /// ` precision: i32 `
    ///
    pub fn FormatByteSize2(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize2(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: f64 `
    ///
    /// ` precision: i32 `
    ///
    /// ` dialect: kformat_enums.BinaryUnitDialect `
    ///
    pub fn FormatByteSize3(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32, dialect: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize3(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: f64 `
    ///
    /// ` precision: i32 `
    ///
    /// ` dialect: kformat_enums.BinaryUnitDialect `
    ///
    /// ` units: kformat_enums.BinarySizeUnits `
    ///
    pub fn FormatByteSize4(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32, dialect: i32, units: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize4(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision), @bitCast(dialect), @bitCast(units));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatByteSize4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` msecs: u64 `
    ///
    /// ` options: flag of kformat_enums.DurationFormatOption `
    ///
    pub fn FormatDuration2(self: KFormat, allocator: std.mem.Allocator, msecs: u64, options: i32) []const u8 {
        var _str = qtc.KFormat_FormatDuration2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDecimalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` msecs: u64 `
    ///
    /// ` decimalPlaces: i32 `
    ///
    pub fn FormatDecimalDuration2(self: KFormat, allocator: std.mem.Allocator, msecs: u64, decimalPlaces: i32) []const u8 {
        var _str = qtc.KFormat_FormatDecimalDuration2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(decimalPlaces));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDecimalDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: kformat_enums.Unit `
    ///
    /// ` precision: i32 `
    ///
    pub fn FormatValue32(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue32(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: kformat_enums.Unit `
    ///
    /// ` precision: i32 `
    ///
    /// ` prefix: kformat_enums.UnitPrefix `
    ///
    pub fn FormatValue4(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32, prefix: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue4(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision), @bitCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: kformat_enums.Unit `
    ///
    /// ` precision: i32 `
    ///
    /// ` prefix: kformat_enums.UnitPrefix `
    ///
    /// ` dialect: kformat_enums.BinaryUnitDialect `
    ///
    pub fn FormatValue5(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32, prefix: i32, dialect: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue5(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision), @bitCast(prefix), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: []const u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn FormatValue33(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue33(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue33: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` unit: []const u8 `
    ///
    /// ` precision: i32 `
    ///
    /// ` prefix: kformat_enums.UnitPrefix `
    ///
    pub fn FormatValue42(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32, prefix: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue42(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision), @bitCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatValue42: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kformat.html#formatDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` distance: f64 `
    ///
    /// ` param2: flag of kformat_enums.DistanceFormatOption `
    ///
    pub fn FormatDistance2(self: KFormat, allocator: std.mem.Allocator, distance: f64, param2: i32) []const u8 {
        var _str = qtc.KFormat_FormatDistance2(@ptrCast(self.ptr), @bitCast(distance), @bitCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kformat.FormatDistance2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kformat.html#dtor.KFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFormat `
    ///
    pub fn Delete(self: KFormat) void {
        qtc.KFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kformat.html#public-types)
pub const enums = struct {
    pub const BinarySizeUnits = enum(i32) {
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

    pub const Unit = enum(i32) {
        pub const Other: i32 = 0;
        pub const Bit: i32 = 1;
        pub const Byte: i32 = 2;
        pub const Meter: i32 = 3;
        pub const Hertz: i32 = 4;
    };

    pub const UnitPrefix = enum(i32) {
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

    pub const BinaryUnitDialect = enum(i32) {
        pub const DefaultBinaryDialect: i32 = -1;
        pub const IECBinaryDialect: i32 = 0;
        pub const JEDECBinaryDialect: i32 = 1;
        pub const MetricBinaryDialect: i32 = 2;
        pub const LastBinaryDialect: i32 = 2;
    };

    pub const DurationFormatOption = enum(i32) {
        pub const DefaultDuration: i32 = 0;
        pub const InitialDuration: i32 = 1;
        pub const ShowMilliseconds: i32 = 2;
        pub const HideSeconds: i32 = 4;
        pub const FoldHours: i32 = 8;
        pub const AbbreviatedDuration: i32 = 16;
    };

    pub const DistanceFormatOption = enum(i32) {
        pub const LocaleDistanceUnits: i32 = 0;
        pub const MetricDistanceUnits: i32 = 1;
    };
};
