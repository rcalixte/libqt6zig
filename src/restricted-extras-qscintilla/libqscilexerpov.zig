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
const QSettings = @import("libqt6").QSettings;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QsciAbstractAPIs = @import("libqt6").QsciAbstractAPIs;
const QsciScintilla = @import("libqt6").QsciScintilla;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
pub const QsciLexerPOV = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciLexerPOV,

    pub const _is_QsciLexerPOV = {};
    pub const _is_QsciLexer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciLexerPOV object in C++ memory
    ///
    pub fn new() QsciLexerPOV {
        return .{ .ptr = qtc.QsciLexerPOV_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciLexerPOV object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QsciLexerPOV {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QsciLexerPOV_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn metaObject(self: QsciLexerPOV) QMetaObject {
        return .{ .ptr = qtc.QsciLexerPOV_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciLexerPOV, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciLexerPOV_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn superMetaObject(self: QsciLexerPOV) QMetaObject {
        return .{ .ptr = qtc.QsciLexerPOV_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciLexerPOV, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerPOV_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerPOV_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciLexerPOV, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerPOV_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QsciLexerPOV, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerPOV_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QsciLexerPOV, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerPOV_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn language(self: QsciLexerPOV) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_Language(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn lexer(self: QsciLexerPOV) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_Lexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `braceStyle` instead
    ///
    pub const BraceStyle = braceStyle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn braceStyle(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_BraceStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn wordCharacters(self: QsciLexerPOV) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_WordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `defaultColor` instead
    ///
    pub const DefaultColor = defaultColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultEolFill` instead
    ///
    pub const DefaultEolFill = defaultEolFill;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultEolFill(self: QsciLexerPOV, style: i32) bool {
        return qtc.QsciLexerPOV_DefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont(self: QsciLexerPOV, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `defaultPaper` instead
    ///
    pub const DefaultPaper = defaultPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` set: i32 `
    ///
    pub fn keywords(self: QsciLexerPOV, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_Keywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn description(self: QsciLexerPOV, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerPOV_Description(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `refreshProperties` instead
    ///
    pub const RefreshProperties = refreshProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn refreshProperties(self: QsciLexerPOV) void {
        qtc.QsciLexerPOV_RefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldComments` instead
    ///
    pub const FoldComments = foldComments;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn foldComments(self: QsciLexerPOV) bool {
        return qtc.QsciLexerPOV_FoldComments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldCompact` instead
    ///
    pub const FoldCompact = foldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn foldCompact(self: QsciLexerPOV) bool {
        return qtc.QsciLexerPOV_FoldCompact(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `foldDirectives` instead
    ///
    pub const FoldDirectives = foldDirectives;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn foldDirectives(self: QsciLexerPOV) bool {
        return qtc.QsciLexerPOV_FoldDirectives(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFoldComments` instead
    ///
    pub const SetFoldComments = setFoldComments;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldComments(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SetFoldComments(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldComments` instead
    ///
    pub const OnSetFoldComments = onSetFoldComments;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldComments(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, bool) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetFoldComments(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFoldComments` instead
    ///
    pub const SuperSetFoldComments = superSetFoldComments;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldComments(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SuperSetFoldComments(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `setFoldCompact` instead
    ///
    pub const SetFoldCompact = setFoldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldCompact(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldCompact` instead
    ///
    pub const OnSetFoldCompact = onSetFoldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldCompact(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, bool) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetFoldCompact(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFoldCompact` instead
    ///
    pub const SuperSetFoldCompact = superSetFoldCompact;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldCompact(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SuperSetFoldCompact(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `setFoldDirectives` instead
    ///
    pub const SetFoldDirectives = setFoldDirectives;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn setFoldDirectives(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SetFoldDirectives(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `onSetFoldDirectives` instead
    ///
    pub const OnSetFoldDirectives = onSetFoldDirectives;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, fold: bool) callconv(.c) void `
    ///
    pub fn onSetFoldDirectives(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, bool) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetFoldDirectives(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFoldDirectives` instead
    ///
    pub const SuperSetFoldDirectives = superSetFoldDirectives;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` fold: bool `
    ///
    pub fn superSetFoldDirectives(self: QsciLexerPOV, fold: bool) void {
        qtc.QsciLexerPOV_SuperSetFoldDirectives(@ptrCast(self.ptr), fold);
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn readProperties(self: QsciLexerPOV, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerPOV_ReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onReadProperties(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superReadProperties(self: QsciLexerPOV, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerPOV_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `writeProperties` instead
    ///
    pub const WriteProperties = writeProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn writeProperties(self: QsciLexerPOV, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerPOV_WriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onWriteProperties` instead
    ///
    pub const OnWriteProperties = onWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWriteProperties(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnWriteProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteProperties` instead
    ///
    pub const SuperWriteProperties = superWriteProperties;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superWriteProperties(self: QsciLexerPOV, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerPOV_SuperWriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `apis` instead
    ///
    pub const Apis = apis;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn apis(self: QsciLexerPOV) QsciAbstractAPIs {
        return .{ .ptr = qtc.QsciLexer_Apis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `autoIndentStyle` instead
    ///
    pub const AutoIndentStyle = autoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn autoIndentStyle(self: QsciLexerPOV) i32 {
        return qtc.QsciLexer_AutoIndentStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `editor` instead
    ///
    pub const Editor = editor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn editor(self: QsciLexerPOV) QsciScintilla {
        return .{ .ptr = qtc.QsciLexer_Editor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAPIs` instead
    ///
    pub const SetAPIs = setAPIs;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` _apis: QsciAbstractAPIs `
    ///
    pub fn setAPIs(self: QsciLexerPOV, _apis: anytype) void {
        comptime _ = @TypeOf(_apis)._is_QsciAbstractAPIs;
        qtc.QsciLexer_SetAPIs(@ptrCast(self.ptr), @ptrCast(_apis.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultColor` instead
    ///
    pub const SetDefaultColor = setDefaultColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultColor(self: QsciLexerPOV, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_SetDefaultColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultFont` instead
    ///
    pub const SetDefaultFont = setDefaultFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` f: QFont `
    ///
    pub fn setDefaultFont(self: QsciLexerPOV, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexer_SetDefaultFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultPaper` instead
    ///
    pub const SetDefaultPaper = setDefaultPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultPaper(self: QsciLexerPOV, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_SetDefaultPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `readSettings` instead
    ///
    pub const ReadSettings = readSettings;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciLexerPOV, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciLexer_ReadSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings` instead
    ///
    pub const WriteSettings = writeSettings;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciLexerPOV, qs: anytype) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        return qtc.QsciLexer_WriteSettings(@ptrCast(self.ptr), @ptrCast(qs.ptr));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn colorChanged(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_ColorChanged(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eolFillChanged` instead
    ///
    pub const EolFillChanged = eolFillChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFillChanged(self: QsciLexerPOV, eolfilled: bool, style: i32) void {
        qtc.QsciLexer_EolFillChanged(@ptrCast(self.ptr), eolfilled, @bitCast(style));
    }

    /// ### DEPRECATED: Use `onEolFillChanged` instead
    ///
    pub const OnEolFillChanged = onEolFillChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn onEolFillChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, bool, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_EolFillChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn fontChanged(self: QsciLexerPOV, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexer_FontChanged(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paperChanged` instead
    ///
    pub const PaperChanged = paperChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn paperChanged(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexer_PaperChanged(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onPaperChanged` instead
    ///
    pub const OnPaperChanged = onPaperChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onPaperChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PaperChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `propertyChanged` instead
    ///
    pub const PropertyChanged = propertyChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn propertyChanged(self: QsciLexerPOV, prop: [:0]const u8, val: [:0]const u8) void {
        const prop_Cstring = prop.ptr;
        const val_Cstring = val.ptr;
        qtc.QsciLexer_PropertyChanged(@ptrCast(self.ptr), prop_Cstring, val_Cstring);
    }

    /// ### DEPRECATED: Use `onPropertyChanged` instead
    ///
    pub const OnPropertyChanged = onPropertyChanged;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPropertyChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciLexer_Connect_PropertyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readSettings2` instead
    ///
    pub const ReadSettings2 = readSettings2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciLexerPOV, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_ReadSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
    }

    /// ### DEPRECATED: Use `writeSettings2` instead
    ///
    pub const WriteSettings2 = writeSettings2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciLexerPOV, qs: anytype, prefix: [:0]const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_Cstring = prefix.ptr;
        return qtc.QsciLexer_WriteSettings2(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_Cstring);
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciLexerPOV, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.objectName: Memory allocation failed");
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciLexerPOV, name: []const u8) void {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn isWidgetType(self: QsciLexerPOV) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn isWindowType(self: QsciLexerPOV) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn isQuickItemType(self: QsciLexerPOV) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn signalsBlocked(self: QsciLexerPOV) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciLexerPOV, b: bool) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn thread(self: QsciLexerPOV) QThread {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciLexerPOV, _thread: anytype) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciLexerPOV, interval: i32) i32 {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciLexerPOV, time: i64) i32 {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciLexerPOV, id: i32) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciLexerPOV, id: i32) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciLexerPOV, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciLexerPOV.children: Memory allocation failed");
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QsciLexerPOV, _parent: anytype) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciLexerPOV, filterObj: anytype) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciLexerPOV, obj: anytype) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciLexerPOV, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn disconnect3(self: QsciLexerPOV) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciLexerPOV, receiver: anytype) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn dumpObjectTree(self: QsciLexerPOV) void {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn dumpObjectInfo(self: QsciLexerPOV) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciLexerPOV, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciLexerPOV, name: [:0]const u8) QVariant {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciLexerPOV, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciLexerPOV.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerPOV.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn bindingStorage(self: QsciLexerPOV) QBindingStorage {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn bindingStorage2(self: QsciLexerPOV) QBindingStorage {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn destroyed(self: QsciLexerPOV) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV) callconv(.c) void) void {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn parent(self: QsciLexerPOV) QObject {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciLexerPOV, classname: [:0]const u8) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn deleteLater(self: QsciLexerPOV) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciLexerPOV, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciLexerPOV, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciLexerPOV, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciLexerPOV, signal: [:0]const u8) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciLexerPOV, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciLexerPOV, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciLexerPOV, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciLexerPOV, param1: anytype) void {
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lexerId` instead
    ///
    pub const LexerId = lexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn lexerId(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_LexerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLexerId` instead
    ///
    pub const SuperLexerId = superLexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superLexerId(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperLexerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLexerId` instead
    ///
    pub const OnLexerId = onLexerId;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLexerId(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnLexerId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoCompletionFillups` instead
    ///
    pub const AutoCompletionFillups = autoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn autoCompletionFillups(self: QsciLexerPOV) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_AutoCompletionFillups(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superAutoCompletionFillups` instead
    ///
    pub const SuperAutoCompletionFillups = superAutoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superAutoCompletionFillups(self: QsciLexerPOV) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_SuperAutoCompletionFillups(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onAutoCompletionFillups` instead
    ///
    pub const OnAutoCompletionFillups = onAutoCompletionFillups;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onAutoCompletionFillups(self: QsciLexerPOV, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerPOV_OnAutoCompletionFillups(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoCompletionWordSeparators` instead
    ///
    pub const AutoCompletionWordSeparators = autoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoCompletionWordSeparators(self: QsciLexerPOV, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerPOV_AutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerPOV.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerPOV.autoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superAutoCompletionWordSeparators` instead
    ///
    pub const SuperAutoCompletionWordSeparators = superAutoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAutoCompletionWordSeparators(self: QsciLexerPOV, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerPOV_SuperAutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerPOV.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerPOV.autoCompletionWordSeparators: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onAutoCompletionWordSeparators` instead
    ///
    pub const OnAutoCompletionWordSeparators = onAutoCompletionWordSeparators;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onAutoCompletionWordSeparators(self: QsciLexerPOV, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerPOV_OnAutoCompletionWordSeparators(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockEnd` instead
    ///
    pub const BlockEnd = blockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_BlockEnd(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockEnd` instead
    ///
    pub const SuperBlockEnd = superBlockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockEnd(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_SuperBlockEnd(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockEnd` instead
    ///
    pub const OnBlockEnd = onBlockEnd;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockEnd(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerPOV_OnBlockEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockLookback` instead
    ///
    pub const BlockLookback = blockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn blockLookback(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_BlockLookback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBlockLookback` instead
    ///
    pub const SuperBlockLookback = superBlockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superBlockLookback(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperBlockLookback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBlockLookback` instead
    ///
    pub const OnBlockLookback = onBlockLookback;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBlockLookback(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnBlockLookback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockStart` instead
    ///
    pub const BlockStart = blockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_BlockStart(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockStart` instead
    ///
    pub const SuperBlockStart = superBlockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStart(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_SuperBlockStart(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockStart` instead
    ///
    pub const OnBlockStart = onBlockStart;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStart(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerPOV_OnBlockStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockStartKeyword` instead
    ///
    pub const BlockStartKeyword = blockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_BlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superBlockStartKeyword` instead
    ///
    pub const SuperBlockStartKeyword = superBlockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStartKeyword(self: QsciLexerPOV, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerPOV_SuperBlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onBlockStartKeyword` instead
    ///
    pub const OnBlockStartKeyword = onBlockStartKeyword;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStartKeyword(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerPOV_OnBlockStartKeyword(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `caseSensitive` instead
    ///
    pub const CaseSensitive = caseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn caseSensitive(self: QsciLexerPOV) bool {
        return qtc.QsciLexerPOV_CaseSensitive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCaseSensitive` instead
    ///
    pub const SuperCaseSensitive = superCaseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superCaseSensitive(self: QsciLexerPOV) bool {
        return qtc.QsciLexerPOV_SuperCaseSensitive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCaseSensitive` instead
    ///
    pub const OnCaseSensitive = onCaseSensitive;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCaseSensitive(self: QsciLexerPOV, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnCaseSensitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn color(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_Color(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superColor` instead
    ///
    pub const SuperColor = superColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superColor(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_SuperColor(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onColor` instead
    ///
    pub const OnColor = onColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QColor) void {
        qtc.QsciLexerPOV_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eolFill` instead
    ///
    pub const EolFill = eolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFill(self: QsciLexerPOV, style: i32) bool {
        return qtc.QsciLexerPOV_EolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superEolFill` instead
    ///
    pub const SuperEolFill = superEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superEolFill(self: QsciLexerPOV, style: i32) bool {
        return qtc.QsciLexerPOV_SuperEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onEolFill` instead
    ///
    pub const OnEolFill = onEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) bool `
    ///
    pub fn onEolFill(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn font(self: QsciLexerPOV, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerPOV_Font(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superFont` instead
    ///
    pub const SuperFont = superFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superFont(self: QsciLexerPOV, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerPOV_SuperFont(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onFont` instead
    ///
    pub const OnFont = onFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFont(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QFont) void {
        qtc.QsciLexerPOV_OnFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indentationGuideView` instead
    ///
    pub const IndentationGuideView = indentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn indentationGuideView(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_IndentationGuideView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIndentationGuideView` instead
    ///
    pub const SuperIndentationGuideView = superIndentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superIndentationGuideView(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperIndentationGuideView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIndentationGuideView` instead
    ///
    pub const OnIndentationGuideView = onIndentationGuideView;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onIndentationGuideView(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnIndentationGuideView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultStyle` instead
    ///
    pub const DefaultStyle = defaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn defaultStyle(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_DefaultStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDefaultStyle` instead
    ///
    pub const SuperDefaultStyle = superDefaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superDefaultStyle(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperDefaultStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultStyle` instead
    ///
    pub const OnDefaultStyle = onDefaultStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDefaultStyle(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnDefaultStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paper` instead
    ///
    pub const Paper = paper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn paper(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_Paper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superPaper` instead
    ///
    pub const SuperPaper = superPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superPaper(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_SuperPaper(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onPaper` instead
    ///
    pub const OnPaper = onPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPaper(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QColor) void {
        qtc.QsciLexerPOV_OnPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultColor2` instead
    ///
    pub const DefaultColor2 = defaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor2(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultColor2` instead
    ///
    pub const SuperDefaultColor2 = superDefaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultColor2(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_SuperDefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultColor2` instead
    ///
    pub const OnDefaultColor2 = onDefaultColor2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultColor2(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QColor) void {
        qtc.QsciLexerPOV_OnDefaultColor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultFont2` instead
    ///
    pub const DefaultFont2 = defaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont2(self: QsciLexerPOV, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultFont2` instead
    ///
    pub const SuperDefaultFont2 = superDefaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultFont2(self: QsciLexerPOV, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerPOV_SuperDefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultFont2` instead
    ///
    pub const OnDefaultFont2 = onDefaultFont2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultFont2(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QFont) void {
        qtc.QsciLexerPOV_OnDefaultFont2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultPaper2` instead
    ///
    pub const DefaultPaper2 = defaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper2(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_DefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `superDefaultPaper2` instead
    ///
    pub const SuperDefaultPaper2 = superDefaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultPaper2(self: QsciLexerPOV, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerPOV_SuperDefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
    }

    /// ### DEPRECATED: Use `onDefaultPaper2` instead
    ///
    pub const OnDefaultPaper2 = onDefaultPaper2;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultPaper2(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) QColor) void {
        qtc.QsciLexerPOV_OnDefaultPaper2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEditor` instead
    ///
    pub const SetEditor = setEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn setEditor(self: QsciLexerPOV, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerPOV_SetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `superSetEditor` instead
    ///
    pub const SuperSetEditor = superSetEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn superSetEditor(self: QsciLexerPOV, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerPOV_SuperSetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `onSetEditor` instead
    ///
    pub const OnSetEditor = onSetEditor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, editor: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSetEditor(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QsciScintilla) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `styleBitsNeeded` instead
    ///
    pub const StyleBitsNeeded = styleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn styleBitsNeeded(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_StyleBitsNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStyleBitsNeeded` instead
    ///
    pub const SuperStyleBitsNeeded = superStyleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn superStyleBitsNeeded(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperStyleBitsNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStyleBitsNeeded` instead
    ///
    pub const OnStyleBitsNeeded = onStyleBitsNeeded;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onStyleBitsNeeded(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnStyleBitsNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAutoIndentStyle` instead
    ///
    pub const SetAutoIndentStyle = setAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn setAutoIndentStyle(self: QsciLexerPOV, autoindentstyle: i32) void {
        qtc.QsciLexerPOV_SetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
    }

    /// ### DEPRECATED: Use `superSetAutoIndentStyle` instead
    ///
    pub const SuperSetAutoIndentStyle = superSetAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn superSetAutoIndentStyle(self: QsciLexerPOV, autoindentstyle: i32) void {
        qtc.QsciLexerPOV_SuperSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
    }

    /// ### DEPRECATED: Use `onSetAutoIndentStyle` instead
    ///
    pub const OnSetAutoIndentStyle = onSetAutoIndentStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn onSetAutoIndentStyle(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, i32) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setColor(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerPOV_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetColor` instead
    ///
    pub const SuperSetColor = superSetColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetColor(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerPOV_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetColor` instead
    ///
    pub const OnSetColor = onSetColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetColor(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEolFill` instead
    ///
    pub const SetEolFill = setEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn setEolFill(self: QsciLexerPOV, eoffill: bool, style: i32) void {
        qtc.QsciLexerPOV_SetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetEolFill` instead
    ///
    pub const SuperSetEolFill = superSetEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetEolFill(self: QsciLexerPOV, eoffill: bool, style: i32) void {
        qtc.QsciLexerPOV_SuperSetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetEolFill` instead
    ///
    pub const OnSetEolFill = onSetEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn onSetEolFill(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn setFont(self: QsciLexerPOV, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerPOV_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetFont` instead
    ///
    pub const SuperSetFont = superSetFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetFont(self: QsciLexerPOV, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerPOV_SuperSetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetFont` instead
    ///
    pub const OnSetFont = onSetFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onSetFont(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPaper` instead
    ///
    pub const SetPaper = setPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setPaper(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerPOV_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superSetPaper` instead
    ///
    pub const SuperSetPaper = superSetPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetPaper(self: QsciLexerPOV, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerPOV_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onSetPaper` instead
    ///
    pub const OnSetPaper = onSetPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetPaper(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QsciLexerPOV, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerPOV_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QsciLexerPOV, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerPOV_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QsciLexerPOV, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerPOV_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QsciLexerPOV, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerPOV_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerPOV_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerPOV_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QTimerEvent) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerPOV_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerPOV_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QChildEvent) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerPOV_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciLexerPOV, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerPOV_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QEvent) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciLexerPOV, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerPOV_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciLexerPOV, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerPOV_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciLexerPOV, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerPOV_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciLexerPOV, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerPOV_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerPOV_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textAsBytes` instead
    ///
    pub const TextAsBytes = textAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciLexerPOV, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerPOV_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerPOV.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superTextAsBytes` instead
    ///
    pub const SuperTextAsBytes = superTextAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciLexerPOV, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerPOV_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerPOV.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTextAsBytes` instead
    ///
    pub const OnTextAsBytes = onTextAsBytes;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerPOV_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAsText` instead
    ///
    pub const BytesAsText = bytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn bytesAsText(self: QsciLexerPOV, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerPOV_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superBytesAsText` instead
    ///
    pub const SuperBytesAsText = superBytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerPOV `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn superBytesAsText(self: QsciLexerPOV, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerPOV_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerPOV.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onBytesAsText` instead
    ///
    pub const OnBytesAsText = onBytesAsText;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerPOV_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn sender(self: QsciLexerPOV) QObject {
        return .{ .ptr = qtc.QsciLexerPOV_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn superSender(self: QsciLexerPOV) QObject {
        return .{ .ptr = qtc.QsciLexerPOV_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciLexerPOV, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciLexerPOV_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn senderSignalIndex(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    pub fn superSenderSignalIndex(self: QsciLexerPOV) i32 {
        return qtc.QsciLexerPOV_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciLexerPOV, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciLexerPOV, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerPOV_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciLexerPOV, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerPOV_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerPOV_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciLexerPOV, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerPOV_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciLexerPOV, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerPOV_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerPOV`
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciLexerPOV_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerPOV `
    ///
    /// ` callback: *const fn (self: QsciLexerPOV, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciLexerPOV, callback: *const fn (QsciLexerPOV, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPOV.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciLexerPOV `
    ///
    pub fn delete(self: QsciLexerPOV) void {
        qtc.QsciLexerPOV_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const QsciLexerPOV = enum(i32) {
        pub const Default: i32 = 0;
        pub const Comment: i32 = 1;
        pub const CommentLine: i32 = 2;
        pub const Number: i32 = 3;
        pub const Operator: i32 = 4;
        pub const Identifier: i32 = 5;
        pub const String: i32 = 6;
        pub const UnclosedString: i32 = 7;
        pub const Directive: i32 = 8;
        pub const BadDirective: i32 = 9;
        pub const ObjectsCSGAppearance: i32 = 10;
        pub const TypesModifiersItems: i32 = 11;
        pub const PredefinedIdentifiers: i32 = 12;
        pub const PredefinedFunctions: i32 = 13;
        pub const KeywordSet6: i32 = 14;
        pub const KeywordSet7: i32 = 15;
        pub const KeywordSet8: i32 = 16;
    };
};
