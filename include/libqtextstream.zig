const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const builtin = @import("builtin");
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qstringconverter_base_enums = @import("libqstringconverter_base.zig").enums;
const qtextstream_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html)
pub const qtextstream = struct {
    /// New constructs a new QTextStream object.
    ///
    pub fn New() QtC.QTextStream {
        return qtc.QTextStream_new();
    }

    /// New2 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New2(device: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_new2(@ptrCast(device));
    }

    /// New3 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    pub fn New3(array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };

        return qtc.QTextStream_new3(array_str);
    }

    /// New4 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn New4(array: []u8, openMode: i32) QtC.QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };

        return qtc.QTextStream_new4(array_str, @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn SetEncoding(self: ?*anyopaque, encoding: i32) void {
        qtc.QTextStream_SetEncoding(@ptrCast(self), @bitCast(encoding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding `
    ///
    pub fn Encoding(self: ?*anyopaque) i32 {
        return qtc.QTextStream_Encoding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoDetectUnicode(self: ?*anyopaque, enabled: bool) void {
        qtc.QTextStream_SetAutoDetectUnicode(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn AutoDetectUnicode(self: ?*anyopaque) bool {
        return qtc.QTextStream_AutoDetectUnicode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` generate: bool `
    ///
    pub fn SetGenerateByteOrderMark(self: ?*anyopaque, generate: bool) void {
        qtc.QTextStream_SetGenerateByteOrderMark(@ptrCast(self), generate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn GenerateByteOrderMark(self: ?*anyopaque) bool {
        return qtc.QTextStream_GenerateByteOrderMark(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QTextStream_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QTextStream_Locale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QTextStream_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QTextStream_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#string)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn String(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_String(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.Status `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QTextStream_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` status: qtextstream_enums.Status `
    ///
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QTextStream_SetStatus(@ptrCast(self), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn ResetStatus(self: ?*anyopaque) void {
        qtc.QTextStream_ResetStatus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QTextStream_AtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QTextStream_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Flush(self: ?*anyopaque) void {
        qtc.QTextStream_Flush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QTextStream_Seek(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QTextStream_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn SkipWhiteSpace(self: ?*anyopaque) void {
        qtc.QTextStream_SkipWhiteSpace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadLine(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadAll: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Read(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_Read(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.Read: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` alignment: qtextstream_enums.FieldAlignment `
    ///
    pub fn SetFieldAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextStream_SetFieldAlignment(@ptrCast(self), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#fieldAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.FieldAlignment `
    ///
    pub fn FieldAlignment(self: ?*anyopaque) i32 {
        return qtc.QTextStream_FieldAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ch: QtC.QChar `
    ///
    pub fn SetPadChar(self: ?*anyopaque, ch: QtC.QChar) void {
        qtc.QTextStream_SetPadChar(@ptrCast(self), @ptrCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#padChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn PadChar(self: ?*anyopaque) QtC.QChar {
        return qtc.QTextStream_PadChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` width: i32 `
    ///
    pub fn SetFieldWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextStream_SetFieldWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn FieldWidth(self: ?*anyopaque) i32 {
        return qtc.QTextStream_FieldWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` flags: flag of qtextstream_enums.NumberFlag `
    ///
    pub fn SetNumberFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextStream_SetNumberFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#numberFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextstream_enums.NumberFlag `
    ///
    pub fn NumberFlags(self: ?*anyopaque) i32 {
        return qtc.QTextStream_NumberFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` base: i32 `
    ///
    pub fn SetIntegerBase(self: ?*anyopaque, base: i32) void {
        qtc.QTextStream_SetIntegerBase(@ptrCast(self), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn IntegerBase(self: ?*anyopaque) i32 {
        return qtc.QTextStream_IntegerBase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` notation: qtextstream_enums.RealNumberNotation `
    ///
    pub fn SetRealNumberNotation(self: ?*anyopaque, notation: i32) void {
        qtc.QTextStream_SetRealNumberNotation(@ptrCast(self), @bitCast(notation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#realNumberNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.RealNumberNotation `
    ///
    pub fn RealNumberNotation(self: ?*anyopaque) i32 {
        return qtc.QTextStream_RealNumberNotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetRealNumberPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QTextStream_SetRealNumberPrecision(@ptrCast(self), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn RealNumberPrecision(self: ?*anyopaque) i32 {
        return qtc.QTextStream_RealNumberPrecision(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ch: QtC.QChar `
    ///
    pub fn OperatorShiftRight(self: ?*anyopaque, ch: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight(@ptrCast(self), @ptrCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ch: *u8 `
    ///
    pub fn OperatorShiftRight2(self: ?*anyopaque, ch: *u8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight2(@ptrCast(self), @ptrCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *i16 `
    ///
    pub fn OperatorShiftRight4(self: ?*anyopaque, i: *i16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight4(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *u16 `
    ///
    pub fn OperatorShiftRight5(self: ?*anyopaque, i: *u16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight5(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *i32 `
    ///
    pub fn OperatorShiftRight6(self: ?*anyopaque, i: *i32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight6(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *u32 `
    ///
    pub fn OperatorShiftRight7(self: ?*anyopaque, i: *u32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight7(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *i64 `
    ///
    pub fn OperatorShiftRight8(self: ?*anyopaque, i: *i64) QtC.QTextStream {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return qtc.QTextStream_OperatorShiftRight8(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *u64 `
    ///
    pub fn OperatorShiftRight9(self: ?*anyopaque, i: *u64) QtC.QTextStream {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return qtc.QTextStream_OperatorShiftRight9(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *i64 `
    ///
    pub fn OperatorShiftRight10(self: ?*anyopaque, i: *i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight10(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: *u64 `
    ///
    pub fn OperatorShiftRight11(self: ?*anyopaque, i: *u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight11(@ptrCast(self), @ptrCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` f: *f32 `
    ///
    pub fn OperatorShiftRight12(self: ?*anyopaque, f: *f32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight12(@ptrCast(self), @ptrCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` f: *f64 `
    ///
    pub fn OperatorShiftRight13(self: ?*anyopaque, f: *f64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight13(@ptrCast(self), @ptrCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn OperatorShiftRight14(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QTextStream_OperatorShiftRight14(@ptrCast(self), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn OperatorShiftRight15(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return qtc.QTextStream_OperatorShiftRight15(@ptrCast(self), array_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn OperatorShiftRight16(self: ?*anyopaque, c: [:0]u8) QtC.QTextStream {
        const c_Cstring = c.ptr;
        return qtc.QTextStream_OperatorShiftRight16(@ptrCast(self), c_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ch: QtC.QChar `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, ch: QtC.QChar) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft(@ptrCast(self), @ptrCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ch: u8 `
    ///
    pub fn OperatorShiftLeft2(self: ?*anyopaque, ch: u8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft2(@ptrCast(self), @bitCast(ch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: i16 `
    ///
    pub fn OperatorShiftLeft4(self: ?*anyopaque, i: i16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft4(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: u16 `
    ///
    pub fn OperatorShiftLeft5(self: ?*anyopaque, i: u16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft5(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorShiftLeft6(self: ?*anyopaque, i: i32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft6(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: u32 `
    ///
    pub fn OperatorShiftLeft7(self: ?*anyopaque, i: u32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft7(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorShiftLeft8(self: ?*anyopaque, i: i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft8(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: u64 `
    ///
    pub fn OperatorShiftLeft9(self: ?*anyopaque, i: u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft9(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorShiftLeft10(self: ?*anyopaque, i: i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft10(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` i: u64 `
    ///
    pub fn OperatorShiftLeft11(self: ?*anyopaque, i: u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft11(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` f: f32 `
    ///
    pub fn OperatorShiftLeft12(self: ?*anyopaque, f: f32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft12(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` f: f64 `
    ///
    pub fn OperatorShiftLeft13(self: ?*anyopaque, f: f64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft13(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn OperatorShiftLeft14(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.QTextStream_OperatorShiftLeft14(@ptrCast(self), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn OperatorShiftLeft17(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return qtc.QTextStream_OperatorShiftLeft17(@ptrCast(self), array_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn OperatorShiftLeft18(self: ?*anyopaque, c: [:0]const u8) QtC.QTextStream {
        const c_Cstring = c.ptr;
        return qtc.QTextStream_OperatorShiftLeft18(@ptrCast(self), c_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    pub fn OperatorShiftLeft19(self: ?*anyopaque, ptr: ?*const anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft19(@ptrCast(self), @ptrCast(ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextStream `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadLine1(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#dtor.QTextStream)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTextStream `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QTextStream_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#public-types)
pub const enums = struct {
    pub const RealNumberNotation = enum(i32) {
        pub const SmartNotation: i32 = 0;
        pub const FixedNotation: i32 = 1;
        pub const ScientificNotation: i32 = 2;
    };

    pub const FieldAlignment = enum(i32) {
        pub const AlignLeft: i32 = 0;
        pub const AlignRight: i32 = 1;
        pub const AlignCenter: i32 = 2;
        pub const AlignAccountingStyle: i32 = 3;
    };

    pub const Status = enum(i32) {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
    };

    pub const NumberFlag = enum(i32) {
        pub const ShowBase: i32 = 1;
        pub const ForcePoint: i32 = 2;
        pub const ForceSign: i32 = 4;
        pub const UppercaseBase: i32 = 8;
        pub const UppercaseDigits: i32 = 16;
    };
};
