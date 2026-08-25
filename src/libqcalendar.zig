const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDate = @import("libqt6").QDate;
const QDateTime = @import("libqt6").QDateTime;
const QLocale = @import("libqt6").QLocale;
const QTime = @import("libqt6").QTime;
const qcalendar_enums = enums;
const qlocale_enums = @import("libqlocale.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html)
pub const QCalendar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCalendar,

    pub const _is_QCalendar = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCalendar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar `
    ///
    pub fn new(other: anytype) QCalendar {
        comptime _ = @TypeOf(other)._is_QCalendar;
        return .{ .ptr = qtc.QCalendar_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCalendar object and invalidate the source QCalendar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar `
    ///
    pub fn new2(other: anytype) QCalendar {
        comptime _ = @TypeOf(other)._is_QCalendar;
        return .{ .ptr = qtc.QCalendar_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCalendar object in C++ memory
    ///
    pub fn new3() QCalendar {
        return .{ .ptr = qtc.QCalendar_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCalendar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` system: qcalendar_enums.System `
    ///
    pub fn new4(system: i32) QCalendar {
        return .{ .ptr = qtc.QCalendar_new4(@bitCast(system)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCalendar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new5(_name: []const u8) QCalendar {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QCalendar_new5(name_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCalendar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` id: QCalendar__SystemId `
    ///
    pub fn new6(id: anytype) QCalendar {
        comptime _ = @TypeOf(id)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar_new6(@ptrCast(id.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar `
    ///
    /// ` other: QCalendar `
    ///
    pub fn copyAssign(self: QCalendar, other: QCalendar) void {
        qtc.QCalendar_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar `
    ///
    /// ` other: QCalendar `
    ///
    pub fn moveAssign(self: QCalendar, other: QCalendar) void {
        qtc.QCalendar_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isValid(self: QCalendar) bool {
        return qtc.QCalendar_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `daysInMonth` instead
    ///
    pub const DaysInMonth = daysInMonth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` month: i32 `
    ///
    pub fn daysInMonth(self: QCalendar, month: i32) i32 {
        return qtc.QCalendar_DaysInMonth(@ptrCast(self.ptr), @bitCast(month));
    }

    /// ### DEPRECATED: Use `daysInYear` instead
    ///
    pub const DaysInYear = daysInYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn daysInYear(self: QCalendar, year: i32) i32 {
        return qtc.QCalendar_DaysInYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### DEPRECATED: Use `monthsInYear` instead
    ///
    pub const MonthsInYear = monthsInYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn monthsInYear(self: QCalendar, year: i32) i32 {
        return qtc.QCalendar_MonthsInYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### DEPRECATED: Use `isDateValid` instead
    ///
    pub const IsDateValid = isDateValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    /// ` month: i32 `
    ///
    /// ` day: i32 `
    ///
    pub fn isDateValid(self: QCalendar, year: i32, month: i32, day: i32) bool {
        return qtc.QCalendar_IsDateValid(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day));
    }

    /// ### DEPRECATED: Use `isLeapYear` instead
    ///
    pub const IsLeapYear = isLeapYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn isLeapYear(self: QCalendar, year: i32) bool {
        return qtc.QCalendar_IsLeapYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### DEPRECATED: Use `isGregorian` instead
    ///
    pub const IsGregorian = isGregorian;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isGregorian(self: QCalendar) bool {
        return qtc.QCalendar_IsGregorian(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLunar` instead
    ///
    pub const IsLunar = isLunar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isLunar(self: QCalendar) bool {
        return qtc.QCalendar_IsLunar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLuniSolar` instead
    ///
    pub const IsLuniSolar = isLuniSolar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isLuniSolar(self: QCalendar) bool {
        return qtc.QCalendar_IsLuniSolar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSolar` instead
    ///
    pub const IsSolar = isSolar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isSolar(self: QCalendar) bool {
        return qtc.QCalendar_IsSolar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProleptic` instead
    ///
    pub const IsProleptic = isProleptic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn isProleptic(self: QCalendar) bool {
        return qtc.QCalendar_IsProleptic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasYearZero` instead
    ///
    pub const HasYearZero = hasYearZero;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn hasYearZero(self: QCalendar) bool {
        return qtc.QCalendar_HasYearZero(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumDaysInMonth` instead
    ///
    pub const MaximumDaysInMonth = maximumDaysInMonth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn maximumDaysInMonth(self: QCalendar) i32 {
        return qtc.QCalendar_MaximumDaysInMonth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumDaysInMonth` instead
    ///
    pub const MinimumDaysInMonth = minimumDaysInMonth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn minimumDaysInMonth(self: QCalendar) i32 {
        return qtc.QCalendar_MinimumDaysInMonth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumMonthsInYear` instead
    ///
    pub const MaximumMonthsInYear = maximumMonthsInYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn maximumMonthsInYear(self: QCalendar) i32 {
        return qtc.QCalendar_MaximumMonthsInYear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QCalendar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCalendar_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dateFromParts` instead
    ///
    pub const DateFromParts = dateFromParts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    /// ` month: i32 `
    ///
    /// ` day: i32 `
    ///
    pub fn dateFromParts(self: QCalendar, year: i32, month: i32, day: i32) QDate {
        return .{ .ptr = qtc.QCalendar_DateFromParts(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day)) };
    }

    /// ### DEPRECATED: Use `dateFromParts2` instead
    ///
    pub const DateFromParts2 = dateFromParts2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` parts: QCalendar__YearMonthDay `
    ///
    pub fn dateFromParts2(self: QCalendar, parts: anytype) QDate {
        comptime _ = @TypeOf(parts)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar_DateFromParts2(@ptrCast(self.ptr), @ptrCast(parts.ptr)) };
    }

    /// ### DEPRECATED: Use `matchCenturyToWeekday` instead
    ///
    pub const MatchCenturyToWeekday = matchCenturyToWeekday;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#matchCenturyToWeekday)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` parts: QCalendar__YearMonthDay `
    ///
    /// ` dow: i32 `
    ///
    pub fn matchCenturyToWeekday(self: QCalendar, parts: anytype, dow: i32) QDate {
        comptime _ = @TypeOf(parts)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar_MatchCenturyToWeekday(@ptrCast(self.ptr), @ptrCast(parts.ptr), @bitCast(dow)) };
    }

    /// ### DEPRECATED: Use `partsFromDate` instead
    ///
    pub const PartsFromDate = partsFromDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` date: QDate `
    ///
    pub fn partsFromDate(self: QCalendar, date: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(date)._is_QDate;
        return .{ .ptr = qtc.QCalendar_PartsFromDate(@ptrCast(self.ptr), @ptrCast(date.ptr)) };
    }

    /// ### DEPRECATED: Use `dayOfWeek` instead
    ///
    pub const DayOfWeek = dayOfWeek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` date: QDate `
    ///
    pub fn dayOfWeek(self: QCalendar, date: anytype) i32 {
        comptime _ = @TypeOf(date)._is_QDate;
        return qtc.QCalendar_DayOfWeek(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `monthName` instead
    ///
    pub const MonthName = monthName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    pub fn monthName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.monthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneMonthName` instead
    ///
    pub const StandaloneMonthName = standaloneMonthName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    pub fn standaloneMonthName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.standaloneMonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `weekDayName` instead
    ///
    pub const WeekDayName = weekDayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` day: i32 `
    ///
    pub fn weekDayName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_WeekDayName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.weekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneWeekDayName` instead
    ///
    pub const StandaloneWeekDayName = standaloneWeekDayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` day: i32 `
    ///
    pub fn standaloneWeekDayName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneWeekDayName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.standaloneWeekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dateTimeToString` instead
    ///
    pub const DateTimeToString = dateTimeToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dateTimeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    /// ` datetime: QDateTime `
    ///
    /// ` dateOnly: QDate `
    ///
    /// ` timeOnly: QTime `
    ///
    /// ` locale: QLocale `
    ///
    pub fn dateTimeToString(self: QCalendar, allocator: std.mem.Allocator, format: []const u8, datetime: anytype, dateOnly: anytype, timeOnly: anytype, locale: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(datetime)._is_QDateTime;
        comptime _ = @TypeOf(dateOnly)._is_QDate;
        comptime _ = @TypeOf(timeOnly)._is_QTime;
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_DateTimeToString(@ptrCast(self.ptr), format_str, @ptrCast(datetime.ptr), @ptrCast(dateOnly.ptr), @ptrCast(timeOnly.ptr), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.dateTimeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableCalendars` instead
    ///
    pub const AvailableCalendars = availableCalendars;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableCalendars(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCalendar_AvailableCalendars();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCalendar.availableCalendars: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCalendar.availableCalendars: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `daysInMonth2` instead
    ///
    pub const DaysInMonth2 = daysInMonth2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` month: i32 `
    ///
    /// ` year: i32 `
    ///
    pub fn daysInMonth2(self: QCalendar, month: i32, year: i32) i32 {
        return qtc.QCalendar_DaysInMonth2(@ptrCast(self.ptr), @bitCast(month), @bitCast(year));
    }

    /// ### DEPRECATED: Use `monthName3` instead
    ///
    pub const MonthName3 = monthName3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    /// ` year: i32 `
    ///
    pub fn monthName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.monthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `monthName4` instead
    ///
    pub const MonthName4 = monthName4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    /// ` year: i32 `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn monthName4(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName4(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.monthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneMonthName3` instead
    ///
    pub const StandaloneMonthName3 = standaloneMonthName3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    /// ` year: i32 `
    ///
    pub fn standaloneMonthName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.standaloneMonthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneMonthName4` instead
    ///
    pub const StandaloneMonthName4 = standaloneMonthName4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` month: i32 `
    ///
    /// ` year: i32 `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn standaloneMonthName4(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName4(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.standaloneMonthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `weekDayName3` instead
    ///
    pub const WeekDayName3 = weekDayName3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` day: i32 `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn weekDayName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_WeekDayName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.weekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneWeekDayName3` instead
    ///
    pub const StandaloneWeekDayName3 = standaloneWeekDayName3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` day: i32 `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn standaloneWeekDayName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneWeekDayName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCalendar.standaloneWeekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dtor.QCalendar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar `
    ///
    pub fn delete(self: QCalendar) void {
        qtc.QCalendar_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html)
pub const QCalendar__YearMonthDay = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCalendar__YearMonthDay,

    pub const _is_QCalendar__YearMonthDay = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCalendar::YearMonthDay object in C++ memory
    ///
    pub fn new() QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCalendar::YearMonthDay object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn new2(other: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(other)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCalendar::YearMonthDay object and invalidate the source QCalendar::YearMonthDay object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn new3(other: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(other)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCalendar::YearMonthDay object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    pub fn new4(y: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new4(@bitCast(y)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCalendar::YearMonthDay object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    pub fn new5(y: i32, m: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new5(@bitCast(y), @bitCast(m)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCalendar::YearMonthDay object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    pub fn new6(y: i32, m: i32, d: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new6(@bitCast(y), @bitCast(m), @bitCast(d)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn copyAssign(self: QCalendar__YearMonthDay, other: QCalendar__YearMonthDay) void {
        qtc.QCalendar__YearMonthDay_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn moveAssign(self: QCalendar__YearMonthDay, other: QCalendar__YearMonthDay) void {
        qtc.QCalendar__YearMonthDay_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn isValid(self: QCalendar__YearMonthDay) bool {
        return qtc.QCalendar__YearMonthDay_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `year` instead
    ///
    pub const Year = year;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#year-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn year(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Year(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYear` instead
    ///
    pub const SetYear = setYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#year-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` _year: i32 `
    ///
    pub fn setYear(self: QCalendar__YearMonthDay, _year: i32) void {
        qtc.QCalendar__YearMonthDay_SetYear(@ptrCast(self.ptr), @bitCast(_year));
    }

    /// ### DEPRECATED: Use `month` instead
    ///
    pub const Month = month;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#month-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn month(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Month(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMonth` instead
    ///
    pub const SetMonth = setMonth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#month-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` _month: i32 `
    ///
    pub fn setMonth(self: QCalendar__YearMonthDay, _month: i32) void {
        qtc.QCalendar__YearMonthDay_SetMonth(@ptrCast(self.ptr), @bitCast(_month));
    }

    /// ### DEPRECATED: Use `day` instead
    ///
    pub const Day = day;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#day-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn day(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Day(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDay` instead
    ///
    pub const SetDay = setDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#day-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` _day: i32 `
    ///
    pub fn setDay(self: QCalendar__YearMonthDay, _day: i32) void {
        qtc.QCalendar__YearMonthDay_SetDay(@ptrCast(self.ptr), @bitCast(_day));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn delete(self: QCalendar__YearMonthDay) void {
        qtc.QCalendar__YearMonthDay_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html)
pub const QCalendar__SystemId = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCalendar__SystemId,

    pub const _is_QCalendar__SystemId = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCalendar::SystemId object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn new(other: anytype) QCalendar__SystemId {
        comptime _ = @TypeOf(other)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar__SystemId_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCalendar::SystemId object and invalidate the source QCalendar::SystemId object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn new2(other: anytype) QCalendar__SystemId {
        comptime _ = @TypeOf(other)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar__SystemId_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCalendar::SystemId object in C++ memory
    ///
    pub fn new3() QCalendar__SystemId {
        return .{ .ptr = qtc.QCalendar__SystemId_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn copyAssign(self: QCalendar__SystemId, other: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn moveAssign(self: QCalendar__SystemId, other: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn index(self: QCalendar__SystemId) usize {
        return qtc.QCalendar__SystemId_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn isValid(self: QCalendar__SystemId) bool {
        return qtc.QCalendar__SystemId_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn delete(self: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#public-types)
pub const enums = struct {
    pub const QCalendar = enum {
        pub const Unspecified: i32 = -2147483648;
    };

    pub const System = enum {
        pub const Gregorian: i32 = 0;
        pub const Julian: i32 = 8;
        pub const Milankovic: i32 = 9;
        pub const Jalali: i32 = 10;
        pub const IslamicCivil: i32 = 11;
        pub const Last: i32 = 11;
        pub const User: i32 = -1;
    };
};
