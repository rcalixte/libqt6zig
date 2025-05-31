const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtextstream_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextstream.html
pub const qtextstream = struct {
    /// New constructs a new QTextStream object.
    ///
    ///
    pub fn New() QtC.QTextStream {
        return qtc.QTextStream_new();
    }

    /// New2 constructs a new QTextStream object.
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn New2(device: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_new2(@ptrCast(device));
    }

    /// New3 constructs a new QTextStream object.
    ///
    /// ``` array: []u8 ```
    pub fn New3(array: []u8) QtC.QTextStream {
        const array_str = qtc.struct_libqt_string{
            .len = array.len,
            .data = @constCast(array.ptr),
        };

        return qtc.QTextStream_new3(array_str);
    }

    /// New4 constructs a new QTextStream object.
    ///
    /// ``` array: []u8, openMode: i32 ```
    pub fn New4(array: []u8, openMode: i64) QtC.QTextStream {
        const array_str = qtc.struct_libqt_string{
            .len = array.len,
            .data = @constCast(array.ptr),
        };

        return qtc.QTextStream_new4(array_str, @intCast(openMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
    ///
    /// ``` self: QtC.QTextStream, encoding: qstringconverter_enums.Encoding ```
    pub fn SetEncoding(self: ?*anyopaque, encoding: i64) void {
        qtc.QTextStream_SetEncoding(@ptrCast(self), @intCast(encoding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#encoding)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Encoding(self: ?*anyopaque) i64 {
        return qtc.QTextStream_Encoding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
    ///
    /// ``` self: QtC.QTextStream, enabled: bool ```
    pub fn SetAutoDetectUnicode(self: ?*anyopaque, enabled: bool) void {
        qtc.QTextStream_SetAutoDetectUnicode(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn AutoDetectUnicode(self: ?*anyopaque) bool {
        return qtc.QTextStream_AutoDetectUnicode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
    ///
    /// ``` self: QtC.QTextStream, generate: bool ```
    pub fn SetGenerateByteOrderMark(self: ?*anyopaque, generate: bool) void {
        qtc.QTextStream_SetGenerateByteOrderMark(@ptrCast(self), generate);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn GenerateByteOrderMark(self: ?*anyopaque) bool {
        return qtc.QTextStream_GenerateByteOrderMark(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
    ///
    /// ``` self: QtC.QTextStream, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QTextStream_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#locale)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QTextStream_Locale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
    ///
    /// ``` self: QtC.QTextStream, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QTextStream_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#device)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QTextStream_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#string)
    ///
    /// ``` self: QtC.QTextStream, allocator: std.mem.Allocator ```
    pub fn String(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_String(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.String: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#status)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Status(self: ?*anyopaque) i64 {
        return qtc.QTextStream_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
    ///
    /// ``` self: QtC.QTextStream, status: qtextstream_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i64) void {
        qtc.QTextStream_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn ResetStatus(self: ?*anyopaque) void {
        qtc.QTextStream_ResetStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QTextStream_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#reset)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QTextStream_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#flush)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Flush(self: ?*anyopaque) void {
        qtc.QTextStream_Flush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#seek)
    ///
    /// ``` self: QtC.QTextStream, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QTextStream_Seek(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#pos)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QTextStream_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn SkipWhiteSpace(self: ?*anyopaque) void {
        qtc.QTextStream_SkipWhiteSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ``` self: QtC.QTextStream, allocator: std.mem.Allocator ```
    pub fn ReadLine(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadLine(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readAll)
    ///
    /// ``` self: QtC.QTextStream, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadAll: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#read)
    ///
    /// ``` self: QtC.QTextStream, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Read(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_Read(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.Read: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
    ///
    /// ``` self: QtC.QTextStream, alignment: qtextstream_enums.FieldAlignment ```
    pub fn SetFieldAlignment(self: ?*anyopaque, alignment: i64) void {
        qtc.QTextStream_SetFieldAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldAlignment)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn FieldAlignment(self: ?*anyopaque) i64 {
        return qtc.QTextStream_FieldAlignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
    ///
    /// ``` self: QtC.QTextStream, ch: QtC.QChar ```
    pub fn SetPadChar(self: ?*anyopaque, ch: QtC.QChar) void {
        qtc.QTextStream_SetPadChar(@ptrCast(self), @ptrCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#padChar)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn PadChar(self: ?*anyopaque) QtC.QChar {
        return qtc.QTextStream_PadChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
    ///
    /// ``` self: QtC.QTextStream, width: i32 ```
    pub fn SetFieldWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextStream_SetFieldWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn FieldWidth(self: ?*anyopaque) i32 {
        return qtc.QTextStream_FieldWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
    ///
    /// ``` self: QtC.QTextStream, flags: i32 ```
    pub fn SetNumberFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QTextStream_SetNumberFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#numberFlags)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn NumberFlags(self: ?*anyopaque) i64 {
        return qtc.QTextStream_NumberFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
    ///
    /// ``` self: QtC.QTextStream, base: i32 ```
    pub fn SetIntegerBase(self: ?*anyopaque, base: i32) void {
        qtc.QTextStream_SetIntegerBase(@ptrCast(self), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn IntegerBase(self: ?*anyopaque) i32 {
        return qtc.QTextStream_IntegerBase(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
    ///
    /// ``` self: QtC.QTextStream, notation: qtextstream_enums.RealNumberNotation ```
    pub fn SetRealNumberNotation(self: ?*anyopaque, notation: i64) void {
        qtc.QTextStream_SetRealNumberNotation(@ptrCast(self), @intCast(notation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberNotation)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn RealNumberNotation(self: ?*anyopaque) i64 {
        return qtc.QTextStream_RealNumberNotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
    ///
    /// ``` self: QtC.QTextStream, precision: i32 ```
    pub fn SetRealNumberPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QTextStream_SetRealNumberPrecision(@ptrCast(self), @intCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn RealNumberPrecision(self: ?*anyopaque) i32 {
        return qtc.QTextStream_RealNumberPrecision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, ch: QtC.QChar ```
    pub fn OperatorShiftRight(self: ?*anyopaque, ch: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight(@ptrCast(self), @ptrCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, ch: ?*i8 ```
    pub fn OperatorShiftRightWithCh(self: ?*anyopaque, ch: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*i16 ```
    pub fn OperatorShiftRightWithShort(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithShort(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*u16 ```
    pub fn OperatorShiftRightWithUnsignedshort(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithUnsignedshort(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*i32 ```
    pub fn OperatorShiftRightWithInt(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithInt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*u32 ```
    pub fn OperatorShiftRightWithUnsignedint(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithUnsignedint(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*i64 ```
    pub fn OperatorShiftRightWithLong(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithLong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*u64 ```
    pub fn OperatorShiftRightWithUnsignedlong(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithUnsignedlong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*i64 ```
    pub fn OperatorShiftRightWithQlonglong(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithQlonglong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, i: ?*u64 ```
    pub fn OperatorShiftRightWithQulonglong(self: ?*anyopaque, i: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithQulonglong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, f: ?*f32 ```
    pub fn OperatorShiftRightWithFloat(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithFloat(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, f: ?*f64 ```
    pub fn OperatorShiftRightWithDouble(self: ?*anyopaque, f: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRightWithDouble(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, s: []const u8 ```
    pub fn OperatorShiftRightWithQString(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        return qtc.QTextStream_OperatorShiftRightWithQString(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, array: []u8 ```
    pub fn OperatorShiftRightWithArray(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.struct_libqt_string{
            .len = array.len,
            .data = @constCast(array.ptr),
        };
        return qtc.QTextStream_OperatorShiftRightWithArray(@ptrCast(self), array_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator>>)
    ///
    /// ``` self: QtC.QTextStream, c: []const u8 ```
    pub fn OperatorShiftRightWithChar(self: ?*anyopaque, c: []const u8) QtC.QTextStream {
        const c_Cstring = @constCast(c.ptr);
        return qtc.QTextStream_OperatorShiftRightWithChar(@ptrCast(self), c_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, ch: QtC.QChar ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, ch: QtC.QChar) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft(@ptrCast(self), @ptrCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, ch: i8 ```
    pub fn OperatorShiftLeftWithCh(self: ?*anyopaque, ch: i8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithCh(@ptrCast(self), @intCast(ch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: i16 ```
    pub fn OperatorShiftLeftWithShort(self: ?*anyopaque, i: i16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithShort(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: u16 ```
    pub fn OperatorShiftLeftWithUnsignedshort(self: ?*anyopaque, i: u16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithUnsignedshort(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: i32 ```
    pub fn OperatorShiftLeftWithInt(self: ?*anyopaque, i: i32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithInt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: u32 ```
    pub fn OperatorShiftLeftWithUnsignedint(self: ?*anyopaque, i: u32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithUnsignedint(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: i64 ```
    pub fn OperatorShiftLeftWithLong(self: ?*anyopaque, i: i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithLong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: u64 ```
    pub fn OperatorShiftLeftWithUnsignedlong(self: ?*anyopaque, i: u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithUnsignedlong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: i64 ```
    pub fn OperatorShiftLeftWithQlonglong(self: ?*anyopaque, i: i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithQlonglong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, i: u64 ```
    pub fn OperatorShiftLeftWithQulonglong(self: ?*anyopaque, i: u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithQulonglong(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, f: f32 ```
    pub fn OperatorShiftLeftWithFloat(self: ?*anyopaque, f: f32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithFloat(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, f: f64 ```
    pub fn OperatorShiftLeftWithDouble(self: ?*anyopaque, f: f64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithDouble(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, s: []const u8 ```
    pub fn OperatorShiftLeftWithQString(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        return qtc.QTextStream_OperatorShiftLeftWithQString(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, array: []u8 ```
    pub fn OperatorShiftLeftWithArray(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.struct_libqt_string{
            .len = array.len,
            .data = @constCast(array.ptr),
        };
        return qtc.QTextStream_OperatorShiftLeftWithArray(@ptrCast(self), array_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, c: []const u8 ```
    pub fn OperatorShiftLeftWithChar(self: ?*anyopaque, c: []const u8) QtC.QTextStream {
        const c_Cstring = @constCast(c.ptr);
        return qtc.QTextStream_OperatorShiftLeftWithChar(@ptrCast(self), c_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator<<)
    ///
    /// ``` self: QtC.QTextStream, ptr: ?*anyopaque ```
    pub fn OperatorShiftLeftWithPtr(self: ?*anyopaque, ptr: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeftWithPtr(@ptrCast(self), ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ``` self: QtC.QTextStream, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine1: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#dtor.QTextStream)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextStream ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextStream_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextstream.html#types
pub const enums = struct {
    pub const RealNumberNotation = enum {
        pub const SmartNotation: i32 = 0;
        pub const FixedNotation: i32 = 1;
        pub const ScientificNotation: i32 = 2;
    };

    pub const FieldAlignment = enum {
        pub const AlignLeft: i32 = 0;
        pub const AlignRight: i32 = 1;
        pub const AlignCenter: i32 = 2;
        pub const AlignAccountingStyle: i32 = 3;
    };

    pub const Status = enum {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
    };

    pub const NumberFlag = enum {
        pub const ShowBase: i32 = 1;
        pub const ForcePoint: i32 = 2;
        pub const ForceSign: i32 = 4;
        pub const UppercaseBase: i32 = 8;
        pub const UppercaseDigits: i32 = 16;
    };
};
