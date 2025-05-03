const C = @import("qt6c");
const qcalendar_enums = enums;
const qlocale_enums = @import("libqlocale.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcalendar.html
pub const qcalendar = struct {
    /// New constructs a new QCalendar object.
    ///
    /// ``` other: ?*C.QCalendar ```
    pub fn New(other: ?*anyopaque) ?*C.QCalendar {
        return C.QCalendar_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar object and invalidates the source QCalendar object.
    ///
    /// ``` other: ?*C.QCalendar ```
    pub fn New2(other: ?*anyopaque) ?*C.QCalendar {
        return C.QCalendar_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar object.
    ///
    ///
    pub fn New3() ?*C.QCalendar {
        return C.QCalendar_new3();
    }

    /// New4 constructs a new QCalendar object.
    ///
    /// ``` system: qcalendar_enums.System ```
    pub fn New4(system: i64) ?*C.QCalendar {
        return C.QCalendar_new4(@intCast(system));
    }

    /// New5 constructs a new QCalendar object.
    ///
    /// ``` name: []const u8 ```
    pub fn New5(name: []const u8) ?*C.QCalendar {
        return C.QCalendar_new5(@constCast(name.ptr));
    }

    /// New6 constructs a new QCalendar object.
    ///
    /// ``` id: ?*C.QCalendar__SystemId ```
    pub fn New6(id: ?*C.QCalendar__SystemId) ?*C.QCalendar {
        return C.QCalendar_new6(@ptrCast(id));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QCalendar, other: ?*QCalendar ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QCalendar, other: ?*QCalendar ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isValid)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QCalendar_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ``` self: ?*C.QCalendar, month: i32 ```
    pub fn DaysInMonth(self: ?*anyopaque, month: i32) i32 {
        return C.QCalendar_DaysInMonth(@ptrCast(self), @intCast(month));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
    ///
    /// ``` self: ?*C.QCalendar, year: i32 ```
    pub fn DaysInYear(self: ?*anyopaque, year: i32) i32 {
        return C.QCalendar_DaysInYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
    ///
    /// ``` self: ?*C.QCalendar, year: i32 ```
    pub fn MonthsInYear(self: ?*anyopaque, year: i32) i32 {
        return C.QCalendar_MonthsInYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
    ///
    /// ``` self: ?*C.QCalendar, year: i32, month: i32, day: i32 ```
    pub fn IsDateValid(self: ?*anyopaque, year: i32, month: i32, day: i32) bool {
        return C.QCalendar_IsDateValid(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
    ///
    /// ``` self: ?*C.QCalendar, year: i32 ```
    pub fn IsLeapYear(self: ?*anyopaque, year: i32) bool {
        return C.QCalendar_IsLeapYear(@ptrCast(self), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsGregorian(self: ?*anyopaque) bool {
        return C.QCalendar_IsGregorian(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsLunar(self: ?*anyopaque) bool {
        return C.QCalendar_IsLunar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsLuniSolar(self: ?*anyopaque) bool {
        return C.QCalendar_IsLuniSolar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsSolar(self: ?*anyopaque) bool {
        return C.QCalendar_IsSolar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn IsProleptic(self: ?*anyopaque) bool {
        return C.QCalendar_IsProleptic(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn HasYearZero(self: ?*anyopaque) bool {
        return C.QCalendar_HasYearZero(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn MaximumDaysInMonth(self: ?*anyopaque) i32 {
        return C.QCalendar_MaximumDaysInMonth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn MinimumDaysInMonth(self: ?*anyopaque) i32 {
        return C.QCalendar_MinimumDaysInMonth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn MaximumMonthsInYear(self: ?*anyopaque) i32 {
        return C.QCalendar_MaximumMonthsInYear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#name)
    ///
    /// ``` self: ?*C.QCalendar, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ``` self: ?*C.QCalendar, year: i32, month: i32, day: i32 ```
    pub fn DateFromParts(self: ?*anyopaque, year: i32, month: i32, day: i32) ?*C.QDate {
        return C.QCalendar_DateFromParts(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
    ///
    /// ``` self: ?*C.QCalendar, parts: ?*C.QCalendar__YearMonthDay ```
    pub fn DateFromPartsWithParts(self: ?*anyopaque, parts: ?*anyopaque) ?*C.QDate {
        return C.QCalendar_DateFromPartsWithParts(@ptrCast(self), @ptrCast(parts));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
    ///
    /// ``` self: ?*C.QCalendar, date: ?*C.QDate ```
    pub fn PartsFromDate(self: ?*anyopaque, date: ?*C.QDate) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar_PartsFromDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
    ///
    /// ``` self: ?*C.QCalendar, date: ?*C.QDate ```
    pub fn DayOfWeek(self: ?*anyopaque, date: ?*C.QDate) i32 {
        return C.QCalendar_DayOfWeek(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, allocator: std.mem.Allocator ```
    pub fn MonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_MonthName(@ptrCast(self), @ptrCast(locale), @intCast(month));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_StandaloneMonthName(@ptrCast(self), @ptrCast(locale), @intCast(month));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, day: i32, allocator: std.mem.Allocator ```
    pub fn WeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_WeekDayName(@ptrCast(self), @ptrCast(locale), @intCast(day));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, day: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneWeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_StandaloneWeekDayName(@ptrCast(self), @ptrCast(locale), @intCast(day));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableCalendars(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QCalendar_AvailableCalendars();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
    ///
    /// ``` self: ?*C.QCalendar, month: i32, year: i32 ```
    pub fn DaysInMonth2(self: ?*anyopaque, month: i32, year: i32) i32 {
        return C.QCalendar_DaysInMonth2(@ptrCast(self), @intCast(month), @intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, year: i32, allocator: std.mem.Allocator ```
    pub fn MonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_MonthName3(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, year: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn MonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_MonthName4(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year), @intCast(format));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, year: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_StandaloneMonthName3(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, month: i32, year: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_StandaloneMonthName4(@ptrCast(self), @ptrCast(locale), @intCast(month), @intCast(year), @intCast(format));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, day: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn WeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_WeekDayName3(@ptrCast(self), @ptrCast(locale), @intCast(day), @intCast(format));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
    ///
    /// ``` self: ?*C.QCalendar, locale: ?*C.QLocale, day: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneWeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCalendar_StandaloneWeekDayName3(@ptrCast(self), @ptrCast(locale), @intCast(day), @intCast(format));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCalendar ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCalendar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html
pub const qcalendar__yearmonthday = struct {
    /// New constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` other: ?*C.QCalendar__YearMonthDay ```
    pub fn New(other: ?*anyopaque) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
    ///
    /// ``` other: ?*C.QCalendar__YearMonthDay ```
    pub fn New2(other: ?*anyopaque) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar::YearMonthDay object.
    ///
    ///
    pub fn New3() ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new3();
    }

    /// New4 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32 ```
    pub fn New4(y: i32) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new4(@intCast(y));
    }

    /// New5 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32, m: i32 ```
    pub fn New5(y: i32, m: i32) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new5(@intCast(y), @intCast(m));
    }

    /// New6 constructs a new QCalendar::YearMonthDay object.
    ///
    /// ``` y: i32, m: i32, d: i32 ```
    pub fn New6(y: i32, m: i32, d: i32) ?*C.QCalendar__YearMonthDay {
        return C.QCalendar__YearMonthDay_new6(@intCast(y), @intCast(m), @intCast(d));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QCalendar__YearMonthDay, other: ?*QCalendar__YearMonthDay ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar__YearMonthDay_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QCalendar__YearMonthDay, other: ?*QCalendar__YearMonthDay ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar__YearMonthDay_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__yearmonthday.html#isValid)
    ///
    /// ``` self: ?*C.QCalendar__YearMonthDay ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QCalendar__YearMonthDay_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCalendar__YearMonthDay ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCalendar__YearMonthDay_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-systemid.html
pub const qcalendar__systemid = struct {
    /// New constructs a new QCalendar::SystemId object.
    ///
    /// ``` other: ?*C.QCalendar__SystemId ```
    pub fn New(other: ?*anyopaque) ?*C.QCalendar__SystemId {
        return C.QCalendar__SystemId_new(@ptrCast(other));
    }

    /// New2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
    ///
    /// ``` other: ?*C.QCalendar__SystemId ```
    pub fn New2(other: ?*anyopaque) ?*C.QCalendar__SystemId {
        return C.QCalendar__SystemId_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCalendar::SystemId object.
    ///
    ///
    pub fn New3() ?*C.QCalendar__SystemId {
        return C.QCalendar__SystemId_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QCalendar__SystemId, other: ?*QCalendar__SystemId ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar__SystemId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QCalendar__SystemId, other: ?*QCalendar__SystemId ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QCalendar__SystemId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#index)
    ///
    /// ``` self: ?*C.QCalendar__SystemId ```
    pub fn Index(self: ?*anyopaque) u64 {
        return C.QCalendar__SystemId_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#isValid)
    ///
    /// ``` self: ?*C.QCalendar__SystemId ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QCalendar__SystemId_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCalendar__SystemId ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCalendar__SystemId_Delete(@ptrCast(self));
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
