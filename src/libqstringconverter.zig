const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qstringencoder.html
pub const qstringencoder = struct {
    /// New constructs a new QStringEncoder object.
    ///
    ///
    pub fn New() QtC.QStringEncoder {
        return qtc.QStringEncoder_new();
    }

    /// New2 constructs a new QStringEncoder object.
    ///
    /// ``` encoding: qstringconverter_enums.Encoding ```
    pub fn New2(encoding: i64) QtC.QStringEncoder {
        return qtc.QStringEncoder_new2(@intCast(encoding));
    }

    /// New3 constructs a new QStringEncoder object.
    ///
    /// ``` name: []const u8 ```
    pub fn New3(name: []const u8) QtC.QStringEncoder {
        const name_Cstring = @constCast(name.ptr);

        return qtc.QStringEncoder_new3(name_Cstring);
    }

    /// New4 constructs a new QStringEncoder object.
    ///
    /// ``` encoding: qstringconverter_enums.Encoding, flags: i32 ```
    pub fn New4(encoding: i64, flags: i64) QtC.QStringEncoder {
        return qtc.QStringEncoder_new4(@intCast(encoding), @intCast(flags));
    }

    /// New5 constructs a new QStringEncoder object.
    ///
    /// ``` name: []const u8, flags: i32 ```
    pub fn New5(name: []const u8, flags: i64) QtC.QStringEncoder {
        const name_Cstring = @constCast(name.ptr);

        return qtc.QStringEncoder_new5(name_Cstring, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
    ///
    /// ``` self: QtC.QStringEncoder, inputLength: i64 ```
    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringEncoder_RequiredSpace(@ptrCast(self), @intCast(inputLength));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ``` self: QtC.QStringEncoder ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ``` self: QtC.QStringEncoder ```
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ``` self: QtC.QStringEncoder ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ``` self: QtC.QStringEncoder ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ``` e: qstringconverter_enums.Encoding ```
    pub fn NameForEncoding(e: i64) []const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@intCast(e));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringencoder.html#dtor.QStringEncoder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStringEncoder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringEncoder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstringdecoder.html
pub const qstringdecoder = struct {
    /// New constructs a new QStringDecoder object.
    ///
    /// ``` encoding: qstringconverter_enums.Encoding ```
    pub fn New(encoding: i64) QtC.QStringDecoder {
        return qtc.QStringDecoder_new(@intCast(encoding));
    }

    /// New2 constructs a new QStringDecoder object.
    ///
    ///
    pub fn New2() QtC.QStringDecoder {
        return qtc.QStringDecoder_new2();
    }

    /// New3 constructs a new QStringDecoder object.
    ///
    /// ``` name: []const u8 ```
    pub fn New3(name: []const u8) QtC.QStringDecoder {
        const name_Cstring = @constCast(name.ptr);

        return qtc.QStringDecoder_new3(name_Cstring);
    }

    /// New4 constructs a new QStringDecoder object.
    ///
    /// ``` encoding: qstringconverter_enums.Encoding, flags: i32 ```
    pub fn New4(encoding: i64, flags: i64) QtC.QStringDecoder {
        return qtc.QStringDecoder_new4(@intCast(encoding), @intCast(flags));
    }

    /// New5 constructs a new QStringDecoder object.
    ///
    /// ``` name: []const u8, f: i32 ```
    pub fn New5(name: []const u8, f: i64) QtC.QStringDecoder {
        const name_Cstring = @constCast(name.ptr);

        return qtc.QStringDecoder_new5(name_Cstring, @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
    ///
    /// ``` self: QtC.QStringDecoder, inputLength: i64 ```
    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringDecoder_RequiredSpace(@ptrCast(self), @intCast(inputLength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
    ///
    /// ``` self: QtC.QStringDecoder, out: QtC.QChar, ba: []const u8 ```
    pub fn AppendToBuffer(self: ?*anyopaque, out: ?*anyopaque, ba: []const u8) QtC.QChar {
        return qtc.QStringDecoder_AppendToBuffer(@ptrCast(self), @ptrCast(out), @ptrCast(@constCast(&ba)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
    ///
    /// ``` data: []const u8 ```
    pub fn DecoderForHtml(data: []const u8) QtC.QStringDecoder {
        return qtc.QStringDecoder_DecoderForHtml(@ptrCast(@constCast(&data)));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ``` self: QtC.QStringDecoder ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ``` self: QtC.QStringDecoder ```
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ``` self: QtC.QStringDecoder ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ``` self: QtC.QStringDecoder ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// Inherited from QStringConverter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ``` e: qstringconverter_enums.Encoding ```
    pub fn NameForEncoding(e: i64) []const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@intCast(e));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#dtor.QStringDecoder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStringDecoder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringDecoder_Delete(@ptrCast(self));
    }
};
