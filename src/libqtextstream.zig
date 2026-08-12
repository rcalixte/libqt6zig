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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextStream object in C++ memory
    ///
    pub fn new() QTextStream {
        return .{ .ptr = qtc.QTextStream_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextStream object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new2(_device: anytype) QTextStream {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QTextStream_new2(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextStream object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    pub fn new3(array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_new3(array_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextStream object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` array: []u8 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn new4(array: []u8, openMode: i32) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_new4(array_str, @bitCast(openMode)) };
    }

    /// ### DEPRECATED: Use `setEncoding` instead
    ///
    pub const SetEncoding = setEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` _encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn setEncoding(self: QTextStream, _encoding: i32) void {
        qtc.QTextStream_SetEncoding(@ptrCast(self.ptr), @bitCast(_encoding));
    }

    /// ### DEPRECATED: Use `encoding` instead
    ///
    pub const Encoding = encoding;

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
    pub fn encoding(self: QTextStream) i32 {
        return qtc.QTextStream_Encoding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDetectUnicode` instead
    ///
    pub const SetAutoDetectUnicode = setAutoDetectUnicode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoDetectUnicode(self: QTextStream, enabled: bool) void {
        qtc.QTextStream_SetAutoDetectUnicode(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `autoDetectUnicode` instead
    ///
    pub const AutoDetectUnicode = autoDetectUnicode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn autoDetectUnicode(self: QTextStream) bool {
        return qtc.QTextStream_AutoDetectUnicode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGenerateByteOrderMark` instead
    ///
    pub const SetGenerateByteOrderMark = setGenerateByteOrderMark;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` generate: bool `
    ///
    pub fn setGenerateByteOrderMark(self: QTextStream, generate: bool) void {
        qtc.QTextStream_SetGenerateByteOrderMark(@ptrCast(self.ptr), generate);
    }

    /// ### DEPRECATED: Use `generateByteOrderMark` instead
    ///
    pub const GenerateByteOrderMark = generateByteOrderMark;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn generateByteOrderMark(self: QTextStream) bool {
        return qtc.QTextStream_GenerateByteOrderMark(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTextStream, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QTextStream_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn locale(self: QTextStream) QLocale {
        return .{ .ptr = qtc.QTextStream_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QTextStream, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QTextStream_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn device(self: QTextStream) QIODevice {
        return .{ .ptr = qtc.QTextStream_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `string` instead
    ///
    pub const String = string;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#string)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn string(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextStream.string: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

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
    pub fn status(self: QTextStream) i32 {
        return qtc.QTextStream_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` _status: qtextstream_enums.Status `
    ///
    pub fn setStatus(self: QTextStream, _status: i32) void {
        qtc.QTextStream_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `resetStatus` instead
    ///
    pub const ResetStatus = resetStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn resetStatus(self: QTextStream) void {
        qtc.QTextStream_ResetStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn atEnd(self: QTextStream) bool {
        return qtc.QTextStream_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn reset(self: QTextStream) void {
        qtc.QTextStream_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn flush(self: QTextStream) void {
        qtc.QTextStream_Flush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QTextStream, _pos: i64) bool {
        return qtc.QTextStream_Seek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn pos(self: QTextStream) i64 {
        return qtc.QTextStream_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `skipWhiteSpace` instead
    ///
    pub const SkipWhiteSpace = skipWhiteSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn skipWhiteSpace(self: QTextStream) void {
        qtc.QTextStream_SkipWhiteSpace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadLine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextStream.readLine: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: QTextStream, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextStream_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextStream.readAll: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

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
    pub fn read(self: QTextStream, allocator: std.mem.Allocator, maxlen: i64) []const u8 {
        var _str = qtc.QTextStream_Read(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextStream.read: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFieldAlignment` instead
    ///
    pub const SetFieldAlignment = setFieldAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` alignment: qtextstream_enums.FieldAlignment `
    ///
    pub fn setFieldAlignment(self: QTextStream, alignment: i32) void {
        qtc.QTextStream_SetFieldAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `fieldAlignment` instead
    ///
    pub const FieldAlignment = fieldAlignment;

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
    pub fn fieldAlignment(self: QTextStream) i32 {
        return qtc.QTextStream_FieldAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPadChar` instead
    ///
    pub const SetPadChar = setPadChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn setPadChar(self: QTextStream, ch: anytype) void {
        comptime _ = @TypeOf(ch)._is_QChar;
        qtc.QTextStream_SetPadChar(@ptrCast(self.ptr), @ptrCast(ch.ptr));
    }

    /// ### DEPRECATED: Use `padChar` instead
    ///
    pub const PadChar = padChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#padChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn padChar(self: QTextStream) QChar {
        return .{ .ptr = qtc.QTextStream_PadChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFieldWidth` instead
    ///
    pub const SetFieldWidth = setFieldWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` width: i32 `
    ///
    pub fn setFieldWidth(self: QTextStream, width: i32) void {
        qtc.QTextStream_SetFieldWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `fieldWidth` instead
    ///
    pub const FieldWidth = fieldWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn fieldWidth(self: QTextStream) i32 {
        return qtc.QTextStream_FieldWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberFlags` instead
    ///
    pub const SetNumberFlags = setNumberFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` flags: flag of qtextstream_enums.NumberFlag `
    ///
    pub fn setNumberFlags(self: QTextStream, flags: i32) void {
        qtc.QTextStream_SetNumberFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `numberFlags` instead
    ///
    pub const NumberFlags = numberFlags;

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
    pub fn numberFlags(self: QTextStream) i32 {
        return qtc.QTextStream_NumberFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIntegerBase` instead
    ///
    pub const SetIntegerBase = setIntegerBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` base: i32 `
    ///
    pub fn setIntegerBase(self: QTextStream, base: i32) void {
        qtc.QTextStream_SetIntegerBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### DEPRECATED: Use `integerBase` instead
    ///
    pub const IntegerBase = integerBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn integerBase(self: QTextStream) i32 {
        return qtc.QTextStream_IntegerBase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRealNumberNotation` instead
    ///
    pub const SetRealNumberNotation = setRealNumberNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` notation: qtextstream_enums.RealNumberNotation `
    ///
    pub fn setRealNumberNotation(self: QTextStream, notation: i32) void {
        qtc.QTextStream_SetRealNumberNotation(@ptrCast(self.ptr), @bitCast(notation));
    }

    /// ### DEPRECATED: Use `realNumberNotation` instead
    ///
    pub const RealNumberNotation = realNumberNotation;

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
    pub fn realNumberNotation(self: QTextStream) i32 {
        return qtc.QTextStream_RealNumberNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRealNumberPrecision` instead
    ///
    pub const SetRealNumberPrecision = setRealNumberPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` precision: i32 `
    ///
    pub fn setRealNumberPrecision(self: QTextStream, precision: i32) void {
        qtc.QTextStream_SetRealNumberPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `realNumberPrecision` instead
    ///
    pub const RealNumberPrecision = realNumberPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    pub fn realNumberPrecision(self: QTextStream) i32 {
        return qtc.QTextStream_RealNumberPrecision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorShiftRight` instead
    ///
    pub const OperatorShiftRight = operatorShiftRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn operatorShiftRight(self: QTextStream, ch: anytype) QTextStream {
        comptime _ = @TypeOf(ch)._is_QChar;
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight(@ptrCast(self.ptr), @ptrCast(ch.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight2` instead
    ///
    pub const OperatorShiftRight2 = operatorShiftRight2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: *u8 `
    ///
    pub fn operatorShiftRight2(self: QTextStream, ch: *u8) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight2(@ptrCast(self.ptr), @ptrCast(ch)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight4` instead
    ///
    pub const OperatorShiftRight4 = operatorShiftRight4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *i16 `
    ///
    pub fn operatorShiftRight4(self: QTextStream, i: *i16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight4(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight5` instead
    ///
    pub const OperatorShiftRight5 = operatorShiftRight5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *u16 `
    ///
    pub fn operatorShiftRight5(self: QTextStream, i: *u16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight5(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight6` instead
    ///
    pub const OperatorShiftRight6 = operatorShiftRight6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *i32 `
    ///
    pub fn operatorShiftRight6(self: QTextStream, i: *i32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight6(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight7` instead
    ///
    pub const OperatorShiftRight7 = operatorShiftRight7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *u32 `
    ///
    pub fn operatorShiftRight7(self: QTextStream, i: *u32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight7(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight8` instead
    ///
    pub const OperatorShiftRight8 = operatorShiftRight8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *isize `
    ///
    pub fn operatorShiftRight8(self: QTextStream, i: *isize) QTextStream {
        switch (builtin.target.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return .{ .ptr = qtc.QTextStream_OperatorShiftRight8(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight9` instead
    ///
    pub const OperatorShiftRight9 = operatorShiftRight9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *usize `
    ///
    pub fn operatorShiftRight9(self: QTextStream, i: *usize) QTextStream {
        switch (builtin.target.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return .{ .ptr = qtc.QTextStream_OperatorShiftRight9(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight10` instead
    ///
    pub const OperatorShiftRight10 = operatorShiftRight10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *isize `
    ///
    pub fn operatorShiftRight10(self: QTextStream, i: *isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight10(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight11` instead
    ///
    pub const OperatorShiftRight11 = operatorShiftRight11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: *usize `
    ///
    pub fn operatorShiftRight11(self: QTextStream, i: *usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight11(@ptrCast(self.ptr), @ptrCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight12` instead
    ///
    pub const OperatorShiftRight12 = operatorShiftRight12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: *f32 `
    ///
    pub fn operatorShiftRight12(self: QTextStream, f: *f32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight12(@ptrCast(self.ptr), @ptrCast(f)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight13` instead
    ///
    pub const OperatorShiftRight13 = operatorShiftRight13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: *f64 `
    ///
    pub fn operatorShiftRight13(self: QTextStream, f: *f64) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight13(@ptrCast(self.ptr), @ptrCast(f)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight14` instead
    ///
    pub const OperatorShiftRight14 = operatorShiftRight14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn operatorShiftRight14(self: QTextStream, s: []const u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight14(@ptrCast(self.ptr), s_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight15` instead
    ///
    pub const OperatorShiftRight15 = operatorShiftRight15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn operatorShiftRight15(self: QTextStream, array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight15(@ptrCast(self.ptr), array_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight16` instead
    ///
    pub const OperatorShiftRight16 = operatorShiftRight16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn operatorShiftRight16(self: QTextStream, c: [:0]u8) QTextStream {
        const c_Cstring = c.ptr;
        return .{ .ptr = qtc.QTextStream_OperatorShiftRight16(@ptrCast(self.ptr), c_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: QChar `
    ///
    pub fn operatorShiftLeft(self: QTextStream, ch: anytype) QTextStream {
        comptime _ = @TypeOf(ch)._is_QChar;
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(ch.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ch: u8 `
    ///
    pub fn operatorShiftLeft2(self: QTextStream, ch: u8) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft2(@ptrCast(self.ptr), @bitCast(ch)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft4` instead
    ///
    pub const OperatorShiftLeft4 = operatorShiftLeft4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: i16 `
    ///
    pub fn operatorShiftLeft4(self: QTextStream, i: i16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft5` instead
    ///
    pub const OperatorShiftLeft5 = operatorShiftLeft5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: u16 `
    ///
    pub fn operatorShiftLeft5(self: QTextStream, i: u16) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft6` instead
    ///
    pub const OperatorShiftLeft6 = operatorShiftLeft6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorShiftLeft6(self: QTextStream, i: i32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft7` instead
    ///
    pub const OperatorShiftLeft7 = operatorShiftLeft7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: u32 `
    ///
    pub fn operatorShiftLeft7(self: QTextStream, i: u32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft8` instead
    ///
    pub const OperatorShiftLeft8 = operatorShiftLeft8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: isize `
    ///
    pub fn operatorShiftLeft8(self: QTextStream, i: isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft9` instead
    ///
    pub const OperatorShiftLeft9 = operatorShiftLeft9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: usize `
    ///
    pub fn operatorShiftLeft9(self: QTextStream, i: usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft10` instead
    ///
    pub const OperatorShiftLeft10 = operatorShiftLeft10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: isize `
    ///
    pub fn operatorShiftLeft10(self: QTextStream, i: isize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft10(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft11` instead
    ///
    pub const OperatorShiftLeft11 = operatorShiftLeft11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` i: usize `
    ///
    pub fn operatorShiftLeft11(self: QTextStream, i: usize) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft12` instead
    ///
    pub const OperatorShiftLeft12 = operatorShiftLeft12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: f32 `
    ///
    pub fn operatorShiftLeft12(self: QTextStream, f: f32) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft13` instead
    ///
    pub const OperatorShiftLeft13 = operatorShiftLeft13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` f: f64 `
    ///
    pub fn operatorShiftLeft13(self: QTextStream, f: f64) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft13(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft14` instead
    ///
    pub const OperatorShiftLeft14 = operatorShiftLeft14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn operatorShiftLeft14(self: QTextStream, s: []const u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft14(@ptrCast(self.ptr), s_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft15` instead
    ///
    pub const OperatorShiftLeft15 = operatorShiftLeft15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []const u8 `
    ///
    pub fn operatorShiftLeft15(self: QTextStream, s: []const u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft15(@ptrCast(self.ptr), s_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft16` instead
    ///
    pub const OperatorShiftLeft16 = operatorShiftLeft16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` s: []u8 `
    ///
    pub fn operatorShiftLeft16(self: QTextStream, s: []u8) QTextStream {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft16(@ptrCast(self.ptr), s_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft17` instead
    ///
    pub const OperatorShiftLeft17 = operatorShiftLeft17;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` array: []u8 `
    ///
    pub fn operatorShiftLeft17(self: QTextStream, array: []u8) QTextStream {
        const array_str = qtc.libqt_string{
            .len = array.len,
            .data = array.ptr,
        };
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft17(@ptrCast(self.ptr), array_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft18` instead
    ///
    pub const OperatorShiftLeft18 = operatorShiftLeft18;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn operatorShiftLeft18(self: QTextStream, c: [:0]const u8) QTextStream {
        const c_Cstring = c.ptr;
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft18(@ptrCast(self.ptr), c_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft19` instead
    ///
    pub const OperatorShiftLeft19 = operatorShiftLeft19;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextStream `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    pub fn operatorShiftLeft19(self: QTextStream, ptr: ?*const anyopaque) QTextStream {
        return .{ .ptr = qtc.QTextStream_OperatorShiftLeft19(@ptrCast(self.ptr), @ptrCast(ptr)) };
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

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
    pub fn readLine1(self: QTextStream, allocator: std.mem.Allocator, maxlen: i64) []const u8 {
        var _str = qtc.QTextStream_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextStream.readLine1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextstream.html#dtor.QTextStream)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextStream `
    ///
    pub fn delete(self: QTextStream) void {
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
