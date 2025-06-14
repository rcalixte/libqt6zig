const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdate.html
pub const qdate = struct {
    /// New constructs a new QDate object.
    ///
    /// ``` other: QtC.QDate ```
    pub fn New(other: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new(@ptrCast(other));
    }

    /// New2 constructs a new QDate object and invalidates the source QDate object.
    ///
    /// ``` other: QtC.QDate ```
    pub fn New2(other: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new2(@ptrCast(other));
    }

    /// New3 constructs a new QDate object.
    ///
    ///
    pub fn New3() QtC.QDate {
        return qtc.QDate_new3();
    }

    /// New4 constructs a new QDate object.
    ///
    /// ``` y: i32, m: i32, d: i32 ```
    pub fn New4(y: i32, m: i32, d: i32) QtC.QDate {
        return qtc.QDate_new4(@intCast(y), @intCast(m), @intCast(d));
    }

    /// New5 constructs a new QDate object.
    ///
    /// ``` y: i32, m: i32, d: i32, cal: QtC.QCalendar ```
    pub fn New5(y: i32, m: i32, d: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_new5(@intCast(y), @intCast(m), @intCast(d), @ptrCast(cal));
    }

    /// New6 constructs a new QDate object.
    ///
    /// ``` param1: QtC.QDate ```
    pub fn New6(param1: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDate, other: QtC.QDate ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDate_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDate, other: QtC.QDate ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDate_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isNull)
    ///
    /// ``` self: QtC.QDate ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDate_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
    ///
    /// ``` self: QtC.QDate ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDate_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ``` self: QtC.QDate ```
    pub fn Year(self: ?*anyopaque) i32 {
        return qtc.QDate_Year(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ``` self: QtC.QDate ```
    pub fn Month(self: ?*anyopaque) i32 {
        return qtc.QDate_Month(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ``` self: QtC.QDate ```
    pub fn Day(self: ?*anyopaque) i32 {
        return qtc.QDate_Day(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ``` self: QtC.QDate ```
    pub fn DayOfWeek(self: ?*anyopaque) i32 {
        return qtc.QDate_DayOfWeek(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ``` self: QtC.QDate ```
    pub fn DayOfYear(self: ?*anyopaque) i32 {
        return qtc.QDate_DayOfYear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ``` self: QtC.QDate ```
    pub fn DaysInMonth(self: ?*anyopaque) i32 {
        return qtc.QDate_DaysInMonth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ``` self: QtC.QDate ```
    pub fn DaysInYear(self: ?*anyopaque) i32 {
        return qtc.QDate_DaysInYear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ``` self: QtC.QDate ```
    pub fn WeekNumber(self: ?*anyopaque) i32 {
        return qtc.QDate_WeekNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn YearWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_YearWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn MonthWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_MonthWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn DayWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DayWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn DayOfWeekWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DayOfWeekWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn DayOfYearWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DayOfYearWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn DaysInMonthWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DaysInMonthWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ``` self: QtC.QDate, cal: QtC.QCalendar ```
    pub fn DaysInYearWithCal(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DaysInYearWithCal(@ptrCast(self), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ``` self: QtC.QDate ```
    pub fn StartOfDay(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_StartOfDay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ``` self: QtC.QDate ```
    pub fn EndOfDay(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_EndOfDay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ``` self: QtC.QDate, zone: QtC.QTimeZone ```
    pub fn StartOfDayWithZone(self: ?*anyopaque, zone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_StartOfDayWithZone(@ptrCast(self), @ptrCast(zone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ``` self: QtC.QDate, zone: QtC.QTimeZone ```
    pub fn EndOfDayWithZone(self: ?*anyopaque, zone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_EndOfDayWithZone(@ptrCast(self), @ptrCast(zone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ``` self: QtC.QDate, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ``` self: QtC.QDate, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToStringWithFormat(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QDate_ToStringWithFormat(@ptrCast(self), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToStringWithFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ``` self: QtC.QDate, year: i32, month: i32, day: i32 ```
    pub fn SetDate(self: ?*anyopaque, year: i32, month: i32, day: i32) bool {
        return qtc.QDate_SetDate(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ``` self: QtC.QDate, year: i32, month: i32, day: i32, cal: QtC.QCalendar ```
    pub fn SetDate2(self: ?*anyopaque, year: i32, month: i32, day: i32, cal: QtC.QCalendar) bool {
        return qtc.QDate_SetDate2(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#getDate)
    ///
    /// ``` self: QtC.QDate, year: ?*i32, month: ?*i32, day: ?*i32 ```
    pub fn GetDate(self: ?*anyopaque, year: ?*anyopaque, month: ?*anyopaque, day: ?*anyopaque) void {
        qtc.QDate_GetDate(@ptrCast(self), @intCast(year), @intCast(month), @intCast(day));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addDays)
    ///
    /// ``` self: QtC.QDate, days: i64 ```
    pub fn AddDays(self: ?*anyopaque, days: i64) QtC.QDate {
        return qtc.QDate_AddDays(@ptrCast(self), @intCast(days));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
    ///
    /// ``` self: QtC.QDate, months: i32 ```
    pub fn AddMonths(self: ?*anyopaque, months: i32) QtC.QDate {
        return qtc.QDate_AddMonths(@ptrCast(self), @intCast(months));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
    ///
    /// ``` self: QtC.QDate, years: i32 ```
    pub fn AddYears(self: ?*anyopaque, years: i32) QtC.QDate {
        return qtc.QDate_AddYears(@ptrCast(self), @intCast(years));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
    ///
    /// ``` self: QtC.QDate, months: i32, cal: QtC.QCalendar ```
    pub fn AddMonths2(self: ?*anyopaque, months: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_AddMonths2(@ptrCast(self), @intCast(months), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
    ///
    /// ``` self: QtC.QDate, years: i32, cal: QtC.QCalendar ```
    pub fn AddYears2(self: ?*anyopaque, years: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_AddYears2(@ptrCast(self), @intCast(years), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysTo)
    ///
    /// ``` self: QtC.QDate, d: QtC.QDate ```
    pub fn DaysTo(self: ?*anyopaque, d: QtC.QDate) i64 {
        return qtc.QDate_DaysTo(@ptrCast(self), @ptrCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#currentDate)
    ///
    ///
    pub fn CurrentDate() QtC.QDate {
        return qtc.QDate_CurrentDate();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromStringWithStringVal(stringVal: []const u8) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QDate_FromStringWithStringVal(stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: []const u8 ```
    pub fn FromString4(stringVal: []const u8, format: []const u8) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QDate_FromString4(stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
    ///
    /// ``` y: i32, m: i32, d: i32 ```
    pub fn IsValid2(y: i32, m: i32, d: i32) bool {
        return qtc.QDate_IsValid2(@intCast(y), @intCast(m), @intCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
    ///
    /// ``` year: i32 ```
    pub fn IsLeapYear(year: i32) bool {
        return qtc.QDate_IsLeapYear(@intCast(year));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
    ///
    /// ``` jd_: i64 ```
    pub fn FromJulianDay(jd_: i64) QtC.QDate {
        return qtc.QDate_FromJulianDay(@intCast(jd_));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
    ///
    /// ``` self: QtC.QDate ```
    pub fn ToJulianDay(self: ?*anyopaque) i64 {
        return qtc.QDate_ToJulianDay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ``` self: QtC.QDate, yearNum: ?*i32 ```
    pub fn WeekNumber1(self: ?*anyopaque, yearNum: ?*anyopaque) i32 {
        return qtc.QDate_WeekNumber1(@ptrCast(self), @intCast(yearNum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ``` self: QtC.QDate, spec: qnamespace_enums.TimeSpec ```
    pub fn StartOfDay1(self: ?*anyopaque, spec: i64) QtC.QDateTime {
        return qtc.QDate_StartOfDay1(@ptrCast(self), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ``` self: QtC.QDate, spec: qnamespace_enums.TimeSpec, offsetSeconds: i32 ```
    pub fn StartOfDay2(self: ?*anyopaque, spec: i64, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDate_StartOfDay2(@ptrCast(self), @intCast(spec), @intCast(offsetSeconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ``` self: QtC.QDate, spec: qnamespace_enums.TimeSpec ```
    pub fn EndOfDay1(self: ?*anyopaque, spec: i64) QtC.QDateTime {
        return qtc.QDate_EndOfDay1(@ptrCast(self), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ``` self: QtC.QDate, spec: qnamespace_enums.TimeSpec, offsetSeconds: i32 ```
    pub fn EndOfDay2(self: ?*anyopaque, spec: i64, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDate_EndOfDay2(@ptrCast(self), @intCast(spec), @intCast(offsetSeconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ``` self: QtC.QDate, format: qnamespace_enums.DateFormat, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ``` self: QtC.QDate, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator ```
    pub fn ToString22(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QDate_ToString22(@ptrCast(self), format_str, @ptrCast(cal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: qnamespace_enums.DateFormat ```
    pub fn FromString23(stringVal: []const u8, format: i64) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QDate_FromString23(stringVal_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: []const u8, cal: QtC.QCalendar ```
    pub fn FromString34(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QDate_FromString34(stringVal_str, format_str, @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dtor.QDate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDate_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtime.html
pub const qtime = struct {
    /// New constructs a new QTime object.
    ///
    /// ``` other: QtC.QTime ```
    pub fn New(other: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new(@ptrCast(other));
    }

    /// New2 constructs a new QTime object and invalidates the source QTime object.
    ///
    /// ``` other: QtC.QTime ```
    pub fn New2(other: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTime object.
    ///
    ///
    pub fn New3() QtC.QTime {
        return qtc.QTime_new3();
    }

    /// New4 constructs a new QTime object.
    ///
    /// ``` h: i32, m: i32 ```
    pub fn New4(h: i32, m: i32) QtC.QTime {
        return qtc.QTime_new4(@intCast(h), @intCast(m));
    }

    /// New5 constructs a new QTime object.
    ///
    /// ``` param1: QtC.QTime ```
    pub fn New5(param1: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new5(@ptrCast(param1));
    }

    /// New6 constructs a new QTime object.
    ///
    /// ``` h: i32, m: i32, s: i32 ```
    pub fn New6(h: i32, m: i32, s: i32) QtC.QTime {
        return qtc.QTime_new6(@intCast(h), @intCast(m), @intCast(s));
    }

    /// New7 constructs a new QTime object.
    ///
    /// ``` h: i32, m: i32, s: i32, ms: i32 ```
    pub fn New7(h: i32, m: i32, s: i32, ms: i32) QtC.QTime {
        return qtc.QTime_new7(@intCast(h), @intCast(m), @intCast(s), @intCast(ms));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTime, other: QtC.QTime ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTime_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTime, other: QtC.QTime ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTime_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isNull)
    ///
    /// ``` self: QtC.QTime ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QTime_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ``` self: QtC.QTime ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTime_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#hour)
    ///
    /// ``` self: QtC.QTime ```
    pub fn Hour(self: ?*anyopaque) i32 {
        return qtc.QTime_Hour(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#minute)
    ///
    /// ``` self: QtC.QTime ```
    pub fn Minute(self: ?*anyopaque) i32 {
        return qtc.QTime_Minute(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#second)
    ///
    /// ``` self: QtC.QTime ```
    pub fn Second(self: ?*anyopaque) i32 {
        return qtc.QTime_Second(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msec)
    ///
    /// ``` self: QtC.QTime ```
    pub fn Msec(self: ?*anyopaque) i32 {
        return qtc.QTime_Msec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ``` self: QtC.QTime, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTime_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ``` self: QtC.QTime, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToStringWithFormat(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QTime_ToStringWithFormat(@ptrCast(self), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToStringWithFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
    ///
    /// ``` self: QtC.QTime, h: i32, m: i32, s: i32 ```
    pub fn SetHMS(self: ?*anyopaque, h: i32, m: i32, s: i32) bool {
        return qtc.QTime_SetHMS(@ptrCast(self), @intCast(h), @intCast(m), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addSecs)
    ///
    /// ``` self: QtC.QTime, secs: i32 ```
    pub fn AddSecs(self: ?*anyopaque, secs: i32) QtC.QTime {
        return qtc.QTime_AddSecs(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#secsTo)
    ///
    /// ``` self: QtC.QTime, t: QtC.QTime ```
    pub fn SecsTo(self: ?*anyopaque, t: QtC.QTime) i32 {
        return qtc.QTime_SecsTo(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addMSecs)
    ///
    /// ``` self: QtC.QTime, ms: i32 ```
    pub fn AddMSecs(self: ?*anyopaque, ms: i32) QtC.QTime {
        return qtc.QTime_AddMSecs(@ptrCast(self), @intCast(ms));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsTo)
    ///
    /// ``` self: QtC.QTime, t: QtC.QTime ```
    pub fn MsecsTo(self: ?*anyopaque, t: QtC.QTime) i32 {
        return qtc.QTime_MsecsTo(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
    ///
    /// ``` msecs: i32 ```
    pub fn FromMSecsSinceStartOfDay(msecs: i32) QtC.QTime {
        return qtc.QTime_FromMSecsSinceStartOfDay(@intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
    ///
    /// ``` self: QtC.QTime ```
    pub fn MsecsSinceStartOfDay(self: ?*anyopaque) i32 {
        return qtc.QTime_MsecsSinceStartOfDay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#currentTime)
    ///
    ///
    pub fn CurrentTime() QtC.QTime {
        return qtc.QTime_CurrentTime();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromStringWithStringVal(stringVal: []const u8) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QTime_FromStringWithStringVal(stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: []const u8 ```
    pub fn FromString4(stringVal: []const u8, format: []const u8) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QTime_FromString4(stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ``` h: i32, m: i32, s: i32 ```
    pub fn IsValid2(h: i32, m: i32, s: i32) bool {
        return qtc.QTime_IsValid2(@intCast(h), @intCast(m), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ``` self: QtC.QTime, f: qnamespace_enums.DateFormat, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, f: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTime_ToString1(@ptrCast(self), @intCast(f));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
    ///
    /// ``` self: QtC.QTime, h: i32, m: i32, s: i32, ms: i32 ```
    pub fn SetHMS4(self: ?*anyopaque, h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_SetHMS4(@ptrCast(self), @intCast(h), @intCast(m), @intCast(s), @intCast(ms));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: qnamespace_enums.DateFormat ```
    pub fn FromString23(stringVal: []const u8, format: i64) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QTime_FromString23(stringVal_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ``` h: i32, m: i32, s: i32, ms: i32 ```
    pub fn IsValid4(h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_IsValid4(@intCast(h), @intCast(m), @intCast(s), @intCast(ms));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#dtor.QTime)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTime ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTime_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdatetime.html
pub const qdatetime = struct {
    /// New constructs a new QDateTime object.
    ///
    ///
    pub fn New() QtC.QDateTime {
        return qtc.QDateTime_new();
    }

    /// New2 constructs a new QDateTime object.
    ///
    /// ``` date: QtC.QDate, time: QtC.QTime ```
    pub fn New2(date: QtC.QDate, time: QtC.QTime) QtC.QDateTime {
        return qtc.QDateTime_new2(@ptrCast(date), @ptrCast(time));
    }

    /// New3 constructs a new QDateTime object.
    ///
    /// ``` date: QtC.QDate, time: QtC.QTime, timeZone: QtC.QTimeZone ```
    pub fn New3(date: QtC.QDate, time: QtC.QTime, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_new3(@ptrCast(date), @ptrCast(time), @ptrCast(timeZone));
    }

    /// New4 constructs a new QDateTime object.
    ///
    /// ``` other: QtC.QDateTime ```
    pub fn New4(other: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_new4(@ptrCast(other));
    }

    /// New5 constructs a new QDateTime object.
    ///
    /// ``` date: QtC.QDate, time: QtC.QTime, spec: qnamespace_enums.TimeSpec ```
    pub fn New5(date: QtC.QDate, time: QtC.QTime, spec: i64) QtC.QDateTime {
        return qtc.QDateTime_new5(@ptrCast(date), @ptrCast(time), @intCast(spec));
    }

    /// New6 constructs a new QDateTime object.
    ///
    /// ``` date: QtC.QDate, time: QtC.QTime, spec: qnamespace_enums.TimeSpec, offsetSeconds: i32 ```
    pub fn New6(date: QtC.QDate, time: QtC.QTime, spec: i64, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDateTime_new6(@ptrCast(date), @ptrCast(time), @intCast(spec), @intCast(offsetSeconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#operator=)
    ///
    /// ``` self: QtC.QDateTime, other: QtC.QDateTime ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDateTime_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#swap)
    ///
    /// ``` self: QtC.QDateTime, other: QtC.QDateTime ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDateTime_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isNull)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDateTime_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isValid)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDateTime_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#date)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn Date(self: ?*anyopaque) QtC.QDate {
        return qtc.QDateTime_Date(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#time)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn Time(self: ?*anyopaque) QtC.QTime {
        return qtc.QDateTime_Time(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeSpec)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn TimeSpec(self: ?*anyopaque) i64 {
        return qtc.QDateTime_TimeSpec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn OffsetFromUtc(self: ?*anyopaque) i32 {
        return qtc.QDateTime_OffsetFromUtc(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn TimeZone(self: ?*anyopaque) QtC.QTimeZone {
        return qtc.QDateTime_TimeZone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
    ///
    /// ``` self: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn TimeZoneAbbreviation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_TimeZoneAbbreviation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.TimeZoneAbbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn IsDaylightTime(self: ?*anyopaque) bool {
        return qtc.QDateTime_IsDaylightTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn ToMSecsSinceEpoch(self: ?*anyopaque) i64 {
        return qtc.QDateTime_ToMSecsSinceEpoch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn ToSecsSinceEpoch(self: ?*anyopaque) i64 {
        return qtc.QDateTime_ToSecsSinceEpoch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setDate)
    ///
    /// ``` self: QtC.QDateTime, date: QtC.QDate ```
    pub fn SetDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QDateTime_SetDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTime)
    ///
    /// ``` self: QtC.QDateTime, time: QtC.QTime ```
    pub fn SetTime(self: ?*anyopaque, time: QtC.QTime) void {
        qtc.QDateTime_SetTime(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
    ///
    /// ``` self: QtC.QDateTime, spec: qnamespace_enums.TimeSpec ```
    pub fn SetTimeSpec(self: ?*anyopaque, spec: i64) void {
        qtc.QDateTime_SetTimeSpec(@ptrCast(self), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
    ///
    /// ``` self: QtC.QDateTime, offsetSeconds: i32 ```
    pub fn SetOffsetFromUtc(self: ?*anyopaque, offsetSeconds: i32) void {
        qtc.QDateTime_SetOffsetFromUtc(@ptrCast(self), @intCast(offsetSeconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
    ///
    /// ``` self: QtC.QDateTime, toZone: QtC.QTimeZone ```
    pub fn SetTimeZone(self: ?*anyopaque, toZone: ?*anyopaque) void {
        qtc.QDateTime_SetTimeZone(@ptrCast(self), @ptrCast(toZone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
    ///
    /// ``` self: QtC.QDateTime, msecs: i64 ```
    pub fn SetMSecsSinceEpoch(self: ?*anyopaque, msecs: i64) void {
        qtc.QDateTime_SetMSecsSinceEpoch(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
    ///
    /// ``` self: QtC.QDateTime, secs: i64 ```
    pub fn SetSecsSinceEpoch(self: ?*anyopaque, secs: i64) void {
        qtc.QDateTime_SetSecsSinceEpoch(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ``` self: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ``` self: QtC.QDateTime, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToStringWithFormat(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QDateTime_ToStringWithFormat(@ptrCast(self), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToStringWithFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addDays)
    ///
    /// ``` self: QtC.QDateTime, days: i64 ```
    pub fn AddDays(self: ?*anyopaque, days: i64) QtC.QDateTime {
        return qtc.QDateTime_AddDays(@ptrCast(self), @intCast(days));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
    ///
    /// ``` self: QtC.QDateTime, months: i32 ```
    pub fn AddMonths(self: ?*anyopaque, months: i32) QtC.QDateTime {
        return qtc.QDateTime_AddMonths(@ptrCast(self), @intCast(months));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addYears)
    ///
    /// ``` self: QtC.QDateTime, years: i32 ```
    pub fn AddYears(self: ?*anyopaque, years: i32) QtC.QDateTime {
        return qtc.QDateTime_AddYears(@ptrCast(self), @intCast(years));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
    ///
    /// ``` self: QtC.QDateTime, secs: i64 ```
    pub fn AddSecs(self: ?*anyopaque, secs: i64) QtC.QDateTime {
        return qtc.QDateTime_AddSecs(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
    ///
    /// ``` self: QtC.QDateTime, msecs: i64 ```
    pub fn AddMSecs(self: ?*anyopaque, msecs: i64) QtC.QDateTime {
        return qtc.QDateTime_AddMSecs(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
    ///
    /// ``` self: QtC.QDateTime, spec: qnamespace_enums.TimeSpec ```
    pub fn ToTimeSpec(self: ?*anyopaque, spec: i64) QtC.QDateTime {
        return qtc.QDateTime_ToTimeSpec(@ptrCast(self), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn ToLocalTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_ToLocalTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn ToUTC(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_ToUTC(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
    ///
    /// ``` self: QtC.QDateTime, offsetSeconds: i32 ```
    pub fn ToOffsetFromUtc(self: ?*anyopaque, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDateTime_ToOffsetFromUtc(@ptrCast(self), @intCast(offsetSeconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
    ///
    /// ``` self: QtC.QDateTime, toZone: QtC.QTimeZone ```
    pub fn ToTimeZone(self: ?*anyopaque, toZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_ToTimeZone(@ptrCast(self), @ptrCast(toZone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
    ///
    /// ``` self: QtC.QDateTime, param1: QtC.QDateTime ```
    pub fn DaysTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_DaysTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
    ///
    /// ``` self: QtC.QDateTime, param1: QtC.QDateTime ```
    pub fn SecsTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_SecsTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
    ///
    /// ``` self: QtC.QDateTime, param1: QtC.QDateTime ```
    pub fn MsecsTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_MsecsTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
    ///
    ///
    pub fn CurrentDateTime() QtC.QDateTime {
        return qtc.QDateTime_CurrentDateTime();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
    ///
    ///
    pub fn CurrentDateTimeUtc() QtC.QDateTime {
        return qtc.QDateTime_CurrentDateTimeUtc();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromStringWithStringVal(stringVal: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QDateTime_FromStringWithStringVal(stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: []const u8 ```
    pub fn FromString4(stringVal: []const u8, format: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QDateTime_FromString4(stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ``` msecs: i64 ```
    pub fn FromMSecsSinceEpoch(msecs: i64) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch(@intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ``` secs: i64 ```
    pub fn FromSecsSinceEpoch(secs: i64) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch(@intCast(secs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ``` msecs: i64, timeZone: QtC.QTimeZone ```
    pub fn FromMSecsSinceEpoch2(msecs: i64, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch2(@intCast(msecs), @ptrCast(timeZone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ``` secs: i64, timeZone: QtC.QTimeZone ```
    pub fn FromSecsSinceEpoch2(secs: i64, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch2(@intCast(secs), @ptrCast(timeZone));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
    ///
    ///
    pub fn CurrentMSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentMSecsSinceEpoch();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
    ///
    ///
    pub fn CurrentSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentSecsSinceEpoch();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ``` self: QtC.QDateTime, format: qnamespace_enums.DateFormat, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ``` self: QtC.QDateTime, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator ```
    pub fn ToString22(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QDateTime_ToString22(@ptrCast(self), format_str, @ptrCast(cal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: qnamespace_enums.DateFormat ```
    pub fn FromString23(stringVal: []const u8, format: i64) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QDateTime_FromString23(stringVal_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ``` stringVal: []const u8, format: []const u8, cal: QtC.QCalendar ```
    pub fn FromString34(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QDateTime_FromString34(stringVal_str, format_str, @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ``` msecs: i64, spec: qnamespace_enums.TimeSpec ```
    pub fn FromMSecsSinceEpoch22(msecs: i64, spec: i64) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch22(@intCast(msecs), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ``` msecs: i64, spec: qnamespace_enums.TimeSpec, offsetFromUtc: i32 ```
    pub fn FromMSecsSinceEpoch3(msecs: i64, spec: i64, offsetFromUtc: i32) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch3(@intCast(msecs), @intCast(spec), @intCast(offsetFromUtc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ``` secs: i64, spec: qnamespace_enums.TimeSpec ```
    pub fn FromSecsSinceEpoch22(secs: i64, spec: i64) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch22(@intCast(secs), @intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ``` secs: i64, spec: qnamespace_enums.TimeSpec, offsetFromUtc: i32 ```
    pub fn FromSecsSinceEpoch3(secs: i64, spec: i64, offsetFromUtc: i32) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch3(@intCast(secs), @intCast(spec), @intCast(offsetFromUtc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#dtor.QDateTime)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDateTime ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateTime_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdatetime.html#types
pub const enums = struct {
    pub const YearRange = enum {
        pub const First: i32 = -292275056;
        pub const Last: i32 = 292278994;
    };
};
