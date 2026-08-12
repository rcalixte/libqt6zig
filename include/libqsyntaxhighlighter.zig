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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSyntaxHighlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) QSyntaxHighlighter {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSyntaxHighlighter_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSyntaxHighlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QTextDocument `
    ///
    pub fn new2(_parent: anytype) QSyntaxHighlighter {
        comptime _ = @TypeOf(_parent)._is_QTextDocument;
        return .{ .ptr = qtc.QSyntaxHighlighter_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn metaObject(self: QSyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSyntaxHighlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn superMetaObject(self: QSyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSyntaxHighlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSyntaxHighlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSyntaxHighlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: QSyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSyntaxHighlighter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn setDocument(self: QSyntaxHighlighter, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn document(self: QSyntaxHighlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rehighlight` instead
    ///
    pub const Rehighlight = rehighlight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn rehighlight(self: QSyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rehighlightBlock` instead
    ///
    pub const RehighlightBlock = rehighlightBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn rehighlightBlock(self: QSyntaxHighlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### DEPRECATED: Use `highlightBlock` instead
    ///
    pub const HighlightBlock = highlightBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn highlightBlock(self: QSyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onHighlightBlock` instead
    ///
    pub const OnHighlightBlock = onHighlightBlock;

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
    pub fn onHighlightBlock(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHighlightBlock` instead
    ///
    pub const SuperHighlightBlock = superHighlightBlock;

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
    pub fn superHighlightBlock(self: QSyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: QSyntaxHighlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.QSyntaxHighlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat` instead
    ///
    pub const OnSetFormat = onSetFormat;

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
    pub fn onSetFormat(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFormat` instead
    ///
    pub const SuperSetFormat = superSetFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn superSetFormat(self: QSyntaxHighlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.QSyntaxHighlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `setFormat2` instead
    ///
    pub const SetFormat2 = setFormat2;

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
    pub fn setFormat2(self: QSyntaxHighlighter, start: i32, count: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSyntaxHighlighter_SetFormat2(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat2` instead
    ///
    pub const OnSetFormat2 = onSetFormat2;

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
    pub fn onSetFormat2(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QColor) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFormat2` instead
    ///
    pub const SuperSetFormat2 = superSetFormat2;

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
    pub fn superSetFormat2(self: QSyntaxHighlighter, start: i32, count: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSyntaxHighlighter_SuperSetFormat2(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setFormat3` instead
    ///
    pub const SetFormat3 = setFormat3;

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
    pub fn setFormat3(self: QSyntaxHighlighter, start: i32, count: i32, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QSyntaxHighlighter_SetFormat3(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat3` instead
    ///
    pub const OnSetFormat3 = onSetFormat3;

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
    pub fn onSetFormat3(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32, i32, QFont) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFormat3` instead
    ///
    pub const SuperSetFormat3 = superSetFormat3;

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
    pub fn superSetFormat3(self: QSyntaxHighlighter, start: i32, count: i32, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QSyntaxHighlighter_SuperSetFormat3(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn format(self: QSyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QSyntaxHighlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.QSyntaxHighlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    pub fn superFormat(self: QSyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `previousBlockState` instead
    ///
    pub const PreviousBlockState = previousBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn previousBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreviousBlockState` instead
    ///
    pub const OnPreviousBlockState = onPreviousBlockState;

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
    pub fn onPreviousBlockState(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPreviousBlockState` instead
    ///
    pub const SuperPreviousBlockState = superPreviousBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn superPreviousBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentBlockState` instead
    ///
    pub const CurrentBlockState = currentBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn currentBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentBlockState` instead
    ///
    pub const OnCurrentBlockState = onCurrentBlockState;

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
    pub fn onCurrentBlockState(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentBlockState` instead
    ///
    pub const SuperCurrentBlockState = superCurrentBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn superCurrentBlockState(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentBlockState` instead
    ///
    pub const SetCurrentBlockState = setCurrentBlockState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn setCurrentBlockState(self: QSyntaxHighlighter, newState: i32) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockState` instead
    ///
    pub const OnSetCurrentBlockState = onSetCurrentBlockState;

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
    pub fn onSetCurrentBlockState(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, i32) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockState` instead
    ///
    pub const SuperSetCurrentBlockState = superSetCurrentBlockState;

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
    pub fn superSetCurrentBlockState(self: QSyntaxHighlighter, newState: i32) void {
        qtc.QSyntaxHighlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `setCurrentBlockUserData` instead
    ///
    pub const SetCurrentBlockUserData = setCurrentBlockUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn setCurrentBlockUserData(self: QSyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QSyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockUserData` instead
    ///
    pub const OnSetCurrentBlockUserData = onSetCurrentBlockUserData;

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
    pub fn onSetCurrentBlockUserData(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockUserData` instead
    ///
    pub const SuperSetCurrentBlockUserData = superSetCurrentBlockUserData;

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
    pub fn superSetCurrentBlockUserData(self: QSyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QSyntaxHighlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `currentBlockUserData` instead
    ///
    pub const CurrentBlockUserData = currentBlockUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn currentBlockUserData(self: QSyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.QSyntaxHighlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlockUserData` instead
    ///
    pub const OnCurrentBlockUserData = onCurrentBlockUserData;

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
    pub fn onCurrentBlockUserData(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentBlockUserData` instead
    ///
    pub const SuperCurrentBlockUserData = superCurrentBlockUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn superCurrentBlockUserData(self: QSyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentBlock` instead
    ///
    pub const CurrentBlock = currentBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn currentBlock(self: QSyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.QSyntaxHighlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlock` instead
    ///
    pub const OnCurrentBlock = onCurrentBlock;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentBlock(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.QSyntaxHighlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentBlock` instead
    ///
    pub const SuperCurrentBlock = superCurrentBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn superCurrentBlock(self: QSyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSyntaxHighlighter.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSyntaxHighlighter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QSyntaxHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSyntaxHighlighter.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QSyntaxHighlighter, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn isWidgetType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn isWindowType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn isQuickItemType(self: QSyntaxHighlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn signalsBlocked(self: QSyntaxHighlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QSyntaxHighlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn thread(self: QSyntaxHighlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSyntaxHighlighter, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QSyntaxHighlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QSyntaxHighlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QSyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QSyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QSyntaxHighlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSyntaxHighlighter.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSyntaxHighlighter, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QSyntaxHighlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QSyntaxHighlighter, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSyntaxHighlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn disconnect3(self: QSyntaxHighlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QSyntaxHighlighter, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn dumpObjectTree(self: QSyntaxHighlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn dumpObjectInfo(self: QSyntaxHighlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QSyntaxHighlighter, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QSyntaxHighlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QSyntaxHighlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSyntaxHighlighter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSyntaxHighlighter.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn bindingStorage(self: QSyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn bindingStorage2(self: QSyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn destroyed(self: QSyntaxHighlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn parent(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QSyntaxHighlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn deleteLater(self: QSyntaxHighlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QSyntaxHighlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QSyntaxHighlighter, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSyntaxHighlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QSyntaxHighlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QSyntaxHighlighter, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QSyntaxHighlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QSyntaxHighlighter, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QSyntaxHighlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSyntaxHighlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSyntaxHighlighter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSyntaxHighlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSyntaxHighlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QEvent) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSyntaxHighlighter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSyntaxHighlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSyntaxHighlighter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSyntaxHighlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSyntaxHighlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSyntaxHighlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QTimerEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSyntaxHighlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSyntaxHighlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QChildEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSyntaxHighlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSyntaxHighlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QEvent) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QSyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSyntaxHighlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QSyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QSyntaxHighlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSyntaxHighlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QSyntaxHighlighter) i32 {
        return qtc.QSyntaxHighlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QSyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QSyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QSyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QSyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSyntaxHighlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QSyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSyntaxHighlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QSyntaxHighlighter, callback: *const fn (QSyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#dtor.QSyntaxHighlighter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSyntaxHighlighter `
    ///
    pub fn delete(self: QSyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Delete(@ptrCast(self.ptr));
    }
};
