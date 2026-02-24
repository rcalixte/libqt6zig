const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstringconverter_base_enums = @import("libqstringconverter_base.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)
pub const qstringencoder = struct {
    /// New constructs a new QStringEncoder object.
    ///
    pub fn New() QtC.QStringEncoder {
        return qtc.QStringEncoder_new();
    }

    /// New2 constructs a new QStringEncoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn New2(encoding: i32) QtC.QStringEncoder {
        return qtc.QStringEncoder_new2(@bitCast(encoding));
    }

    /// New3 constructs a new QStringEncoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) QtC.QStringEncoder {
        return qtc.QStringEncoder_new3(name.ptr);
    }

    /// New4 constructs a new QStringEncoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn New4(encoding: i32, flags: i32) QtC.QStringEncoder {
        return qtc.QStringEncoder_new4(@bitCast(encoding), @bitCast(flags));
    }

    /// New5 constructs a new QStringEncoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn New5(name: []const u8, flags: i32) QtC.QStringEncoder {
        return qtc.QStringEncoder_new5(name.ptr, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    /// ` inputLength: i64 `
    ///
    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringEncoder_RequiredSpace(@ptrCast(self), @bitCast(inputLength));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    pub fn Name(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` e: qstringconverter_base_enums.Encoding `
    ///
    pub fn NameForEncoding(e: i32) [:0]const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@bitCast(e));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableCodecs(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStringConverter_AvailableCodecs();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstringencoder.AvailableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstringencoder.AvailableCodecs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#dtor.QStringEncoder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStringEncoder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStringEncoder_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)
pub const qstringdecoder = struct {
    /// New constructs a new QStringDecoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn New(encoding: i32) QtC.QStringDecoder {
        return qtc.QStringDecoder_new(@bitCast(encoding));
    }

    /// New2 constructs a new QStringDecoder object.
    ///
    pub fn New2() QtC.QStringDecoder {
        return qtc.QStringDecoder_new2();
    }

    /// New3 constructs a new QStringDecoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) QtC.QStringDecoder {
        return qtc.QStringDecoder_new3(name.ptr);
    }

    /// New4 constructs a new QStringDecoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn New4(encoding: i32, flags: i32) QtC.QStringDecoder {
        return qtc.QStringDecoder_new4(@bitCast(encoding), @bitCast(flags));
    }

    /// New5 constructs a new QStringDecoder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` f: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn New5(name: []const u8, f: i32) QtC.QStringDecoder {
        return qtc.QStringDecoder_new5(name.ptr, @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    /// ` inputLength: i64 `
    ///
    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringDecoder_RequiredSpace(@ptrCast(self), @bitCast(inputLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    /// ` out: QtC.QChar `
    ///
    /// ` ba: []u8 `
    ///
    pub fn AppendToBuffer(self: ?*anyopaque, out: ?*anyopaque, ba: []u8) QtC.QChar {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return qtc.QStringDecoder_AppendToBuffer(@ptrCast(self), @ptrCast(out), ba_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn DecoderForHtml(data: []u8) QtC.QStringDecoder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringDecoder_DecoderForHtml(data_str);
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    pub fn Name(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` e: qstringconverter_base_enums.Encoding `
    ///
    pub fn NameForEncoding(e: i32) [:0]const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@bitCast(e));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableCodecs(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStringConverter_AvailableCodecs();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstringdecoder.AvailableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstringdecoder.AvailableCodecs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#dtor.QStringDecoder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStringDecoder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStringDecoder_Delete(@ptrCast(self));
    }
};
