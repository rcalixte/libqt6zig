const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qstatictext_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstatictext.html
pub const qstatictext = struct {
    /// New constructs a new QStaticText object.
    ///
    ///
    pub fn New() QtC.QStaticText {
        return qtc.QStaticText_new();
    }

    /// New2 constructs a new QStaticText object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QStaticText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QStaticText_new2(text_str);
    }

    /// New3 constructs a new QStaticText object.
    ///
    /// ``` other: QtC.QStaticText ```
    pub fn New3(other: ?*anyopaque) QtC.QStaticText {
        return qtc.QStaticText_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator-eq)
    ///
    /// ``` self: QtC.QStaticText, param1: QtC.QStaticText ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStaticText_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#swap)
    ///
    /// ``` self: QtC.QStaticText, other: QtC.QStaticText ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticText_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setText)
    ///
    /// ``` self: QtC.QStaticText, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStaticText_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#text)
    ///
    /// ``` self: QtC.QStaticText, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStaticText_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatictext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
    ///
    /// ``` self: QtC.QStaticText, textFormat: qnamespace_enums.TextFormat ```
    pub fn SetTextFormat(self: ?*anyopaque, textFormat: i64) void {
        qtc.QStaticText_SetTextFormat(@ptrCast(self), @intCast(textFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textFormat)
    ///
    /// ``` self: QtC.QStaticText ```
    ///
    /// Returns: ``` qnamespace_enums.TextFormat ```
    pub fn TextFormat(self: ?*anyopaque) i64 {
        return qtc.QStaticText_TextFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
    ///
    /// ``` self: QtC.QStaticText, textWidth: f64 ```
    pub fn SetTextWidth(self: ?*anyopaque, textWidth: f64) void {
        qtc.QStaticText_SetTextWidth(@ptrCast(self), @floatCast(textWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
    ///
    /// ``` self: QtC.QStaticText ```
    pub fn TextWidth(self: ?*anyopaque) f64 {
        return qtc.QStaticText_TextWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
    ///
    /// ``` self: QtC.QStaticText, textOption: QtC.QTextOption ```
    pub fn SetTextOption(self: ?*anyopaque, textOption: ?*anyopaque) void {
        qtc.QStaticText_SetTextOption(@ptrCast(self), @ptrCast(textOption));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#textOption)
    ///
    /// ``` self: QtC.QStaticText ```
    pub fn TextOption(self: ?*anyopaque) QtC.QTextOption {
        return qtc.QStaticText_TextOption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#size)
    ///
    /// ``` self: QtC.QStaticText ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QStaticText_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ``` self: QtC.QStaticText ```
    pub fn Prepare(self: ?*anyopaque) void {
        qtc.QStaticText_Prepare(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
    ///
    /// ``` self: QtC.QStaticText, performanceHint: qstatictext_enums.PerformanceHint ```
    pub fn SetPerformanceHint(self: ?*anyopaque, performanceHint: i64) void {
        qtc.QStaticText_SetPerformanceHint(@ptrCast(self), @intCast(performanceHint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#performanceHint)
    ///
    /// ``` self: QtC.QStaticText ```
    ///
    /// Returns: ``` qstatictext_enums.PerformanceHint ```
    pub fn PerformanceHint(self: ?*anyopaque) i64 {
        return qtc.QStaticText_PerformanceHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QStaticText, param1: QtC.QStaticText ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#operator-not-eq)
    ///
    /// ``` self: QtC.QStaticText, param1: QtC.QStaticText ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ``` self: QtC.QStaticText, matrix: QtC.QTransform ```
    pub fn Prepare1(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QStaticText_Prepare1(@ptrCast(self), @ptrCast(matrix));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ``` self: QtC.QStaticText, matrix: QtC.QTransform, font: QtC.QFont ```
    pub fn Prepare2(self: ?*anyopaque, matrix: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QStaticText_Prepare2(@ptrCast(self), @ptrCast(matrix), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstatictext.html#dtor.QStaticText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStaticText ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStaticText_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstatictext.html#types
pub const enums = struct {
    pub const PerformanceHint = enum {
        pub const ModerateCaching: i32 = 0;
        pub const AggressiveCaching: i32 = 1;
    };
};
