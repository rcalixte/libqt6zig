const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html)
pub const QString = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#maxSize)
    ///
    pub fn MaxSize() isize {
        return qtc.QString_MaxSize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ba: []u8 `
    ///
    pub fn FromLatin1(allocator: std.mem.Allocator, ba: []u8) []const u8 {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        var _str = qtc.QString_FromLatin1(ba_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLatin1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` size: isize `
    ///
    pub fn FromLatin12(allocator: std.mem.Allocator, str: [:0]const u8, size: isize) []const u8 {
        const str_Cstring = str.ptr;
        var _str = qtc.QString_FromLatin12(str_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLatin12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` utf8: []u8 `
    ///
    pub fn FromUtf8(allocator: std.mem.Allocator, utf8: []u8) []const u8 {
        const utf8_str = qtc.libqt_string{
            .len = utf8.len,
            .data = utf8.ptr,
        };
        var _str = qtc.QString_FromUtf8(utf8_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` utf8: [:0]const u8 `
    ///
    /// ` size: isize `
    ///
    pub fn FromUtf82(allocator: std.mem.Allocator, utf8: [:0]const u8, size: isize) []const u8 {
        const utf8_Cstring = utf8.ptr;
        var _str = qtc.QString_FromUtf82(utf8_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf82: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ba: []u8 `
    ///
    pub fn FromLocal8Bit(allocator: std.mem.Allocator, ba: []u8) []const u8 {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        var _str = qtc.QString_FromLocal8Bit(ba_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLocal8Bit: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` size: isize `
    ///
    pub fn FromLocal8Bit2(allocator: std.mem.Allocator, str: [:0]const u8, size: isize) []const u8 {
        const str_Cstring = str.ptr;
        var _str = qtc.QString_FromLocal8Bit2(str_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromLocal8Bit2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QChar `
    ///
    /// ` size: isize `
    ///
    pub fn FromRawData(allocator: std.mem.Allocator, param1: anytype, size: isize) []const u8 {
        comptime _ = @TypeOf(param1)._is_QChar;
        var _str = qtc.QString_FromRawData(@ptrCast(param1.ptr), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromRawData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u16 `
    ///
    pub fn FromUtf162(allocator: std.mem.Allocator, str: *const u16) []const u8 {
        var _str = qtc.QString_FromUtf162(@ptrCast(str));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf162: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u32 `
    ///
    pub fn FromUcs42(allocator: std.mem.Allocator, str: *const u32) []const u8 {
        var _str = qtc.QString_FromUcs42(@ptrCast(str));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUcs42: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn Compare5(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare5(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []u8 `
    ///
    pub fn Compare6(s1: []const u8, s2: []u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare6(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn Compare7(s1: []u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare7(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn Compare8(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare8(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn Compare9(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare9(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#localeAwareCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn LocaleAwareCompare3(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_LocaleAwareCompare3(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#localeAwareCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn LocaleAwareCompare4(s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_LocaleAwareCompare4(s1_str, s2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn Number(allocator: std.mem.Allocator, param1: i32) []const u8 {
        var _str = qtc.QString_Number(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    pub fn Number2(allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QString_Number2(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn Number3(allocator: std.mem.Allocator, param1: isize) []const u8 {
        var _str = qtc.QString_Number3(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn Number4(allocator: std.mem.Allocator, param1: usize) []const u8 {
        var _str = qtc.QString_Number4(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn Number5(allocator: std.mem.Allocator, param1: isize) []const u8 {
        var _str = qtc.QString_Number5(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn Number6(allocator: std.mem.Allocator, param1: usize) []const u8 {
        var _str = qtc.QString_Number6(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    pub fn Number7(allocator: std.mem.Allocator, param1: f64) []const u8 {
        var _str = qtc.QString_Number7(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u16 `
    ///
    /// ` size: isize `
    ///
    pub fn FromUtf1623(allocator: std.mem.Allocator, str: *const u16, size: isize) []const u8 {
        var _str = qtc.QString_FromUtf1623(@ptrCast(str), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUtf1623: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u32 `
    ///
    /// ` size: isize `
    ///
    pub fn FromUcs423(allocator: std.mem.Allocator, str: *const u32, size: isize) []const u8 {
        var _str = qtc.QString_FromUcs423(@ptrCast(str), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.FromUcs423: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare32(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare32(s1_str, s2_str, @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare33(s1: []const u8, s2: []u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare33(s1_str, s2_str, @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []u8 `
    ///
    /// ` s2: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare34(s1: []u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare34(s1_str, s2_str, @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare35(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare35(s1_str, s2_str, @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare36(s1: []const u8, s2: []const u8, cs: i32) i32 {
        const s1_str = qtc.libqt_string{
            .len = s1.len,
            .data = s1.ptr,
        };
        const s2_str = qtc.libqt_string{
            .len = s2.len,
            .data = s2.ptr,
        };
        return qtc.QString_Compare36(s1_str, s2_str, @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Number22(allocator: std.mem.Allocator, param1: i32, base: i32) []const u8 {
        var _str = qtc.QString_Number22(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Number23(allocator: std.mem.Allocator, param1: u32, base: i32) []const u8 {
        var _str = qtc.QString_Number23(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number24(allocator: std.mem.Allocator, param1: isize, base: i32) []const u8 {
        var _str = qtc.QString_Number24(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number24: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number25(allocator: std.mem.Allocator, param1: usize, base: i32) []const u8 {
        var _str = qtc.QString_Number25(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number25: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number26(allocator: std.mem.Allocator, param1: isize, base: i32) []const u8 {
        var _str = qtc.QString_Number26(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number26: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number27(allocator: std.mem.Allocator, param1: usize, base: i32) []const u8 {
        var _str = qtc.QString_Number27(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number27: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    /// ` format: u8 `
    ///
    pub fn Number28(allocator: std.mem.Allocator, param1: f64, format: u8) []const u8 {
        var _str = qtc.QString_Number28(@bitCast(param1), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number28: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn Number32(allocator: std.mem.Allocator, param1: f64, format: u8, precision: i32) []const u8 {
        var _str = qtc.QString_Number32(@bitCast(param1), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstring.Number32: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#public-types)
pub const enums = struct {
    pub const SectionFlag = enum(i32) {
        pub const SectionDefault: i32 = 0;
        pub const SectionSkipEmpty: i32 = 1;
        pub const SectionIncludeLeadingSep: i32 = 2;
        pub const SectionIncludeTrailingSep: i32 = 4;
        pub const SectionCaseInsensitiveSeps: i32 = 8;
    };

    pub const NormalizationForm = enum(i32) {
        pub const NormalizationForm_D: i32 = 0;
        pub const NormalizationForm_C: i32 = 1;
        pub const NormalizationForm_KD: i32 = 2;
        pub const NormalizationForm_KC: i32 = 3;
    };

    pub const Tag = enum(u8) {
        pub const L1: u8 = 0;
        pub const U8: u8 = 1;
        pub const U16: u8 = 2;
    };
};
