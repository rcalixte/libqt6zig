const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocale_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlocale.html
pub const qlocale = struct {
    /// New constructs a new QLocale object.
    ///
    ///
    pub fn New() QtC.QLocale {
        return qtc.QLocale_new();
    }

    /// New2 constructs a new QLocale object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.QLocale {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QLocale_new2(name_str);
    }

    /// New3 constructs a new QLocale object.
    ///
    /// ``` language: qlocale_enums.Language, territory: qlocale_enums.Country ```
    pub fn New3(language: i64, territory: i64) QtC.QLocale {
        return qtc.QLocale_new3(@intCast(language), @intCast(territory));
    }

    /// New4 constructs a new QLocale object.
    ///
    /// ``` language: qlocale_enums.Language ```
    pub fn New4(language: i64) QtC.QLocale {
        return qtc.QLocale_new4(@intCast(language));
    }

    /// New5 constructs a new QLocale object.
    ///
    /// ``` other: QtC.QLocale ```
    pub fn New5(other: ?*anyopaque) QtC.QLocale {
        return qtc.QLocale_new5(@ptrCast(other));
    }

    /// New6 constructs a new QLocale object.
    ///
    /// ``` language: qlocale_enums.Language, script: qlocale_enums.Script ```
    pub fn New6(language: i64, script: i64) QtC.QLocale {
        return qtc.QLocale_new6(@intCast(language), @intCast(script));
    }

    /// New7 constructs a new QLocale object.
    ///
    /// ``` language: qlocale_enums.Language, script: qlocale_enums.Script, territory: qlocale_enums.Country ```
    pub fn New7(language: i64, script: i64, territory: i64) QtC.QLocale {
        return qtc.QLocale_new7(@intCast(language), @intCast(script), @intCast(territory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#operator-eq)
    ///
    /// ``` self: QtC.QLocale, other: QtC.QLocale ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocale_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#swap)
    ///
    /// ``` self: QtC.QLocale, other: QtC.QLocale ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocale_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#language)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn Language(self: ?*anyopaque) i64 {
        return qtc.QLocale_Language(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#script)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn Script(self: ?*anyopaque) i64 {
        return qtc.QLocale_Script(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territory)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn Territory(self: ?*anyopaque) i64 {
        return qtc.QLocale_Territory(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#country)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn Country(self: ?*anyopaque) i64 {
        return qtc.QLocale_Country(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#name)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#bcp47Name)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn Bcp47Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Bcp47Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Bcp47Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeLanguageName)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn NativeLanguageName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_NativeLanguageName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.NativeLanguageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeTerritoryName)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn NativeTerritoryName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_NativeTerritoryName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.NativeTerritoryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeCountryName)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn NativeCountryName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_NativeCountryName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.NativeCountryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToShort(self: ?*anyopaque, s: []const u8) i16 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToShort(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToUShort(self: ?*anyopaque, s: []const u8) u16 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToUShort(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToInt(self: ?*anyopaque, s: []const u8) i32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToInt(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToUInt(self: ?*anyopaque, s: []const u8) u32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToUInt(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToLong(self: ?*anyopaque, s: []const u8) i64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToLong(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToULong(self: ?*anyopaque, s: []const u8) u64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToULong(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToLongLong(self: ?*anyopaque, s: []const u8) i64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToLongLong(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToULongLong(self: ?*anyopaque, s: []const u8) u64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToULongLong(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToFloat(self: ?*anyopaque, s: []const u8) f32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToFloat(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
    ///
    /// ``` self: QtC.QLocale, s: []const u8 ```
    pub fn ToDouble(self: ?*anyopaque, s: []const u8) f64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToDouble(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: i64, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, i: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: u64, allocator: std.mem.Allocator ```
    pub fn ToString2(self: ?*anyopaque, i: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString2(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: i64, allocator: std.mem.Allocator ```
    pub fn ToString3(self: ?*anyopaque, i: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString3(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: u64, allocator: std.mem.Allocator ```
    pub fn ToString4(self: ?*anyopaque, i: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString4(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: i16, allocator: std.mem.Allocator ```
    pub fn ToString5(self: ?*anyopaque, i: i16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString5(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: u16, allocator: std.mem.Allocator ```
    pub fn ToString6(self: ?*anyopaque, i: u16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString6(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: i32, allocator: std.mem.Allocator ```
    pub fn ToString7(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString7(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, i: u32, allocator: std.mem.Allocator ```
    pub fn ToString8(self: ?*anyopaque, i: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString8(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f64, allocator: std.mem.Allocator ```
    pub fn ToString9(self: ?*anyopaque, f: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString9(@ptrCast(self), @floatCast(f));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f32, allocator: std.mem.Allocator ```
    pub fn ToString10(self: ?*anyopaque, f: f32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString10(@ptrCast(self), @floatCast(f));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, date: QtC.QDate, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString11(self: ?*anyopaque, date: QtC.QDate, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QLocale_ToString11(@ptrCast(self), @ptrCast(date), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, time: QtC.QTime, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString12(self: ?*anyopaque, time: QtC.QTime, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QLocale_ToString12(@ptrCast(self), @ptrCast(time), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, dateTime: QtC.QDateTime, format: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString13(self: ?*anyopaque, dateTime: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        const _str = qtc.QLocale_ToString13(@ptrCast(self), @ptrCast(dateTime), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, date: QtC.QDate, allocator: std.mem.Allocator ```
    pub fn ToString17(self: ?*anyopaque, date: QtC.QDate, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString17(@ptrCast(self), @ptrCast(date));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString17: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, time: QtC.QTime, allocator: std.mem.Allocator ```
    pub fn ToString18(self: ?*anyopaque, time: QtC.QTime, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString18(@ptrCast(self), @ptrCast(time));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString18: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, dateTime: QtC.QDateTime, allocator: std.mem.Allocator ```
    pub fn ToString19(self: ?*anyopaque, dateTime: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString19(@ptrCast(self), @ptrCast(dateTime));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString19: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, date: QtC.QDate, format: qlocale_enums.FormatType, cal: QtC.QCalendar, allocator: std.mem.Allocator ```
    pub fn ToString21(self: ?*anyopaque, date: QtC.QDate, format: i64, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString21(@ptrCast(self), @ptrCast(date), @intCast(format), @ptrCast(cal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString21: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, dateTime: QtC.QDateTime, format: qlocale_enums.FormatType, cal: QtC.QCalendar, allocator: std.mem.Allocator ```
    pub fn ToString22(self: ?*anyopaque, dateTime: ?*anyopaque, format: i64, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString22(@ptrCast(self), @ptrCast(dateTime), @intCast(format), @ptrCast(cal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DateFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DateFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DateFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn TimeFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_TimeFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.TimeFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DateTimeFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DateTimeFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DateTimeFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8 ```
    pub fn ToTime(self: ?*anyopaque, stringVal: []const u8) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToTime(@ptrCast(self), stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8 ```
    pub fn ToTime2(self: ?*anyopaque, stringVal: []const u8, format: []const u8) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToTime2(@ptrCast(self), stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8 ```
    pub fn ToDate(self: ?*anyopaque, stringVal: []const u8) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDate(@ptrCast(self), stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8 ```
    pub fn ToDate2(self: ?*anyopaque, stringVal: []const u8, format: []const u8) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDate2(@ptrCast(self), stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8 ```
    pub fn ToDateTime(self: ?*anyopaque, stringVal: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDateTime(@ptrCast(self), stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8 ```
    pub fn ToDateTime2(self: ?*anyopaque, stringVal: []const u8, format: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDateTime2(@ptrCast(self), stringVal_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType, cal: QtC.QCalendar ```
    pub fn ToDate3(self: ?*anyopaque, stringVal: []const u8, format: i64, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDate3(@ptrCast(self), stringVal_str, @intCast(format), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar ```
    pub fn ToDate4(self: ?*anyopaque, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDate4(@ptrCast(self), stringVal_str, format_str, @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType, cal: QtC.QCalendar ```
    pub fn ToDateTime3(self: ?*anyopaque, stringVal: []const u8, format: i64, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDateTime3(@ptrCast(self), stringVal_str, @intCast(format), @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar ```
    pub fn ToDateTime4(self: ?*anyopaque, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDateTime4(@ptrCast(self), stringVal_str, format_str, @ptrCast(cal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#decimalPoint)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DecimalPoint(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DecimalPoint(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DecimalPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#groupSeparator)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn GroupSeparator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_GroupSeparator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.GroupSeparator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#percent)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn Percent(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Percent(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Percent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#zeroDigit)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn ZeroDigit(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ZeroDigit(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ZeroDigit: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#negativeSign)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn NegativeSign(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_NegativeSign(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.NegativeSign: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#positiveSign)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn PositiveSign(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_PositiveSign(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.PositiveSign: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#exponential)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn Exponential(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Exponential(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Exponential: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, allocator: std.mem.Allocator ```
    pub fn MonthName(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_MonthName(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.MonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_StandaloneMonthName(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.StandaloneMonthName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, allocator: std.mem.Allocator ```
    pub fn DayName(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DayName(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, allocator: std.mem.Allocator ```
    pub fn StandaloneDayName(self: ?*anyopaque, param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_StandaloneDayName(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.StandaloneDayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#firstDayOfWeek)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn FirstDayOfWeek(self: ?*anyopaque) i64 {
        return qtc.QLocale_FirstDayOfWeek(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#weekdays)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn Weekdays(self: ?*anyopaque, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QLocale_Weekdays(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qnamespace_enums.DayOfWeek, _arr.len) catch @panic("qlocale.Weekdays: Memory allocation failed");
        const _data: [*]qnamespace_enums.DayOfWeek = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#amText)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn AmText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_AmText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.AmText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#pmText)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn PmText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_PmText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.PmText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#measurementSystem)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn MeasurementSystem(self: ?*anyopaque) i64 {
        return qtc.QLocale_MeasurementSystem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#collation)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn Collation(self: ?*anyopaque) QtC.QLocale {
        return qtc.QLocale_Collation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#textDirection)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn TextDirection(self: ?*anyopaque) i64 {
        return qtc.QLocale_TextDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUpper)
    ///
    /// ``` self: QtC.QLocale, str: []const u8, allocator: std.mem.Allocator ```
    pub fn ToUpper(self: ?*anyopaque, str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QLocale_ToUpper(@ptrCast(self), str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToUpper: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLower)
    ///
    /// ``` self: QtC.QLocale, str: []const u8, allocator: std.mem.Allocator ```
    pub fn ToLower(self: ?*anyopaque, str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QLocale_ToLower(@ptrCast(self), str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToLower: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn CurrencySymbol(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_CurrencySymbol(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.CurrencySymbol: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: i64, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: u64, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString2(self: ?*anyopaque, param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString2(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: i16, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString3(self: ?*anyopaque, i: i16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString3(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: u16, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString4(self: ?*anyopaque, i: u16, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString4(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: i32, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString5(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString5(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: u32, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString6(self: ?*anyopaque, i: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString6(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: f64, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString7(self: ?*anyopaque, param1: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString7(@ptrCast(self), @floatCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: f32, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString8(self: ?*anyopaque, i: f32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToCurrencyString8(@ptrCast(self), @floatCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
    ///
    /// ``` self: QtC.QLocale, bytes: i64, allocator: std.mem.Allocator ```
    pub fn FormattedDataSize(self: ?*anyopaque, bytes: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_FormattedDataSize(@ptrCast(self), @intCast(bytes));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.FormattedDataSize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#uiLanguages)
    ///
    /// ``` self: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn UiLanguages(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QLocale_UiLanguages(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlocale.UiLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlocale.UiLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
    ///
    /// ``` language: qlocale_enums.Language, allocator: std.mem.Allocator ```
    pub fn LanguageToCode(language: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_LanguageToCode(@intCast(language));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.LanguageToCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToCode)
    ///
    /// ``` territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn TerritoryToCode(territory: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_TerritoryToCode(@intCast(territory));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.TerritoryToCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToCode)
    ///
    /// ``` country: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn CountryToCode(country: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_CountryToCode(@intCast(country));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.CountryToCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToCode)
    ///
    /// ``` script: qlocale_enums.Script, allocator: std.mem.Allocator ```
    pub fn ScriptToCode(script: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ScriptToCode(@intCast(script));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ScriptToCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToString)
    ///
    /// ``` language: qlocale_enums.Language, allocator: std.mem.Allocator ```
    pub fn LanguageToString(language: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_LanguageToString(@intCast(language));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.LanguageToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToString)
    ///
    /// ``` territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn TerritoryToString(territory: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_TerritoryToString(@intCast(territory));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.TerritoryToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToString)
    ///
    /// ``` country: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn CountryToString(country: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_CountryToString(@intCast(country));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.CountryToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToString)
    ///
    /// ``` script: qlocale_enums.Script, allocator: std.mem.Allocator ```
    pub fn ScriptToString(script: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ScriptToString(@intCast(script));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ScriptToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setDefault)
    ///
    /// ``` locale: QtC.QLocale ```
    pub fn SetDefault(locale: ?*anyopaque) void {
        qtc.QLocale_SetDefault(@ptrCast(locale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#c)
    ///
    ///
    pub fn C() QtC.QLocale {
        return qtc.QLocale_C();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#system)
    ///
    ///
    pub fn System() QtC.QLocale {
        return qtc.QLocale_System();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#matchingLocales)
    ///
    /// ``` language: qlocale_enums.Language, script: qlocale_enums.Script, territory: qlocale_enums.Country, allocator: std.mem.Allocator ```
    pub fn MatchingLocales(language: i64, script: i64, territory: i64, allocator: std.mem.Allocator) []QtC.QLocale {
        const _arr: qtc.struct_libqt_list = qtc.QLocale_MatchingLocales(@intCast(language), @intCast(script), @intCast(territory));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLocale, _arr.len) catch @panic("qlocale.MatchingLocales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countriesForLanguage)
    ///
    /// ``` lang: qlocale_enums.Language, allocator: std.mem.Allocator ```
    pub fn CountriesForLanguage(lang: i64, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QLocale_CountriesForLanguage(@intCast(lang));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qlocale_enums.Country, _arr.len) catch @panic("qlocale.CountriesForLanguage: Memory allocation failed");
        const _data: [*]qlocale_enums.Country = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setNumberOptions)
    ///
    /// ``` self: QtC.QLocale, options: i32 ```
    pub fn SetNumberOptions(self: ?*anyopaque, options: i64) void {
        qtc.QLocale_SetNumberOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#numberOptions)
    ///
    /// ``` self: QtC.QLocale ```
    pub fn NumberOptions(self: ?*anyopaque) i64 {
        return qtc.QLocale_NumberOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
    ///
    /// ``` self: QtC.QLocale, str: []const u8, allocator: std.mem.Allocator ```
    pub fn QuoteString(self: ?*anyopaque, str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QLocale_QuoteString(@ptrCast(self), str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.QuoteString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#createSeparatedList)
    ///
    /// ``` self: QtC.QLocale, strl: [][]const u8, allocator: std.mem.Allocator ```
    pub fn CreateSeparatedList(self: ?*anyopaque, strl: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        var strl_arr = allocator.alloc(qtc.struct_libqt_string, strl.len) catch @panic("qlocale.CreateSeparatedList: Memory allocation failed");
        defer allocator.free(strl_arr);
        for (strl, 0..strl.len) |item, i| {
            strl_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const strl_list = qtc.struct_libqt_list{
            .len = strl.len,
            .data = strl_arr.ptr,
        };
        const _str = qtc.QLocale_CreateSeparatedList(@ptrCast(self), strl_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.CreateSeparatedList: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#name)
    ///
    /// ``` self: QtC.QLocale, separator: qlocale_enums.TagSeparator, allocator: std.mem.Allocator ```
    pub fn Name1(self: ?*anyopaque, separator: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Name1(@ptrCast(self), @intCast(separator));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#bcp47Name)
    ///
    /// ``` self: QtC.QLocale, separator: qlocale_enums.TagSeparator, allocator: std.mem.Allocator ```
    pub fn Bcp47Name1(self: ?*anyopaque, separator: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_Bcp47Name1(@ptrCast(self), @intCast(separator));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.Bcp47Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToShort22(self: ?*anyopaque, s: []const u8, ok: *bool) i16 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToShort22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToUShort22(self: ?*anyopaque, s: []const u8, ok: *bool) u16 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToUShort22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToInt22(self: ?*anyopaque, s: []const u8, ok: *bool) i32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToInt22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToUInt22(self: ?*anyopaque, s: []const u8, ok: *bool) u32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToUInt22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToLong22(self: ?*anyopaque, s: []const u8, ok: *bool) i64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToLong22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToULong22(self: ?*anyopaque, s: []const u8, ok: *bool) u64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToULong22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToLongLong22(self: ?*anyopaque, s: []const u8, ok: *bool) i64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToLongLong22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToULongLong22(self: ?*anyopaque, s: []const u8, ok: *bool) u64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToULongLong22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToFloat22(self: ?*anyopaque, s: []const u8, ok: *bool) f32 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToFloat22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
    ///
    /// ``` self: QtC.QLocale, s: []const u8, ok: bool ```
    pub fn ToDouble22(self: ?*anyopaque, s: []const u8, ok: *bool) f64 {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QLocale_ToDouble22(@ptrCast(self), s_str, @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f64, format: i8, allocator: std.mem.Allocator ```
    pub fn ToString24(self: ?*anyopaque, f: f64, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString24(@ptrCast(self), @floatCast(f), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString24: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f64, format: i8, precision: i32, allocator: std.mem.Allocator ```
    pub fn ToString32(self: ?*anyopaque, f: f64, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString32(@ptrCast(self), @floatCast(f), @intCast(format), @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f32, format: i8, allocator: std.mem.Allocator ```
    pub fn ToString25(self: ?*anyopaque, f: f32, format: i8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString25(@ptrCast(self), @floatCast(f), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString25: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, f: f32, format: i8, precision: i32, allocator: std.mem.Allocator ```
    pub fn ToString33(self: ?*anyopaque, f: f32, format: i8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString33(@ptrCast(self), @floatCast(f), @intCast(format), @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString33: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, date: QtC.QDate, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn ToString26(self: ?*anyopaque, date: QtC.QDate, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString26(@ptrCast(self), @ptrCast(date), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString26: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, time: QtC.QTime, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn ToString27(self: ?*anyopaque, time: QtC.QTime, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString27(@ptrCast(self), @ptrCast(time), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString27: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
    ///
    /// ``` self: QtC.QLocale, dateTime: QtC.QDateTime, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn ToString28(self: ?*anyopaque, dateTime: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_ToString28(@ptrCast(self), @ptrCast(dateTime), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToString28: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
    ///
    /// ``` self: QtC.QLocale, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn DateFormat1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DateFormat1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DateFormat1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
    ///
    /// ``` self: QtC.QLocale, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn TimeFormat1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_TimeFormat1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.TimeFormat1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
    ///
    /// ``` self: QtC.QLocale, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn DateTimeFormat1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DateTimeFormat1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DateTimeFormat1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, param2: qlocale_enums.FormatType ```
    pub fn ToTime22(self: ?*anyopaque, stringVal: []const u8, param2: i64) QtC.QTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToTime22(@ptrCast(self), stringVal_str, @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, param2: qlocale_enums.FormatType ```
    pub fn ToDate22(self: ?*anyopaque, stringVal: []const u8, param2: i64) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDate22(@ptrCast(self), stringVal_str, @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, param2: qlocale_enums.FormatType, baseYear: i32 ```
    pub fn ToDate32(self: ?*anyopaque, stringVal: []const u8, param2: i64, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDate32(@ptrCast(self), stringVal_str, @intCast(param2), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, baseYear: i32 ```
    pub fn ToDate33(self: ?*anyopaque, stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDate33(@ptrCast(self), stringVal_str, format_str, @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType ```
    pub fn ToDateTime22(self: ?*anyopaque, stringVal: []const u8, format: i64) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDateTime22(@ptrCast(self), stringVal_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType, baseYear: i32 ```
    pub fn ToDateTime32(self: ?*anyopaque, stringVal: []const u8, format: i64, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDateTime32(@ptrCast(self), stringVal_str, @intCast(format), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, baseYear: i32 ```
    pub fn ToDateTime33(self: ?*anyopaque, stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDateTime33(@ptrCast(self), stringVal_str, format_str, @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType, cal: QtC.QCalendar, baseYear: i32 ```
    pub fn ToDate42(self: ?*anyopaque, stringVal: []const u8, format: i64, cal: QtC.QCalendar, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDate42(@ptrCast(self), stringVal_str, @intCast(format), @ptrCast(cal), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar, baseYear: i32 ```
    pub fn ToDate43(self: ?*anyopaque, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDate43(@ptrCast(self), stringVal_str, format_str, @ptrCast(cal), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: qlocale_enums.FormatType, cal: QtC.QCalendar, baseYear: i32 ```
    pub fn ToDateTime42(self: ?*anyopaque, stringVal: []const u8, format: i64, cal: QtC.QCalendar, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QLocale_ToDateTime42(@ptrCast(self), stringVal_str, @intCast(format), @ptrCast(cal), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
    ///
    /// ``` self: QtC.QLocale, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar, baseYear: i32 ```
    pub fn ToDateTime43(self: ?*anyopaque, stringVal: []const u8, format: []const u8, cal: QtC.QCalendar, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QLocale_ToDateTime43(@ptrCast(self), stringVal_str, format_str, @ptrCast(cal), @intCast(baseYear));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn MonthName2(self: ?*anyopaque, param1: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_MonthName2(@ptrCast(self), @intCast(param1), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.MonthName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneMonthName2(self: ?*anyopaque, param1: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_StandaloneMonthName2(@ptrCast(self), @intCast(param1), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.StandaloneMonthName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn DayName2(self: ?*anyopaque, param1: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_DayName2(@ptrCast(self), @intCast(param1), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.DayName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
    ///
    /// ``` self: QtC.QLocale, param1: i32, format: qlocale_enums.FormatType, allocator: std.mem.Allocator ```
    pub fn StandaloneDayName2(self: ?*anyopaque, param1: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_StandaloneDayName2(@ptrCast(self), @intCast(param1), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.StandaloneDayName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
    ///
    /// ``` self: QtC.QLocale, param1: qlocale_enums.CurrencySymbolFormat, allocator: std.mem.Allocator ```
    pub fn CurrencySymbol1(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_CurrencySymbol1(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.CurrencySymbol1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: i64, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString22(self: ?*anyopaque, param1: i64, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString22(@ptrCast(self), @intCast(param1), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: u64, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString23(self: ?*anyopaque, param1: u64, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString23(@ptrCast(self), @intCast(param1), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: i16, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString24(self: ?*anyopaque, i: i16, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString24(@ptrCast(self), @intCast(i), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString24: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: u16, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString25(self: ?*anyopaque, i: u16, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString25(@ptrCast(self), @intCast(i), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString25: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: i32, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString26(self: ?*anyopaque, i: i32, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString26(@ptrCast(self), @intCast(i), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString26: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: u32, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString27(self: ?*anyopaque, i: u32, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString27(@ptrCast(self), @intCast(i), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString27: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: f64, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString28(self: ?*anyopaque, param1: f64, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString28(@ptrCast(self), @floatCast(param1), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString28: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, param1: f64, symbol: []const u8, precision: i32, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString32(self: ?*anyopaque, param1: f64, symbol: []const u8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString32(@ptrCast(self), @floatCast(param1), symbol_str, @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: f32, symbol: []const u8, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString29(self: ?*anyopaque, i: f32, symbol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString29(@ptrCast(self), @floatCast(i), symbol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString29: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
    ///
    /// ``` self: QtC.QLocale, i: f32, symbol: []const u8, precision: i32, allocator: std.mem.Allocator ```
    pub fn ToCurrencyString33(self: ?*anyopaque, i: f32, symbol: []const u8, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const symbol_str = qtc.struct_libqt_string{
            .len = symbol.len,
            .data = symbol.ptr,
        };
        const _str = qtc.QLocale_ToCurrencyString33(@ptrCast(self), @floatCast(i), symbol_str, @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.ToCurrencyString33: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
    ///
    /// ``` self: QtC.QLocale, bytes: i64, precision: i32, allocator: std.mem.Allocator ```
    pub fn FormattedDataSize2(self: ?*anyopaque, bytes: i64, precision: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_FormattedDataSize2(@ptrCast(self), @intCast(bytes), @intCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.FormattedDataSize2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
    ///
    /// ``` self: QtC.QLocale, bytes: i64, precision: i32, format: i32, allocator: std.mem.Allocator ```
    pub fn FormattedDataSize3(self: ?*anyopaque, bytes: i64, precision: i32, format: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_FormattedDataSize3(@ptrCast(self), @intCast(bytes), @intCast(precision), @intCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.FormattedDataSize3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#uiLanguages)
    ///
    /// ``` self: QtC.QLocale, separator: qlocale_enums.TagSeparator, allocator: std.mem.Allocator ```
    pub fn UiLanguages1(self: ?*anyopaque, separator: i64, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QLocale_UiLanguages1(@ptrCast(self), @intCast(separator));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlocale.UiLanguages1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlocale.UiLanguages1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
    ///
    /// ``` language: qlocale_enums.Language, codeTypes: i32, allocator: std.mem.Allocator ```
    pub fn LanguageToCode2(language: i64, codeTypes: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocale_LanguageToCode2(@intCast(language), @intCast(codeTypes));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.LanguageToCode2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
    ///
    /// ``` self: QtC.QLocale, str: []const u8, style: qlocale_enums.QuotationStyle, allocator: std.mem.Allocator ```
    pub fn QuoteString22(self: ?*anyopaque, str: []const u8, style: i64, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _str = qtc.QLocale_QuoteString22(@ptrCast(self), str_str, @intCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocale.QuoteString22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dtor.QLocale)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLocale ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLocale_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlocale.html#types
pub const enums = struct {
    pub const Language = enum {
        pub const AnyLanguage: u16 = 0;
        pub const C: u16 = 1;
        pub const Abkhazian: u16 = 2;
        pub const Afar: u16 = 3;
        pub const Afrikaans: u16 = 4;
        pub const Aghem: u16 = 5;
        pub const Akan: u16 = 6;
        pub const Akkadian: u16 = 7;
        pub const Akoose: u16 = 8;
        pub const Albanian: u16 = 9;
        pub const AmericanSignLanguage: u16 = 10;
        pub const Amharic: u16 = 11;
        pub const AncientEgyptian: u16 = 12;
        pub const AncientGreek: u16 = 13;
        pub const Arabic: u16 = 14;
        pub const Aragonese: u16 = 15;
        pub const Aramaic: u16 = 16;
        pub const Armenian: u16 = 17;
        pub const Assamese: u16 = 18;
        pub const Asturian: u16 = 19;
        pub const Asu: u16 = 20;
        pub const Atsam: u16 = 21;
        pub const Avaric: u16 = 22;
        pub const Avestan: u16 = 23;
        pub const Aymara: u16 = 24;
        pub const Azerbaijani: u16 = 25;
        pub const Bafia: u16 = 26;
        pub const Balinese: u16 = 27;
        pub const Bambara: u16 = 28;
        pub const Bamun: u16 = 29;
        pub const Bangla: u16 = 30;
        pub const Basaa: u16 = 31;
        pub const Bashkir: u16 = 32;
        pub const Basque: u16 = 33;
        pub const BatakToba: u16 = 34;
        pub const Belarusian: u16 = 35;
        pub const Bemba: u16 = 36;
        pub const Bena: u16 = 37;
        pub const Bhojpuri: u16 = 38;
        pub const Bislama: u16 = 39;
        pub const Blin: u16 = 40;
        pub const Bodo: u16 = 41;
        pub const Bosnian: u16 = 42;
        pub const Breton: u16 = 43;
        pub const Buginese: u16 = 44;
        pub const Bulgarian: u16 = 45;
        pub const Burmese: u16 = 46;
        pub const Cantonese: u16 = 47;
        pub const Catalan: u16 = 48;
        pub const Cebuano: u16 = 49;
        pub const CentralAtlasTamazight: u16 = 50;
        pub const CentralKurdish: u16 = 51;
        pub const Chakma: u16 = 52;
        pub const Chamorro: u16 = 53;
        pub const Chechen: u16 = 54;
        pub const Cherokee: u16 = 55;
        pub const Chickasaw: u16 = 56;
        pub const Chiga: u16 = 57;
        pub const Chinese: u16 = 58;
        pub const Church: u16 = 59;
        pub const Chuvash: u16 = 60;
        pub const Colognian: u16 = 61;
        pub const Coptic: u16 = 62;
        pub const Cornish: u16 = 63;
        pub const Corsican: u16 = 64;
        pub const Cree: u16 = 65;
        pub const Croatian: u16 = 66;
        pub const Czech: u16 = 67;
        pub const Danish: u16 = 68;
        pub const Divehi: u16 = 69;
        pub const Dogri: u16 = 70;
        pub const Duala: u16 = 71;
        pub const Dutch: u16 = 72;
        pub const Dzongkha: u16 = 73;
        pub const Embu: u16 = 74;
        pub const English: u16 = 75;
        pub const Erzya: u16 = 76;
        pub const Esperanto: u16 = 77;
        pub const Estonian: u16 = 78;
        pub const Ewe: u16 = 79;
        pub const Ewondo: u16 = 80;
        pub const Faroese: u16 = 81;
        pub const Fijian: u16 = 82;
        pub const Filipino: u16 = 83;
        pub const Finnish: u16 = 84;
        pub const French: u16 = 85;
        pub const Friulian: u16 = 86;
        pub const Fulah: u16 = 87;
        pub const Gaelic: u16 = 88;
        pub const Ga: u16 = 89;
        pub const Galician: u16 = 90;
        pub const Ganda: u16 = 91;
        pub const Geez: u16 = 92;
        pub const Georgian: u16 = 93;
        pub const German: u16 = 94;
        pub const Gothic: u16 = 95;
        pub const Greek: u16 = 96;
        pub const Guarani: u16 = 97;
        pub const Gujarati: u16 = 98;
        pub const Gusii: u16 = 99;
        pub const Haitian: u16 = 100;
        pub const Hausa: u16 = 101;
        pub const Hawaiian: u16 = 102;
        pub const Hebrew: u16 = 103;
        pub const Herero: u16 = 104;
        pub const Hindi: u16 = 105;
        pub const HiriMotu: u16 = 106;
        pub const Hungarian: u16 = 107;
        pub const Icelandic: u16 = 108;
        pub const Ido: u16 = 109;
        pub const Igbo: u16 = 110;
        pub const InariSami: u16 = 111;
        pub const Indonesian: u16 = 112;
        pub const Ingush: u16 = 113;
        pub const Interlingua: u16 = 114;
        pub const Interlingue: u16 = 115;
        pub const Inuktitut: u16 = 116;
        pub const Inupiaq: u16 = 117;
        pub const Irish: u16 = 118;
        pub const Italian: u16 = 119;
        pub const Japanese: u16 = 120;
        pub const Javanese: u16 = 121;
        pub const Jju: u16 = 122;
        pub const JolaFonyi: u16 = 123;
        pub const Kabuverdianu: u16 = 124;
        pub const Kabyle: u16 = 125;
        pub const Kako: u16 = 126;
        pub const Kalaallisut: u16 = 127;
        pub const Kalenjin: u16 = 128;
        pub const Kamba: u16 = 129;
        pub const Kannada: u16 = 130;
        pub const Kanuri: u16 = 131;
        pub const Kashmiri: u16 = 132;
        pub const Kazakh: u16 = 133;
        pub const Kenyang: u16 = 134;
        pub const Khmer: u16 = 135;
        pub const Kiche: u16 = 136;
        pub const Kikuyu: u16 = 137;
        pub const Kinyarwanda: u16 = 138;
        pub const Komi: u16 = 139;
        pub const Kongo: u16 = 140;
        pub const Konkani: u16 = 141;
        pub const Korean: u16 = 142;
        pub const Koro: u16 = 143;
        pub const KoyraboroSenni: u16 = 144;
        pub const KoyraChiini: u16 = 145;
        pub const Kpelle: u16 = 146;
        pub const Kuanyama: u16 = 147;
        pub const Kurdish: u16 = 148;
        pub const Kwasio: u16 = 149;
        pub const Kyrgyz: u16 = 150;
        pub const Lakota: u16 = 151;
        pub const Langi: u16 = 152;
        pub const Lao: u16 = 153;
        pub const Latin: u16 = 154;
        pub const Latvian: u16 = 155;
        pub const Lezghian: u16 = 156;
        pub const Limburgish: u16 = 157;
        pub const Lingala: u16 = 158;
        pub const LiteraryChinese: u16 = 159;
        pub const Lithuanian: u16 = 160;
        pub const Lojban: u16 = 161;
        pub const LowerSorbian: u16 = 162;
        pub const LowGerman: u16 = 163;
        pub const LubaKatanga: u16 = 164;
        pub const LuleSami: u16 = 165;
        pub const Luo: u16 = 166;
        pub const Luxembourgish: u16 = 167;
        pub const Luyia: u16 = 168;
        pub const Macedonian: u16 = 169;
        pub const Machame: u16 = 170;
        pub const Maithili: u16 = 171;
        pub const MakhuwaMeetto: u16 = 172;
        pub const Makonde: u16 = 173;
        pub const Malagasy: u16 = 174;
        pub const Malayalam: u16 = 175;
        pub const Malay: u16 = 176;
        pub const Maltese: u16 = 177;
        pub const Mandingo: u16 = 178;
        pub const Manipuri: u16 = 179;
        pub const Manx: u16 = 180;
        pub const Maori: u16 = 181;
        pub const Mapuche: u16 = 182;
        pub const Marathi: u16 = 183;
        pub const Marshallese: u16 = 184;
        pub const Masai: u16 = 185;
        pub const Mazanderani: u16 = 186;
        pub const Mende: u16 = 187;
        pub const Meru: u16 = 188;
        pub const Meta: u16 = 189;
        pub const Mohawk: u16 = 190;
        pub const Mongolian: u16 = 191;
        pub const Morisyen: u16 = 192;
        pub const Mundang: u16 = 193;
        pub const Muscogee: u16 = 194;
        pub const Nama: u16 = 195;
        pub const NauruLanguage: u16 = 196;
        pub const Navajo: u16 = 197;
        pub const Ndonga: u16 = 198;
        pub const Nepali: u16 = 199;
        pub const Newari: u16 = 200;
        pub const Ngiemboon: u16 = 201;
        pub const Ngomba: u16 = 202;
        pub const NigerianPidgin: u16 = 203;
        pub const Nko: u16 = 204;
        pub const NorthernLuri: u16 = 205;
        pub const NorthernSami: u16 = 206;
        pub const NorthernSotho: u16 = 207;
        pub const NorthNdebele: u16 = 208;
        pub const NorwegianBokmal: u16 = 209;
        pub const NorwegianNynorsk: u16 = 210;
        pub const Nuer: u16 = 211;
        pub const Nyanja: u16 = 212;
        pub const Nyankole: u16 = 213;
        pub const Occitan: u16 = 214;
        pub const Odia: u16 = 215;
        pub const Ojibwa: u16 = 216;
        pub const OldIrish: u16 = 217;
        pub const OldNorse: u16 = 218;
        pub const OldPersian: u16 = 219;
        pub const Oromo: u16 = 220;
        pub const Osage: u16 = 221;
        pub const Ossetic: u16 = 222;
        pub const Pahlavi: u16 = 223;
        pub const Palauan: u16 = 224;
        pub const Pali: u16 = 225;
        pub const Papiamento: u16 = 226;
        pub const Pashto: u16 = 227;
        pub const Persian: u16 = 228;
        pub const Phoenician: u16 = 229;
        pub const Polish: u16 = 230;
        pub const Portuguese: u16 = 231;
        pub const Prussian: u16 = 232;
        pub const Punjabi: u16 = 233;
        pub const Quechua: u16 = 234;
        pub const Romanian: u16 = 235;
        pub const Romansh: u16 = 236;
        pub const Rombo: u16 = 237;
        pub const Rundi: u16 = 238;
        pub const Russian: u16 = 239;
        pub const Rwa: u16 = 240;
        pub const Saho: u16 = 241;
        pub const Sakha: u16 = 242;
        pub const Samburu: u16 = 243;
        pub const Samoan: u16 = 244;
        pub const Sango: u16 = 245;
        pub const Sangu: u16 = 246;
        pub const Sanskrit: u16 = 247;
        pub const Santali: u16 = 248;
        pub const Sardinian: u16 = 249;
        pub const Saurashtra: u16 = 250;
        pub const Sena: u16 = 251;
        pub const Serbian: u16 = 252;
        pub const Shambala: u16 = 253;
        pub const Shona: u16 = 254;
        pub const SichuanYi: u16 = 255;
        pub const Sicilian: u16 = 256;
        pub const Sidamo: u16 = 257;
        pub const Silesian: u16 = 258;
        pub const Sindhi: u16 = 259;
        pub const Sinhala: u16 = 260;
        pub const SkoltSami: u16 = 261;
        pub const Slovak: u16 = 262;
        pub const Slovenian: u16 = 263;
        pub const Soga: u16 = 264;
        pub const Somali: u16 = 265;
        pub const SouthernKurdish: u16 = 266;
        pub const SouthernSami: u16 = 267;
        pub const SouthernSotho: u16 = 268;
        pub const SouthNdebele: u16 = 269;
        pub const Spanish: u16 = 270;
        pub const StandardMoroccanTamazight: u16 = 271;
        pub const Sundanese: u16 = 272;
        pub const Swahili: u16 = 273;
        pub const Swati: u16 = 274;
        pub const Swedish: u16 = 275;
        pub const SwissGerman: u16 = 276;
        pub const Syriac: u16 = 277;
        pub const Tachelhit: u16 = 278;
        pub const Tahitian: u16 = 279;
        pub const TaiDam: u16 = 280;
        pub const Taita: u16 = 281;
        pub const Tajik: u16 = 282;
        pub const Tamil: u16 = 283;
        pub const Taroko: u16 = 284;
        pub const Tasawaq: u16 = 285;
        pub const Tatar: u16 = 286;
        pub const Telugu: u16 = 287;
        pub const Teso: u16 = 288;
        pub const Thai: u16 = 289;
        pub const Tibetan: u16 = 290;
        pub const Tigre: u16 = 291;
        pub const Tigrinya: u16 = 292;
        pub const TokelauLanguage: u16 = 293;
        pub const TokPisin: u16 = 294;
        pub const Tongan: u16 = 295;
        pub const Tsonga: u16 = 296;
        pub const Tswana: u16 = 297;
        pub const Turkish: u16 = 298;
        pub const Turkmen: u16 = 299;
        pub const TuvaluLanguage: u16 = 300;
        pub const Tyap: u16 = 301;
        pub const Ugaritic: u16 = 302;
        pub const Ukrainian: u16 = 303;
        pub const UpperSorbian: u16 = 304;
        pub const Urdu: u16 = 305;
        pub const Uyghur: u16 = 306;
        pub const Uzbek: u16 = 307;
        pub const Vai: u16 = 308;
        pub const Venda: u16 = 309;
        pub const Vietnamese: u16 = 310;
        pub const Volapuk: u16 = 311;
        pub const Vunjo: u16 = 312;
        pub const Walloon: u16 = 313;
        pub const Walser: u16 = 314;
        pub const Warlpiri: u16 = 315;
        pub const Welsh: u16 = 316;
        pub const WesternBalochi: u16 = 317;
        pub const WesternFrisian: u16 = 318;
        pub const Wolaytta: u16 = 319;
        pub const Wolof: u16 = 320;
        pub const Xhosa: u16 = 321;
        pub const Yangben: u16 = 322;
        pub const Yiddish: u16 = 323;
        pub const Yoruba: u16 = 324;
        pub const Zarma: u16 = 325;
        pub const Zhuang: u16 = 326;
        pub const Zulu: u16 = 327;
        pub const Kaingang: u16 = 328;
        pub const Nheengatu: u16 = 329;
        pub const Haryanvi: u16 = 330;
        pub const NorthernFrisian: u16 = 331;
        pub const Rajasthani: u16 = 332;
        pub const Moksha: u16 = 333;
        pub const TokiPona: u16 = 334;
        pub const Pijin: u16 = 335;
        pub const Obolo: u16 = 336;
        pub const Baluchi: u16 = 337;
        pub const Ligurian: u16 = 338;
        pub const Rohingya: u16 = 339;
        pub const Torwali: u16 = 340;
        pub const Anii: u16 = 341;
        pub const Kangri: u16 = 342;
        pub const Venetian: u16 = 343;
        pub const Kuvi: u16 = 344;
        pub const KaraKalpak: u16 = 345;
        pub const SwampyCree: u16 = 346;
        pub const Afan: u16 = 220;
        pub const Bengali: u16 = 30;
        pub const Bhutani: u16 = 73;
        pub const Byelorussian: u16 = 35;
        pub const Cambodian: u16 = 135;
        pub const CentralMoroccoTamazight: u16 = 50;
        pub const Chewa: u16 = 212;
        pub const Frisian: u16 = 318;
        pub const Greenlandic: u16 = 127;
        pub const Inupiak: u16 = 117;
        pub const Kirghiz: u16 = 150;
        pub const Kurundi: u16 = 238;
        pub const Kwanyama: u16 = 147;
        pub const Navaho: u16 = 197;
        pub const Oriya: u16 = 215;
        pub const RhaetoRomance: u16 = 236;
        pub const Uighur: u16 = 306;
        pub const Uigur: u16 = 306;
        pub const Walamo: u16 = 319;
        pub const LastLanguage: u16 = 346;
    };

    pub const Script = enum {
        pub const AnyScript: u16 = 0;
        pub const AdlamScript: u16 = 1;
        pub const AhomScript: u16 = 2;
        pub const AnatolianHieroglyphsScript: u16 = 3;
        pub const ArabicScript: u16 = 4;
        pub const ArmenianScript: u16 = 5;
        pub const AvestanScript: u16 = 6;
        pub const BalineseScript: u16 = 7;
        pub const BamumScript: u16 = 8;
        pub const BanglaScript: u16 = 9;
        pub const BassaVahScript: u16 = 10;
        pub const BatakScript: u16 = 11;
        pub const BhaiksukiScript: u16 = 12;
        pub const BopomofoScript: u16 = 13;
        pub const BrahmiScript: u16 = 14;
        pub const BrailleScript: u16 = 15;
        pub const BugineseScript: u16 = 16;
        pub const BuhidScript: u16 = 17;
        pub const CanadianAboriginalScript: u16 = 18;
        pub const CarianScript: u16 = 19;
        pub const CaucasianAlbanianScript: u16 = 20;
        pub const ChakmaScript: u16 = 21;
        pub const ChamScript: u16 = 22;
        pub const CherokeeScript: u16 = 23;
        pub const CopticScript: u16 = 24;
        pub const CuneiformScript: u16 = 25;
        pub const CypriotScript: u16 = 26;
        pub const CyrillicScript: u16 = 27;
        pub const DeseretScript: u16 = 28;
        pub const DevanagariScript: u16 = 29;
        pub const DuployanScript: u16 = 30;
        pub const EgyptianHieroglyphsScript: u16 = 31;
        pub const ElbasanScript: u16 = 32;
        pub const EthiopicScript: u16 = 33;
        pub const FraserScript: u16 = 34;
        pub const GeorgianScript: u16 = 35;
        pub const GlagoliticScript: u16 = 36;
        pub const GothicScript: u16 = 37;
        pub const GranthaScript: u16 = 38;
        pub const GreekScript: u16 = 39;
        pub const GujaratiScript: u16 = 40;
        pub const GurmukhiScript: u16 = 41;
        pub const HangulScript: u16 = 42;
        pub const HanScript: u16 = 43;
        pub const HanunooScript: u16 = 44;
        pub const HanWithBopomofoScript: u16 = 45;
        pub const HatranScript: u16 = 46;
        pub const HebrewScript: u16 = 47;
        pub const HiraganaScript: u16 = 48;
        pub const ImperialAramaicScript: u16 = 49;
        pub const InscriptionalPahlaviScript: u16 = 50;
        pub const InscriptionalParthianScript: u16 = 51;
        pub const JamoScript: u16 = 52;
        pub const JapaneseScript: u16 = 53;
        pub const JavaneseScript: u16 = 54;
        pub const KaithiScript: u16 = 55;
        pub const KannadaScript: u16 = 56;
        pub const KatakanaScript: u16 = 57;
        pub const KayahLiScript: u16 = 58;
        pub const KharoshthiScript: u16 = 59;
        pub const KhmerScript: u16 = 60;
        pub const KhojkiScript: u16 = 61;
        pub const KhudawadiScript: u16 = 62;
        pub const KoreanScript: u16 = 63;
        pub const LannaScript: u16 = 64;
        pub const LaoScript: u16 = 65;
        pub const LatinScript: u16 = 66;
        pub const LepchaScript: u16 = 67;
        pub const LimbuScript: u16 = 68;
        pub const LinearAScript: u16 = 69;
        pub const LinearBScript: u16 = 70;
        pub const LycianScript: u16 = 71;
        pub const LydianScript: u16 = 72;
        pub const MahajaniScript: u16 = 73;
        pub const MalayalamScript: u16 = 74;
        pub const MandaeanScript: u16 = 75;
        pub const ManichaeanScript: u16 = 76;
        pub const MarchenScript: u16 = 77;
        pub const MeiteiMayekScript: u16 = 78;
        pub const MendeScript: u16 = 79;
        pub const MeroiticCursiveScript: u16 = 80;
        pub const MeroiticScript: u16 = 81;
        pub const ModiScript: u16 = 82;
        pub const MongolianScript: u16 = 83;
        pub const MroScript: u16 = 84;
        pub const MultaniScript: u16 = 85;
        pub const MyanmarScript: u16 = 86;
        pub const NabataeanScript: u16 = 87;
        pub const NewaScript: u16 = 88;
        pub const NewTaiLueScript: u16 = 89;
        pub const NkoScript: u16 = 90;
        pub const OdiaScript: u16 = 91;
        pub const OghamScript: u16 = 92;
        pub const OlChikiScript: u16 = 93;
        pub const OldHungarianScript: u16 = 94;
        pub const OldItalicScript: u16 = 95;
        pub const OldNorthArabianScript: u16 = 96;
        pub const OldPermicScript: u16 = 97;
        pub const OldPersianScript: u16 = 98;
        pub const OldSouthArabianScript: u16 = 99;
        pub const OrkhonScript: u16 = 100;
        pub const OsageScript: u16 = 101;
        pub const OsmanyaScript: u16 = 102;
        pub const PahawhHmongScript: u16 = 103;
        pub const PalmyreneScript: u16 = 104;
        pub const PauCinHauScript: u16 = 105;
        pub const PhagsPaScript: u16 = 106;
        pub const PhoenicianScript: u16 = 107;
        pub const PollardPhoneticScript: u16 = 108;
        pub const PsalterPahlaviScript: u16 = 109;
        pub const RejangScript: u16 = 110;
        pub const RunicScript: u16 = 111;
        pub const SamaritanScript: u16 = 112;
        pub const SaurashtraScript: u16 = 113;
        pub const SharadaScript: u16 = 114;
        pub const ShavianScript: u16 = 115;
        pub const SiddhamScript: u16 = 116;
        pub const SignWritingScript: u16 = 117;
        pub const SimplifiedHanScript: u16 = 118;
        pub const SinhalaScript: u16 = 119;
        pub const SoraSompengScript: u16 = 120;
        pub const SundaneseScript: u16 = 121;
        pub const SylotiNagriScript: u16 = 122;
        pub const SyriacScript: u16 = 123;
        pub const TagalogScript: u16 = 124;
        pub const TagbanwaScript: u16 = 125;
        pub const TaiLeScript: u16 = 126;
        pub const TaiVietScript: u16 = 127;
        pub const TakriScript: u16 = 128;
        pub const TamilScript: u16 = 129;
        pub const TangutScript: u16 = 130;
        pub const TeluguScript: u16 = 131;
        pub const ThaanaScript: u16 = 132;
        pub const ThaiScript: u16 = 133;
        pub const TibetanScript: u16 = 134;
        pub const TifinaghScript: u16 = 135;
        pub const TirhutaScript: u16 = 136;
        pub const TraditionalHanScript: u16 = 137;
        pub const UgariticScript: u16 = 138;
        pub const VaiScript: u16 = 139;
        pub const VarangKshitiScript: u16 = 140;
        pub const YiScript: u16 = 141;
        pub const HanifiScript: u16 = 142;
        pub const BengaliScript: u16 = 9;
        pub const MendeKikakuiScript: u16 = 79;
        pub const OriyaScript: u16 = 91;
        pub const SimplifiedChineseScript: u16 = 118;
        pub const TraditionalChineseScript: u16 = 137;
        pub const LastScript: u16 = 142;
    };

    pub const Country = enum {
        pub const AnyTerritory: u16 = 0;
        pub const Afghanistan: u16 = 1;
        pub const AlandIslands: u16 = 2;
        pub const Albania: u16 = 3;
        pub const Algeria: u16 = 4;
        pub const AmericanSamoa: u16 = 5;
        pub const Andorra: u16 = 6;
        pub const Angola: u16 = 7;
        pub const Anguilla: u16 = 8;
        pub const Antarctica: u16 = 9;
        pub const AntiguaAndBarbuda: u16 = 10;
        pub const Argentina: u16 = 11;
        pub const Armenia: u16 = 12;
        pub const Aruba: u16 = 13;
        pub const AscensionIsland: u16 = 14;
        pub const Australia: u16 = 15;
        pub const Austria: u16 = 16;
        pub const Azerbaijan: u16 = 17;
        pub const Bahamas: u16 = 18;
        pub const Bahrain: u16 = 19;
        pub const Bangladesh: u16 = 20;
        pub const Barbados: u16 = 21;
        pub const Belarus: u16 = 22;
        pub const Belgium: u16 = 23;
        pub const Belize: u16 = 24;
        pub const Benin: u16 = 25;
        pub const Bermuda: u16 = 26;
        pub const Bhutan: u16 = 27;
        pub const Bolivia: u16 = 28;
        pub const BosniaAndHerzegovina: u16 = 29;
        pub const Botswana: u16 = 30;
        pub const BouvetIsland: u16 = 31;
        pub const Brazil: u16 = 32;
        pub const BritishIndianOceanTerritory: u16 = 33;
        pub const BritishVirginIslands: u16 = 34;
        pub const Brunei: u16 = 35;
        pub const Bulgaria: u16 = 36;
        pub const BurkinaFaso: u16 = 37;
        pub const Burundi: u16 = 38;
        pub const Cambodia: u16 = 39;
        pub const Cameroon: u16 = 40;
        pub const Canada: u16 = 41;
        pub const CanaryIslands: u16 = 42;
        pub const CapeVerde: u16 = 43;
        pub const CaribbeanNetherlands: u16 = 44;
        pub const CaymanIslands: u16 = 45;
        pub const CentralAfricanRepublic: u16 = 46;
        pub const CeutaAndMelilla: u16 = 47;
        pub const Chad: u16 = 48;
        pub const Chile: u16 = 49;
        pub const China: u16 = 50;
        pub const ChristmasIsland: u16 = 51;
        pub const ClippertonIsland: u16 = 52;
        pub const CocosIslands: u16 = 53;
        pub const Colombia: u16 = 54;
        pub const Comoros: u16 = 55;
        pub const CongoBrazzaville: u16 = 56;
        pub const CongoKinshasa: u16 = 57;
        pub const CookIslands: u16 = 58;
        pub const CostaRica: u16 = 59;
        pub const Croatia: u16 = 60;
        pub const Cuba: u16 = 61;
        pub const Curacao: u16 = 62;
        pub const Cyprus: u16 = 63;
        pub const Czechia: u16 = 64;
        pub const Denmark: u16 = 65;
        pub const DiegoGarcia: u16 = 66;
        pub const Djibouti: u16 = 67;
        pub const Dominica: u16 = 68;
        pub const DominicanRepublic: u16 = 69;
        pub const Ecuador: u16 = 70;
        pub const Egypt: u16 = 71;
        pub const ElSalvador: u16 = 72;
        pub const EquatorialGuinea: u16 = 73;
        pub const Eritrea: u16 = 74;
        pub const Estonia: u16 = 75;
        pub const Eswatini: u16 = 76;
        pub const Ethiopia: u16 = 77;
        pub const Europe: u16 = 78;
        pub const EuropeanUnion: u16 = 79;
        pub const FalklandIslands: u16 = 80;
        pub const FaroeIslands: u16 = 81;
        pub const Fiji: u16 = 82;
        pub const Finland: u16 = 83;
        pub const France: u16 = 84;
        pub const FrenchGuiana: u16 = 85;
        pub const FrenchPolynesia: u16 = 86;
        pub const FrenchSouthernTerritories: u16 = 87;
        pub const Gabon: u16 = 88;
        pub const Gambia: u16 = 89;
        pub const Georgia: u16 = 90;
        pub const Germany: u16 = 91;
        pub const Ghana: u16 = 92;
        pub const Gibraltar: u16 = 93;
        pub const Greece: u16 = 94;
        pub const Greenland: u16 = 95;
        pub const Grenada: u16 = 96;
        pub const Guadeloupe: u16 = 97;
        pub const Guam: u16 = 98;
        pub const Guatemala: u16 = 99;
        pub const Guernsey: u16 = 100;
        pub const GuineaBissau: u16 = 101;
        pub const Guinea: u16 = 102;
        pub const Guyana: u16 = 103;
        pub const Haiti: u16 = 104;
        pub const HeardAndMcDonaldIslands: u16 = 105;
        pub const Honduras: u16 = 106;
        pub const HongKong: u16 = 107;
        pub const Hungary: u16 = 108;
        pub const Iceland: u16 = 109;
        pub const India: u16 = 110;
        pub const Indonesia: u16 = 111;
        pub const Iran: u16 = 112;
        pub const Iraq: u16 = 113;
        pub const Ireland: u16 = 114;
        pub const IsleOfMan: u16 = 115;
        pub const Israel: u16 = 116;
        pub const Italy: u16 = 117;
        pub const IvoryCoast: u16 = 118;
        pub const Jamaica: u16 = 119;
        pub const Japan: u16 = 120;
        pub const Jersey: u16 = 121;
        pub const Jordan: u16 = 122;
        pub const Kazakhstan: u16 = 123;
        pub const Kenya: u16 = 124;
        pub const Kiribati: u16 = 125;
        pub const Kosovo: u16 = 126;
        pub const Kuwait: u16 = 127;
        pub const Kyrgyzstan: u16 = 128;
        pub const Laos: u16 = 129;
        pub const LatinAmerica: u16 = 130;
        pub const Latvia: u16 = 131;
        pub const Lebanon: u16 = 132;
        pub const Lesotho: u16 = 133;
        pub const Liberia: u16 = 134;
        pub const Libya: u16 = 135;
        pub const Liechtenstein: u16 = 136;
        pub const Lithuania: u16 = 137;
        pub const Luxembourg: u16 = 138;
        pub const Macao: u16 = 139;
        pub const Macedonia: u16 = 140;
        pub const Madagascar: u16 = 141;
        pub const Malawi: u16 = 142;
        pub const Malaysia: u16 = 143;
        pub const Maldives: u16 = 144;
        pub const Mali: u16 = 145;
        pub const Malta: u16 = 146;
        pub const MarshallIslands: u16 = 147;
        pub const Martinique: u16 = 148;
        pub const Mauritania: u16 = 149;
        pub const Mauritius: u16 = 150;
        pub const Mayotte: u16 = 151;
        pub const Mexico: u16 = 152;
        pub const Micronesia: u16 = 153;
        pub const Moldova: u16 = 154;
        pub const Monaco: u16 = 155;
        pub const Mongolia: u16 = 156;
        pub const Montenegro: u16 = 157;
        pub const Montserrat: u16 = 158;
        pub const Morocco: u16 = 159;
        pub const Mozambique: u16 = 160;
        pub const Myanmar: u16 = 161;
        pub const Namibia: u16 = 162;
        pub const NauruTerritory: u16 = 163;
        pub const Nepal: u16 = 164;
        pub const Netherlands: u16 = 165;
        pub const NewCaledonia: u16 = 166;
        pub const NewZealand: u16 = 167;
        pub const Nicaragua: u16 = 168;
        pub const Nigeria: u16 = 169;
        pub const Niger: u16 = 170;
        pub const Niue: u16 = 171;
        pub const NorfolkIsland: u16 = 172;
        pub const NorthernMarianaIslands: u16 = 173;
        pub const NorthKorea: u16 = 174;
        pub const Norway: u16 = 175;
        pub const Oman: u16 = 176;
        pub const OutlyingOceania: u16 = 177;
        pub const Pakistan: u16 = 178;
        pub const Palau: u16 = 179;
        pub const PalestinianTerritories: u16 = 180;
        pub const Panama: u16 = 181;
        pub const PapuaNewGuinea: u16 = 182;
        pub const Paraguay: u16 = 183;
        pub const Peru: u16 = 184;
        pub const Philippines: u16 = 185;
        pub const Pitcairn: u16 = 186;
        pub const Poland: u16 = 187;
        pub const Portugal: u16 = 188;
        pub const PuertoRico: u16 = 189;
        pub const Qatar: u16 = 190;
        pub const Reunion: u16 = 191;
        pub const Romania: u16 = 192;
        pub const Russia: u16 = 193;
        pub const Rwanda: u16 = 194;
        pub const SaintBarthelemy: u16 = 195;
        pub const SaintHelena: u16 = 196;
        pub const SaintKittsAndNevis: u16 = 197;
        pub const SaintLucia: u16 = 198;
        pub const SaintMartin: u16 = 199;
        pub const SaintPierreAndMiquelon: u16 = 200;
        pub const SaintVincentAndGrenadines: u16 = 201;
        pub const Samoa: u16 = 202;
        pub const SanMarino: u16 = 203;
        pub const SaoTomeAndPrincipe: u16 = 204;
        pub const SaudiArabia: u16 = 205;
        pub const Senegal: u16 = 206;
        pub const Serbia: u16 = 207;
        pub const Seychelles: u16 = 208;
        pub const SierraLeone: u16 = 209;
        pub const Singapore: u16 = 210;
        pub const SintMaarten: u16 = 211;
        pub const Slovakia: u16 = 212;
        pub const Slovenia: u16 = 213;
        pub const SolomonIslands: u16 = 214;
        pub const Somalia: u16 = 215;
        pub const SouthAfrica: u16 = 216;
        pub const SouthGeorgiaAndSouthSandwichIslands: u16 = 217;
        pub const SouthKorea: u16 = 218;
        pub const SouthSudan: u16 = 219;
        pub const Spain: u16 = 220;
        pub const SriLanka: u16 = 221;
        pub const Sudan: u16 = 222;
        pub const Suriname: u16 = 223;
        pub const SvalbardAndJanMayen: u16 = 224;
        pub const Sweden: u16 = 225;
        pub const Switzerland: u16 = 226;
        pub const Syria: u16 = 227;
        pub const Taiwan: u16 = 228;
        pub const Tajikistan: u16 = 229;
        pub const Tanzania: u16 = 230;
        pub const Thailand: u16 = 231;
        pub const TimorLeste: u16 = 232;
        pub const Togo: u16 = 233;
        pub const TokelauTerritory: u16 = 234;
        pub const Tonga: u16 = 235;
        pub const TrinidadAndTobago: u16 = 236;
        pub const TristanDaCunha: u16 = 237;
        pub const Tunisia: u16 = 238;
        pub const Turkey: u16 = 239;
        pub const Turkmenistan: u16 = 240;
        pub const TurksAndCaicosIslands: u16 = 241;
        pub const TuvaluTerritory: u16 = 242;
        pub const Uganda: u16 = 243;
        pub const Ukraine: u16 = 244;
        pub const UnitedArabEmirates: u16 = 245;
        pub const UnitedKingdom: u16 = 246;
        pub const UnitedStatesOutlyingIslands: u16 = 247;
        pub const UnitedStates: u16 = 248;
        pub const UnitedStatesVirginIslands: u16 = 249;
        pub const Uruguay: u16 = 250;
        pub const Uzbekistan: u16 = 251;
        pub const Vanuatu: u16 = 252;
        pub const VaticanCity: u16 = 253;
        pub const Venezuela: u16 = 254;
        pub const Vietnam: u16 = 255;
        pub const WallisAndFutuna: u16 = 256;
        pub const WesternSahara: u16 = 257;
        pub const World: u16 = 258;
        pub const Yemen: u16 = 259;
        pub const Zambia: u16 = 260;
        pub const Zimbabwe: u16 = 261;
        pub const AnyCountry: u16 = 0;
        pub const Bonaire: u16 = 44;
        pub const BosniaAndHerzegowina: u16 = 29;
        pub const CuraSao: u16 = 62;
        pub const CzechRepublic: u16 = 64;
        pub const DemocraticRepublicOfCongo: u16 = 57;
        pub const DemocraticRepublicOfKorea: u16 = 174;
        pub const EastTimor: u16 = 232;
        pub const LatinAmericaAndTheCaribbean: u16 = 130;
        pub const Macau: u16 = 139;
        pub const NauruCountry: u16 = 163;
        pub const PeoplesRepublicOfCongo: u16 = 56;
        pub const RepublicOfKorea: u16 = 218;
        pub const RussianFederation: u16 = 193;
        pub const SaintVincentAndTheGrenadines: u16 = 201;
        pub const SouthGeorgiaAndTheSouthSandwichIslands: u16 = 217;
        pub const SvalbardAndJanMayenIslands: u16 = 224;
        pub const Swaziland: u16 = 76;
        pub const SyrianArabRepublic: u16 = 227;
        pub const TokelauCountry: u16 = 234;
        pub const TuvaluCountry: u16 = 242;
        pub const UnitedStatesMinorOutlyingIslands: u16 = 247;
        pub const VaticanCityState: u16 = 253;
        pub const WallisAndFutunaIslands: u16 = 256;
        pub const LastTerritory: u16 = 261;
        pub const LastCountry: u16 = 261;
    };

    pub const MeasurementSystem = enum {
        pub const MetricSystem: i32 = 0;
        pub const ImperialUSSystem: i32 = 1;
        pub const ImperialUKSystem: i32 = 2;
        pub const ImperialSystem: i32 = 1;
    };

    pub const FormatType = enum {
        pub const LongFormat: i32 = 0;
        pub const ShortFormat: i32 = 1;
        pub const NarrowFormat: i32 = 2;
    };

    pub const NumberOption = enum {
        pub const DefaultNumberOptions: i32 = 0;
        pub const OmitGroupSeparator: i32 = 1;
        pub const RejectGroupSeparator: i32 = 2;
        pub const OmitLeadingZeroInExponent: i32 = 4;
        pub const RejectLeadingZeroInExponent: i32 = 8;
        pub const IncludeTrailingZeroesAfterDot: i32 = 16;
        pub const RejectTrailingZeroesAfterDot: i32 = 32;
    };

    pub const FloatingPointPrecisionOption = enum {
        pub const FloatingPointShortest: i32 = -128;
    };

    pub const TagSeparator = enum {
        pub const Dash: i8 = 45;
        pub const Underscore: i8 = 95;
    };

    pub const CurrencySymbolFormat = enum {
        pub const CurrencyIsoCode: i32 = 0;
        pub const CurrencySymbol: i32 = 1;
        pub const CurrencyDisplayName: i32 = 2;
    };

    pub const DataSizeFormat = enum {
        pub const DataSizeBase1000: i32 = 1;
        pub const DataSizeSIQuantifiers: i32 = 2;
        pub const DataSizeIecFormat: i32 = 0;
        pub const DataSizeTraditionalFormat: i32 = 2;
        pub const DataSizeSIFormat: i32 = 3;
    };

    pub const LanguageCodeType = enum {
        pub const ISO639Part1: i32 = 1;
        pub const ISO639Part2B: i32 = 2;
        pub const ISO639Part2T: i32 = 4;
        pub const ISO639Part3: i32 = 8;
        pub const LegacyLanguageCode: i32 = 32768;
        pub const ISO639Part2: i32 = 6;
        pub const ISO639Alpha2: i32 = 1;
        pub const ISO639Alpha3: i32 = 14;
        pub const ISO639: i32 = 15;
        pub const AnyLanguageCode: i32 = -1;
    };

    pub const QuotationStyle = enum {
        pub const StandardQuotation: i32 = 0;
        pub const AlternateQuotation: i32 = 1;
    };
};
