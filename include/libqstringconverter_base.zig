const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qstringconverter.html
pub const qstringconverter = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
    ///
    /// ``` self: QtC.QStringConverter ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
    ///
    /// ``` self: QtC.QStringConverter ```
    pub fn ResetState(self: ?*anyopaque) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
    ///
    /// ``` self: QtC.QStringConverter ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
    ///
    /// ``` self: QtC.QStringConverter ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
    ///
    /// ``` e: qstringconverter_enums.Encoding ```
    pub fn NameForEncoding(e: i64) []const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@intCast(e));
        return std.mem.span(_ret);
    }
};

/// https://doc.qt.io/qt-6/qstringconverterbase-state.html
pub const qstringconverterbase__state = struct {
    /// New constructs a new QStringConverterBase::State object.
    ///
    ///
    pub fn New() QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new();
    }

    /// New2 constructs a new QStringConverterBase::State object.
    ///
    /// ``` f: i32 ```
    pub fn New2(f: i64) QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new2(@intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#clear)
    ///
    /// ``` self: QtC.QStringConverterBase__State ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#reset)
    ///
    /// ``` self: QtC.QStringConverterBase__State ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Reset(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStringConverterBase__State ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstringconverter_base.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const Default: i32 = 0;
        pub const Stateless: i32 = 1;
        pub const ConvertInvalidToNull: i32 = 2;
        pub const WriteBom: i32 = 4;
        pub const ConvertInitialBom: i32 = 8;
        pub const UsesIcu: i32 = 16;
    };

    pub const Encoding = enum {
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
