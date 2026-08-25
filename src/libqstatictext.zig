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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStaticText object in C++ memory
    ///
    pub fn new() QStaticText {
        return .{ .ptr = qtc.QStaticText_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStaticText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QStaticText {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QStaticText_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStaticText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticText `
    ///
    pub fn new3(other: anytype) QStaticText {
        comptime _ = @TypeOf(other)._is_QStaticText;
        return .{ .ptr = qtc.QStaticText_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn operatorAssign(self: QStaticText, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        qtc.QStaticText_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` other: QStaticText `
    ///
    pub fn swap(self: QStaticText, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStaticText;
        qtc.QStaticText_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStaticText, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStaticText_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStaticText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStaticText_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStaticText.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextFormat` instead
    ///
    pub const SetTextFormat = setTextFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` _textFormat: qnamespace_enums.TextFormat `
    ///
    pub fn setTextFormat(self: QStaticText, _textFormat: i32) void {
        qtc.QStaticText_SetTextFormat(@ptrCast(self.ptr), @bitCast(_textFormat));
    }

    /// ### DEPRECATED: Use `textFormat` instead
    ///
    pub const TextFormat = textFormat;

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
    pub fn textFormat(self: QStaticText) i32 {
        return qtc.QStaticText_TextFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextWidth` instead
    ///
    pub const SetTextWidth = setTextWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` _textWidth: f64 `
    ///
    pub fn setTextWidth(self: QStaticText, _textWidth: f64) void {
        qtc.QStaticText_SetTextWidth(@ptrCast(self.ptr), @bitCast(_textWidth));
    }

    /// ### DEPRECATED: Use `textWidth` instead
    ///
    pub const TextWidth = textWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn textWidth(self: QStaticText) f64 {
        return qtc.QStaticText_TextWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextOption` instead
    ///
    pub const SetTextOption = setTextOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` _textOption: QTextOption `
    ///
    pub fn setTextOption(self: QStaticText, _textOption: anytype) void {
        comptime _ = @TypeOf(_textOption)._is_QTextOption;
        qtc.QStaticText_SetTextOption(@ptrCast(self.ptr), @ptrCast(_textOption.ptr));
    }

    /// ### DEPRECATED: Use `textOption` instead
    ///
    pub const TextOption = textOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#textOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn textOption(self: QStaticText) QTextOption {
        return .{ .ptr = qtc.QStaticText_TextOption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn size(self: QStaticText) QSizeF {
        return .{ .ptr = qtc.QStaticText_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `prepare` instead
    ///
    pub const Prepare = prepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    pub fn prepare(self: QStaticText) void {
        qtc.QStaticText_Prepare(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPerformanceHint` instead
    ///
    pub const SetPerformanceHint = setPerformanceHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#setPerformanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` _performanceHint: qstatictext_enums.PerformanceHint `
    ///
    pub fn setPerformanceHint(self: QStaticText, _performanceHint: i32) void {
        qtc.QStaticText_SetPerformanceHint(@ptrCast(self.ptr), @bitCast(_performanceHint));
    }

    /// ### DEPRECATED: Use `performanceHint` instead
    ///
    pub const PerformanceHint = performanceHint;

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
    pub fn performanceHint(self: QStaticText) i32 {
        return qtc.QStaticText_PerformanceHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn operatorEqual(self: QStaticText, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        return qtc.QStaticText_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` param1: QStaticText `
    ///
    pub fn operatorNotEqual(self: QStaticText, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QStaticText;
        return qtc.QStaticText_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `prepare1` instead
    ///
    pub const Prepare1 = prepare1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticText `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn prepare1(self: QStaticText, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QStaticText_Prepare1(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `prepare2` instead
    ///
    pub const Prepare2 = prepare2;

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
    pub fn prepare2(self: QStaticText, matrix: anytype, font: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QStaticText_Prepare2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#dtor.QStaticText)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStaticText `
    ///
    pub fn delete(self: QStaticText) void {
        qtc.QStaticText_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatictext.html#public-types)
pub const enums = struct {
    pub const PerformanceHint = enum {
        pub const ModerateCaching: i32 = 0;
        pub const AggressiveCaching: i32 = 1;
    };
};
