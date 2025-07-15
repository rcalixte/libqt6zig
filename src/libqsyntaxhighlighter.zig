const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsyntaxhighlighter.html
pub const qsyntaxhighlighter = struct {
    /// New constructs a new QSyntaxHighlighter object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New(parent: ?*anyopaque) QtC.QSyntaxHighlighter {
        return qtc.QSyntaxHighlighter_new(@ptrCast(parent));
    }

    /// New2 constructs a new QSyntaxHighlighter object.
    ///
    /// ``` parent: QtC.QTextDocument ```
    pub fn New2(parent: ?*anyopaque) QtC.QSyntaxHighlighter {
        return qtc.QSyntaxHighlighter_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSyntaxHighlighter_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSyntaxHighlighter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSyntaxHighlighter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSyntaxHighlighter_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, doc: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QSyntaxHighlighter_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Rehighlight(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, block: QtC.QTextBlock ```
    pub fn RehighlightBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, text: []const u8 ```
    pub fn HighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_HighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, text: []const u8) callconv(.c) void ```
    pub fn OnHighlightBlock(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnHighlightBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, text: []const u8 ```
    pub fn QBaseHighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QSyntaxHighlighter_QBaseHighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat) callconv(.c) void ```
    pub fn OnSetFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn QBaseSetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, color: QtC.QColor ```
    pub fn SetFormat2(self: ?*anyopaque, start: i32, count: i32, color: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat2(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, start: i32, count: i32, color: QtC.QColor) callconv(.c) void ```
    pub fn OnSetFormat2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, color: QtC.QColor ```
    pub fn QBaseSetFormat2(self: ?*anyopaque, start: i32, count: i32, color: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat2(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, font: QtC.QFont ```
    pub fn SetFormat3(self: ?*anyopaque, start: i32, count: i32, font: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat3(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, start: i32, count: i32, font: QtC.QFont) callconv(.c) void ```
    pub fn OnSetFormat3(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, start: i32, count: i32, font: QtC.QFont ```
    pub fn QBaseSetFormat3(self: ?*anyopaque, start: i32, count: i32, font: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat3(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QSyntaxHighlighter_Format(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, pos: i32) callconv(.c) QtC.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.QSyntaxHighlighter_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QSyntaxHighlighter_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn PreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_PreviousBlockState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnPreviousBlockState(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnPreviousBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBasePreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_QBasePreviousBlockState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn CurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_CurrentBlockState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnCurrentBlockState(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBaseCurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlockState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, newState: i32 ```
    pub fn SetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, newState: i32) callconv(.c) void ```
    pub fn OnSetCurrentBlockState(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, newState: i32 ```
    pub fn QBaseSetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.QSyntaxHighlighter_QBaseSetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, data: QtC.QTextBlockUserData ```
    pub fn SetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, data: QtC.QTextBlockUserData) callconv(.c) void ```
    pub fn OnSetCurrentBlockUserData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter, data: QtC.QTextBlockUserData ```
    pub fn QBaseSetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn CurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.QSyntaxHighlighter_CurrentBlockUserData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) QtC.QTextBlockUserData ```
    pub fn OnCurrentBlockUserData(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTextBlockUserData) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBaseCurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlockUserData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn CurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QSyntaxHighlighter_CurrentBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) QtC.QTextBlock ```
    pub fn OnCurrentBlock(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTextBlock) void {
        qtc.QSyntaxHighlighter_OnCurrentBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBaseCurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSyntaxHighlighter_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSyntaxHighlighter_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsyntaxhighlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSyntaxHighlighter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSyntaxHighlighter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSyntaxHighlighter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSyntaxHighlighter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSyntaxHighlighter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSyntaxHighlighter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSyntaxHighlighter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QSyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSyntaxHighlighter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSyntaxHighlighter, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#dtor.QSyntaxHighlighter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSyntaxHighlighter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Delete(@ptrCast(self));
    }
};
