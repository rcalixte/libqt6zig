const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstringconverter_base_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html)
pub const QStringConverter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringConverter,

    pub const _is_QStringConverter = {};
    pub const _is_QStringConverterBase = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn IsValid(self: QStringConverter) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn ResetState(self: QStringConverter) void {
        qtc.QStringConverter_ResetState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn HasError(self: QStringConverter) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn Name(self: QStringConverter) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#encodingForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qstringconverter_base_enums.Encoding ` (Returns -1 for an invalid value)
    ///
    pub fn EncodingForName(name: []const u8) i32 {
        return qtc.QStringConverter_EncodingForName(name.ptr);
    }

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
    pub fn EncodingForData(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForData(data_str);
    }

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
    pub fn EncodingForHtml(data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QStringConverter_EncodingForHtml(data_str);
    }

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
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstringconverter.AvailableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstringconverter.AvailableCodecs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter-base.html#public-types)
pub const enums = struct {
    pub const Flag = enum(i32) {
        pub const Default: i32 = 0;
        pub const Stateless: i32 = 1;
        pub const ConvertInvalidToNull: i32 = 2;
        pub const WriteBom: i32 = 4;
        pub const ConvertInitialBom: i32 = 8;
        pub const UsesIcu: i32 = 16;
    };

    pub const Encoding = enum(i32) {
        pub const Utf8: i32 = 0;
        pub const Utf16: i32 = 1;
        pub const Utf16LE: i32 = 2;
        pub const Utf16BE: i32 = 3;
        pub const Utf32: i32 = 4;
        pub const Utf32LE: i32 = 5;
        pub const Utf32BE: i32 = 6;
        pub const Latin1: i32 = 7;
        pub const System: i32 = 8;
        pub const LastEncoding: i32 = 8;
    };
};
