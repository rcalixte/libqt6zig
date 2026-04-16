const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDate = @import("libqt6").QDate;
const QLocale = @import("libqt6").QLocale;
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

    /// New constructs a new QCalendar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar `
    ///
    pub fn New(other: anytype) QCalendar {
        comptime _ = @TypeOf(other)._is_QCalendar;
        return .{ .ptr = qtc.QCalendar_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCalendar object and invalidates the source QCalendar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar `
    ///
    pub fn New2(other: anytype) QCalendar {
        comptime _ = @TypeOf(other)._is_QCalendar;
        return .{ .ptr = qtc.QCalendar_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QCalendar object.
    ///
    pub fn New3() QCalendar {
        return .{ .ptr = qtc.QCalendar_new3() };
    }

    /// New4 constructs a new QCalendar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` system: qcalendar_enums.System `
    ///
    pub fn New4(system: i32) QCalendar {
        return .{ .ptr = qtc.QCalendar_new4(@bitCast(system)) };
    }

    /// New5 constructs a new QCalendar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New5(name: []const u8) QCalendar {
        return .{ .ptr = qtc.QCalendar_new5(name.ptr) };
    }

    /// New6 constructs a new QCalendar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: QCalendar__SystemId `
    ///
    pub fn New6(id: anytype) QCalendar {
        comptime _ = @TypeOf(id)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar_new6(@ptrCast(id.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar `
    ///
    /// ` other: QCalendar `
    ///
    pub fn CopyAssign(self: QCalendar, other: QCalendar) void {
        qtc.QCalendar_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar `
    ///
    /// ` other: QCalendar `
    ///
    pub fn MoveAssign(self: QCalendar, other: QCalendar) void {
        qtc.QCalendar_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsValid(self: QCalendar) bool {
        return qtc.QCalendar_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` month: i32 `
    ///
    pub fn DaysInMonth(self: QCalendar, month: i32) i32 {
        return qtc.QCalendar_DaysInMonth(@ptrCast(self.ptr), @bitCast(month));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn DaysInYear(self: QCalendar, year: i32) i32 {
        return qtc.QCalendar_DaysInYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn MonthsInYear(self: QCalendar, year: i32) i32 {
        return qtc.QCalendar_MonthsInYear(@ptrCast(self.ptr), @bitCast(year));
    }

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
    pub fn IsDateValid(self: QCalendar, year: i32, month: i32, day: i32) bool {
        return qtc.QCalendar_IsDateValid(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` year: i32 `
    ///
    pub fn IsLeapYear(self: QCalendar, year: i32) bool {
        return qtc.QCalendar_IsLeapYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsGregorian(self: QCalendar) bool {
        return qtc.QCalendar_IsGregorian(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsLunar(self: QCalendar) bool {
        return qtc.QCalendar_IsLunar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsLuniSolar(self: QCalendar) bool {
        return qtc.QCalendar_IsLuniSolar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsSolar(self: QCalendar) bool {
        return qtc.QCalendar_IsSolar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn IsProleptic(self: QCalendar) bool {
        return qtc.QCalendar_IsProleptic(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn HasYearZero(self: QCalendar) bool {
        return qtc.QCalendar_HasYearZero(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn MaximumDaysInMonth(self: QCalendar) i32 {
        return qtc.QCalendar_MaximumDaysInMonth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn MinimumDaysInMonth(self: QCalendar) i32 {
        return qtc.QCalendar_MinimumDaysInMonth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    pub fn MaximumMonthsInYear(self: QCalendar) i32 {
        return qtc.QCalendar_MaximumMonthsInYear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QCalendar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCalendar_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn DateFromParts(self: QCalendar, year: i32, month: i32, day: i32) QDate {
        return .{ .ptr = qtc.QCalendar_DateFromParts(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` parts: QCalendar__YearMonthDay `
    ///
    pub fn DateFromParts2(self: QCalendar, parts: anytype) QDate {
        comptime _ = @TypeOf(parts)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar_DateFromParts2(@ptrCast(self.ptr), @ptrCast(parts.ptr)) };
    }

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
    pub fn MatchCenturyToWeekday(self: QCalendar, parts: anytype, dow: i32) QDate {
        comptime _ = @TypeOf(parts)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar_MatchCenturyToWeekday(@ptrCast(self.ptr), @ptrCast(parts.ptr), @bitCast(dow)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` date: QDate `
    ///
    pub fn PartsFromDate(self: QCalendar, date: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(date)._is_QDate;
        return .{ .ptr = qtc.QCalendar_PartsFromDate(@ptrCast(self.ptr), @ptrCast(date.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar `
    ///
    /// ` date: QDate `
    ///
    pub fn DayOfWeek(self: QCalendar, date: anytype) i32 {
        comptime _ = @TypeOf(date)._is_QDate;
        return qtc.QCalendar_DayOfWeek(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn MonthName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn StandaloneMonthName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WeekDayName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_WeekDayName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn StandaloneWeekDayName(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneWeekDayName(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableCalendars(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCalendar_AvailableCalendars();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcalendar.AvailableCalendars: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcalendar.AvailableCalendars: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn DaysInMonth2(self: QCalendar, month: i32, year: i32) i32 {
        return qtc.QCalendar_DaysInMonth2(@ptrCast(self.ptr), @bitCast(month), @bitCast(year));
    }

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
    pub fn MonthName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn MonthName4(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_MonthName4(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn StandaloneMonthName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn StandaloneMonthName4(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, month: i32, year: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneMonthName4(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(month), @bitCast(year), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WeekDayName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_WeekDayName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn StandaloneWeekDayName3(self: QCalendar, allocator: std.mem.Allocator, locale: anytype, day: i32, format: i32) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QCalendar_StandaloneWeekDayName3(@ptrCast(self.ptr), @ptrCast(locale.ptr), @bitCast(day), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#dtor.QCalendar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar `
    ///
    pub fn Delete(self: QCalendar) void {
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

    /// New constructs a new QCalendar::YearMonthDay object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn New(other: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(other)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn New2(other: anytype) QCalendar__YearMonthDay {
        comptime _ = @TypeOf(other)._is_QCalendar__YearMonthDay;
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QCalendar::YearMonthDay object.
    ///
    pub fn New3() QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new3() };
    }

    /// New4 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    pub fn New4(y: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new4(@bitCast(y)) };
    }

    /// New5 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    pub fn New5(y: i32, m: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new5(@bitCast(y), @bitCast(m)) };
    }

    /// New6 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    pub fn New6(y: i32, m: i32, d: i32) QCalendar__YearMonthDay {
        return .{ .ptr = qtc.QCalendar__YearMonthDay_new6(@bitCast(y), @bitCast(m), @bitCast(d)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn CopyAssign(self: QCalendar__YearMonthDay, other: QCalendar__YearMonthDay) void {
        qtc.QCalendar__YearMonthDay_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` other: QCalendar__YearMonthDay `
    ///
    pub fn MoveAssign(self: QCalendar__YearMonthDay, other: QCalendar__YearMonthDay) void {
        qtc.QCalendar__YearMonthDay_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn IsValid(self: QCalendar__YearMonthDay) bool {
        return qtc.QCalendar__YearMonthDay_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#year-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn Year(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Year(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#year-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` year: i32 `
    ///
    pub fn SetYear(self: QCalendar__YearMonthDay, year: i32) void {
        qtc.QCalendar__YearMonthDay_SetYear(@ptrCast(self.ptr), @bitCast(year));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#month-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn Month(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Month(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#month-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` month: i32 `
    ///
    pub fn SetMonth(self: QCalendar__YearMonthDay, month: i32) void {
        qtc.QCalendar__YearMonthDay_SetMonth(@ptrCast(self.ptr), @bitCast(month));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#day-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn Day(self: QCalendar__YearMonthDay) i32 {
        return qtc.QCalendar__YearMonthDay_Day(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#day-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    /// ` day: i32 `
    ///
    pub fn SetDay(self: QCalendar__YearMonthDay, day: i32) void {
        qtc.QCalendar__YearMonthDay_SetDay(@ptrCast(self.ptr), @bitCast(day));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar__YearMonthDay `
    ///
    pub fn Delete(self: QCalendar__YearMonthDay) void {
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

    /// New constructs a new QCalendar::SystemId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn New(other: anytype) QCalendar__SystemId {
        comptime _ = @TypeOf(other)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar__SystemId_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn New2(other: anytype) QCalendar__SystemId {
        comptime _ = @TypeOf(other)._is_QCalendar__SystemId;
        return .{ .ptr = qtc.QCalendar__SystemId_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QCalendar::SystemId object.
    ///
    pub fn New3() QCalendar__SystemId {
        return .{ .ptr = qtc.QCalendar__SystemId_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn CopyAssign(self: QCalendar__SystemId, other: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    /// ` other: QCalendar__SystemId `
    ///
    pub fn MoveAssign(self: QCalendar__SystemId, other: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn Index(self: QCalendar__SystemId) usize {
        return qtc.QCalendar__SystemId_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar-systemid.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn IsValid(self: QCalendar__SystemId) bool {
        return qtc.QCalendar__SystemId_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendar__SystemId `
    ///
    pub fn Delete(self: QCalendar__SystemId) void {
        qtc.QCalendar__SystemId_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendar.html#public-types)
pub const enums = struct {
    pub const QCalendar = enum(i32) {
        pub const Unspecified: i32 = -2147483648;
    };

    pub const System = enum(i32) {
        pub const Gregorian: i32 = 0;
        pub const Julian: i32 = 8;
        pub const Milankovic: i32 = 9;
        pub const Jalali: i32 = 10;
        pub const IslamicCivil: i32 = 11;
        pub const Last: i32 = 11;
        pub const User: i32 = -1;
    };
};
