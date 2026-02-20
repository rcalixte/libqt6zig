const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qstatictext_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)
pub const qstatictext = struct {
    /// New constructs a new QStaticText object.
    ///
    pub fn New() QtC.QStaticText {
        return qtc.QStaticText_new();
    }

    /// New2 constructs a new QStaticText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QtC.QStaticText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QStaticText_new2(text_str);
    }

    /// New3 constructs a new QStaticText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStaticText `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QStaticText {
        return qtc.QStaticText_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` param1: QtC.QStaticText `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStaticText_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` other: QtC.QStaticText `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticText_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStaticText_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStaticText_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatictext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` textFormat: qnamespace_enums.TextFormat `
    ///
    pub fn SetTextFormat(self: ?*anyopaque, textFormat: i32) void {
        qtc.QStaticText_SetTextFormat(@ptrCast(self), @bitCast(textFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextFormat `
    ///
    pub fn TextFormat(self: ?*anyopaque) i32 {
        return qtc.QStaticText_TextFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` textWidth: f64 `
    ///
    pub fn SetTextWidth(self: ?*anyopaque, textWidth: f64) void {
        qtc.QStaticText_SetTextWidth(@ptrCast(self), @bitCast(textWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    pub fn TextWidth(self: ?*anyopaque) f64 {
        return qtc.QStaticText_TextWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn SetTextOption(self: ?*anyopaque, textOption: ?*anyopaque) void {
        qtc.QStaticText_SetTextOption(@ptrCast(self), @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    pub fn TextOption(self: ?*anyopaque) QtC.QTextOption {
        return qtc.QStaticText_TextOption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QStaticText_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    pub fn Prepare(self: ?*anyopaque) void {
        qtc.QStaticText_Prepare(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` performanceHint: qstatictext_enums.PerformanceHint `
    ///
    pub fn SetPerformanceHint(self: ?*anyopaque, performanceHint: i32) void {
        qtc.QStaticText_SetPerformanceHint(@ptrCast(self), @bitCast(performanceHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#performanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ## Returns:
    ///
    /// ` qstatictext_enums.PerformanceHint `
    ///
    pub fn PerformanceHint(self: ?*anyopaque) i32 {
        return qtc.QStaticText_PerformanceHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` param1: QtC.QStaticText `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` param1: QtC.QStaticText `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    pub fn Prepare1(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QStaticText_Prepare1(@ptrCast(self), @ptrCast(matrix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticText `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn Prepare2(self: ?*anyopaque, matrix: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QStaticText_Prepare2(@ptrCast(self), @ptrCast(matrix), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#dtor.QStaticText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStaticText `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStaticText_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#public-types)
pub const enums = struct {
    pub const PerformanceHint = enum(i32) {
        pub const ModerateCaching: i32 = 0;
        pub const AggressiveCaching: i32 = 1;
    };
};
