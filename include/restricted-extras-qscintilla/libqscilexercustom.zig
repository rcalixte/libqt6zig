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
const QsciStyle = @import("libqt6").QsciStyle;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
pub const QsciLexerCustom = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciLexerCustom,

    pub const _is_QsciLexerCustom = {};
    pub const _is_QsciLexer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciLexerCustom object in C++ memory
    ///
    pub fn new() QsciLexerCustom {
        return .{ .ptr = qtc.QsciLexerCustom_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciLexerCustom object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QsciLexerCustom {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QsciLexerCustom_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn metaObject(self: QsciLexerCustom) QMetaObject {
        return .{ .ptr = qtc.QsciLexerCustom_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciLexerCustom, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciLexerCustom_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superMetaObject(self: QsciLexerCustom) QMetaObject {
        return .{ .ptr = qtc.QsciLexerCustom_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciLexerCustom, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerCustom_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciLexerCustom_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciLexerCustom, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciLexerCustom_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QsciLexerCustom, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerCustom_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QsciLexerCustom, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciLexerCustom_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStyling` instead
    ///
    pub const SetStyling = setStyling;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` length: i32 `
    ///
    /// ` style: i32 `
    ///
    pub fn setStyling(self: QsciLexerCustom, length: i32, style: i32) void {
        qtc.QsciLexerCustom_SetStyling(@ptrCast(self.ptr), @bitCast(length), @bitCast(style));
    }

    /// ### DEPRECATED: Use `setStyling2` instead
    ///
    pub const SetStyling2 = setStyling2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` length: i32 `
    ///
    /// ` style: QsciStyle `
    ///
    pub fn setStyling2(self: QsciLexerCustom, length: i32, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QsciStyle;
        qtc.QsciLexerCustom_SetStyling2(@ptrCast(self.ptr), @bitCast(length), @ptrCast(style.ptr));
    }

    /// ### DEPRECATED: Use `startStyling` instead
    ///
    pub const StartStyling = startStyling;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` pos: i32 `
    ///
    pub fn startStyling(self: QsciLexerCustom, pos: i32) void {
        qtc.QsciLexerCustom_StartStyling(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `styleText` instead
    ///
    pub const StyleText = styleText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn styleText(self: QsciLexerCustom, start: i32, end: i32) void {
        qtc.QsciLexerCustom_StyleText(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onStyleText` instead
    ///
    pub const OnStyleText = onStyleText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn onStyleText(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnStyleText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStyleText` instead
    ///
    pub const SuperStyleText = superStyleText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superStyleText(self: QsciLexerCustom, start: i32, end: i32) void {
        qtc.QsciLexerCustom_SuperStyleText(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `setEditor` instead
    ///
    pub const SetEditor = setEditor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn setEditor(self: QsciLexerCustom, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerCustom_SetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `onSetEditor` instead
    ///
    pub const OnSetEditor = onSetEditor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, editor: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSetEditor(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QsciScintilla) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEditor` instead
    ///
    pub const SuperSetEditor = superSetEditor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` _editor: QsciScintilla `
    ///
    pub fn superSetEditor(self: QsciLexerCustom, _editor: anytype) void {
        comptime _ = @TypeOf(_editor)._is_QsciScintilla;
        qtc.QsciLexerCustom_SuperSetEditor(@ptrCast(self.ptr), @ptrCast(_editor.ptr));
    }

    /// ### DEPRECATED: Use `styleBitsNeeded` instead
    ///
    pub const StyleBitsNeeded = styleBitsNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn styleBitsNeeded(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_StyleBitsNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStyleBitsNeeded` instead
    ///
    pub const OnStyleBitsNeeded = onStyleBitsNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onStyleBitsNeeded(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnStyleBitsNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStyleBitsNeeded` instead
    ///
    pub const SuperStyleBitsNeeded = superStyleBitsNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superStyleBitsNeeded(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperStyleBitsNeeded(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startStyling2` instead
    ///
    pub const StartStyling2 = startStyling2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` pos: i32 `
    ///
    /// ` styleBits: i32 `
    ///
    pub fn startStyling2(self: QsciLexerCustom, pos: i32, styleBits: i32) void {
        qtc.QsciLexerCustom_StartStyling2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(styleBits));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn apis(self: QsciLexerCustom) QsciAbstractAPIs {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn autoIndentStyle(self: QsciLexerCustom) i32 {
        return qtc.QsciLexer_AutoIndentStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultColor` instead
    ///
    pub const DefaultColor = defaultColor;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn defaultColor(self: QsciLexerCustom) QColor {
        return .{ .ptr = qtc.QsciLexer_DefaultColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn defaultFont(self: QsciLexerCustom) QFont {
        return .{ .ptr = qtc.QsciLexer_DefaultFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultPaper` instead
    ///
    pub const DefaultPaper = defaultPaper;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn defaultPaper(self: QsciLexerCustom) QColor {
        return .{ .ptr = qtc.QsciLexer_DefaultPaper(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn editor(self: QsciLexerCustom) QsciScintilla {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _apis: QsciAbstractAPIs `
    ///
    pub fn setAPIs(self: QsciLexerCustom, _apis: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultColor(self: QsciLexerCustom, c: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` f: QFont `
    ///
    pub fn setDefaultFont(self: QsciLexerCustom, f: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    pub fn setDefaultPaper(self: QsciLexerCustom, c: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    pub fn readSettings(self: QsciLexerCustom, qs: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    pub fn writeSettings(self: QsciLexerCustom, qs: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn colorChanged(self: QsciLexerCustom, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` eolfilled: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFillChanged(self: QsciLexerCustom, eolfilled: bool, style: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, eolfilled: bool, style: i32) callconv(.c) void `
    ///
    pub fn onEolFillChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, bool, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn fontChanged(self: QsciLexerCustom, f: anytype, style: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QFont, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn paperChanged(self: QsciLexerCustom, c: anytype, style: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onPaperChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QColor, i32) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` prop: [:0]const u8 `
    ///
    /// ` val: [:0]const u8 `
    ///
    pub fn propertyChanged(self: QsciLexerCustom, prop: [:0]const u8, val: [:0]const u8) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, prop: [*:0]const u8, val: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPropertyChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn readSettings2(self: QsciLexerCustom, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: [:0]const u8 `
    ///
    pub fn writeSettings2(self: QsciLexerCustom, qs: anytype, prefix: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciLexerCustom, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.objectName: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciLexerCustom, name: []const u8) void {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn isWidgetType(self: QsciLexerCustom) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn isWindowType(self: QsciLexerCustom) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn isQuickItemType(self: QsciLexerCustom) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn signalsBlocked(self: QsciLexerCustom) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciLexerCustom, b: bool) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn thread(self: QsciLexerCustom) QThread {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciLexerCustom, _thread: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciLexerCustom, interval: i32) i32 {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciLexerCustom, time: i64) i32 {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciLexerCustom, id: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciLexerCustom, id: i32) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciLexerCustom, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciLexerCustom.children: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QsciLexerCustom, _parent: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciLexerCustom, filterObj: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciLexerCustom, obj: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciLexerCustom, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn disconnect3(self: QsciLexerCustom) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciLexerCustom, receiver: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn dumpObjectTree(self: QsciLexerCustom) void {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn dumpObjectInfo(self: QsciLexerCustom) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciLexerCustom, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciLexerCustom, name: [:0]const u8) QVariant {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciLexerCustom, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciLexerCustom.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerCustom.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn bindingStorage(self: QsciLexerCustom) QBindingStorage {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn bindingStorage2(self: QsciLexerCustom) QBindingStorage {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn destroyed(self: QsciLexerCustom) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom) callconv(.c) void) void {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn parent(self: QsciLexerCustom) QObject {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciLexerCustom, classname: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn deleteLater(self: QsciLexerCustom) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciLexerCustom, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciLexerCustom, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciLexerCustom, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciLexerCustom, signal: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciLexerCustom, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciLexerCustom, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciLexerCustom, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciLexerCustom, param1: anytype) void {
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn language(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_Language(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superLanguage` instead
    ///
    pub const SuperLanguage = superLanguage;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superLanguage(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperLanguage(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onLanguage` instead
    ///
    pub const OnLanguage = onLanguage;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLanguage(self: QsciLexerCustom, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnLanguage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn lexer(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_Lexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superLexer` instead
    ///
    pub const SuperLexer = superLexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superLexer(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperLexer(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onLexer` instead
    ///
    pub const OnLexer = onLexer;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLexer(self: QsciLexerCustom, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnLexer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn lexerId(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_LexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superLexerId(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperLexerId(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onLexerId(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnLexerId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn autoCompletionFillups(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_AutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superAutoCompletionFillups(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperAutoCompletionFillups(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onAutoCompletionFillups(self: QsciLexerCustom, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnAutoCompletionFillups(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn autoCompletionWordSeparators(self: QsciLexerCustom, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerCustom_AutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerCustom.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerCustom.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superAutoCompletionWordSeparators(self: QsciLexerCustom, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciLexerCustom_SuperAutoCompletionWordSeparators(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciLexerCustom.autoCompletionWordSeparators: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciLexerCustom.autoCompletionWordSeparators: Memory allocation failed");
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onAutoCompletionWordSeparators(self: QsciLexerCustom, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciLexerCustom_OnAutoCompletionWordSeparators(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockEnd(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_BlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockEnd(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperBlockEnd(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockEnd(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnBlockEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn blockLookback(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_BlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superBlockLookback(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperBlockLookback(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBlockLookback(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnBlockLookback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStart(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_BlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStart(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperBlockStart(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStart(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnBlockStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn blockStartKeyword(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_BlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: *i32 `
    ///
    pub fn superBlockStartKeyword(self: QsciLexerCustom, style: *i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperBlockStartKeyword(@ptrCast(self.ptr), @ptrCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBlockStartKeyword(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnBlockStartKeyword(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `braceStyle` instead
    ///
    pub const BraceStyle = braceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn braceStyle(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_BraceStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBraceStyle` instead
    ///
    pub const SuperBraceStyle = superBraceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superBraceStyle(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperBraceStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBraceStyle` instead
    ///
    pub const OnBraceStyle = onBraceStyle;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onBraceStyle(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnBraceStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn caseSensitive(self: QsciLexerCustom) bool {
        return qtc.QsciLexerCustom_CaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superCaseSensitive(self: QsciLexerCustom) bool {
        return qtc.QsciLexerCustom_SuperCaseSensitive(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCaseSensitive(self: QsciLexerCustom, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnCaseSensitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn color(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_Color(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superColor(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_SuperColor(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QColor) void {
        qtc.QsciLexerCustom_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn eolFill(self: QsciLexerCustom, style: i32) bool {
        return qtc.QsciLexerCustom_EolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superEolFill(self: QsciLexerCustom, style: i32) bool {
        return qtc.QsciLexerCustom_SuperEolFill(@ptrCast(self.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) bool `
    ///
    pub fn onEolFill(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn font(self: QsciLexerCustom, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerCustom_Font(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superFont(self: QsciLexerCustom, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerCustom_SuperFont(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFont(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QFont) void {
        qtc.QsciLexerCustom_OnFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn indentationGuideView(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_IndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superIndentationGuideView(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperIndentationGuideView(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onIndentationGuideView(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnIndentationGuideView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` set: i32 `
    ///
    pub fn keywords(self: QsciLexerCustom, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_Keywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superKeywords` instead
    ///
    pub const SuperKeywords = superKeywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` set: i32 `
    ///
    pub fn superKeywords(self: QsciLexerCustom, set: i32) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperKeywords(@ptrCast(self.ptr), @bitCast(set));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onKeywords` instead
    ///
    pub const OnKeywords = onKeywords;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, set: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onKeywords(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnKeywords(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn defaultStyle(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_DefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superDefaultStyle(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperDefaultStyle(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDefaultStyle(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnDefaultStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn description(self: QsciLexerCustom, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerCustom_Description(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superDescription` instead
    ///
    pub const SuperDescription = superDescription;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` style: i32 `
    ///
    pub fn superDescription(self: QsciLexerCustom, allocator: std.mem.Allocator, style: i32) []const u8 {
        var _str = qtc.QsciLexerCustom_SuperDescription(@ptrCast(self.ptr), @bitCast(style));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onDescription` instead
    ///
    pub const OnDescription = onDescription;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onDescription(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnDescription(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn paper(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_Paper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superPaper(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_SuperPaper(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPaper(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QColor) void {
        qtc.QsciLexerCustom_OnPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultColor2(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_DefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultColor2(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_SuperDefaultColor2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultColor2(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QColor) void {
        qtc.QsciLexerCustom_OnDefaultColor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultEolFill` instead
    ///
    pub const DefaultEolFill = defaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultEolFill(self: QsciLexerCustom, style: i32) bool {
        return qtc.QsciLexerCustom_DefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `superDefaultEolFill` instead
    ///
    pub const SuperDefaultEolFill = superDefaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultEolFill(self: QsciLexerCustom, style: i32) bool {
        return qtc.QsciLexerCustom_SuperDefaultEolFill(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onDefaultEolFill` instead
    ///
    pub const OnDefaultEolFill = onDefaultEolFill;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) bool `
    ///
    pub fn onDefaultEolFill(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnDefaultEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultFont2(self: QsciLexerCustom, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerCustom_DefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultFont2(self: QsciLexerCustom, style: i32) QFont {
        return .{ .ptr = qtc.QsciLexerCustom_SuperDefaultFont2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultFont2(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QFont) void {
        qtc.QsciLexerCustom_OnDefaultFont2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn defaultPaper2(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_DefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` style: i32 `
    ///
    pub fn superDefaultPaper2(self: QsciLexerCustom, style: i32) QColor {
        return .{ .ptr = qtc.QsciLexerCustom_SuperDefaultPaper2(@ptrCast(self.ptr), @bitCast(style)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, style: i32) callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDefaultPaper2(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) QColor) void {
        qtc.QsciLexerCustom_OnDefaultPaper2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `refreshProperties` instead
    ///
    pub const RefreshProperties = refreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn refreshProperties(self: QsciLexerCustom) void {
        qtc.QsciLexerCustom_RefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRefreshProperties` instead
    ///
    pub const SuperRefreshProperties = superRefreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superRefreshProperties(self: QsciLexerCustom) void {
        qtc.QsciLexerCustom_SuperRefreshProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRefreshProperties` instead
    ///
    pub const OnRefreshProperties = onRefreshProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRefreshProperties(self: QsciLexerCustom, callback: *const fn () callconv(.c) void) void {
        qtc.QsciLexerCustom_OnRefreshProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn wordCharacters(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_WordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `superWordCharacters` instead
    ///
    pub const SuperWordCharacters = superWordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn superWordCharacters(self: QsciLexerCustom) [:0]const u8 {
        const _ret = qtc.QsciLexerCustom_SuperWordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `onWordCharacters` instead
    ///
    pub const OnWordCharacters = onWordCharacters;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWordCharacters(self: QsciLexerCustom, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn setAutoIndentStyle(self: QsciLexerCustom, autoindentstyle: i32) void {
        qtc.QsciLexerCustom_SetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` autoindentstyle: i32 `
    ///
    pub fn superSetAutoIndentStyle(self: QsciLexerCustom, autoindentstyle: i32) void {
        qtc.QsciLexerCustom_SuperSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(autoindentstyle));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, autoindentstyle: i32) callconv(.c) void `
    ///
    pub fn onSetAutoIndentStyle(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetAutoIndentStyle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setColor(self: QsciLexerCustom, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerCustom_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetColor(self: QsciLexerCustom, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerCustom_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetColor(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn setEolFill(self: QsciLexerCustom, eoffill: bool, style: i32) void {
        qtc.QsciLexerCustom_SetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` eoffill: bool `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetEolFill(self: QsciLexerCustom, eoffill: bool, style: i32) void {
        qtc.QsciLexerCustom_SuperSetEolFill(@ptrCast(self.ptr), eoffill, @bitCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, eoffill: bool, style: i32) callconv(.c) void `
    ///
    pub fn onSetEolFill(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, bool, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetEolFill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn setFont(self: QsciLexerCustom, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerCustom_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` f: QFont `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetFont(self: QsciLexerCustom, f: anytype, style: i32) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciLexerCustom_SuperSetFont(@ptrCast(self.ptr), @ptrCast(f.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, f: QFont, style: i32) callconv(.c) void `
    ///
    pub fn onSetFont(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QFont, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn setPaper(self: QsciLexerCustom, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerCustom_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` c: QColor `
    ///
    /// ` style: i32 `
    ///
    pub fn superSetPaper(self: QsciLexerCustom, c: anytype, style: i32) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciLexerCustom_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr), @bitCast(style));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, c: QColor, style: i32) callconv(.c) void `
    ///
    pub fn onSetPaper(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QColor, i32) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readProperties` instead
    ///
    pub const ReadProperties = readProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn readProperties(self: QsciLexerCustom, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerCustom_ReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `superReadProperties` instead
    ///
    pub const SuperReadProperties = superReadProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superReadProperties(self: QsciLexerCustom, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerCustom_SuperReadProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onReadProperties` instead
    ///
    pub const OnReadProperties = onReadProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onReadProperties(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnReadProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `writeProperties` instead
    ///
    pub const WriteProperties = writeProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn writeProperties(self: QsciLexerCustom, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerCustom_WriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `superWriteProperties` instead
    ///
    pub const SuperWriteProperties = superWriteProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciLexerCustom `
    ///
    /// ` qs: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn superWriteProperties(self: QsciLexerCustom, qs: anytype, prefix: []const u8) bool {
        comptime _ = @TypeOf(qs)._is_QSettings;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QsciLexerCustom_SuperWriteProperties(@ptrCast(self.ptr), @ptrCast(qs.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onWriteProperties` instead
    ///
    pub const OnWriteProperties = onWriteProperties;

    /// Inherited from QsciLexer
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, qs: QSettings, prefix: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWriteProperties(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QSettings, [*:0]const u8) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnWriteProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QsciLexerCustom, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerCustom_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QsciLexerCustom, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerCustom_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QsciLexerCustom, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerCustom_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QsciLexerCustom, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QsciLexerCustom_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerCustom_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciLexerCustom_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QTimerEvent) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerCustom_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciLexerCustom_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QChildEvent) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerCustom_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciLexerCustom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciLexerCustom_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QEvent) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciLexerCustom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerCustom_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciLexerCustom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerCustom_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciLexerCustom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerCustom_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciLexerCustom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciLexerCustom_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QMetaMethod) callconv(.c) void) void {
        qtc.QsciLexerCustom_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciLexerCustom, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerCustom_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerCustom.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciLexerCustom, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciLexerCustom_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciLexerCustom.textAsBytes: Memory allocation failed");
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciLexerCustom_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn bytesAsText(self: QsciLexerCustom, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerCustom_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn superBytesAsText(self: QsciLexerCustom, allocator: std.mem.Allocator, bytes: [:0]const u8, size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciLexerCustom_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciLexerCustom.bytesAsText: Memory allocation failed");
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciLexerCustom_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn sender(self: QsciLexerCustom) QObject {
        return .{ .ptr = qtc.QsciLexerCustom_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superSender(self: QsciLexerCustom) QObject {
        return .{ .ptr = qtc.QsciLexerCustom_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciLexerCustom, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciLexerCustom_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn senderSignalIndex(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    pub fn superSenderSignalIndex(self: QsciLexerCustom) i32 {
        return qtc.QsciLexerCustom_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciLexerCustom, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciLexerCustom, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerCustom_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciLexerCustom, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciLexerCustom_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciLexerCustom_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciLexerCustom, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerCustom_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciLexerCustom, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciLexerCustom_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciLexerCustom`
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciLexerCustom_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciLexerCustom `
    ///
    /// ` callback: *const fn (self: QsciLexerCustom, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciLexerCustom, callback: *const fn (QsciLexerCustom, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCustom.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciLexerCustom `
    ///
    pub fn delete(self: QsciLexerCustom) void {
        qtc.QsciLexerCustom_Delete(@ptrCast(self.ptr));
    }
};
