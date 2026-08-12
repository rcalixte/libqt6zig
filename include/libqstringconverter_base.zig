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

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn isValid(self: QStringConverter) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetState` instead
    ///
    pub const ResetState = resetState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn resetState(self: QStringConverter) void {
        qtc.QStringConverter_ResetState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn hasError(self: QStringConverter) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStringConverter `
    ///
    pub fn name(self: QStringConverter) [:0]const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encodingForName` instead
    ///
    pub const EncodingForName = encodingForName;

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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStringConverter.availableCodecs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStringConverter.availableCodecs: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
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
