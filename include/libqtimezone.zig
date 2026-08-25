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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    pub fn new() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qtimezone_enums.Initialization `
    ///
    pub fn new2(spec: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new2(@bitCast(spec)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn new3(offsetSeconds: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_new3(@bitCast(offsetSeconds)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn new4(ianaId: []u8) QTimeZone {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new4(ianaId_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _abbreviation: []const u8 `
    ///
    pub fn new5(zoneId: []u8, offsetSeconds: i32, name: []const u8, _abbreviation: []const u8) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = _abbreviation.len,
            .data = _abbreviation.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new5(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTimeZone `
    ///
    pub fn new6(other: anytype) QTimeZone {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        return .{ .ptr = qtc.QTimeZone_new6(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _abbreviation: []const u8 `
    ///
    /// ` _territory: qlocale_enums.Country `
    ///
    pub fn new7(zoneId: []u8, offsetSeconds: i32, name: []const u8, _abbreviation: []const u8, _territory: u16) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = _abbreviation.len,
            .data = _abbreviation.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new7(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str, @bitCast(_territory)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QTimeZone object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` zoneId: []u8 `
    ///
    /// ` offsetSeconds: i32 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _abbreviation: []const u8 `
    ///
    /// ` _territory: qlocale_enums.Country `
    ///
    /// ` _comment: []const u8 `
    ///
    pub fn new8(zoneId: []u8, offsetSeconds: i32, name: []const u8, _abbreviation: []const u8, _territory: u16, _comment: []const u8) QTimeZone {
        const zoneId_str = qtc.libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.libqt_string{
            .len = _abbreviation.len,
            .data = _abbreviation.ptr,
        };
        const comment_str = qtc.libqt_string{
            .len = _comment.len,
            .data = _comment.ptr,
        };
        return .{ .ptr = qtc.QTimeZone_new8(zoneId_str, @bitCast(offsetSeconds), name_str, abbreviation_str, @bitCast(_territory), comment_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` other: QTimeZone `
    ///
    pub fn operatorAssign(self: QTimeZone, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        qtc.QTimeZone_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` other: QTimeZone `
    ///
    pub fn swap(self: QTimeZone, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTimeZone;
        qtc.QTimeZone_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn isValid(self: QTimeZone) bool {
        return qtc.QTimeZone_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromDurationAheadOfUtc` instead
    ///
    pub const FromDurationAheadOfUtc = fromDurationAheadOfUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromDurationAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` offset: i64 of seconds `
    ///
    pub fn fromDurationAheadOfUtc(offset: i64) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_FromDurationAheadOfUtc(@bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `fromSecondsAheadOfUtc` instead
    ///
    pub const FromSecondsAheadOfUtc = fromSecondsAheadOfUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` offset: i32 `
    ///
    pub fn fromSecondsAheadOfUtc(offset: i32) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_FromSecondsAheadOfUtc(@bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `timeSpec` instead
    ///
    pub const TimeSpec = timeSpec;

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
    pub fn timeSpec(self: QTimeZone) i32 {
        return qtc.QTimeZone_TimeSpec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fixedSecondsAheadOfUtc` instead
    ///
    pub const FixedSecondsAheadOfUtc = fixedSecondsAheadOfUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn fixedSecondsAheadOfUtc(self: QTimeZone) i32 {
        return qtc.QTimeZone_FixedSecondsAheadOfUtc(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUtcOrFixedOffset` instead
    ///
    pub const IsUtcOrFixedOffset = isUtcOrFixedOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn isUtcOrFixedOffset(spec: i32) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset(@bitCast(spec));
    }

    /// ### DEPRECATED: Use `isUtcOrFixedOffset2` instead
    ///
    pub const IsUtcOrFixedOffset2 = isUtcOrFixedOffset2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn isUtcOrFixedOffset2(self: QTimeZone) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `asBackendZone` instead
    ///
    pub const AsBackendZone = asBackendZone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn asBackendZone(self: QTimeZone) QTimeZone {
        return .{ .ptr = qtc.QTimeZone_AsBackendZone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasAlternativeName` instead
    ///
    pub const HasAlternativeName = hasAlternativeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` alias: []u8 `
    ///
    pub fn hasAlternativeName(self: QTimeZone, alias: []u8) bool {
        const alias_str = qtc.libqt_string{
            .len = alias.len,
            .data = alias.ptr,
        };
        return qtc.QTimeZone_HasAlternativeName(@ptrCast(self.ptr), alias_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: QTimeZone, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTimeZone.id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `territory` instead
    ///
    pub const Territory = territory;

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
    pub fn territory(self: QTimeZone) u16 {
        return qtc.QTimeZone_Territory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

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
    pub fn country(self: QTimeZone) u16 {
        return qtc.QTimeZone_Country(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: QTimeZone, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTimeZone_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

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
    pub fn displayName(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_DisplayName(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName2` instead
    ///
    pub const DisplayName2 = displayName2;

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
    pub fn displayName2(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32) []const u8 {
        var _str = qtc.QTimeZone_DisplayName2(@ptrCast(self.ptr), @bitCast(timeType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `abbreviation` instead
    ///
    pub const Abbreviation = abbreviation;

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
    pub fn abbreviation(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_Abbreviation(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.abbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `offsetFromUtc` instead
    ///
    pub const OffsetFromUtc = offsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn offsetFromUtc(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_OffsetFromUtc(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### DEPRECATED: Use `standardTimeOffset` instead
    ///
    pub const StandardTimeOffset = standardTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn standardTimeOffset(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_StandardTimeOffset(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### DEPRECATED: Use `daylightTimeOffset` instead
    ///
    pub const DaylightTimeOffset = daylightTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn daylightTimeOffset(self: QTimeZone, atDateTime: anytype) i32 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_DaylightTimeOffset(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### DEPRECATED: Use `hasDaylightTime` instead
    ///
    pub const HasDaylightTime = hasDaylightTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn hasDaylightTime(self: QTimeZone) bool {
        return qtc.QTimeZone_HasDaylightTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDaylightTime` instead
    ///
    pub const IsDaylightTime = isDaylightTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` atDateTime: QDateTime `
    ///
    pub fn isDaylightTime(self: QTimeZone, atDateTime: anytype) bool {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        return qtc.QTimeZone_IsDaylightTime(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr));
    }

    /// ### DEPRECATED: Use `offsetData` instead
    ///
    pub const OffsetData = offsetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` forDateTime: QDateTime `
    ///
    pub fn offsetData(self: QTimeZone, forDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(forDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_OffsetData(@ptrCast(self.ptr), @ptrCast(forDateTime.ptr)) };
    }

    /// ### DEPRECATED: Use `hasTransitions` instead
    ///
    pub const HasTransitions = hasTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    pub fn hasTransitions(self: QTimeZone) bool {
        return qtc.QTimeZone_HasTransitions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextTransition` instead
    ///
    pub const NextTransition = nextTransition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` afterDateTime: QDateTime `
    ///
    pub fn nextTransition(self: QTimeZone, afterDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(afterDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_NextTransition(@ptrCast(self.ptr), @ptrCast(afterDateTime.ptr)) };
    }

    /// ### DEPRECATED: Use `previousTransition` instead
    ///
    pub const PreviousTransition = previousTransition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone `
    ///
    /// ` beforeDateTime: QDateTime `
    ///
    pub fn previousTransition(self: QTimeZone, beforeDateTime: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(beforeDateTime)._is_QDateTime;
        return .{ .ptr = qtc.QTimeZone_PreviousTransition(@ptrCast(self.ptr), @ptrCast(beforeDateTime.ptr)) };
    }

    /// ### DEPRECATED: Use `transitions` instead
    ///
    pub const Transitions = transitions;

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
    pub fn transitions(self: QTimeZone, allocator: std.mem.Allocator, fromDateTime: anytype, toDateTime: anytype) []QTimeZone__OffsetData {
        comptime _ = @TypeOf(fromDateTime)._is_QDateTime;
        comptime _ = @TypeOf(toDateTime)._is_QDateTime;
        const _arr: qtc.libqt_list = qtc.QTimeZone_Transitions(@ptrCast(self.ptr), @ptrCast(fromDateTime.ptr), @ptrCast(toDateTime.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTimeZone__OffsetData, _arr.len) catch @panic("QTimeZone.transitions: Memory allocation failed");
        const _data_val: [*]QtC.QTimeZone__OffsetData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `systemTimeZoneId` instead
    ///
    pub const SystemTimeZoneId = systemTimeZoneId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZoneId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemTimeZoneId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_SystemTimeZoneId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTimeZone.systemTimeZoneId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemTimeZone` instead
    ///
    pub const SystemTimeZone = systemTimeZone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZone)
    ///
    pub fn systemTimeZone() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_SystemTimeZone() };
    }

    /// ### DEPRECATED: Use `utc` instead
    ///
    pub const Utc = utc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#utc)
    ///
    pub fn utc() QTimeZone {
        return .{ .ptr = qtc.QTimeZone_Utc() };
    }

    /// ### DEPRECATED: Use `isTimeZoneIdAvailable` instead
    ///
    pub const IsTimeZoneIdAvailable = isTimeZoneIdAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isTimeZoneIdAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn isTimeZoneIdAvailable(ianaId: []u8) bool {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        return qtc.QTimeZone_IsTimeZoneIdAvailable(ianaId_str);
    }

    /// ### DEPRECATED: Use `availableTimeZoneIds` instead
    ///
    pub const AvailableTimeZoneIds = availableTimeZoneIds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableTimeZoneIds(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTimeZone.availableTimeZoneIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTimeZone.availableTimeZoneIds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableTimeZoneIds2` instead
    ///
    pub const AvailableTimeZoneIds2 = availableTimeZoneIds2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _territory: qlocale_enums.Country `
    ///
    pub fn availableTimeZoneIds2(allocator: std.mem.Allocator, _territory: u16) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds2(@bitCast(_territory));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTimeZone.availableTimeZoneIds2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTimeZone.availableTimeZoneIds2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableTimeZoneIds3` instead
    ///
    pub const AvailableTimeZoneIds3 = availableTimeZoneIds3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offsetSeconds: i32 `
    ///
    pub fn availableTimeZoneIds3(allocator: std.mem.Allocator, offsetSeconds: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTimeZone_AvailableTimeZoneIds3(@bitCast(offsetSeconds));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTimeZone.availableTimeZoneIds3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTimeZone.availableTimeZoneIds3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `ianaIdToWindowsId` instead
    ///
    pub const IanaIdToWindowsId = ianaIdToWindowsId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#ianaIdToWindowsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ianaId: []u8 `
    ///
    pub fn ianaIdToWindowsId(allocator: std.mem.Allocator, ianaId: []u8) []u8 {
        const ianaId_str = qtc.libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_IanaIdToWindowsId(ianaId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTimeZone.ianaIdToWindowsId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowsIdToDefaultIanaId` instead
    ///
    pub const WindowsIdToDefaultIanaId = windowsIdToDefaultIanaId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    pub fn windowsIdToDefaultIanaId(allocator: std.mem.Allocator, windowsId: []u8) []u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId(windowsId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTimeZone.windowsIdToDefaultIanaId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowsIdToDefaultIanaId2` instead
    ///
    pub const WindowsIdToDefaultIanaId2 = windowsIdToDefaultIanaId2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    /// ` _territory: qlocale_enums.Country `
    ///
    pub fn windowsIdToDefaultIanaId2(allocator: std.mem.Allocator, windowsId: []u8, _territory: u16) []u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId2(windowsId_str, @bitCast(_territory));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTimeZone.windowsIdToDefaultIanaId2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowsIdToIanaIds` instead
    ///
    pub const WindowsIdToIanaIds = windowsIdToIanaIds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    pub fn windowsIdToIanaIds(allocator: std.mem.Allocator, windowsId: []u8) [][]u8 {
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTimeZone.windowsIdToIanaIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTimeZone.windowsIdToIanaIds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `windowsIdToIanaIds2` instead
    ///
    pub const WindowsIdToIanaIds2 = windowsIdToIanaIds2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` windowsId: []u8 `
    ///
    /// ` _territory: qlocale_enums.Country `
    ///
    pub fn windowsIdToIanaIds2(allocator: std.mem.Allocator, windowsId: []u8, _territory: u16) [][]u8 {
        const windowsId_str = qtc.libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTimeZone_WindowsIdToIanaIds2(windowsId_str, @bitCast(_territory));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTimeZone.windowsIdToIanaIds2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTimeZone.windowsIdToIanaIds2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName22` instead
    ///
    pub const DisplayName22 = displayName22;

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
    pub fn displayName22(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype, nameType: i32) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        var _str = qtc.QTimeZone_DisplayName22(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr), @bitCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName3` instead
    ///
    pub const DisplayName3 = displayName3;

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
    pub fn displayName3(self: QTimeZone, allocator: std.mem.Allocator, atDateTime: anytype, nameType: i32, locale: anytype) []const u8 {
        comptime _ = @TypeOf(atDateTime)._is_QDateTime;
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QTimeZone_DisplayName3(@ptrCast(self.ptr), @ptrCast(atDateTime.ptr), @bitCast(nameType), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName23` instead
    ///
    pub const DisplayName23 = displayName23;

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
    pub fn displayName23(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32, nameType: i32) []const u8 {
        var _str = qtc.QTimeZone_DisplayName23(@ptrCast(self.ptr), @bitCast(timeType), @bitCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName32` instead
    ///
    pub const DisplayName32 = displayName32;

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
    pub fn displayName32(self: QTimeZone, allocator: std.mem.Allocator, timeType: i32, nameType: i32, locale: anytype) []const u8 {
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.QTimeZone_DisplayName32(@ptrCast(self.ptr), @bitCast(timeType), @bitCast(nameType), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTimeZone.displayName32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#dtor.QTimeZone)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimeZone `
    ///
    pub fn delete(self: QTimeZone) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTimeZone::OffsetData object in C++ memory
    ///
    pub fn new() QTimeZone__OffsetData {
        return .{ .ptr = qtc.QTimeZone__OffsetData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTimeZone::OffsetData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTimeZone__OffsetData `
    ///
    pub fn new2(param1: anytype) QTimeZone__OffsetData {
        comptime _ = @TypeOf(param1)._is_QTimeZone__OffsetData;
        return .{ .ptr = qtc.QTimeZone__OffsetData_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `abbreviation` instead
    ///
    pub const Abbreviation = abbreviation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn abbreviation(self: QTimeZone__OffsetData, allocator: std.mem.Allocator) []const u8 {
        var abbreviation_str = qtc.QTimeZone__OffsetData_Abbreviation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&abbreviation_str);
        const abbreviation_ret = allocator.alloc(u8, abbreviation_str.len) catch @panic("QTimeZone__OffsetData.abbreviation: Memory allocation failed");
        @memcpy(abbreviation_ret, abbreviation_str.data[0..abbreviation_str.len]);
        return abbreviation_ret;
    }

    /// ### DEPRECATED: Use `setAbbreviation` instead
    ///
    pub const SetAbbreviation = setAbbreviation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` _abbreviation: []const u8 `
    ///
    pub fn setAbbreviation(self: QTimeZone__OffsetData, _abbreviation: []const u8) void {
        const abbreviation_str = qtc.libqt_string{
            .len = _abbreviation.len,
            .data = _abbreviation.ptr,
        };
        qtc.QTimeZone__OffsetData_SetAbbreviation(@ptrCast(self.ptr), abbreviation_str);
    }

    /// ### DEPRECATED: Use `atUtc` instead
    ///
    pub const AtUtc = atUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn atUtc(self: QTimeZone__OffsetData) QDateTime {
        return .{ .ptr = qtc.QTimeZone__OffsetData_AtUtc(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAtUtc` instead
    ///
    pub const SetAtUtc = setAtUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` _atUtc: QDateTime `
    ///
    pub fn setAtUtc(self: QTimeZone__OffsetData, _atUtc: anytype) void {
        comptime _ = @TypeOf(_atUtc)._is_QDateTime;
        qtc.QTimeZone__OffsetData_SetAtUtc(@ptrCast(self.ptr), @ptrCast(_atUtc.ptr));
    }

    /// ### DEPRECATED: Use `offsetFromUtc` instead
    ///
    pub const OffsetFromUtc = offsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn offsetFromUtc(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_OffsetFromUtc(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffsetFromUtc` instead
    ///
    pub const SetOffsetFromUtc = setOffsetFromUtc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` _offsetFromUtc: i32 `
    ///
    pub fn setOffsetFromUtc(self: QTimeZone__OffsetData, _offsetFromUtc: i32) void {
        qtc.QTimeZone__OffsetData_SetOffsetFromUtc(@ptrCast(self.ptr), @bitCast(_offsetFromUtc));
    }

    /// ### DEPRECATED: Use `standardTimeOffset` instead
    ///
    pub const StandardTimeOffset = standardTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn standardTimeOffset(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_StandardTimeOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStandardTimeOffset` instead
    ///
    pub const SetStandardTimeOffset = setStandardTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` _standardTimeOffset: i32 `
    ///
    pub fn setStandardTimeOffset(self: QTimeZone__OffsetData, _standardTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetStandardTimeOffset(@ptrCast(self.ptr), @bitCast(_standardTimeOffset));
    }

    /// ### DEPRECATED: Use `daylightTimeOffset` instead
    ///
    pub const DaylightTimeOffset = daylightTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn daylightTimeOffset(self: QTimeZone__OffsetData) i32 {
        return qtc.QTimeZone__OffsetData_DaylightTimeOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDaylightTimeOffset` instead
    ///
    pub const SetDaylightTimeOffset = setDaylightTimeOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` _daylightTimeOffset: i32 `
    ///
    pub fn setDaylightTimeOffset(self: QTimeZone__OffsetData, _daylightTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetDaylightTimeOffset(@ptrCast(self.ptr), @bitCast(_daylightTimeOffset));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    /// ` param1: QTimeZone__OffsetData `
    ///
    pub fn operatorAssign(self: QTimeZone__OffsetData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimeZone__OffsetData;
        qtc.QTimeZone__OffsetData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimeZone__OffsetData `
    ///
    pub fn delete(self: QTimeZone__OffsetData) void {
        qtc.QTimeZone__OffsetData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#public-types)
pub const enums = struct {
    pub const Initialization = enum {
        pub const LocalTime: i32 = 0;
        pub const UTC: i32 = 1;
    };

    pub const TimeType = enum {
        pub const StandardTime: i32 = 0;
        pub const DaylightTime: i32 = 1;
        pub const GenericTime: i32 = 2;
    };

    pub const NameType = enum {
        pub const DefaultName: i32 = 0;
        pub const LongName: i32 = 1;
        pub const ShortName: i32 = 2;
        pub const OffsetName: i32 = 3;
    };
};
