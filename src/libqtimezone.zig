const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocale_enums = @import("libqlocale.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtimezone_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtimezone.html
pub const qtimezone = struct {
    /// New constructs a new QTimeZone object.
    ///
    ///
    pub fn New() QtC.QTimeZone {
        return qtc.QTimeZone_new();
    }

    /// New2 constructs a new QTimeZone object.
    ///
    /// ``` spec: qtimezone_enums.Initialization ```
    pub fn New2(spec: i64) QtC.QTimeZone {
        return qtc.QTimeZone_new2(@intCast(spec));
    }

    /// New3 constructs a new QTimeZone object.
    ///
    /// ``` offsetSeconds: i32 ```
    pub fn New3(offsetSeconds: i32) QtC.QTimeZone {
        return qtc.QTimeZone_new3(@intCast(offsetSeconds));
    }

    /// New4 constructs a new QTimeZone object.
    ///
    /// ``` ianaId: []u8 ```
    pub fn New4(ianaId: []u8) QtC.QTimeZone {
        const ianaId_str = qtc.struct_libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };

        return qtc.QTimeZone_new4(ianaId_str);
    }

    /// New5 constructs a new QTimeZone object.
    ///
    /// ``` zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8 ```
    pub fn New5(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8) QtC.QTimeZone {
        const zoneId_str = qtc.struct_libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.struct_libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };

        return qtc.QTimeZone_new5(zoneId_str, @intCast(offsetSeconds), name_str, abbreviation_str);
    }

    /// New6 constructs a new QTimeZone object.
    ///
    /// ``` other: QtC.QTimeZone ```
    pub fn New6(other: ?*anyopaque) QtC.QTimeZone {
        return qtc.QTimeZone_new6(@ptrCast(other));
    }

    /// New7 constructs a new QTimeZone object.
    ///
    /// ``` zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: qlocale_enums.Country ```
    pub fn New7(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: i64) QtC.QTimeZone {
        const zoneId_str = qtc.struct_libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.struct_libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };

        return qtc.QTimeZone_new7(zoneId_str, @intCast(offsetSeconds), name_str, abbreviation_str, @intCast(territory));
    }

    /// New8 constructs a new QTimeZone object.
    ///
    /// ``` zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: qlocale_enums.Country, comment: []const u8 ```
    pub fn New8(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: i64, comment: []const u8) QtC.QTimeZone {
        const zoneId_str = qtc.struct_libqt_string{
            .len = zoneId.len,
            .data = zoneId.ptr,
        };
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const abbreviation_str = qtc.struct_libqt_string{
            .len = abbreviation.len,
            .data = abbreviation.ptr,
        };
        const comment_str = qtc.struct_libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };

        return qtc.QTimeZone_new8(zoneId_str, @intCast(offsetSeconds), name_str, abbreviation_str, @intCast(territory), comment_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#operator-eq)
    ///
    /// ``` self: QtC.QTimeZone, other: QtC.QTimeZone ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTimeZone_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#swap)
    ///
    /// ``` self: QtC.QTimeZone, other: QtC.QTimeZone ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTimeZone_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isValid)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTimeZone_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
    ///
    /// ``` offset: i32 ```
    pub fn FromSecondsAheadOfUtc(offset: i32) QtC.QTimeZone {
        return qtc.QTimeZone_FromSecondsAheadOfUtc(@intCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#timeSpec)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn TimeSpec(self: ?*anyopaque) i64 {
        return qtc.QTimeZone_TimeSpec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn FixedSecondsAheadOfUtc(self: ?*anyopaque) i32 {
        return qtc.QTimeZone_FixedSecondsAheadOfUtc(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ``` spec: qnamespace_enums.TimeSpec ```
    pub fn IsUtcOrFixedOffset(spec: i64) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset(@intCast(spec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn IsUtcOrFixedOffset2(self: ?*anyopaque) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn AsBackendZone(self: ?*anyopaque) QtC.QTimeZone {
        return qtc.QTimeZone_AsBackendZone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
    ///
    /// ``` self: QtC.QTimeZone, alias: []const u8 ```
    pub fn HasAlternativeName(self: ?*anyopaque, alias: []const u8) bool {
        return qtc.QTimeZone_HasAlternativeName(@ptrCast(self), alias.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#id)
    ///
    /// ``` self: QtC.QTimeZone, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QTimeZone_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#territory)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn Territory(self: ?*anyopaque) i64 {
        return qtc.QTimeZone_Territory(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#country)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn Country(self: ?*anyopaque) i64 {
        return qtc.QTimeZone_Country(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#comment)
    ///
    /// ``` self: QtC.QTimeZone, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, atDateTime: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName(@ptrCast(self), @ptrCast(atDateTime));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, timeType: qtimezone_enums.TimeType, allocator: std.mem.Allocator ```
    pub fn DisplayName2(self: ?*anyopaque, timeType: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName2(@ptrCast(self), @intCast(timeType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#abbreviation)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn Abbreviation(self: ?*anyopaque, atDateTime: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_Abbreviation(@ptrCast(self), @ptrCast(atDateTime));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Abbreviation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime ```
    pub fn OffsetFromUtc(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_OffsetFromUtc(@ptrCast(self), @ptrCast(atDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime ```
    pub fn StandardTimeOffset(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_StandardTimeOffset(@ptrCast(self), @ptrCast(atDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime ```
    pub fn DaylightTimeOffset(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_DaylightTimeOffset(@ptrCast(self), @ptrCast(atDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn HasDaylightTime(self: ?*anyopaque) bool {
        return qtc.QTimeZone_HasDaylightTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime ```
    pub fn IsDaylightTime(self: ?*anyopaque, atDateTime: ?*anyopaque) bool {
        return qtc.QTimeZone_IsDaylightTime(@ptrCast(self), @ptrCast(atDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
    ///
    /// ``` self: QtC.QTimeZone, forDateTime: QtC.QDateTime ```
    pub fn OffsetData(self: ?*anyopaque, forDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_OffsetData(@ptrCast(self), @ptrCast(forDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn HasTransitions(self: ?*anyopaque) bool {
        return qtc.QTimeZone_HasTransitions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
    ///
    /// ``` self: QtC.QTimeZone, afterDateTime: QtC.QDateTime ```
    pub fn NextTransition(self: ?*anyopaque, afterDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_NextTransition(@ptrCast(self), @ptrCast(afterDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
    ///
    /// ``` self: QtC.QTimeZone, beforeDateTime: QtC.QDateTime ```
    pub fn PreviousTransition(self: ?*anyopaque, beforeDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_PreviousTransition(@ptrCast(self), @ptrCast(beforeDateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#transitions)
    ///
    /// ``` self: QtC.QTimeZone, fromDateTime: QtC.QDateTime, toDateTime: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn Transitions(self: ?*anyopaque, fromDateTime: ?*anyopaque, toDateTime: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTimeZone__OffsetData {
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_Transitions(@ptrCast(self), @ptrCast(fromDateTime), @ptrCast(toDateTime));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTimeZone__OffsetData, _arr.len) catch @panic("qtimezone.Transitions: Memory allocation failed");
        const _data: [*]QtC.QTimeZone__OffsetData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZoneId)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SystemTimeZoneId(allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QTimeZone_SystemTimeZoneId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.SystemTimeZoneId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZone)
    ///
    ///
    pub fn SystemTimeZone() QtC.QTimeZone {
        return qtc.QTimeZone_SystemTimeZone();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#utc)
    ///
    ///
    pub fn Utc() QtC.QTimeZone {
        return qtc.QTimeZone_Utc();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isTimeZoneIdAvailable)
    ///
    /// ``` ianaId: []u8 ```
    pub fn IsTimeZoneIdAvailable(ianaId: []u8) bool {
        const ianaId_str = qtc.struct_libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        return qtc.QTimeZone_IsTimeZoneIdAvailable(ianaId_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableTimeZoneIds(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_AvailableTimeZoneIds();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ``` territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn AvailableTimeZoneIds2(territory: i64, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_AvailableTimeZoneIds2(@intCast(territory));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
    ///
    /// ``` offsetSeconds: i32, allocator: std.mem.Allocator ```
    pub fn AvailableTimeZoneIds3(offsetSeconds: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_AvailableTimeZoneIds3(@intCast(offsetSeconds));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#ianaIdToWindowsId)
    ///
    /// ``` ianaId: []u8, allocator: std.mem.Allocator ```
    pub fn IanaIdToWindowsId(ianaId: []u8, allocator: std.mem.Allocator) []u8 {
        const ianaId_str = qtc.struct_libqt_string{
            .len = ianaId.len,
            .data = ianaId.ptr,
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QTimeZone_IanaIdToWindowsId(ianaId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.IanaIdToWindowsId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ``` windowsId: []u8, allocator: std.mem.Allocator ```
    pub fn WindowsIdToDefaultIanaId(windowsId: []u8, allocator: std.mem.Allocator) []u8 {
        const windowsId_str = qtc.struct_libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId(windowsId_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
    ///
    /// ``` windowsId: []u8, territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn WindowsIdToDefaultIanaId2(windowsId: []u8, territory: i64, allocator: std.mem.Allocator) []u8 {
        const windowsId_str = qtc.struct_libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId2(windowsId_str, @intCast(territory));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ``` windowsId: []u8, allocator: std.mem.Allocator ```
    pub fn WindowsIdToIanaIds(windowsId: []u8, allocator: std.mem.Allocator) [][]u8 {
        const windowsId_str = qtc.struct_libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_WindowsIdToIanaIds(windowsId_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
    ///
    /// ``` windowsId: []u8, territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn WindowsIdToIanaIds2(windowsId: []u8, territory: i64, allocator: std.mem.Allocator) [][]u8 {
        const windowsId_str = qtc.struct_libqt_string{
            .len = windowsId.len,
            .data = windowsId.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QTimeZone_WindowsIdToIanaIds2(windowsId_str, @intCast(territory));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime, nameType: qtimezone_enums.NameType, allocator: std.mem.Allocator ```
    pub fn DisplayName22(self: ?*anyopaque, atDateTime: ?*anyopaque, nameType: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName22(@ptrCast(self), @ptrCast(atDateTime), @intCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, atDateTime: QtC.QDateTime, nameType: qtimezone_enums.NameType, locale: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DisplayName3(self: ?*anyopaque, atDateTime: ?*anyopaque, nameType: i64, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName3(@ptrCast(self), @ptrCast(atDateTime), @intCast(nameType), @ptrCast(locale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, timeType: qtimezone_enums.TimeType, nameType: qtimezone_enums.NameType, allocator: std.mem.Allocator ```
    pub fn DisplayName23(self: ?*anyopaque, timeType: i64, nameType: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName23(@ptrCast(self), @intCast(timeType), @intCast(nameType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
    ///
    /// ``` self: QtC.QTimeZone, timeType: qtimezone_enums.TimeType, nameType: qtimezone_enums.NameType, locale: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DisplayName32(self: ?*anyopaque, timeType: i64, nameType: i64, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName32(@ptrCast(self), @intCast(timeType), @intCast(nameType), @ptrCast(locale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#dtor.QTimeZone)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTimeZone ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeZone_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtimezone-offsetdata.html
pub const qtimezone__offsetdata = struct {
    /// New constructs a new QTimeZone::OffsetData object.
    ///
    /// ``` param1: QtC.QTimeZone__OffsetData ```
    pub fn New(param1: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone__OffsetData_new(@ptrCast(param1));
    }

    /// New2 constructs a new QTimeZone::OffsetData object.
    ///
    ///
    pub fn New2() QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone__OffsetData_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtimezone__offsetdata.html#operator-eq)
    ///
    /// ``` self: QtC.QTimeZone__OffsetData, param1: QtC.QTimeZone__OffsetData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTimeZone__OffsetData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTimeZone__OffsetData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeZone__OffsetData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtimezone.html#types
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
