const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCalendar = @import("libqt6").QCalendar;
const QTimeZone = @import("libqt6").QTimeZone;
const qdatetime_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html)
pub const QDate = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDate,

    pub const _is_QDate = {};

    /// New constructs a new QDate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDate `
    ///
    pub fn New(other: anytype) QDate {
        comptime _ = @TypeOf(other)._is_QDate;
        return .{ .ptr = qtc.QDate_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDate object and invalidates the source QDate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDate `
    ///
    pub fn New2(other: anytype) QDate {
        comptime _ = @TypeOf(other)._is_QDate;
        return .{ .ptr = qtc.QDate_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QDate object.
    ///
    pub fn New3() QDate {
        return .{ .ptr = qtc.QDate_new3() };
    }

    /// New4 constructs a new QDate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    pub fn New4(y: i32, m: i32, d: i32) QDate {
        return .{ .ptr = qtc.QDate_new4(@bitCast(y), @bitCast(m), @bitCast(d)) };
    }

    /// New5 constructs a new QDate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn New5(y: i32, m: i32, d: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_new5(@bitCast(y), @bitCast(m), @bitCast(d), @ptrCast(cal.ptr)) };
    }

    /// New6 constructs a new QDate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDate `
    ///
    pub fn New6(param1: anytype) QDate {
        comptime _ = @TypeOf(param1)._is_QDate;
        return .{ .ptr = qtc.QDate_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDate `
    ///
    /// ` other: QDate `
    ///
    pub fn CopyAssign(self: QDate, other: QDate) void {
        qtc.QDate_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDate `
    ///
    /// ` other: QDate `
    ///
    pub fn MoveAssign(self: QDate, other: QDate) void {
        qtc.QDate_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn IsNull(self: QDate) bool {
        return qtc.QDate_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn IsValid(self: QDate) bool {
        return qtc.QDate_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn Year(self: QDate) i32 {
        return qtc.QDate_Year(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn Month(self: QDate) i32 {
        return qtc.QDate_Month(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn Day(self: QDate) i32 {
        return qtc.QDate_Day(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn DayOfWeek(self: QDate) i32 {
        return qtc.QDate_DayOfWeek(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn DayOfYear(self: QDate) i32 {
        return qtc.QDate_DayOfYear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn DaysInMonth(self: QDate) i32 {
        return qtc.QDate_DaysInMonth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn DaysInYear(self: QDate) i32 {
        return qtc.QDate_DaysInYear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn WeekNumber(self: QDate) i32 {
        return qtc.QDate_WeekNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn Year2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Year2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn Month2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Month2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn Day2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Day2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn DayOfWeek2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DayOfWeek2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn DayOfYear2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DayOfYear2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn DaysInMonth2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DaysInMonth2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn DaysInYear2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DaysInYear2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn StartOfDay(self: QDate, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn EndOfDay(self: QDate, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn StartOfDay2(self: QDate, zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDate_StartOfDay2(@ptrCast(self.ptr), @ptrCast(zone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn EndOfDay2(self: QDate, zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDate_EndOfDay2(@ptrCast(self.ptr), @ptrCast(zone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn StartOfDay3(self: QDate) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay3(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn EndOfDay3(self: QDate) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay3(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QDate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDate_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    pub fn ToString2(self: QDate, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDate_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn ToString3(self: QDate, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDate_ToString3(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` year: i32 `
    ///
    /// ` month: i32 `
    ///
    /// ` day: i32 `
    ///
    pub fn SetDate(self: QDate, year: i32, month: i32, day: i32) bool {
        return qtc.QDate_SetDate(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` year: i32 `
    ///
    /// ` month: i32 `
    ///
    /// ` day: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn SetDate2(self: QDate, year: i32, month: i32, day: i32, cal: anytype) bool {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_SetDate2(@ptrCast(self.ptr), @bitCast(year), @bitCast(month), @bitCast(day), @ptrCast(cal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#getDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` year: *i32 `
    ///
    /// ` month: *i32 `
    ///
    /// ` day: *i32 `
    ///
    pub fn GetDate(self: QDate, year: *i32, month: *i32, day: *i32) void {
        qtc.QDate_GetDate(@ptrCast(self.ptr), @ptrCast(year), @ptrCast(month), @ptrCast(day));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addDays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` days: i64 `
    ///
    pub fn AddDays(self: QDate, days: i64) QDate {
        return .{ .ptr = qtc.QDate_AddDays(@ptrCast(self.ptr), @bitCast(days)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addMonths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` months: i32 `
    ///
    pub fn AddMonths(self: QDate, months: i32) QDate {
        return .{ .ptr = qtc.QDate_AddMonths(@ptrCast(self.ptr), @bitCast(months)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addYears)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` years: i32 `
    ///
    pub fn AddYears(self: QDate, years: i32) QDate {
        return .{ .ptr = qtc.QDate_AddYears(@ptrCast(self.ptr), @bitCast(years)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addMonths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` months: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn AddMonths2(self: QDate, months: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_AddMonths2(@ptrCast(self.ptr), @bitCast(months), @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addYears)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` years: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn AddYears2(self: QDate, years: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_AddYears2(@ptrCast(self.ptr), @bitCast(years), @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` d: QDate `
    ///
    pub fn DaysTo(self: QDate, d: anytype) i64 {
        comptime _ = @TypeOf(d)._is_QDate;
        return qtc.QDate_DaysTo(@ptrCast(self.ptr), @ptrCast(d.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#currentDate)
    ///
    pub fn CurrentDate() QDate {
        return .{ .ptr = qtc.QDate_CurrentDate() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString2(stringVal: []const u8) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString2(stringVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn FromString5(stringVal: []const u8, format: []const u8, cal: anytype) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString5(stringVal_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn FromString10(stringVal: []const u8, format: []const u8) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString10(stringVal_str, format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn FromString11(stringVal: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString11(stringVal_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    pub fn IsValid2(y: i32, m: i32, d: i32) bool {
        return qtc.QDate_IsValid2(@bitCast(y), @bitCast(m), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` year: i32 `
    ///
    pub fn IsLeapYear(year: i32) bool {
        return qtc.QDate_IsLeapYear(@bitCast(year));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` jd_: i64 `
    ///
    pub fn FromJulianDay(jd_: i64) QDate {
        return .{ .ptr = qtc.QDate_FromJulianDay(@bitCast(jd_)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn ToJulianDay(self: QDate) i64 {
        return qtc.QDate_ToJulianDay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` yearNum: *i32 `
    ///
    pub fn WeekNumber1(self: QDate, yearNum: *i32) i32 {
        return qtc.QDate_WeekNumber1(@ptrCast(self.ptr), @ptrCast(yearNum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn StartOfDay22(self: QDate, spec: i32, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay22(@ptrCast(self.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn EndOfDay22(self: QDate, spec: i32, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay22(@ptrCast(self.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn ToString1(self: QDate, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QDate_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn FromString23(stringVal: []const u8, format: i32) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString23(stringVal_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn FromString34(stringVal: []const u8, format: []const u8, baseYear: i32) QDate {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString34(stringVal_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dtor.QDate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDate `
    ///
    pub fn Delete(self: QDate) void {
        qtc.QDate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html)
pub const QTime = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTime,

    pub const _is_QTime = {};

    /// New constructs a new QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTime `
    ///
    pub fn New(other: anytype) QTime {
        comptime _ = @TypeOf(other)._is_QTime;
        return .{ .ptr = qtc.QTime_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTime object and invalidates the source QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTime `
    ///
    pub fn New2(other: anytype) QTime {
        comptime _ = @TypeOf(other)._is_QTime;
        return .{ .ptr = qtc.QTime_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTime object.
    ///
    pub fn New3() QTime {
        return .{ .ptr = qtc.QTime_new3() };
    }

    /// New4 constructs a new QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    pub fn New4(h: i32, m: i32) QTime {
        return .{ .ptr = qtc.QTime_new4(@bitCast(h), @bitCast(m)) };
    }

    /// New5 constructs a new QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTime `
    ///
    pub fn New5(param1: anytype) QTime {
        comptime _ = @TypeOf(param1)._is_QTime;
        return .{ .ptr = qtc.QTime_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    pub fn New6(h: i32, m: i32, s: i32) QTime {
        return .{ .ptr = qtc.QTime_new6(@bitCast(h), @bitCast(m), @bitCast(s)) };
    }

    /// New7 constructs a new QTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` ms: i32 `
    ///
    pub fn New7(h: i32, m: i32, s: i32, ms: i32) QTime {
        return .{ .ptr = qtc.QTime_new7(@bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTime `
    ///
    /// ` other: QTime `
    ///
    pub fn CopyAssign(self: QTime, other: QTime) void {
        qtc.QTime_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTime `
    ///
    /// ` other: QTime `
    ///
    pub fn MoveAssign(self: QTime, other: QTime) void {
        qtc.QTime_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn IsNull(self: QTime) bool {
        return qtc.QTime_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn IsValid(self: QTime) bool {
        return qtc.QTime_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#hour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn Hour(self: QTime) i32 {
        return qtc.QTime_Hour(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#minute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn Minute(self: QTime) i32 {
        return qtc.QTime_Minute(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#second)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn Second(self: QTime) i32 {
        return qtc.QTime_Second(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn Msec(self: QTime) i32 {
        return qtc.QTime_Msec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTime_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    pub fn ToString2(self: QTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QTime_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#setHMS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    pub fn SetHMS(self: QTime, h: i32, m: i32, s: i32) bool {
        return qtc.QTime_SetHMS(@ptrCast(self.ptr), @bitCast(h), @bitCast(m), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` secs: i32 `
    ///
    pub fn AddSecs(self: QTime, secs: i32) QTime {
        return .{ .ptr = qtc.QTime_AddSecs(@ptrCast(self.ptr), @bitCast(secs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` t: QTime `
    ///
    pub fn SecsTo(self: QTime, t: anytype) i32 {
        comptime _ = @TypeOf(t)._is_QTime;
        return qtc.QTime_SecsTo(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addMSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` ms: i32 `
    ///
    pub fn AddMSecs(self: QTime, ms: i32) QTime {
        return .{ .ptr = qtc.QTime_AddMSecs(@ptrCast(self.ptr), @bitCast(ms)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` t: QTime `
    ///
    pub fn MsecsTo(self: QTime, t: anytype) i32 {
        comptime _ = @TypeOf(t)._is_QTime;
        return qtc.QTime_MsecsTo(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i32 `
    ///
    pub fn FromMSecsSinceStartOfDay(msecs: i32) QTime {
        return .{ .ptr = qtc.QTime_FromMSecsSinceStartOfDay(@bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn MsecsSinceStartOfDay(self: QTime) i32 {
        return qtc.QTime_MsecsSinceStartOfDay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#currentTime)
    ///
    pub fn CurrentTime() QTime {
        return .{ .ptr = qtc.QTime_CurrentTime() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString4(stringVal: []const u8) QTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString4(stringVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn FromString5(stringVal: []const u8, format: []const u8) QTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString5(stringVal_str, format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    pub fn IsValid2(h: i32, m: i32, s: i32) bool {
        return qtc.QTime_IsValid2(@bitCast(h), @bitCast(m), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` f: qnamespace_enums.DateFormat `
    ///
    pub fn ToString1(self: QTime, allocator: std.mem.Allocator, f: i32) []const u8 {
        var _str = qtc.QTime_ToString1(@ptrCast(self.ptr), @bitCast(f));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#setHMS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` ms: i32 `
    ///
    pub fn SetHMS4(self: QTime, h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_SetHMS4(@ptrCast(self.ptr), @bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn FromString23(stringVal: []const u8, format: i32) QTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString23(stringVal_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` ms: i32 `
    ///
    pub fn IsValid4(h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_IsValid4(@bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#dtor.QTime)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTime `
    ///
    pub fn Delete(self: QTime) void {
        qtc.QTime_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)
pub const QDateTime = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDateTime,

    pub const _is_QDateTime = {};

    /// New constructs a new QDateTime object.
    ///
    pub fn New() QDateTime {
        return .{ .ptr = qtc.QDateTime_new() };
    }

    /// New2 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn New2(date: anytype, time: anytype, spec: i32) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new2(@ptrCast(date.ptr), @ptrCast(time.ptr), @bitCast(spec)) };
    }

    /// New3 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    /// ` timeZone: QTimeZone `
    ///
    pub fn New3(date: anytype, time: anytype, timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        comptime _ = @TypeOf(timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_new3(@ptrCast(date.ptr), @ptrCast(time.ptr), @ptrCast(timeZone.ptr)) };
    }

    /// New4 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    pub fn New4(date: anytype, time: anytype) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new4(@ptrCast(date.ptr), @ptrCast(time.ptr)) };
    }

    /// New5 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDateTime `
    ///
    pub fn New5(other: anytype) QDateTime {
        comptime _ = @TypeOf(other)._is_QDateTime;
        return .{ .ptr = qtc.QDateTime_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn New6(date: anytype, time: anytype, spec: i32, offsetSeconds: i32) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new6(@ptrCast(date.ptr), @ptrCast(time.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// New7 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    /// ` timeZone: QTimeZone `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn New7(date: anytype, time: anytype, timeZone: anytype, resolve: i32) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        comptime _ = @TypeOf(timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_new7(@ptrCast(date.ptr), @ptrCast(time.ptr), @ptrCast(timeZone.ptr), @bitCast(resolve)) };
    }

    /// New8 constructs a new QDateTime object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` time: QTime `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn New8(date: anytype, time: anytype, resolve: i32) QDateTime {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new8(@ptrCast(date.ptr), @ptrCast(time.ptr), @bitCast(resolve)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` other: QDateTime `
    ///
    pub fn OperatorAssign(self: QDateTime, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDateTime;
        qtc.QDateTime_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` other: QDateTime `
    ///
    pub fn Swap(self: QDateTime, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDateTime;
        qtc.QDateTime_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn IsNull(self: QDateTime) bool {
        return qtc.QDateTime_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn IsValid(self: QDateTime) bool {
        return qtc.QDateTime_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn Date(self: QDateTime) QDate {
        return .{ .ptr = qtc.QDateTime_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn Time(self: QDateTime) QTime {
        return .{ .ptr = qtc.QDateTime_Time(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimeSpec `
    ///
    pub fn TimeSpec(self: QDateTime) i32 {
        return qtc.QDateTime_TimeSpec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn OffsetFromUtc(self: QDateTime) i32 {
        return qtc.QDateTime_OffsetFromUtc(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeRepresentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn TimeRepresentation(self: QDateTime) QTimeZone {
        return .{ .ptr = qtc.QDateTime_TimeRepresentation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn TimeZone(self: QDateTime) QTimeZone {
        return .{ .ptr = qtc.QDateTime_TimeZone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeZoneAbbreviation(self: QDateTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTime_TimeZoneAbbreviation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.TimeZoneAbbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn IsDaylightTime(self: QDateTime) bool {
        return qtc.QDateTime_IsDaylightTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn ToMSecsSinceEpoch(self: QDateTime) i64 {
        return qtc.QDateTime_ToMSecsSinceEpoch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn ToSecsSinceEpoch(self: QDateTime) i64 {
        return qtc.QDateTime_ToSecsSinceEpoch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` date: QDate `
    ///
    pub fn SetDate(self: QDateTime, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTime_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` time: QTime `
    ///
    pub fn SetTime(self: QDateTime, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTime_SetTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn SetTimeSpec(self: QDateTime, spec: i32) void {
        qtc.QDateTime_SetTimeSpec(@ptrCast(self.ptr), @bitCast(spec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn SetOffsetFromUtc(self: QDateTime, offsetSeconds: i32) void {
        qtc.QDateTime_SetOffsetFromUtc(@ptrCast(self.ptr), @bitCast(offsetSeconds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` toZone: QTimeZone `
    ///
    pub fn SetTimeZone(self: QDateTime, toZone: anytype) void {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        qtc.QDateTime_SetTimeZone(@ptrCast(self.ptr), @ptrCast(toZone.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 `
    ///
    pub fn SetMSecsSinceEpoch(self: QDateTime, msecs: i64) void {
        qtc.QDateTime_SetMSecsSinceEpoch(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` secs: i64 `
    ///
    pub fn SetSecsSinceEpoch(self: QDateTime, secs: i64) void {
        qtc.QDateTime_SetSecsSinceEpoch(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QDateTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTime_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    pub fn ToString2(self: QDateTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDateTime_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn ToString3(self: QDateTime, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDateTime_ToString3(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` days: i64 `
    ///
    pub fn AddDays(self: QDateTime, days: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddDays(@ptrCast(self.ptr), @bitCast(days)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` months: i32 `
    ///
    pub fn AddMonths(self: QDateTime, months: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddMonths(@ptrCast(self.ptr), @bitCast(months)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addYears)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` years: i32 `
    ///
    pub fn AddYears(self: QDateTime, years: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddYears(@ptrCast(self.ptr), @bitCast(years)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` secs: i64 `
    ///
    pub fn AddSecs(self: QDateTime, secs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddSecs(@ptrCast(self.ptr), @bitCast(secs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 `
    ///
    pub fn AddMSecs(self: QDateTime, msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddMSecs(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 of milliseconds `
    ///
    pub fn AddDuration(self: QDateTime, msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddDuration(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn ToTimeSpec(self: QDateTime, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToTimeSpec(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn ToLocalTime(self: QDateTime) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToLocalTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn ToUTC(self: QDateTime) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToUTC(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn ToOffsetFromUtc(self: QDateTime, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToOffsetFromUtc(@ptrCast(self.ptr), @bitCast(offsetSeconds)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` toZone: QTimeZone `
    ///
    pub fn ToTimeZone(self: QDateTime, toZone: anytype) QDateTime {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_ToTimeZone(@ptrCast(self.ptr), @ptrCast(toZone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn DaysTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_DaysTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn SecsTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_SecsTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn MsecsTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_MsecsTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn CurrentDateTime(zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_CurrentDateTime(@ptrCast(zone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
    ///
    pub fn CurrentDateTime2() QDateTime {
        return .{ .ptr = qtc.QDateTime_CurrentDateTime2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
    ///
    pub fn CurrentDateTimeUtc() QDateTime {
        return .{ .ptr = qtc.QDateTime_CurrentDateTimeUtc() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString2(stringVal: []const u8) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString2(stringVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn FromString5(stringVal: []const u8, format: []const u8, cal: anytype) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString5(stringVal_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn FromString10(stringVal: []const u8, format: []const u8) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString10(stringVal_str, format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn FromString11(stringVal: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString11(stringVal_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn FromMSecsSinceEpoch(msecs: i64, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch(@bitCast(msecs), @bitCast(spec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn FromSecsSinceEpoch(secs: i64, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch(@bitCast(secs), @bitCast(spec)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` timeZone: QTimeZone `
    ///
    pub fn FromMSecsSinceEpoch2(msecs: i64, timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch2(@bitCast(msecs), @ptrCast(timeZone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` timeZone: QTimeZone `
    ///
    pub fn FromSecsSinceEpoch2(secs: i64, timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch2(@bitCast(secs), @ptrCast(timeZone.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    pub fn FromMSecsSinceEpoch3(msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch3(@bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    pub fn FromSecsSinceEpoch3(secs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch3(@bitCast(secs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
    ///
    pub fn CurrentMSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentMSecsSinceEpoch();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
    ///
    pub fn CurrentSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentSecsSinceEpoch();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn OperatorPlusAssign(self: QDateTime, duration: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(duration)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn OperatorMinusAssign(self: QDateTime, duration: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(duration)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` date: QDate `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn SetDate2(self: QDateTime, date: anytype, resolve: i32) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTime_SetDate2(@ptrCast(self.ptr), @ptrCast(date.ptr), @bitCast(resolve));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` time: QTime `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn SetTime2(self: QDateTime, time: anytype, resolve: i32) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTime_SetTime2(@ptrCast(self.ptr), @ptrCast(time.ptr), @bitCast(resolve));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` toZone: QTimeZone `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn SetTimeZone2(self: QDateTime, toZone: anytype, resolve: i32) void {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        qtc.QDateTime_SetTimeZone2(@ptrCast(self.ptr), @ptrCast(toZone.ptr), @bitCast(resolve));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn ToString1(self: QDateTime, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QDateTime_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn FromString23(stringVal: []const u8, format: i32) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString23(stringVal_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn FromString34(stringVal: []const u8, format: []const u8, baseYear: i32) QDateTime {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString34(stringVal_str, format_str, @bitCast(baseYear)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetFromUtc: i32 `
    ///
    pub fn FromMSecsSinceEpoch32(msecs: i64, spec: i32, offsetFromUtc: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch32(@bitCast(msecs), @bitCast(spec), @bitCast(offsetFromUtc)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetFromUtc: i32 `
    ///
    pub fn FromSecsSinceEpoch32(secs: i64, spec: i32, offsetFromUtc: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch32(@bitCast(secs), @bitCast(spec), @bitCast(offsetFromUtc)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#dtor.QDateTime)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateTime `
    ///
    pub fn Delete(self: QDateTime) void {
        qtc.QDateTime_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#public-types)
pub const enums = struct {
    pub const TransitionResolution = enum(i32) {
        pub const Reject: i32 = 0;
        pub const RelativeToBefore: i32 = 1;
        pub const RelativeToAfter: i32 = 2;
        pub const PreferBefore: i32 = 3;
        pub const PreferAfter: i32 = 4;
        pub const PreferStandard: i32 = 5;
        pub const PreferDaylightSaving: i32 = 6;
        pub const LegacyBehavior: i32 = 1;
    };

    pub const YearRange = enum(i32) {
        pub const First: i32 = -292275056;
        pub const Last: i32 = 292278994;
    };
};
