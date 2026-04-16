const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QLocale = @import("libqt6").QLocale;
const qlocale_enums = @import("libqlocale.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtimezone_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)
pub const QTimeZone = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTimeZone,

    pub const _is_QTimeZone = {};

    /// New constructs a new QTimeZone object.
    ///
    pub fn New() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new() };
    }

    /// New2 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qtimezone_enums.Initialization `
    ///
    pub fn New2(spec: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new2(@bitCast(spec)) };
    }

    /// New3 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn New3(offsetSeconds: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new3(@bitCast(offsetSeconds)) };
    }

    /// New4 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn New4(ianaId: []u8) QTimeZone {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new4(ianaId_str) };
    }

    /// New5 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` abbreviation: []const u8 `
    ///
    pub fn New5(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new5(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str) };
    }

    /// New6 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTimeZone `
    ///
    pub fn New6(other: anytype) QTimeZone {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        return .{ .ptr = qtc.QTimeZone_new6(@ptrCast(other.ptr)) };
    }

    /// New7 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` abbreviation: []const u8 `
    ///
    /// ` territory: qlocale_enums.Country `
    ///
    pub fn New7(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: u16) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new7(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str, @bitCast(territory)) };
    }

    /// New8 constructs a new QTimeZone object.
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` abbreviation: []const u8 `
    ///
    /// ` territory: qlocale_enums.Country `
    ///
    /// ` comment: []const u8 `
    ///
    pub fn New8(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: u16, comment: []const u8) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new8(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str, @bitCast(territory), comment_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` other: QTimeZone `
    ///
    pub fn OperatorAssign(self: QTimeZone, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        qtc.QTimeZone_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` other: QTimeZone `
    ///
    pub fn Swap(self: QTimeZone, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        qtc.QTimeZone_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn IsValid(self: QTimeZone) bool {
        return qtc.QTimeZone_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromDurationAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` offset: i64 of seconds `
    ///
    pub fn FromDurationAheadOfUtc(offset: i64) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_FromDurationAheadOfUtc(@bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` offset: i32 `
    ///
    pub fn FromSecondsAheadOfUtc(offset: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_FromSecondsAheadOfUtc(@bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#timeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimeSpec `
    ///
    pub fn TimeSpec(self: QTimeZone) i32 {
        return qtc.QTimeZone_TimeSpec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn FixedSecondsAheadOfUtc(self: QTimeZone) i32 {
        return qtc.QTimeZone_FixedSecondsAheadOfUtc(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn IsUtcOrFixedOffset(spec: i32) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset(@bitCast(spec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn IsUtcOrFixedOffset2(self: QTimeZone) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn AsBackendZone(self: QTimeZone) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_AsBackendZone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` alias: []u8 `
    ///
    pub fn HasAlternativeName(self: QTimeZone, alias: []u8) bool {
        const alias_str = qtc.libqt_string{
            .len = alias.len,
            .data = alias.ptr,
        };
        return qtc.QTimeZone_HasAlternativeName(@ptrCast(self.ptr), alias_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: QTimeZone, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#territory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.Country `
    ///
    pub fn Territory(self: QTimeZone) u16 {
        return qtc.QTimeZone_Territory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.Country `
    ///
    pub fn Country(self: QTimeZone) u16 {
        return qtc.QTimeZone_Country(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: QTimeZone, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTimeZone_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn DisplayName(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_DisplayName(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` timeType: qtimezone_enums.TimeType `
    ///
    pub fn DisplayName2(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32) []const u8 {
        var _str = qtc.QTimeZone_DisplayName2(@ptrCast(self.ptr), @bitCast(timeType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#abbreviation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn Abbreviation(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_Abbreviation(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Abbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn OffsetFromUtc(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_OffsetFromUtc(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn StandardTimeOffset(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_StandardTimeOffset(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn DaylightTimeOffset(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_DaylightTimeOffset(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn HasDaylightTime(self: QTimeZone) bool {
        return qtc.QTimeZone_HasDaylightTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn IsDaylightTime(self: QTimeZone, atDateTime: anytype) bool {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_IsDaylightTime(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` forDateTime: QDateTime `
    ///
    pub fn OffsetData(self: QTimeZone, forDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(forDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_OffsetData(@ptrCast(self.ptr), @ptrCast(forDateTime.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn HasTransitions(self: QTimeZone) bool {
        return qtc.QTimeZone_HasTransitions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` afterDateTime: QDateTime `
    ///
    pub fn NextTransition(self: QTimeZone, afterDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(afterDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_NextTransition(@ptrCast(self.ptr), @ptrCast(afterDateTime.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` beforeDateTime: QDateTime `
    ///
    pub fn PreviousTransition(self: QTimeZone, beforeDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(beforeDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_PreviousTransition(@ptrCast(self.ptr), @ptrCast(beforeDateTime.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#transitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fromDateTime: QDateTime `
    ///
    /// ` toDateTime: QDateTime `
    ///
    pub fn Transitions(self: QTimeZone, allocator: std.mem.Allocator, fromDateTime: anytype, toDateTime: anytype) []QTimeZone__OffsetData {
        comptime _ = @TypeOf(fromDateTime)._is_QDateTime;
        comptime _ = @TypeOf(toDateTime)._is_QDateTime;
        const _arr: qtc.libqt_list = qtc.QTimeZone_Transitions(@ptrCast(self.ptr), @ptrCast(fromDateTime.ptr), @ptrCast(toDateTime.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTimeZone__OffsetData, _arr.len) catch @panic("qtimezone.Transitions: Memory allocation failed");
        const _data: [*]QtC.QTimeZone__OffsetData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZoneId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemTimeZoneId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_SystemTimeZoneId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.SystemTimeZoneId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZone)
    ///
    pub fn SystemTimeZone() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_SystemTimeZone() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#utc)
    ///
    pub fn Utc() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_Utc() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isTimeZoneIdAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn IsTimeZoneIdAvailable(ianaId: []u8) bool {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        return qtc.QTimeZone_IsTimeZoneIdAvailable(ianaId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableTimeZoneIds(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimezone.AvailableTimeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimezone.AvailableTimeZoneIds: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` territory: qlocale_enums.Country `
    ///
    pub fn AvailableTimeZoneIds2(allocator: std.mem.Allocator, territory: u16) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds2(@bitCast(territory));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimezone.AvailableTimeZoneIds2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimezone.AvailableTimeZoneIds2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn AvailableTimeZoneIds3(allocator: std.mem.Allocator, offsetSeconds: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds3(@bitCast(offsetSeconds));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimezone.AvailableTimeZoneIds3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimezone.AvailableTimeZoneIds3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#ianaIdToWindowsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn IanaIdToWindowsId(allocator: std.mem.Allocator, ianaId: []u8) []u8 {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_IanaIdToWindowsId(ianaId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.IanaIdToWindowsId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    pub fn WindowsIdToDefaultIanaId(allocator: std.mem.Allocator, windowsId: []u8) []u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId(windowsId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    /// ` territory: qlocale_enums.Country `
    ///
    pub fn WindowsIdToDefaultIanaId2(allocator: std.mem.Allocator, windowsId: []u8, territory: u16) []u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId2(windowsId_str, @bitCast(territory));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    pub fn WindowsIdToIanaIds(allocator: std.mem.Allocator, windowsId: []u8) [][]u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTimeZone_WindowsIdToIanaIds(windowsId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimezone.WindowsIdToIanaIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimezone.WindowsIdToIanaIds: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    /// ` territory: qlocale_enums.Country `
    ///
    pub fn WindowsIdToIanaIds2(allocator: std.mem.Allocator, windowsId: []u8, territory: u16) [][]u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTimeZone_WindowsIdToIanaIds2(windowsId_str, @bitCast(territory));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimezone.WindowsIdToIanaIds2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimezone.WindowsIdToIanaIds2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` atDateTime: QDateTime `
    ///
    /// ` nameType: qtimezone_enums.NameType `
    ///
    pub fn DisplayName22(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype, nameType: i32) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_DisplayName22(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr), @bitCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` atDateTime: QDateTime `
    ///
    /// ` nameType: qtimezone_enums.NameType `
    ///
    /// ` locale: QLocale `
    ///
    pub fn DisplayName3(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype, nameType: i32, locale: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QTimeZone_DisplayName3(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr), @bitCast(nameType), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` timeType: qtimezone_enums.TimeType `
    ///
    /// ` nameType: qtimezone_enums.NameType `
    ///
    pub fn DisplayName23(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32, nameType: i32) []const u8 {
        var _str = qtc.QTimeZone_DisplayName23(@ptrCast(self.ptr), @bitCast(timeType), @bitCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` timeType: qtimezone_enums.TimeType `
    ///
    /// ` nameType: qtimezone_enums.NameType `
    ///
    /// ` locale: QLocale `
    ///
    pub fn DisplayName32(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32, nameType: i32, locale: anytype) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QTimeZone_DisplayName32(@ptrCast(self.ptr), @bitCast(timeType), @bitCast(nameType), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#dtor.QTimeZone)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimeZone `
    ///
    pub fn Delete(self: QTimeZone) void {
        qtc.QTimeZone_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html)
pub const QTimeZone__OffsetData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTimeZone__OffsetData,

    pub const _is_QTimeZone__OffsetData = {};

    /// New constructs a new QTimeZone::OffsetData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTimeZone__OffsetData `
    ///
    pub fn New(param1: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(param1)._is_QTimeZone__OffsetData;
        return .{ .ptr = qtc.QTimeZone__OffsetData_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QTimeZone::OffsetData object.
    ///
    pub fn New2() QTimeZone__OffsetData {
        return .{ .ptr = qtc.QTimeZone__OffsetData_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Abbreviation(self: QTimeZone__OffsetData, allocator: std.mem.Allocator) []const u8 {
        var abbreviation_str = qtc.QTimeZone__OffsetData_Abbreviation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&abbreviation_str);
        const abbreviation_ret = allocator.alloc(u8, abbreviation_str.len) catch @panic("qtimezone__offsetdata.Abbreviation: Memory allocation failed");
        @memcpy(abbreviation_ret, abbreviation_str.data[0..abbreviation_str.len]);
        return abbreviation_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` abbreviation: []const u8 `
    ///
    pub fn SetAbbreviation(self: QTimeZone__OffsetData, abbreviation: []const u8) void {
        const abbreviation_str = qtc.libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };
        qtc.QTimeZone__OffsetData_SetAbbreviation(@ptrCast(self.ptr), abbreviation_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn AtUtc(self: QTimeZone__OffsetData) QDateTime {
        return .{ .ptr = qtc.QTimeZone__OffsetData_AtUtc(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` atUtc: QDateTime `
    ///
    pub fn SetAtUtc(self: QTimeZone__OffsetData, atUtc: anytype) void {
        comptime _ = @TypeOf(atUtc)._is_QDateTime;
        qtc.QTimeZone__OffsetData_SetAtUtc(@ptrCast(self.ptr), @ptrCast(atUtc.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn OffsetFromUtc(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_OffsetFromUtc(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` offsetFromUtc: i32 `
    ///
    pub fn SetOffsetFromUtc(self: QTimeZone__OffsetData, offsetFromUtc: i32) void {
        qtc.QTimeZone__OffsetData_SetOffsetFromUtc(@ptrCast(self.ptr), @bitCast(offsetFromUtc));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn StandardTimeOffset(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_StandardTimeOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` standardTimeOffset: i32 `
    ///
    pub fn SetStandardTimeOffset(self: QTimeZone__OffsetData, standardTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetStandardTimeOffset(@ptrCast(self.ptr), @bitCast(standardTimeOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn DaylightTimeOffset(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_DaylightTimeOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` daylightTimeOffset: i32 `
    ///
    pub fn SetDaylightTimeOffset(self: QTimeZone__OffsetData, daylightTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetDaylightTimeOffset(@ptrCast(self.ptr), @bitCast(daylightTimeOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` param1: QTimeZone__OffsetData `
    ///
    pub fn OperatorAssign(self: QTimeZone__OffsetData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimeZone__OffsetData;
        qtc.QTimeZone__OffsetData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn Delete(self: QTimeZone__OffsetData) void {
        qtc.QTimeZone__OffsetData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#public-types)
pub const enums = struct {
    pub const Initialization = enum(i32) {
        pub const LocalTime: i32 = 0;
        pub const UTC: i32 = 1;
    };

    pub const TimeType = enum(i32) {
        pub const StandardTime: i32 = 0;
        pub const DaylightTime: i32 = 1;
        pub const GenericTime: i32 = 2;
    };

    pub const NameType = enum(i32) {
        pub const DefaultName: i32 = 0;
        pub const LongName: i32 = 1;
        pub const ShortName: i32 = 2;
        pub const OffsetName: i32 = 3;
    };
};
