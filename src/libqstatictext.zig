const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const QSizeF = @import("libqt6").QSizeF;
const QTextOption = @import("libqt6").QTextOption;
const QTransform = @import("libqt6").QTransform;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qstatictext_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)
pub const QStaticText = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStaticText,

    pub const _is_QStaticText = {};

    /// New constructs a new QStaticText object.
    ///
    pub fn New() QStaticText {
        return .{ .ptr = qtc.QStaticText_new() };
    }

    /// New2 constructs a new QStaticText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QStaticText {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QStaticText_new2(text_str) };
    }

    /// New3 constructs a new QStaticText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticText `
    ///
    pub fn New3(other: anytype) QStaticText {
        comptime _ = @TypeOf(other)._is_QStaticText;
        return .{ .ptr = qtc.QStaticText_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn OperatorAssign(self: QStaticText, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        qtc.QStaticText_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` other: QStaticText `
    ///
    pub fn Swap(self: QStaticText, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStaticText;
        qtc.QStaticText_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QStaticText, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStaticText_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QStaticText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStaticText_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatictext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` textFormat: qnamespace_enums.TextFormat `
    ///
    pub fn SetTextFormat(self: QStaticText, textFormat: i32) void {
        qtc.QStaticText_SetTextFormat(@ptrCast(self.ptr), @bitCast(textFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextFormat `
    ///
    pub fn TextFormat(self: QStaticText) i32 {
        return qtc.QStaticText_TextFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` textWidth: f64 `
    ///
    pub fn SetTextWidth(self: QStaticText, textWidth: f64) void {
        qtc.QStaticText_SetTextWidth(@ptrCast(self.ptr), @bitCast(textWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn TextWidth(self: QStaticText) f64 {
        return qtc.QStaticText_TextWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn SetTextOption(self: QStaticText, textOption: anytype) void {
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        qtc.QStaticText_SetTextOption(@ptrCast(self.ptr), @ptrCast(textOption.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn TextOption(self: QStaticText) QTextOption {
        return .{ .ptr = qtc.QStaticText_TextOption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn Size(self: QStaticText) QSizeF {
        return .{ .ptr = qtc.QStaticText_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn Prepare(self: QStaticText) void {
        qtc.QStaticText_Prepare(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` performanceHint: qstatictext_enums.PerformanceHint `
    ///
    pub fn SetPerformanceHint(self: QStaticText, performanceHint: i32) void {
        qtc.QStaticText_SetPerformanceHint(@ptrCast(self.ptr), @bitCast(performanceHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#performanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ## Returns:
    ///
    /// ` qstatictext_enums.PerformanceHint `
    ///
    pub fn PerformanceHint(self: QStaticText) i32 {
        return qtc.QStaticText_PerformanceHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn OperatorEqual(self: QStaticText, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        return qtc.QStaticText_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn OperatorNotEqual(self: QStaticText, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        return qtc.QStaticText_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn Prepare1(self: QStaticText, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QStaticText_Prepare1(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` font: QFont `
    ///
    pub fn Prepare2(self: QStaticText, matrix: anytype, font: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QStaticText_Prepare2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#dtor.QStaticText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStaticText `
    ///
    pub fn Delete(self: QStaticText) void {
        qtc.QStaticText_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#public-types)
pub const enums = struct {
    pub const PerformanceHint = enum(i32) {
        pub const ModerateCaching: i32 = 0;
        pub const AggressiveCaching: i32 = 1;
    };
};
