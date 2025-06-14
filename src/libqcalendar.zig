const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcalendar_enums = enums;
const qlocale_enums = @import("libqlocale.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcalendar.html
pub const qcalendar = struct {
    /// New constructs a new QCalendar object.
    ///
    /// ``` other: QtC.QCalendar ```
    pub fn New(other: ?*anyopaque) QtC.QCalendar {
        return qtc.QCalendar_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar object and invalidates the source QCalendar object.
    ///
    /// ``` other: QtC.QCalendar ```
    pub fn New2(other: ?*anyopaque) QtC.QCalendar {
        return qtc.QCalendar_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar object.
    ///
    ///
    pub fn New3() QtC.QCalendar {
        return qtc.QCalendar_new3();
    }

    /// New4 constructs a new QCalendar object.
    ///
    /// ``` system: qcalendar_enums.System ```
    pub fn New4(system: i64) QtC.QCalendar {
        return qtc.QCalendar_new4(@intCast(system));
    }

    /// New5 constructs a new QCalendar object.
    ///
    /// ``` name: []const u8 ```
    pub fn New5(name: []const u8) QtC.QCalendar {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QCalendar_new5(name_str);
    }

    /// New6 constructs a new QCalendar object.
    ///
    /// ``` id: QtC.QCalendar__SystemId ```
    pub fn New6(id: QtC.QCalendar__SystemId) QtC.QCalendar {
        return qtc.QCalendar_new6(@ptrCast(id));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QCalendar, other: QtC.QCalendar ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QCalendar, other: QtC.QCalendar ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isValid)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ``` self: QtC.QCalendar, month: i32 ```
    pub fn DaysInMonth(self: ?*anyopaque, month: i32) i32 {
        return qtc.QCalendar_DaysInMonth(@ptrCast(self), @intCast(month));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
    ///
    /// ``` self: QtC.QCalendar, year: i32 ```
    pub fn DaysInYear(self: ?*anyopaque, year: i32) i32 {
        return qtc.QCalendar_DaysInYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
    ///
    /// ``` self: QtC.QCalendar, year: i32 ```
    pub fn MonthsInYear(self: ?*anyopaque, year: i32) i32 {
        return qtc.QCalendar_MonthsInYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
    ///
    /// ``` self: QtC.QCalendar, year: i32, month: i32, day: i32 ```
    pub fn IsDateValid(self: ?*anyopaque, year: i32, month: i32, day: i32) bool {
        return qtc.QCalendar_IsDateValid(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
    ///
    /// ``` self: QtC.QCalendar, year: i32 ```
    pub fn IsLeapYear(self: ?*anyopaque, year: i32) bool {
        return qtc.QCalendar_IsLeapYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsGregorian(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsGregorian(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsLunar(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsLunar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsLuniSolar(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsLuniSolar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsSolar(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsSolar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn IsProleptic(self: ?*anyopaque) bool {
        return qtc.QCalendar_IsProleptic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn HasYearZero(self: ?*anyopaque) bool {
        return qtc.QCalendar_HasYearZero(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn MaximumDaysInMonth(self: ?*anyopaque) i32 {
        return qtc.QCalendar_MaximumDaysInMonth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn MinimumDaysInMonth(self: ?*anyopaque) i32 {
        return qtc.QCalendar_MinimumDaysInMonth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn MaximumMonthsInYear(self: ?*anyopaque) i32 {
        return qtc.QCalendar_MaximumMonthsInYear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#name)
    ///
    /// ``` self: QtC.QCalendar, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ``` self: QtC.QCalendar, year: i32, month: i32, day: i32 ```
    pub fn DateFromParts(self: ?*anyopaque, year: i32, month: i32, day: i32) QtC.QDate {
        return qtc.QCalendar_DateFromParts(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ``` self: QtC.QCalendar, parts: QtC.QCalendar__YearMonthDay ```
    pub fn DateFromPartsWithParts(self: ?*anyopaque, parts: ?*anyopaque) QtC.QDate {
        return qtc.QCalendar_DateFromPartsWithParts(@ptrCast(self), @ptrCast(parts));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
    ///
    /// ``` self: QtC.QCalendar, date: QtC.QDate ```
    pub fn PartsFromDate(self: ?*anyopaque, date: QtC.QDate) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar_PartsFromDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
    ///
    /// ``` self: QtC.QCalendar, date: QtC.QDate ```
    pub fn DayOfWeek(self: ?*anyopaque, date: QtC.QDate) i32 {
        return qtc.QCalendar_DayOfWeek(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, allocator: std.mem.Allocator ```
    pub fn MonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName(@ptrCast(self), @ptrCast(locale), @intCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName(@ptrCast(self), @ptrCast(locale), @intCast(month));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, day: i32, allocator: std.mem.Allocator ```
    pub fn WeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_WeekDayName(@ptrCast(self), @ptrCast(locale), @intCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, day: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneWeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneWeekDayName(@ptrCast(self), @ptrCast(locale), @intCast(day));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableCalendars(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCalendar_AvailableCalendars();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ``` self: QtC.QCalendar, month: i32, year: i32 ```
    pub fn DaysInMonth2(self: ?*anyopaque, month: i32, year: i32) i32 {
        return qtc.QCalendar_DaysInMonth2(@ptrCast(self), @intCast(month), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, year: i32, allocator: std.mem.Allocator ```
    pub fn MonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName3(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, year: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn MonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName4(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, year: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName3(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, month: i32, year: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName4(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, day: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn WeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_WeekDayName3(@ptrCast(self), @ptrCast(locale), @intCast(day), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ``` self: QtC.QCalendar, locale: QtC.QLocale, day: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneWeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneWeekDayName3(@ptrCast(self), @ptrCast(locale), @intCast(day), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dtor.QCalendar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCalendar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html
pub const qcalendar__yearmonthday = struct {
    /// New constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` other: QtC.QCalendar__YearMonthDay ```
    pub fn New(other: ?*anyopaque) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
    ///
    /// ``` other: QtC.QCalendar__YearMonthDay ```
    pub fn New2(other: ?*anyopaque) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar::YearMonthDay object.
    ///
    ///
    pub fn New3() QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new3();
    }

    /// New4 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32 ```
    pub fn New4(y: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new4(@intCast(y));
    }

    /// New5 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32, m: i32 ```
    pub fn New5(y: i32, m: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new5(@intCast(y), @intCast(m));
    }

    /// New6 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32, m: i32, d: i32 ```
    pub fn New6(y: i32, m: i32, d: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new6(@intCast(y), @intCast(m), @intCast(d));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QCalendar__YearMonthDay, other: QtC.QCalendar__YearMonthDay ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QCalendar__YearMonthDay, other: QtC.QCalendar__YearMonthDay ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__yearmonthday.html#isValid)
    ///
    /// ``` self: QtC.QCalendar__YearMonthDay ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QCalendar__YearMonthDay_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCalendar__YearMonthDay ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-systemid.html
pub const qcalendar__systemid = struct {
    /// New constructs a new QCalendar::SystemId object.
    ///
    /// ``` other: QtC.QCalendar__SystemId ```
    pub fn New(other: ?*anyopaque) QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
    ///
    /// ``` other: QtC.QCalendar__SystemId ```
    pub fn New2(other: ?*anyopaque) QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar::SystemId object.
    ///
    ///
    pub fn New3() QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QCalendar__SystemId, other: QtC.QCalendar__SystemId ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__SystemId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QCalendar__SystemId, other: QtC.QCalendar__SystemId ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__SystemId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#index)
    ///
    /// ``` self: QtC.QCalendar__SystemId ```
    pub fn Index(self: ?*anyopaque) u64 {
        return qtc.QCalendar__SystemId_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#isValid)
    ///
    /// ``` self: QtC.QCalendar__SystemId ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QCalendar__SystemId_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCalendar__SystemId ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar__SystemId_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar.html#types
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
