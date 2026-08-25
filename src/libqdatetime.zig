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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDate `
    ///
    pub fn new(other: anytype) QDate {
        comptime _ = @TypeOf(other)._is_QDate;
        return .{ .ptr = qtc.QDate_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDate object and invalidate the source QDate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDate `
    ///
    pub fn new2(other: anytype) QDate {
        comptime _ = @TypeOf(other)._is_QDate;
        return .{ .ptr = qtc.QDate_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDate object in C++ memory
    ///
    pub fn new3() QDate {
        return .{ .ptr = qtc.QDate_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` y: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` d: i32 `
    ///
    pub fn new4(y: i32, m: i32, d: i32) QDate {
        return .{ .ptr = qtc.QDate_new4(@bitCast(y), @bitCast(m), @bitCast(d)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDate object in C++ memory
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
    pub fn new5(y: i32, m: i32, d: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_new5(@bitCast(y), @bitCast(m), @bitCast(d), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDate `
    ///
    pub fn new6(param1: anytype) QDate {
        comptime _ = @TypeOf(param1)._is_QDate;
        return .{ .ptr = qtc.QDate_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDate `
    ///
    /// ` other: QDate `
    ///
    pub fn copyAssign(self: QDate, other: QDate) void {
        qtc.QDate_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDate `
    ///
    /// ` other: QDate `
    ///
    pub fn moveAssign(self: QDate, other: QDate) void {
        qtc.QDate_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn isNull(self: QDate) bool {
        return qtc.QDate_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn isValid(self: QDate) bool {
        return qtc.QDate_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `year` instead
    ///
    pub const Year = year;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn year(self: QDate) i32 {
        return qtc.QDate_Year(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `month` instead
    ///
    pub const Month = month;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn month(self: QDate) i32 {
        return qtc.QDate_Month(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `day` instead
    ///
    pub const Day = day;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn day(self: QDate) i32 {
        return qtc.QDate_Day(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dayOfWeek` instead
    ///
    pub const DayOfWeek = dayOfWeek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn dayOfWeek(self: QDate) i32 {
        return qtc.QDate_DayOfWeek(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dayOfYear` instead
    ///
    pub const DayOfYear = dayOfYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn dayOfYear(self: QDate) i32 {
        return qtc.QDate_DayOfYear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `daysInMonth` instead
    ///
    pub const DaysInMonth = daysInMonth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn daysInMonth(self: QDate) i32 {
        return qtc.QDate_DaysInMonth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `daysInYear` instead
    ///
    pub const DaysInYear = daysInYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn daysInYear(self: QDate) i32 {
        return qtc.QDate_DaysInYear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `weekNumber` instead
    ///
    pub const WeekNumber = weekNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn weekNumber(self: QDate) i32 {
        return qtc.QDate_WeekNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `year2` instead
    ///
    pub const Year2 = year2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn year2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Year2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `month2` instead
    ///
    pub const Month2 = month2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn month2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Month2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `day2` instead
    ///
    pub const Day2 = day2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn day2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_Day2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `dayOfWeek2` instead
    ///
    pub const DayOfWeek2 = dayOfWeek2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn dayOfWeek2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DayOfWeek2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `dayOfYear2` instead
    ///
    pub const DayOfYear2 = dayOfYear2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn dayOfYear2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DayOfYear2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `daysInMonth2` instead
    ///
    pub const DaysInMonth2 = daysInMonth2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn daysInMonth2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DaysInMonth2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `daysInYear2` instead
    ///
    pub const DaysInYear2 = daysInYear2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn daysInYear2(self: QDate, cal: anytype) i32 {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_DaysInYear2(@ptrCast(self.ptr), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `startOfDay` instead
    ///
    pub const StartOfDay = startOfDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn startOfDay(self: QDate, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `endOfDay` instead
    ///
    pub const EndOfDay = endOfDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn endOfDay(self: QDate, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `startOfDay2` instead
    ///
    pub const StartOfDay2 = startOfDay2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn startOfDay2(self: QDate, zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDate_StartOfDay2(@ptrCast(self.ptr), @ptrCast(zone.ptr)) };
    }

    /// ### DEPRECATED: Use `endOfDay2` instead
    ///
    pub const EndOfDay2 = endOfDay2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn endOfDay2(self: QDate, zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDate_EndOfDay2(@ptrCast(self.ptr), @ptrCast(zone.ptr)) };
    }

    /// ### DEPRECATED: Use `startOfDay3` instead
    ///
    pub const StartOfDay3 = startOfDay3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn startOfDay3(self: QDate) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay3(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `endOfDay3` instead
    ///
    pub const EndOfDay3 = endOfDay3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn endOfDay3(self: QDate) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay3(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QDate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDate_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

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
    pub fn toString2(self: QDate, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDate_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: QDate, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDate_ToString3(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString4` instead
    ///
    pub const ToString4 = toString4;

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
    pub fn toString4(self: QDate, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDate_ToString4(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString5` instead
    ///
    pub const ToString5 = toString5;

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
    pub fn toString5(self: QDate, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDate_ToString5(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` _year: i32 `
    ///
    /// ` _month: i32 `
    ///
    /// ` _day: i32 `
    ///
    pub fn setDate(self: QDate, _year: i32, _month: i32, _day: i32) bool {
        return qtc.QDate_SetDate(@ptrCast(self.ptr), @bitCast(_year), @bitCast(_month), @bitCast(_day));
    }

    /// ### DEPRECATED: Use `setDate2` instead
    ///
    pub const SetDate2 = setDate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` _year: i32 `
    ///
    /// ` _month: i32 `
    ///
    /// ` _day: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn setDate2(self: QDate, _year: i32, _month: i32, _day: i32, cal: anytype) bool {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return qtc.QDate_SetDate2(@ptrCast(self.ptr), @bitCast(_year), @bitCast(_month), @bitCast(_day), @ptrCast(cal.ptr));
    }

    /// ### DEPRECATED: Use `getDate` instead
    ///
    pub const GetDate = getDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#getDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` _year: *i32 `
    ///
    /// ` _month: *i32 `
    ///
    /// ` _day: *i32 `
    ///
    pub fn getDate(self: QDate, _year: *i32, _month: *i32, _day: *i32) void {
        qtc.QDate_GetDate(@ptrCast(self.ptr), @ptrCast(_year), @ptrCast(_month), @ptrCast(_day));
    }

    /// ### DEPRECATED: Use `addDays` instead
    ///
    pub const AddDays = addDays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addDays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` days: i64 `
    ///
    pub fn addDays(self: QDate, days: i64) QDate {
        return .{ .ptr = qtc.QDate_AddDays(@ptrCast(self.ptr), @bitCast(days)) };
    }

    /// ### DEPRECATED: Use `addMonths` instead
    ///
    pub const AddMonths = addMonths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addMonths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` months: i32 `
    ///
    pub fn addMonths(self: QDate, months: i32) QDate {
        return .{ .ptr = qtc.QDate_AddMonths(@ptrCast(self.ptr), @bitCast(months)) };
    }

    /// ### DEPRECATED: Use `addYears` instead
    ///
    pub const AddYears = addYears;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addYears)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` years: i32 `
    ///
    pub fn addYears(self: QDate, years: i32) QDate {
        return .{ .ptr = qtc.QDate_AddYears(@ptrCast(self.ptr), @bitCast(years)) };
    }

    /// ### DEPRECATED: Use `addMonths2` instead
    ///
    pub const AddMonths2 = addMonths2;

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
    pub fn addMonths2(self: QDate, months: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_AddMonths2(@ptrCast(self.ptr), @bitCast(months), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `addYears2` instead
    ///
    pub const AddYears2 = addYears2;

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
    pub fn addYears2(self: QDate, years: i32, cal: anytype) QDate {
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_AddYears2(@ptrCast(self.ptr), @bitCast(years), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `daysTo` instead
    ///
    pub const DaysTo = daysTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` d: QDate `
    ///
    pub fn daysTo(self: QDate, d: anytype) i64 {
        comptime _ = @TypeOf(d)._is_QDate;
        return qtc.QDate_DaysTo(@ptrCast(self.ptr), @ptrCast(d.ptr));
    }

    /// ### DEPRECATED: Use `currentDate` instead
    ///
    pub const CurrentDate = currentDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#currentDate)
    ///
    pub fn currentDate() QDate {
        return .{ .ptr = qtc.QDate_CurrentDate() };
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `fromString2` instead
    ///
    pub const FromString2 = fromString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString2(string: []const u8) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString2(string_str) };
    }

    /// ### DEPRECATED: Use `fromString3` instead
    ///
    pub const FromString3 = fromString3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString3(string: []const u8, format: []const u8, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString3(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString4` instead
    ///
    pub const FromString4 = fromString4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString4(string: []const u8, format: []const u8, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString4(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString5` instead
    ///
    pub const FromString5 = fromString5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString5(string: []const u8, format: []const u8, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString5(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString6` instead
    ///
    pub const FromString6 = fromString6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString6(string: []const u8, format: []const u8) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString6(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString7` instead
    ///
    pub const FromString7 = fromString7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString7(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString7(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString8` instead
    ///
    pub const FromString8 = fromString8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString8(string: []const u8, format: []const u8) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString8(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString9` instead
    ///
    pub const FromString9 = fromString9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString9(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString9(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString10` instead
    ///
    pub const FromString10 = fromString10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString10(string: []const u8, format: []const u8) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString10(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString11` instead
    ///
    pub const FromString11 = fromString11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString11(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDate_FromString11(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid2` instead
    ///
    pub const IsValid2 = isValid2;

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
    pub fn isValid2(y: i32, m: i32, d: i32) bool {
        return qtc.QDate_IsValid2(@bitCast(y), @bitCast(m), @bitCast(d));
    }

    /// ### DEPRECATED: Use `isLeapYear` instead
    ///
    pub const IsLeapYear = isLeapYear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
    ///
    /// ## Parameter(s):
    ///
    /// ` _year: i32 `
    ///
    pub fn isLeapYear(_year: i32) bool {
        return qtc.QDate_IsLeapYear(@bitCast(_year));
    }

    /// ### DEPRECATED: Use `fromJulianDay` instead
    ///
    pub const FromJulianDay = fromJulianDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` jd_: i64 `
    ///
    pub fn fromJulianDay(jd_: i64) QDate {
        return .{ .ptr = qtc.QDate_FromJulianDay(@bitCast(jd_)) };
    }

    /// ### DEPRECATED: Use `toJulianDay` instead
    ///
    pub const ToJulianDay = toJulianDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    pub fn toJulianDay(self: QDate) i64 {
        return qtc.QDate_ToJulianDay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `weekNumber1` instead
    ///
    pub const WeekNumber1 = weekNumber1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDate `
    ///
    /// ` yearNum: *i32 `
    ///
    pub fn weekNumber1(self: QDate, yearNum: *i32) i32 {
        return qtc.QDate_WeekNumber1(@ptrCast(self.ptr), @ptrCast(yearNum));
    }

    /// ### DEPRECATED: Use `startOfDay22` instead
    ///
    pub const StartOfDay22 = startOfDay22;

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
    pub fn startOfDay22(self: QDate, spec: i32, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDate_StartOfDay22(@ptrCast(self.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// ### DEPRECATED: Use `endOfDay22` instead
    ///
    pub const EndOfDay22 = endOfDay22;

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
    pub fn endOfDay22(self: QDate, spec: i32, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDate_EndOfDay22(@ptrCast(self.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QDate, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QDate_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDate.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString22` instead
    ///
    pub const FromString22 = fromString22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString22(string: []const u8, format: i32) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString22(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromString23` instead
    ///
    pub const FromString23 = fromString23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString23(string: []const u8, format: i32) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString23(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromString32` instead
    ///
    pub const FromString32 = fromString32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString32(string: []const u8, format: []const u8, baseYear: i32) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString32(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `fromString33` instead
    ///
    pub const FromString33 = fromString33;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString33(string: []const u8, format: []const u8, baseYear: i32) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString33(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `fromString34` instead
    ///
    pub const FromString34 = fromString34;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString34(string: []const u8, format: []const u8, baseYear: i32) QDate {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDate_FromString34(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dtor.QDate)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDate `
    ///
    pub fn delete(self: QDate) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTime `
    ///
    pub fn new(other: anytype) QTime {
        comptime _ = @TypeOf(other)._is_QTime;
        return .{ .ptr = qtc.QTime_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTime object and invalidate the source QTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTime `
    ///
    pub fn new2(other: anytype) QTime {
        comptime _ = @TypeOf(other)._is_QTime;
        return .{ .ptr = qtc.QTime_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTime object in C++ memory
    ///
    pub fn new3() QTime {
        return .{ .ptr = qtc.QTime_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    pub fn new4(h: i32, m: i32) QTime {
        return .{ .ptr = qtc.QTime_new4(@bitCast(h), @bitCast(m)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTime `
    ///
    pub fn new5(param1: anytype) QTime {
        comptime _ = @TypeOf(param1)._is_QTime;
        return .{ .ptr = qtc.QTime_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` s: i32 `
    ///
    pub fn new6(h: i32, m: i32, s: i32) QTime {
        return .{ .ptr = qtc.QTime_new6(@bitCast(h), @bitCast(m), @bitCast(s)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTime object in C++ memory
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
    pub fn new7(h: i32, m: i32, s: i32, ms: i32) QTime {
        return .{ .ptr = qtc.QTime_new7(@bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTime `
    ///
    /// ` other: QTime `
    ///
    pub fn copyAssign(self: QTime, other: QTime) void {
        qtc.QTime_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTime `
    ///
    /// ` other: QTime `
    ///
    pub fn moveAssign(self: QTime, other: QTime) void {
        qtc.QTime_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn isNull(self: QTime) bool {
        return qtc.QTime_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn isValid(self: QTime) bool {
        return qtc.QTime_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hour` instead
    ///
    pub const Hour = hour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#hour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn hour(self: QTime) i32 {
        return qtc.QTime_Hour(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minute` instead
    ///
    pub const Minute = minute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#minute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn minute(self: QTime) i32 {
        return qtc.QTime_Minute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `second` instead
    ///
    pub const Second = second;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#second)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn second(self: QTime) i32 {
        return qtc.QTime_Second(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `msec` instead
    ///
    pub const Msec = msec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn msec(self: QTime) i32 {
        return qtc.QTime_Msec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTime_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTime.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

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
    pub fn toString2(self: QTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QTime_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTime.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: QTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QTime_ToString3(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTime.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHMS` instead
    ///
    pub const SetHMS = setHMS;

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
    pub fn setHMS(self: QTime, h: i32, m: i32, s: i32) bool {
        return qtc.QTime_SetHMS(@ptrCast(self.ptr), @bitCast(h), @bitCast(m), @bitCast(s));
    }

    /// ### DEPRECATED: Use `addSecs` instead
    ///
    pub const AddSecs = addSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` secs: i32 `
    ///
    pub fn addSecs(self: QTime, secs: i32) QTime {
        return .{ .ptr = qtc.QTime_AddSecs(@ptrCast(self.ptr), @bitCast(secs)) };
    }

    /// ### DEPRECATED: Use `secsTo` instead
    ///
    pub const SecsTo = secsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` t: QTime `
    ///
    pub fn secsTo(self: QTime, t: anytype) i32 {
        comptime _ = @TypeOf(t)._is_QTime;
        return qtc.QTime_SecsTo(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `addMSecs` instead
    ///
    pub const AddMSecs = addMSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addMSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` ms: i32 `
    ///
    pub fn addMSecs(self: QTime, ms: i32) QTime {
        return .{ .ptr = qtc.QTime_AddMSecs(@ptrCast(self.ptr), @bitCast(ms)) };
    }

    /// ### DEPRECATED: Use `msecsTo` instead
    ///
    pub const MsecsTo = msecsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    /// ` t: QTime `
    ///
    pub fn msecsTo(self: QTime, t: anytype) i32 {
        comptime _ = @TypeOf(t)._is_QTime;
        return qtc.QTime_MsecsTo(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `fromMSecsSinceStartOfDay` instead
    ///
    pub const FromMSecsSinceStartOfDay = fromMSecsSinceStartOfDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i32 `
    ///
    pub fn fromMSecsSinceStartOfDay(msecs: i32) QTime {
        return .{ .ptr = qtc.QTime_FromMSecsSinceStartOfDay(@bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `msecsSinceStartOfDay` instead
    ///
    pub const MsecsSinceStartOfDay = msecsSinceStartOfDay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTime `
    ///
    pub fn msecsSinceStartOfDay(self: QTime) i32 {
        return qtc.QTime_MsecsSinceStartOfDay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentTime` instead
    ///
    pub const CurrentTime = currentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#currentTime)
    ///
    pub fn currentTime() QTime {
        return .{ .ptr = qtc.QTime_CurrentTime() };
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `fromString2` instead
    ///
    pub const FromString2 = fromString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString2(string: []const u8, format: []const u8) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString2(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString3` instead
    ///
    pub const FromString3 = fromString3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString3(string: []const u8, format: []const u8) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString3(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString4` instead
    ///
    pub const FromString4 = fromString4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString4(string: []const u8) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString4(string_str) };
    }

    /// ### DEPRECATED: Use `fromString5` instead
    ///
    pub const FromString5 = fromString5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString5(string: []const u8, format: []const u8) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString5(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `isValid2` instead
    ///
    pub const IsValid2 = isValid2;

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
    pub fn isValid2(h: i32, m: i32, s: i32) bool {
        return qtc.QTime_IsValid2(@bitCast(h), @bitCast(m), @bitCast(s));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QTime, allocator: std.mem.Allocator, f: i32) []const u8 {
        var _str = qtc.QTime_ToString1(@ptrCast(self.ptr), @bitCast(f));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTime.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHMS4` instead
    ///
    pub const SetHMS4 = setHMS4;

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
    pub fn setHMS4(self: QTime, h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_SetHMS4(@ptrCast(self.ptr), @bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms));
    }

    /// ### DEPRECATED: Use `fromString22` instead
    ///
    pub const FromString22 = fromString22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString22(string: []const u8, format: i32) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString22(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromString23` instead
    ///
    pub const FromString23 = fromString23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString23(string: []const u8, format: i32) QTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QTime_FromString23(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `isValid4` instead
    ///
    pub const IsValid4 = isValid4;

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
    pub fn isValid4(h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_IsValid4(@bitCast(h), @bitCast(m), @bitCast(s), @bitCast(ms));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtime.html#dtor.QTime)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTime `
    ///
    pub fn delete(self: QTime) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDateTime object in C++ memory
    ///
    pub fn new() QDateTime {
        return .{ .ptr = qtc.QDateTime_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn new2(_date: anytype, _time: anytype, spec: i32) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new2(@ptrCast(_date.ptr), @ptrCast(_time.ptr), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    /// ` _timeZone: QTimeZone `
    ///
    pub fn new3(_date: anytype, _time: anytype, _timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        comptime _ = @TypeOf(_timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_new3(@ptrCast(_date.ptr), @ptrCast(_time.ptr), @ptrCast(_timeZone.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    pub fn new4(_date: anytype, _time: anytype) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new4(@ptrCast(_date.ptr), @ptrCast(_time.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDateTime `
    ///
    pub fn new5(other: anytype) QDateTime {
        comptime _ = @TypeOf(other)._is_QDateTime;
        return .{ .ptr = qtc.QDateTime_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn new6(_date: anytype, _time: anytype, spec: i32, offsetSeconds: i32) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new6(@ptrCast(_date.ptr), @ptrCast(_time.ptr), @bitCast(spec), @bitCast(offsetSeconds)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    /// ` _timeZone: QTimeZone `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn new7(_date: anytype, _time: anytype, _timeZone: anytype, resolve: i32) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        comptime _ = @TypeOf(_timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_new7(@ptrCast(_date.ptr), @ptrCast(_time.ptr), @ptrCast(_timeZone.ptr), @bitCast(resolve)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QDateTime object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _date: QDate `
    ///
    /// ` _time: QTime `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn new8(_date: anytype, _time: anytype, resolve: i32) QDateTime {
        comptime _ = @TypeOf(_date)._is_QDate;
        comptime _ = @TypeOf(_time)._is_QTime;
        return .{ .ptr = qtc.QDateTime_new8(@ptrCast(_date.ptr), @ptrCast(_time.ptr), @bitCast(resolve)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` other: QDateTime `
    ///
    pub fn operatorAssign(self: QDateTime, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDateTime;
        qtc.QDateTime_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` other: QDateTime `
    ///
    pub fn swap(self: QDateTime, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDateTime;
        qtc.QDateTime_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn isNull(self: QDateTime) bool {
        return qtc.QDateTime_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn isValid(self: QDateTime) bool {
        return qtc.QDateTime_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn date(self: QDateTime) QDate {
        return .{ .ptr = qtc.QDateTime_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `time` instead
    ///
    pub const Time = time;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn time(self: QDateTime) QTime {
        return .{ .ptr = qtc.QDateTime_Time(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timeSpec` instead
    ///
    pub const TimeSpec = timeSpec;

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
    pub fn timeSpec(self: QDateTime) i32 {
        return qtc.QDateTime_TimeSpec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `offsetFromUtc` instead
    ///
    pub const OffsetFromUtc = offsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn offsetFromUtc(self: QDateTime) i32 {
        return qtc.QDateTime_OffsetFromUtc(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeRepresentation` instead
    ///
    pub const TimeRepresentation = timeRepresentation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeRepresentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn timeRepresentation(self: QDateTime) QTimeZone {
        return .{ .ptr = qtc.QDateTime_TimeRepresentation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timeZone` instead
    ///
    pub const TimeZone = timeZone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn timeZone(self: QDateTime) QTimeZone {
        return .{ .ptr = qtc.QDateTime_TimeZone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timeZoneAbbreviation` instead
    ///
    pub const TimeZoneAbbreviation = timeZoneAbbreviation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn timeZoneAbbreviation(self: QDateTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTime_TimeZoneAbbreviation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.timeZoneAbbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isDaylightTime` instead
    ///
    pub const IsDaylightTime = isDaylightTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn isDaylightTime(self: QDateTime) bool {
        return qtc.QDateTime_IsDaylightTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toMSecsSinceEpoch` instead
    ///
    pub const ToMSecsSinceEpoch = toMSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn toMSecsSinceEpoch(self: QDateTime) i64 {
        return qtc.QDateTime_ToMSecsSinceEpoch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toSecsSinceEpoch` instead
    ///
    pub const ToSecsSinceEpoch = toSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn toSecsSinceEpoch(self: QDateTime) i64 {
        return qtc.QDateTime_ToSecsSinceEpoch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` _date: QDate `
    ///
    pub fn setDate(self: QDateTime, _date: anytype) void {
        comptime _ = @TypeOf(_date)._is_QDate;
        qtc.QDateTime_SetDate(@ptrCast(self.ptr), @ptrCast(_date.ptr));
    }

    /// ### DEPRECATED: Use `setTime` instead
    ///
    pub const SetTime = setTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` _time: QTime `
    ///
    pub fn setTime(self: QDateTime, _time: anytype) void {
        comptime _ = @TypeOf(_time)._is_QTime;
        qtc.QDateTime_SetTime(@ptrCast(self.ptr), @ptrCast(_time.ptr));
    }

    /// ### DEPRECATED: Use `setTimeSpec` instead
    ///
    pub const SetTimeSpec = setTimeSpec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn setTimeSpec(self: QDateTime, spec: i32) void {
        qtc.QDateTime_SetTimeSpec(@ptrCast(self.ptr), @bitCast(spec));
    }

    /// ### DEPRECATED: Use `setOffsetFromUtc` instead
    ///
    pub const SetOffsetFromUtc = setOffsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn setOffsetFromUtc(self: QDateTime, offsetSeconds: i32) void {
        qtc.QDateTime_SetOffsetFromUtc(@ptrCast(self.ptr), @bitCast(offsetSeconds));
    }

    /// ### DEPRECATED: Use `setTimeZone` instead
    ///
    pub const SetTimeZone = setTimeZone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` toZone: QTimeZone `
    ///
    pub fn setTimeZone(self: QDateTime, toZone: anytype) void {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        qtc.QDateTime_SetTimeZone(@ptrCast(self.ptr), @ptrCast(toZone.ptr));
    }

    /// ### DEPRECATED: Use `setMSecsSinceEpoch` instead
    ///
    pub const SetMSecsSinceEpoch = setMSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 `
    ///
    pub fn setMSecsSinceEpoch(self: QDateTime, msecs: i64) void {
        qtc.QDateTime_SetMSecsSinceEpoch(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `setSecsSinceEpoch` instead
    ///
    pub const SetSecsSinceEpoch = setSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` secs: i64 `
    ///
    pub fn setSecsSinceEpoch(self: QDateTime, secs: i64) void {
        qtc.QDateTime_SetSecsSinceEpoch(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QDateTime, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTime_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

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
    pub fn toString2(self: QDateTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDateTime_ToString2(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString3` instead
    ///
    pub const ToString3 = toString3;

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
    pub fn toString3(self: QDateTime, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDateTime_ToString3(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString4` instead
    ///
    pub const ToString4 = toString4;

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
    pub fn toString4(self: QDateTime, allocator: std.mem.Allocator, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QDateTime_ToString4(@ptrCast(self.ptr), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString5` instead
    ///
    pub const ToString5 = toString5;

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
    pub fn toString5(self: QDateTime, allocator: std.mem.Allocator, format: []const u8, cal: anytype) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        var _str = qtc.QDateTime_ToString5(@ptrCast(self.ptr), format_str, @ptrCast(cal.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addDays` instead
    ///
    pub const AddDays = addDays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` days: i64 `
    ///
    pub fn addDays(self: QDateTime, days: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddDays(@ptrCast(self.ptr), @bitCast(days)) };
    }

    /// ### DEPRECATED: Use `addMonths` instead
    ///
    pub const AddMonths = addMonths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` months: i32 `
    ///
    pub fn addMonths(self: QDateTime, months: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddMonths(@ptrCast(self.ptr), @bitCast(months)) };
    }

    /// ### DEPRECATED: Use `addYears` instead
    ///
    pub const AddYears = addYears;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addYears)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` years: i32 `
    ///
    pub fn addYears(self: QDateTime, years: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddYears(@ptrCast(self.ptr), @bitCast(years)) };
    }

    /// ### DEPRECATED: Use `addSecs` instead
    ///
    pub const AddSecs = addSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` secs: i64 `
    ///
    pub fn addSecs(self: QDateTime, secs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddSecs(@ptrCast(self.ptr), @bitCast(secs)) };
    }

    /// ### DEPRECATED: Use `addMSecs` instead
    ///
    pub const AddMSecs = addMSecs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 `
    ///
    pub fn addMSecs(self: QDateTime, msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddMSecs(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `addDuration` instead
    ///
    pub const AddDuration = addDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` msecs: i64 of milliseconds `
    ///
    pub fn addDuration(self: QDateTime, msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_AddDuration(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `toTimeSpec` instead
    ///
    pub const ToTimeSpec = toTimeSpec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn toTimeSpec(self: QDateTime, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToTimeSpec(@ptrCast(self.ptr), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `toLocalTime` instead
    ///
    pub const ToLocalTime = toLocalTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn toLocalTime(self: QDateTime) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToLocalTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUTC` instead
    ///
    pub const ToUTC = toUTC;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    pub fn toUTC(self: QDateTime) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToUTC(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toOffsetFromUtc` instead
    ///
    pub const ToOffsetFromUtc = toOffsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn toOffsetFromUtc(self: QDateTime, offsetSeconds: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_ToOffsetFromUtc(@ptrCast(self.ptr), @bitCast(offsetSeconds)) };
    }

    /// ### DEPRECATED: Use `toTimeZone` instead
    ///
    pub const ToTimeZone = toTimeZone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` toZone: QTimeZone `
    ///
    pub fn toTimeZone(self: QDateTime, toZone: anytype) QDateTime {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_ToTimeZone(@ptrCast(self.ptr), @ptrCast(toZone.ptr)) };
    }

    /// ### DEPRECATED: Use `daysTo` instead
    ///
    pub const DaysTo = daysTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn daysTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_DaysTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `secsTo` instead
    ///
    pub const SecsTo = secsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn secsTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_SecsTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `msecsTo` instead
    ///
    pub const MsecsTo = msecsTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` param1: QDateTime `
    ///
    pub fn msecsTo(self: QDateTime, param1: anytype) i64 {
        comptime _ = @TypeOf(param1)._is_QDateTime;
        return qtc.QDateTime_MsecsTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `currentDateTime` instead
    ///
    pub const CurrentDateTime = currentDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn currentDateTime(zone: anytype) QDateTime {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_CurrentDateTime(@ptrCast(zone.ptr)) };
    }

    /// ### DEPRECATED: Use `currentDateTime2` instead
    ///
    pub const CurrentDateTime2 = currentDateTime2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
    ///
    pub fn currentDateTime2() QDateTime {
        return .{ .ptr = qtc.QDateTime_CurrentDateTime2() };
    }

    /// ### DEPRECATED: Use `currentDateTimeUtc` instead
    ///
    pub const CurrentDateTimeUtc = currentDateTimeUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
    ///
    pub fn currentDateTimeUtc() QDateTime {
        return .{ .ptr = qtc.QDateTime_CurrentDateTimeUtc() };
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `fromString2` instead
    ///
    pub const FromString2 = fromString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString2(string: []const u8) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString2(string_str) };
    }

    /// ### DEPRECATED: Use `fromString3` instead
    ///
    pub const FromString3 = fromString3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString3(string: []const u8, format: []const u8, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString3(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString4` instead
    ///
    pub const FromString4 = fromString4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString4(string: []const u8, format: []const u8, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString4(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString5` instead
    ///
    pub const FromString5 = fromString5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString5(string: []const u8, format: []const u8, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString5(string_str, format_str, @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString6` instead
    ///
    pub const FromString6 = fromString6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString6(string: []const u8, format: []const u8) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString6(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString7` instead
    ///
    pub const FromString7 = fromString7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString7(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString7(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString8` instead
    ///
    pub const FromString8 = fromString8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString8(string: []const u8, format: []const u8) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString8(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString9` instead
    ///
    pub const FromString9 = fromString9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString9(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString9(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromString10` instead
    ///
    pub const FromString10 = fromString10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn fromString10(string: []const u8, format: []const u8) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString10(string_str, format_str) };
    }

    /// ### DEPRECATED: Use `fromString11` instead
    ///
    pub const FromString11 = fromString11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    /// ` cal: QCalendar `
    ///
    pub fn fromString11(string: []const u8, format: []const u8, baseYear: i32, cal: anytype) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        comptime _ = @TypeOf(cal)._is_QCalendar;
        return .{ .ptr = qtc.QDateTime_FromString11(string_str, format_str, @bitCast(baseYear), @ptrCast(cal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromMSecsSinceEpoch` instead
    ///
    pub const FromMSecsSinceEpoch = fromMSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn fromMSecsSinceEpoch(msecs: i64, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch(@bitCast(msecs), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `fromSecsSinceEpoch` instead
    ///
    pub const FromSecsSinceEpoch = fromSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn fromSecsSinceEpoch(secs: i64, spec: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch(@bitCast(secs), @bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `fromMSecsSinceEpoch2` instead
    ///
    pub const FromMSecsSinceEpoch2 = fromMSecsSinceEpoch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` _timeZone: QTimeZone `
    ///
    pub fn fromMSecsSinceEpoch2(msecs: i64, _timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(_timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch2(@bitCast(msecs), @ptrCast(_timeZone.ptr)) };
    }

    /// ### DEPRECATED: Use `fromSecsSinceEpoch2` instead
    ///
    pub const FromSecsSinceEpoch2 = fromSecsSinceEpoch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` _timeZone: QTimeZone `
    ///
    pub fn fromSecsSinceEpoch2(secs: i64, _timeZone: anytype) QDateTime {
        comptime _ = @TypeOf(_timeZone)._is_QTimeZone;
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch2(@bitCast(secs), @ptrCast(_timeZone.ptr)) };
    }

    /// ### DEPRECATED: Use `fromMSecsSinceEpoch3` instead
    ///
    pub const FromMSecsSinceEpoch3 = fromMSecsSinceEpoch3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    pub fn fromMSecsSinceEpoch3(msecs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch3(@bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `fromSecsSinceEpoch3` instead
    ///
    pub const FromSecsSinceEpoch3 = fromSecsSinceEpoch3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    pub fn fromSecsSinceEpoch3(secs: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch3(@bitCast(secs)) };
    }

    /// ### DEPRECATED: Use `currentMSecsSinceEpoch` instead
    ///
    pub const CurrentMSecsSinceEpoch = currentMSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
    ///
    pub fn currentMSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentMSecsSinceEpoch();
    }

    /// ### DEPRECATED: Use `currentSecsSinceEpoch` instead
    ///
    pub const CurrentSecsSinceEpoch = currentSecsSinceEpoch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
    ///
    pub fn currentSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentSecsSinceEpoch();
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn operatorPlusAssign(self: QDateTime, duration: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(duration)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn operatorMinusAssign(self: QDateTime, duration: i64) QDateTime {
        return .{ .ptr = qtc.QDateTime_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(duration)) };
    }

    /// ### DEPRECATED: Use `setDate2` instead
    ///
    pub const SetDate2 = setDate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` _date: QDate `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn setDate2(self: QDateTime, _date: anytype, resolve: i32) void {
        comptime _ = @TypeOf(_date)._is_QDate;
        qtc.QDateTime_SetDate2(@ptrCast(self.ptr), @ptrCast(_date.ptr), @bitCast(resolve));
    }

    /// ### DEPRECATED: Use `setTime2` instead
    ///
    pub const SetTime2 = setTime2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTime `
    ///
    /// ` _time: QTime `
    ///
    /// ` resolve: qdatetime_enums.TransitionResolution `
    ///
    pub fn setTime2(self: QDateTime, _time: anytype, resolve: i32) void {
        comptime _ = @TypeOf(_time)._is_QTime;
        qtc.QDateTime_SetTime2(@ptrCast(self.ptr), @ptrCast(_time.ptr), @bitCast(resolve));
    }

    /// ### DEPRECATED: Use `setTimeZone2` instead
    ///
    pub const SetTimeZone2 = setTimeZone2;

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
    pub fn setTimeZone2(self: QDateTime, toZone: anytype, resolve: i32) void {
        comptime _ = @TypeOf(toZone)._is_QTimeZone;
        qtc.QDateTime_SetTimeZone2(@ptrCast(self.ptr), @ptrCast(toZone.ptr), @bitCast(resolve));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QDateTime, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QDateTime_ToString1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTime.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString22` instead
    ///
    pub const FromString22 = fromString22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString22(string: []const u8, format: i32) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString22(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromString23` instead
    ///
    pub const FromString23 = fromString23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: qnamespace_enums.DateFormat `
    ///
    pub fn fromString23(string: []const u8, format: i32) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString23(string_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromString32` instead
    ///
    pub const FromString32 = fromString32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString32(string: []const u8, format: []const u8, baseYear: i32) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString32(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `fromString33` instead
    ///
    pub const FromString33 = fromString33;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString33(string: []const u8, format: []const u8, baseYear: i32) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString33(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `fromString34` instead
    ///
    pub const FromString34 = fromString34;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` format: []const u8 `
    ///
    /// ` baseYear: i32 `
    ///
    pub fn fromString34(string: []const u8, format: []const u8, baseYear: i32) QDateTime {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QDateTime_FromString34(string_str, format_str, @bitCast(baseYear)) };
    }

    /// ### DEPRECATED: Use `fromMSecsSinceEpoch32` instead
    ///
    pub const FromMSecsSinceEpoch32 = fromMSecsSinceEpoch32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` _offsetFromUtc: i32 `
    ///
    pub fn fromMSecsSinceEpoch32(msecs: i64, spec: i32, _offsetFromUtc: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromMSecsSinceEpoch32(@bitCast(msecs), @bitCast(spec), @bitCast(_offsetFromUtc)) };
    }

    /// ### DEPRECATED: Use `fromSecsSinceEpoch32` instead
    ///
    pub const FromSecsSinceEpoch32 = fromSecsSinceEpoch32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
    ///
    /// ## Parameter(s):
    ///
    /// ` secs: i64 `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    /// ` _offsetFromUtc: i32 `
    ///
    pub fn fromSecsSinceEpoch32(secs: i64, spec: i32, _offsetFromUtc: i32) QDateTime {
        return .{ .ptr = qtc.QDateTime_FromSecsSinceEpoch32(@bitCast(secs), @bitCast(spec), @bitCast(_offsetFromUtc)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#dtor.QDateTime)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateTime `
    ///
    pub fn delete(self: QDateTime) void {
        qtc.QDateTime_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#public-types)
pub const enums = struct {
    pub const TransitionResolution = enum {
        pub const Reject: i32 = 0;
        pub const RelativeToBefore: i32 = 1;
        pub const RelativeToAfter: i32 = 2;
        pub const PreferBefore: i32 = 3;
        pub const PreferAfter: i32 = 4;
        pub const PreferStandard: i32 = 5;
        pub const PreferDaylightSaving: i32 = 6;
        pub const LegacyBehavior: i32 = 1;
    };

    pub const YearRange = enum {
        pub const First: i32 = -292275056;
        pub const Last: i32 = 292278994;
    };
};
