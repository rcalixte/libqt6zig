const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qstringconverter_base_enums = @import("libqstringconverter_base.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)
pub const QStringEncoder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringEncoder,

    pub const _is_QStringEncoder = {};
    pub const _is_QStringConverter = {};
    pub const _is_QStringConverterBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStringEncoder object in C++ memory
    ///
    pub fn new() QStringEncoder {
        return .{ .ptr = qtc.QStringEncoder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStringEncoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn new2(encoding: i32) QStringEncoder {
        return .{ .ptr = qtc.QStringEncoder_new2(@bitCast(encoding)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStringEncoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new3(_name: []const u8) QStringEncoder {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QStringEncoder_new3(name_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStringEncoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn new4(encoding: i32, flags: i32) QStringEncoder {
        return .{ .ptr = qtc.QStringEncoder_new4(@bitCast(encoding), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QStringEncoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn new5(_name: []const u8, flags: i32) QStringEncoder {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QStringEncoder_new5(name_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `requiredSpace` instead
    ///
    pub const RequiredSpace = requiredSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    /// ` inputLength: isize `
    ///
    pub fn requiredSpace(self: QStringEncoder, inputLength: isize) isize {
        return qtc.QStringEncoder_RequiredSpace(@ptrCast(self.ptr), @bitCast(inputLength));
    }

    /// ### DEPRECATED: Use `appendToBuffer` instead
    ///
    pub const AppendToBuffer = appendToBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#appendToBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    /// ` out: [:0]u8 `
    ///
    /// ` in: []const u8 `
    ///
    pub fn appendToBuffer(self: QStringEncoder, out: [:0]u8, in: []const u8) [:0]u8 {
        const out_Cstring = out.ptr;
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const _ret = qtc.QStringEncoder_AppendToBuffer(@ptrCast(self.ptr), out_Cstring, in_str);
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    pub fn isValid(self: QStringEncoder) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetState` instead
    ///
    pub const ResetState = resetState;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    pub fn resetState(self: QStringEncoder) void {
        qtc.QStringConverter_ResetState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    pub fn hasError(self: QStringEncoder) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringEncoder `
    ///
    pub fn name(self: QStringEncoder) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encodingForName` instead
    ///
    pub const EncodingForName = encodingForName;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForName(_name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QStringConverter_EncodingForName(name_str);
    }

    /// ### DEPRECATED: Use `nameForEncoding` instead
    ///
    pub const NameForEncoding = nameForEncoding;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` e: qstringconverter_base_enums.Encoding `
    ///
    pub fn nameForEncoding(e: i32) [:0]const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@bitCast(e));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encodingForData` instead
    ///
    pub const EncodingForData = encodingForData;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForData(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForData(data_str);
    }

    /// ### DEPRECATED: Use `encodingForHtml` instead
    ///
    pub const EncodingForHtml = encodingForHtml;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForHtml(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForHtml(data_str);
    }

    /// ### DEPRECATED: Use `availableCodecs` instead
    ///
    pub const AvailableCodecs = availableCodecs;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableCodecs(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStringConverter_AvailableCodecs();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStringEncoder.availableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStringEncoder.availableCodecs: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#dtor.QStringEncoder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStringEncoder `
    ///
    pub fn delete(self: QStringEncoder) void {
        qtc.QStringEncoder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)
pub const QStringDecoder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringDecoder,

    pub const _is_QStringDecoder = {};
    pub const _is_QStringConverter = {};
    pub const _is_QStringConverterBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStringDecoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    pub fn new(encoding: i32) QStringDecoder {
        return .{ .ptr = qtc.QStringDecoder_new(@bitCast(encoding)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStringDecoder object in C++ memory
    ///
    pub fn new2() QStringDecoder {
        return .{ .ptr = qtc.QStringDecoder_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStringDecoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new3(_name: []const u8) QStringDecoder {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QStringDecoder_new3(name_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStringDecoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: qstringconverter_base_enums.Encoding `
    ///
    /// ` flags: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn new4(encoding: i32, flags: i32) QStringDecoder {
        return .{ .ptr = qtc.QStringDecoder_new4(@bitCast(encoding), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QStringDecoder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` f: flag of qstringconverter_base_enums.Flag `
    ///
    pub fn new5(_name: []const u8, f: i32) QStringDecoder {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QStringDecoder_new5(name_str, @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `requiredSpace` instead
    ///
    pub const RequiredSpace = requiredSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    /// ` inputLength: isize `
    ///
    pub fn requiredSpace(self: QStringDecoder, inputLength: isize) isize {
        return qtc.QStringDecoder_RequiredSpace(@ptrCast(self.ptr), @bitCast(inputLength));
    }

    /// ### DEPRECATED: Use `appendToBuffer` instead
    ///
    pub const AppendToBuffer = appendToBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    /// ` out: QChar `
    ///
    /// ` ba: []u8 `
    ///
    pub fn appendToBuffer(self: QStringDecoder, out: anytype, ba: []u8) QChar {
        comptime _ = @TypeOf(out)._is_QChar;
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return .{ .ptr = qtc.QStringDecoder_AppendToBuffer(@ptrCast(self.ptr), @ptrCast(out.ptr), ba_str) };
    }

    /// ### DEPRECATED: Use `decoderForHtml` instead
    ///
    pub const DecoderForHtml = decoderForHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn decoderForHtml(data: []u8) QStringDecoder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QStringDecoder_DecoderForHtml(data_str) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    pub fn isValid(self: QStringDecoder) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetState` instead
    ///
    pub const ResetState = resetState;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    pub fn resetState(self: QStringDecoder) void {
        qtc.QStringConverter_ResetState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    pub fn hasError(self: QStringDecoder) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringDecoder `
    ///
    pub fn name(self: QStringDecoder) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encodingForName` instead
    ///
    pub const EncodingForName = encodingForName;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForName(_name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QStringConverter_EncodingForName(name_str);
    }

    /// ### DEPRECATED: Use `nameForEncoding` instead
    ///
    pub const NameForEncoding = nameForEncoding;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` e: qstringconverter_base_enums.Encoding `
    ///
    pub fn nameForEncoding(e: i32) [:0]const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@bitCast(e));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encodingForData` instead
    ///
    pub const EncodingForData = encodingForData;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForData(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForData(data_str);
    }

    /// ### DEPRECATED: Use `encodingForHtml` instead
    ///
    pub const EncodingForHtml = encodingForHtml;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn encodingForHtml(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForHtml(data_str);
    }

    /// ### DEPRECATED: Use `availableCodecs` instead
    ///
    pub const AvailableCodecs = availableCodecs;

    /// Inherited from QStringConverter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableCodecs(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStringConverter_AvailableCodecs();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStringDecoder.availableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStringDecoder.availableCodecs: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#dtor.QStringDecoder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStringDecoder `
    ///
    pub fn delete(self: QStringDecoder) void {
        qtc.QStringDecoder_Delete(@ptrCast(self.ptr));
    }
};
