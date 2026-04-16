const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QIODevice = @import("libqt6").QIODevice;
const QLocale = @import("libqt6").QLocale;
const builtin = @import("builtin");
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qstringconverter_base_enums = @import("libqstringconverter_base.zig").enums;
const qtextstream_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html)
pub const QTextStream = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextStream,

    pub const _is_QTextStream = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QTextStream object.
    ///
    pub fn New() QTextStream {
        return .{ .ptr = qtc.QTextStream_new() };
    }

    /// New2 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New2(device: anytype) QTextStream {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QTextStream_new2(@ptrCast(device.ptr)) };
    }

    /// New3 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    pub fn New3(array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_new3(array_str) };
    }

    /// New4 constructs a new QTextStream object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn New4(array: []u8, openMode: i32) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_new4(array_str, @bitCast(openMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn SetEncoding(self: QTextStream, encoding: i32) void {
        qtc.QTextStream_SetEncoding(@ptrCast(self.ptr), @bitCast(encoding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding `
    ///
    pub fn Encoding(self: QTextStream) i32 {
        return qtc.QTextStream_Encoding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoDetectUnicode(self: QTextStream, enabled: bool) void {
        qtc.QTextStream_SetAutoDetectUnicode(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn AutoDetectUnicode(self: QTextStream) bool {
        return qtc.QTextStream_AutoDetectUnicode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` generate: bool `
    ///
    pub fn SetGenerateByteOrderMark(self: QTextStream, generate: bool) void {
        qtc.QTextStream_SetGenerateByteOrderMark(@ptrCast(self.ptr), generate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn GenerateByteOrderMark(self: QTextStream) bool {
        return qtc.QTextStream_GenerateByteOrderMark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTextStream, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QTextStream_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn Locale(self: QTextStream) QLocale {
        return .{ .ptr = qtc.QTextStream_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QTextStream, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QTextStream_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn Device(self: QTextStream) QIODevice {
        return .{ .ptr = qtc.QTextStream_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#string)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn String(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.Status `
    ///
    pub fn Status(self: QTextStream) i32 {
        return qtc.QTextStream_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` status: qtextstream_enums.Status `
    ///
    pub fn SetStatus(self: QTextStream, status: i32) void {
        qtc.QTextStream_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn ResetStatus(self: QTextStream) void {
        qtc.QTextStream_ResetStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn AtEnd(self: QTextStream) bool {
        return qtc.QTextStream_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn Reset(self: QTextStream) void {
        qtc.QTextStream_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn Flush(self: QTextStream) void {
        qtc.QTextStream_Flush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QTextStream, pos: i64) bool {
        return qtc.QTextStream_Seek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn Pos(self: QTextStream) i64 {
        return qtc.QTextStream_Pos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn SkipWhiteSpace(self: QTextStream) void {
        qtc.QTextStream_SkipWhiteSpace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadLine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadAll: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QTextStream, allocator: std.mem.Allocator, maxlen: i64) []const u8 {
        var _str = qtc.QTextStream_Read(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.Read: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` alignment: qtextstream_enums.FieldAlignment `
    ///
    pub fn SetFieldAlignment(self: QTextStream, alignment: i32) void {
        qtc.QTextStream_SetFieldAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#fieldAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.FieldAlignment `
    ///
    pub fn FieldAlignment(self: QTextStream) i32 {
        return qtc.QTextStream_FieldAlignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn SetPadChar(self: QTextStream, ch: anytype) void {
        comptime _ = @TypeOf(ch)._is_QChar;
        qtc.QTextStream_SetPadChar(@ptrCast(self.ptr), @ptrCast(ch.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#padChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn PadChar(self: QTextStream) QChar {
        return .{ .ptr = qtc.QTextStream_PadChar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` width: i32 `
    ///
    pub fn SetFieldWidth(self: QTextStream, width: i32) void {
        qtc.QTextStream_SetFieldWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn FieldWidth(self: QTextStream) i32 {
        return qtc.QTextStream_FieldWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` flags: flag of qtextstream_enums.NumberFlag `
    ///
    pub fn SetNumberFlags(self: QTextStream, flags: i32) void {
        qtc.QTextStream_SetNumberFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#numberFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextstream_enums.NumberFlag `
    ///
    pub fn NumberFlags(self: QTextStream) i32 {
        return qtc.QTextStream_NumberFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` base: i32 `
    ///
    pub fn SetIntegerBase(self: QTextStream, base: i32) void {
        qtc.QTextStream_SetIntegerBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn IntegerBase(self: QTextStream) i32 {
        return qtc.QTextStream_IntegerBase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` notation: qtextstream_enums.RealNumberNotation `
    ///
    pub fn SetRealNumberNotation(self: QTextStream, notation: i32) void {
        qtc.QTextStream_SetRealNumberNotation(@ptrCast(self.ptr), @bitCast(notation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#realNumberNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ## Returns:
    ///
    /// ` qtextstream_enums.RealNumberNotation `
    ///
    pub fn RealNumberNotation(self: QTextStream) i32 {
        return qtc.QTextStream_RealNumberNotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetRealNumberPrecision(self: QTextStream, precision: i32) void {
        qtc.QTextStream_SetRealNumberPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn RealNumberPrecision(self: QTextStream) i32 {
        return qtc.QTextStream_RealNumberPrecision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn OperatorShiftRight(self: QTextStream, ch: anytype) QTextStream {
        comptime _ = @TypeOf(ch)._is_QChar;
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight(@ptrCast(self.ptr), @ptrCast(ch.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: *u8 `
    ///
    pub fn OperatorShiftRight2(self: QTextStream, ch: *u8) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight2(@ptrCast(self.ptr), @ptrCast(ch)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *i16 `
    ///
    pub fn OperatorShiftRight4(self: QTextStream, i: *i16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight4(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *u16 `
    ///
    pub fn OperatorShiftRight5(self: QTextStream, i: *u16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight5(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *i32 `
    ///
    pub fn OperatorShiftRight6(self: QTextStream, i: *i32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight6(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *u32 `
    ///
    pub fn OperatorShiftRight7(self: QTextStream, i: *u32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight7(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *isize `
    ///
    pub fn OperatorShiftRight8(self: QTextStream, i: *isize) QTextStream {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return .{ .ptr = qtc.QTextStream_OperatorShiftRight8(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *usize `
    ///
    pub fn OperatorShiftRight9(self: QTextStream, i: *usize) QTextStream {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return .{ .ptr = qtc.QTextStream_OperatorShiftRight9(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *isize `
    ///
    pub fn OperatorShiftRight10(self: QTextStream, i: *isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight10(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *usize `
    ///
    pub fn OperatorShiftRight11(self: QTextStream, i: *usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight11(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: *f32 `
    ///
    pub fn OperatorShiftRight12(self: QTextStream, f: *f32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight12(@ptrCast(self.ptr), @ptrCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: *f64 `
    ///
    pub fn OperatorShiftRight13(self: QTextStream, f: *f64) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight13(@ptrCast(self.ptr), @ptrCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn OperatorShiftRight14(self: QTextStream, s: []const u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight14(@ptrCast(self.ptr), s_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn OperatorShiftRight15(self: QTextStream, array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight15(@ptrCast(self.ptr), array_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn OperatorShiftRight16(self: QTextStream, c: [:0]u8) QTextStream {
        const c_Cstring = c.ptr;
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight16(@ptrCast(self.ptr), c_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn OperatorShiftLeft(self: QTextStream, ch: anytype) QTextStream {
        comptime _ = @TypeOf(ch)._is_QChar;
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(ch.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: u8 `
    ///
    pub fn OperatorShiftLeft2(self: QTextStream, ch: u8) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft2(@ptrCast(self.ptr), @bitCast(ch)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: i16 `
    ///
    pub fn OperatorShiftLeft4(self: QTextStream, i: i16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: u16 `
    ///
    pub fn OperatorShiftLeft5(self: QTextStream, i: u16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorShiftLeft6(self: QTextStream, i: i32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: u32 `
    ///
    pub fn OperatorShiftLeft7(self: QTextStream, i: u32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorShiftLeft8(self: QTextStream, i: isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: usize `
    ///
    pub fn OperatorShiftLeft9(self: QTextStream, i: usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorShiftLeft10(self: QTextStream, i: isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft10(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: usize `
    ///
    pub fn OperatorShiftLeft11(self: QTextStream, i: usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: f32 `
    ///
    pub fn OperatorShiftLeft12(self: QTextStream, f: f32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: f64 `
    ///
    pub fn OperatorShiftLeft13(self: QTextStream, f: f64) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft13(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn OperatorShiftLeft14(self: QTextStream, s: []const u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft14(@ptrCast(self.ptr), s_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn OperatorShiftLeft17(self: QTextStream, array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft17(@ptrCast(self.ptr), array_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn OperatorShiftLeft18(self: QTextStream, c: [:0]const u8) QTextStream {
        const c_Cstring = c.ptr;
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft18(@ptrCast(self.ptr), c_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    pub fn OperatorShiftLeft19(self: QTextStream, ptr: ?*const anyopaque) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft19(@ptrCast(self.ptr), @ptrCast(ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QTextStream, allocator: std.mem.Allocator, maxlen: i64) []const u8 {
        var _str = qtc.QTextStream_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
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
    /// ` self: QTextStream `
    ///
    pub fn Delete(self: QTextStream) void {
        qtc.QTextStream_Delete(@ptrCast(self.ptr));
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
