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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFormat object in C++ memory
    ///
    pub fn new() KFormat {
        return .{ .ptr = qtc.KFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFormat `
    ///
    pub fn new2(other: anytype) KFormat {
        comptime _ = @TypeOf(other)._is_KFormat;
        return .{ .ptr = qtc.KFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QLocale `
    ///
    pub fn new3(locale: anytype) KFormat {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.KFormat_new3(@ptrCast(locale.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFormat `
    ///
    /// ` other: KFormat `
    ///
    pub fn operatorAssign(self: KFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KFormat;
        qtc.KFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `formatByteSize` instead
    ///
    pub const FormatByteSize = formatByteSize;

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
    pub fn formatByteSize(self: KFormat, allocator: std.mem.Allocator, size: f64) []const u8 {
        var _str = qtc.KFormat_FormatByteSize(@ptrCast(self.ptr), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatByteSize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDuration` instead
    ///
    pub const FormatDuration = formatDuration;

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
    pub fn formatDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDecimalDuration` instead
    ///
    pub const FormatDecimalDuration = formatDecimalDuration;

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
    pub fn formatDecimalDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatDecimalDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDecimalDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatSpelloutDuration` instead
    ///
    pub const FormatSpelloutDuration = formatSpelloutDuration;

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
    pub fn formatSpelloutDuration(self: KFormat, allocator: std.mem.Allocator, msecs: u64) []const u8 {
        var _str = qtc.KFormat_FormatSpelloutDuration(@ptrCast(self.ptr), @bitCast(msecs));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatSpelloutDuration: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatRelativeDate` instead
    ///
    pub const FormatRelativeDate = formatRelativeDate;

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
    pub fn formatRelativeDate(self: KFormat, allocator: std.mem.Allocator, date: anytype, format: i32) []const u8 {
        comptime _ = @TypeOf(date)._is_QDate;
        var _str = qtc.KFormat_FormatRelativeDate(@ptrCast(self.ptr), @ptrCast(date.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatRelativeDate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatRelativeDateTime` instead
    ///
    pub const FormatRelativeDateTime = formatRelativeDateTime;

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
    pub fn formatRelativeDateTime(self: KFormat, allocator: std.mem.Allocator, dateTime: anytype, format: i32) []const u8 {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        var _str = qtc.KFormat_FormatRelativeDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatRelativeDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue` instead
    ///
    pub const FormatValue = formatValue;

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
    pub fn formatValue(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue2` instead
    ///
    pub const FormatValue2 = formatValue2;

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
    pub fn formatValue2(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue2(@ptrCast(self.ptr), @bitCast(value), unit_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue3` instead
    ///
    pub const FormatValue3 = formatValue3;

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
    pub fn formatValue3(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32, prefix: i32, dialect: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue3(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision), @bitCast(prefix), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDistance` instead
    ///
    pub const FormatDistance = formatDistance;

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
    pub fn formatDistance(self: KFormat, allocator: std.mem.Allocator, distance: f64) []const u8 {
        var _str = qtc.KFormat_FormatDistance(@ptrCast(self.ptr), @bitCast(distance));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDistance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatByteSize2` instead
    ///
    pub const FormatByteSize2 = formatByteSize2;

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
    pub fn formatByteSize2(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize2(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatByteSize2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatByteSize3` instead
    ///
    pub const FormatByteSize3 = formatByteSize3;

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
    pub fn formatByteSize3(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32, dialect: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize3(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatByteSize3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatByteSize4` instead
    ///
    pub const FormatByteSize4 = formatByteSize4;

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
    pub fn formatByteSize4(self: KFormat, allocator: std.mem.Allocator, size: f64, precision: i32, dialect: i32, units: i32) []const u8 {
        var _str = qtc.KFormat_FormatByteSize4(@ptrCast(self.ptr), @bitCast(size), @bitCast(precision), @bitCast(dialect), @bitCast(units));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatByteSize4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDuration2` instead
    ///
    pub const FormatDuration2 = formatDuration2;

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
    pub fn formatDuration2(self: KFormat, allocator: std.mem.Allocator, msecs: u64, options: i32) []const u8 {
        var _str = qtc.KFormat_FormatDuration2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDecimalDuration2` instead
    ///
    pub const FormatDecimalDuration2 = formatDecimalDuration2;

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
    pub fn formatDecimalDuration2(self: KFormat, allocator: std.mem.Allocator, msecs: u64, decimalPlaces: i32) []const u8 {
        var _str = qtc.KFormat_FormatDecimalDuration2(@ptrCast(self.ptr), @bitCast(msecs), @bitCast(decimalPlaces));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDecimalDuration2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue32` instead
    ///
    pub const FormatValue32 = formatValue32;

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
    pub fn formatValue32(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue32(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue4` instead
    ///
    pub const FormatValue4 = formatValue4;

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
    pub fn formatValue4(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32, prefix: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue4(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision), @bitCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue5` instead
    ///
    pub const FormatValue5 = formatValue5;

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
    pub fn formatValue5(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: i32, precision: i32, prefix: i32, dialect: i32) []const u8 {
        var _str = qtc.KFormat_FormatValue5(@ptrCast(self.ptr), @bitCast(value), @bitCast(unit), @bitCast(precision), @bitCast(prefix), @bitCast(dialect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue33` instead
    ///
    pub const FormatValue33 = formatValue33;

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
    pub fn formatValue33(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue33(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue33: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatValue42` instead
    ///
    pub const FormatValue42 = formatValue42;

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
    pub fn formatValue42(self: KFormat, allocator: std.mem.Allocator, value: f64, unit: []const u8, precision: i32, prefix: i32) []const u8 {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        var _str = qtc.KFormat_FormatValue42(@ptrCast(self.ptr), @bitCast(value), unit_str, @bitCast(precision), @bitCast(prefix));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatValue42: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatDistance2` instead
    ///
    pub const FormatDistance2 = formatDistance2;

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
    pub fn formatDistance2(self: KFormat, allocator: std.mem.Allocator, distance: f64, param2: i32) []const u8 {
        var _str = qtc.KFormat_FormatDistance2(@ptrCast(self.ptr), @bitCast(distance), @bitCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFormat.formatDistance2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kformat.html#dtor.KFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFormat `
    ///
    pub fn delete(self: KFormat) void {
        qtc.KFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kformat.html#public-types)
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
