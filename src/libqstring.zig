const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html)
pub const QString = extern struct {
    /// ### DEPRECATED: Use `maxSize` instead
    ///
    pub const MaxSize = maxSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#maxSize)
    ///
    pub fn maxSize() isize {
        return qtc.QString_MaxSize();
    }

    /// ### DEPRECATED: Use `fromLatin1` instead
    ///
    pub const FromLatin1 = fromLatin1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ba: []u8 `
    ///
    pub fn fromLatin1(allocator: std.mem.Allocator, ba: []u8) []const u8 {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        var _str = qtc.QString_FromLatin1(ba_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromLatin1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromLatin12` instead
    ///
    pub const FromLatin12 = fromLatin12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromLatin12(allocator: std.mem.Allocator, str: [:0]const u8, _size: isize) []const u8 {
        const str_Cstring = str.ptr;
        var _str = qtc.QString_FromLatin12(str_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromLatin12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUtf8` instead
    ///
    pub const FromUtf8 = fromUtf8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` utf8: []u8 `
    ///
    pub fn fromUtf8(allocator: std.mem.Allocator, utf8: []u8) []const u8 {
        const utf8_str = qtc.libqt_string{
            .len = utf8.len,
            .data = utf8.ptr,
        };
        var _str = qtc.QString_FromUtf8(utf8_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUtf8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUtf82` instead
    ///
    pub const FromUtf82 = fromUtf82;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` utf8: [:0]const u8 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromUtf82(allocator: std.mem.Allocator, utf8: [:0]const u8, _size: isize) []const u8 {
        const utf8_Cstring = utf8.ptr;
        var _str = qtc.QString_FromUtf82(utf8_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUtf82: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromLocal8Bit` instead
    ///
    pub const FromLocal8Bit = fromLocal8Bit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ba: []u8 `
    ///
    pub fn fromLocal8Bit(allocator: std.mem.Allocator, ba: []u8) []const u8 {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        var _str = qtc.QString_FromLocal8Bit(ba_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromLocal8Bit: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromLocal8Bit2` instead
    ///
    pub const FromLocal8Bit2 = fromLocal8Bit2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromLocal8Bit2(allocator: std.mem.Allocator, str: [:0]const u8, _size: isize) []const u8 {
        const str_Cstring = str.ptr;
        var _str = qtc.QString_FromLocal8Bit2(str_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromLocal8Bit2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromRawData` instead
    ///
    pub const FromRawData = fromRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QChar `
    ///
    /// ` _size: isize `
    ///
    pub fn fromRawData(allocator: std.mem.Allocator, param1: anytype, _size: isize) []const u8 {
        comptime _ = @TypeOf(param1)._is_QChar;
        var _str = qtc.QString_FromRawData(@ptrCast(param1.ptr), @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromRawData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUtf162` instead
    ///
    pub const FromUtf162 = fromUtf162;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u16 `
    ///
    pub fn fromUtf162(allocator: std.mem.Allocator, str: *const u16) []const u8 {
        var _str = qtc.QString_FromUtf162(@ptrCast(str));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUtf162: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUcs42` instead
    ///
    pub const FromUcs42 = fromUcs42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u32 `
    ///
    pub fn fromUcs42(allocator: std.mem.Allocator, str: *const u32) []const u8 {
        var _str = qtc.QString_FromUcs42(@ptrCast(str));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUcs42: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `compare5` instead
    ///
    pub const Compare5 = compare5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare5(s1: []const u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `compare6` instead
    ///
    pub const Compare6 = compare6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []u8 `
    ///
    pub fn compare6(s1: []const u8, s2: []u8) i32 {
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

    /// ### DEPRECATED: Use `compare7` instead
    ///
    pub const Compare7 = compare7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare7(s1: []u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `compare8` instead
    ///
    pub const Compare8 = compare8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare8(s1: []const u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `compare9` instead
    ///
    pub const Compare9 = compare9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn compare9(s1: []const u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `localeAwareCompare3` instead
    ///
    pub const LocaleAwareCompare3 = localeAwareCompare3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#localeAwareCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn localeAwareCompare3(s1: []const u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `localeAwareCompare4` instead
    ///
    pub const LocaleAwareCompare4 = localeAwareCompare4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#localeAwareCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` s1: []const u8 `
    ///
    /// ` s2: []const u8 `
    ///
    pub fn localeAwareCompare4(s1: []const u8, s2: []const u8) i32 {
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

    /// ### DEPRECATED: Use `number` instead
    ///
    pub const Number = number;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn number(allocator: std.mem.Allocator, param1: i32) []const u8 {
        var _str = qtc.QString_Number(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number2` instead
    ///
    pub const Number2 = number2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    pub fn number2(allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QString_Number2(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number3` instead
    ///
    pub const Number3 = number3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn number3(allocator: std.mem.Allocator, param1: isize) []const u8 {
        var _str = qtc.QString_Number3(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number4` instead
    ///
    pub const Number4 = number4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn number4(allocator: std.mem.Allocator, param1: usize) []const u8 {
        var _str = qtc.QString_Number4(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number5` instead
    ///
    pub const Number5 = number5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn number5(allocator: std.mem.Allocator, param1: isize) []const u8 {
        var _str = qtc.QString_Number5(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number6` instead
    ///
    pub const Number6 = number6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn number6(allocator: std.mem.Allocator, param1: usize) []const u8 {
        var _str = qtc.QString_Number6(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number7` instead
    ///
    pub const Number7 = number7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    pub fn number7(allocator: std.mem.Allocator, param1: f64) []const u8 {
        var _str = qtc.QString_Number7(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUtf1623` instead
    ///
    pub const FromUtf1623 = fromUtf1623;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u16 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromUtf1623(allocator: std.mem.Allocator, str: *const u16, _size: isize) []const u8 {
        var _str = qtc.QString_FromUtf1623(@ptrCast(str), @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUtf1623: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromUcs423` instead
    ///
    pub const FromUcs423 = fromUcs423;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: *const u32 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromUcs423(allocator: std.mem.Allocator, str: *const u32, _size: isize) []const u8 {
        var _str = qtc.QString_FromUcs423(@ptrCast(str), @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.fromUcs423: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `compare32` instead
    ///
    pub const Compare32 = compare32;

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
    pub fn compare32(s1: []const u8, s2: []const u8, cs: i32) i32 {
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

    /// ### DEPRECATED: Use `compare33` instead
    ///
    pub const Compare33 = compare33;

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
    pub fn compare33(s1: []const u8, s2: []u8, cs: i32) i32 {
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

    /// ### DEPRECATED: Use `compare34` instead
    ///
    pub const Compare34 = compare34;

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
    pub fn compare34(s1: []u8, s2: []const u8, cs: i32) i32 {
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

    /// ### DEPRECATED: Use `compare35` instead
    ///
    pub const Compare35 = compare35;

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
    pub fn compare35(s1: []const u8, s2: []const u8, cs: i32) i32 {
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

    /// ### DEPRECATED: Use `compare36` instead
    ///
    pub const Compare36 = compare36;

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
    pub fn compare36(s1: []const u8, s2: []const u8, cs: i32) i32 {
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

    /// ### DEPRECATED: Use `number22` instead
    ///
    pub const Number22 = number22;

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
    pub fn number22(allocator: std.mem.Allocator, param1: i32, base: i32) []const u8 {
        var _str = qtc.QString_Number22(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number23` instead
    ///
    pub const Number23 = number23;

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
    pub fn number23(allocator: std.mem.Allocator, param1: u32, base: i32) []const u8 {
        var _str = qtc.QString_Number23(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number24` instead
    ///
    pub const Number24 = number24;

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
    pub fn number24(allocator: std.mem.Allocator, param1: isize, base: i32) []const u8 {
        var _str = qtc.QString_Number24(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number24: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number25` instead
    ///
    pub const Number25 = number25;

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
    pub fn number25(allocator: std.mem.Allocator, param1: usize, base: i32) []const u8 {
        var _str = qtc.QString_Number25(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number25: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number26` instead
    ///
    pub const Number26 = number26;

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
    pub fn number26(allocator: std.mem.Allocator, param1: isize, base: i32) []const u8 {
        var _str = qtc.QString_Number26(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number26: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number27` instead
    ///
    pub const Number27 = number27;

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
    pub fn number27(allocator: std.mem.Allocator, param1: usize, base: i32) []const u8 {
        var _str = qtc.QString_Number27(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number27: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number28` instead
    ///
    pub const Number28 = number28;

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
    pub fn number28(allocator: std.mem.Allocator, param1: f64, format: u8) []const u8 {
        var _str = qtc.QString_Number28(@bitCast(param1), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number28: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number32` instead
    ///
    pub const Number32 = number32;

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
    pub fn number32(allocator: std.mem.Allocator, param1: f64, format: u8, precision: i32) []const u8 {
        var _str = qtc.QString_Number32(@bitCast(param1), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QString.number32: Memory allocation failed");
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
