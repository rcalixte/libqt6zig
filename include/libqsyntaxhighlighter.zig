const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextBlockUserData = @import("libqt6").QTextBlockUserData;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextDocument = @import("libqt6").QTextDocument;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html)
pub const QSyntaxHighlighter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSyntaxHighlighter,

    pub const _is_QSyntaxHighlighter = {};
    pub const _is_QObject = {};

    /// New constructs a new QSyntaxHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) QSyntaxHighlighter {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSyntaxHighlighter_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QSyntaxHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QTextDocument `
    ///
    pub fn New2(parent: anytype) QSyntaxHighlighter {
        comptime _ = @TypeOf(parent)._is_QTextDocument;
        return .{ .ptr = qtc.QSyntaxHighlighter_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn MetaObject(self: QSyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSyntaxHighlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperMetaObject(self: QSyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSyntaxHighlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSyntaxHighlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSyntaxHighlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn SetDocument(self: QSyntaxHighlighter, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Document(self: QSyntaxHighlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Rehighlight(self: QSyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn RehighlightBlock(self: QSyntaxHighlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn HighlightBlock(self: QSyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnHighlightBlock(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHighlightBlock` instead
    ///
    pub const QBaseHighlightBlock = SuperHighlightBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperHighlightBlock(self: QSyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: QSyntaxHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QSyntaxHighlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, start: i32, count: i32, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFormat` instead
    ///
    pub const QBaseSetFormat = SuperSetFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SuperSetFormat(self: QSyntaxHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QSyntaxHighlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetFormat2(self: QSyntaxHighlighter, start: i32, count: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSyntaxHighlighter_SetFormat2(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, start: i32, count: i32, color: QColor) callconv(.c) void `
    ///
    pub fn OnSetFormat2(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QColor) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFormat2` instead
    ///
    pub const QBaseSetFormat2 = SuperSetFormat2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` color: QColor `
    ///
    pub fn SuperSetFormat2(self: QSyntaxHighlighter, start: i32, count: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSyntaxHighlighter_SuperSetFormat2(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFormat3(self: QSyntaxHighlighter, start: i32, count: i32, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QSyntaxHighlighter_SetFormat3(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, start: i32, count: i32, font: QFont) callconv(.c) void `
    ///
    pub fn OnSetFormat3(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QFont) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFormat3` instead
    ///
    pub const QBaseSetFormat3 = SuperSetFormat3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` font: QFont `
    ///
    pub fn SuperSetFormat3(self: QSyntaxHighlighter, start: i32, count: i32, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QSyntaxHighlighter_SuperSetFormat3(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: QSyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QSyntaxHighlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.QSyntaxHighlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: QSyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn PreviousBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPreviousBlockState(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPreviousBlockState` instead
    ///
    pub const QBasePreviousBlockState = SuperPreviousBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperPreviousBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn CurrentBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentBlockState(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockState` instead
    ///
    pub const QBaseCurrentBlockState = SuperCurrentBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperCurrentBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SetCurrentBlockState(self: QSyntaxHighlighter, newState: i32) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, newState: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockState(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockState` instead
    ///
    pub const QBaseSetCurrentBlockState = SuperSetCurrentBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SuperSetCurrentBlockState(self: QSyntaxHighlighter, newState: i32) void {
        qtc.QSyntaxHighlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SetCurrentBlockUserData(self: QSyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QSyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, data: QTextBlockUserData) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockUserData(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockUserData` instead
    ///
    pub const QBaseSetCurrentBlockUserData = SuperSetCurrentBlockUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SuperSetCurrentBlockUserData(self: QSyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QSyntaxHighlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn CurrentBlockUserData(self: QSyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.QSyntaxHighlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlockUserData `
    ///
    pub fn OnCurrentBlockUserData(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockUserData` instead
    ///
    pub const QBaseCurrentBlockUserData = SuperCurrentBlockUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperCurrentBlockUserData(self: QSyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn CurrentBlock(self: QSyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.QSyntaxHighlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    pub fn OnCurrentBlock(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.QSyntaxHighlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentBlock` instead
    ///
    pub const QBaseCurrentBlock = SuperCurrentBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperCurrentBlock(self: QSyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSyntaxHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSyntaxHighlighter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn IsWidgetType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn IsWindowType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn IsQuickItemType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SignalsBlocked(self: QSyntaxHighlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSyntaxHighlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Thread(self: QSyntaxHighlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSyntaxHighlighter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSyntaxHighlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSyntaxHighlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSyntaxHighlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsyntaxhighlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSyntaxHighlighter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSyntaxHighlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSyntaxHighlighter, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSyntaxHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Disconnect3(self: QSyntaxHighlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSyntaxHighlighter, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn DumpObjectTree(self: QSyntaxHighlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn DumpObjectInfo(self: QSyntaxHighlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSyntaxHighlighter, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSyntaxHighlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSyntaxHighlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsyntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsyntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn BindingStorage(self: QSyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn BindingStorage2(self: QSyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Destroyed(self: QSyntaxHighlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Parent(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSyntaxHighlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn DeleteLater(self: QSyntaxHighlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSyntaxHighlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSyntaxHighlighter, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSyntaxHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSyntaxHighlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSyntaxHighlighter, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSyntaxHighlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSyntaxHighlighter, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSyntaxHighlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSyntaxHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSyntaxHighlighter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSyntaxHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSyntaxHighlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QEvent) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSyntaxHighlighter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSyntaxHighlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSyntaxHighlighter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSyntaxHighlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSyntaxHighlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSyntaxHighlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QTimerEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSyntaxHighlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSyntaxHighlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QChildEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSyntaxHighlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSyntaxHighlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Sender(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperSender(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSyntaxHighlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SenderSignalIndex(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn SuperSenderSignalIndex(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSyntaxHighlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSyntaxHighlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#dtor.QSyntaxHighlighter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn Delete(self: QSyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Delete(@ptrCast(self.ptr));
    }
};
