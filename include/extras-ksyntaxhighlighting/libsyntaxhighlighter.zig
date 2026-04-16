const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Definition = @import("libqt6").KSyntaxHighlighting__Definition;
const KSyntaxHighlighting__FoldingRegion = @import("libqt6").KSyntaxHighlighting__FoldingRegion;
const KSyntaxHighlighting__Format = @import("libqt6").KSyntaxHighlighting__Format;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html)
pub const KSyntaxHighlighting__SyntaxHighlighter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__SyntaxHighlighter,

    pub const _is_KSyntaxHighlighting__SyntaxHighlighter = {};
    pub const _is_QSyntaxHighlighter = {};
    pub const _is_QObject = {};
    pub const _is_KSyntaxHighlighting__AbstractHighlighter = {};

    /// New constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    pub fn New() KSyntaxHighlighting__SyntaxHighlighter {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new() };
    }

    /// New2 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QTextDocument `
    ///
    pub fn New2(document: anytype) KSyntaxHighlighting__SyntaxHighlighter {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new2(@ptrCast(document.ptr)) };
    }

    /// New3 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) KSyntaxHighlighting__SyntaxHighlighter {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new3(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn MetaObject(self: KSyntaxHighlighting__SyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperMetaObject(self: KSyntaxHighlighting__SyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSyntaxHighlighting__SyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSyntaxHighlighting__SyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSyntaxHighlighting__SyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSyntaxHighlighting__SyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn SetDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, def: KSyntaxHighlighting__Definition) callconv(.c) void `
    ///
    pub fn OnSetDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, KSyntaxHighlighting__Definition) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDefinition` instead
    ///
    pub const QBaseSetDefinition = SuperSetDefinition;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn SuperSetDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SetTheme(self: KSyntaxHighlighting__SyntaxHighlighter, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, theme: KSyntaxHighlighting__Theme) callconv(.c) void `
    ///
    pub fn OnSetTheme(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, KSyntaxHighlighting__Theme) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTheme` instead
    ///
    pub const QBaseSetTheme = SuperSetTheme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` theme: KSyntaxHighlighting__Theme `
    ///
    pub fn SuperSetTheme(self: KSyntaxHighlighting__SyntaxHighlighter, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSyntaxHighlighting__Theme;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#startsFoldingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` startBlock: QTextBlock `
    ///
    pub fn StartsFoldingRegion(self: KSyntaxHighlighting__SyntaxHighlighter, startBlock: anytype) bool {
        comptime _ = @TypeOf(startBlock)._is_QTextBlock;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion(@ptrCast(self.ptr), @ptrCast(startBlock.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#findFoldingRegionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` startBlock: QTextBlock `
    ///
    pub fn FindFoldingRegionEnd(self: KSyntaxHighlighting__SyntaxHighlighter, startBlock: anytype) QTextBlock {
        comptime _ = @TypeOf(startBlock)._is_QTextBlock;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd(@ptrCast(self.ptr), @ptrCast(startBlock.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn HighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnHighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHighlightBlock` instead
    ///
    pub const QBaseHighlightBlock = SuperHighlightBlock;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperHighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` format: KSyntaxHighlighting__Format `
    ///
    pub fn ApplyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: KSyntaxHighlighting__Format) callconv(.c) void `
    ///
    pub fn OnApplyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, KSyntaxHighlighting__Format) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyFormat` instead
    ///
    pub const QBaseApplyFormat = SuperApplyFormat;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` format: KSyntaxHighlighting__Format `
    ///
    pub fn SuperApplyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` region: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn ApplyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: KSyntaxHighlighting__FoldingRegion) callconv(.c) void `
    ///
    pub fn OnApplyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, KSyntaxHighlighting__FoldingRegion) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApplyFolding` instead
    ///
    pub const QBaseApplyFolding = SuperApplyFolding;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` offset: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` region: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn SuperApplyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn SetDocument(self: KSyntaxHighlighting__SyntaxHighlighter, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Document(self: KSyntaxHighlighting__SyntaxHighlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Rehighlight(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn RehighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSyntaxHighlighting__SyntaxHighlighter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn IsWidgetType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn IsWindowType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn IsQuickItemType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SignalsBlocked(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSyntaxHighlighting__SyntaxHighlighter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Thread(self: KSyntaxHighlighting__SyntaxHighlighter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSyntaxHighlighting__SyntaxHighlighter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSyntaxHighlighting__SyntaxHighlighter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSyntaxHighlighting__SyntaxHighlighter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSyntaxHighlighting__SyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSyntaxHighlighting__SyntaxHighlighter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.Children: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSyntaxHighlighting__SyntaxHighlighter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, obj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSyntaxHighlighting__SyntaxHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Disconnect3(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSyntaxHighlighting__SyntaxHighlighter, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn DumpObjectTree(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn DumpObjectInfo(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSyntaxHighlighting__SyntaxHighlighter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSyntaxHighlighting__SyntaxHighlighter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__syntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn BindingStorage(self: KSyntaxHighlighting__SyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn BindingStorage2(self: KSyntaxHighlighting__SyntaxHighlighter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Destroyed(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Parent(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSyntaxHighlighting__SyntaxHighlighter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn DeleteLater(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSyntaxHighlighting__SyntaxHighlighter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSyntaxHighlighting__SyntaxHighlighter, time: i64, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSyntaxHighlighting__SyntaxHighlighter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSyntaxHighlighting__SyntaxHighlighter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSyntaxHighlighting__SyntaxHighlighter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Definition(self: KSyntaxHighlighting__SyntaxHighlighter) KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Theme(self: KSyntaxHighlighting__SyntaxHighlighter) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QTimerEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QChildEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSyntaxHighlighting__SyntaxHighlighter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetFormat` instead
    ///
    pub const QBaseSetFormat = SuperSetFormat;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SuperSetFormat(self: KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(format.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: KSyntaxHighlighting__SyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: KSyntaxHighlighting__SyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn PreviousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPreviousBlockState` instead
    ///
    pub const QBasePreviousBlockState = SuperPreviousBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperPreviousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPreviousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn CurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockState` instead
    ///
    pub const QBaseCurrentBlockState = SuperCurrentBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SetCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockState` instead
    ///
    pub const QBaseSetCurrentBlockState = SuperSetCurrentBlockState;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` newState: i32 `
    ///
    pub fn SuperSetCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, newState: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SetCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentBlockUserData` instead
    ///
    pub const QBaseSetCurrentBlockUserData = SuperSetCurrentBlockUserData;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SuperSetCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, data: QTextBlockUserData) callconv(.c) void `
    ///
    pub fn OnSetCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn CurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCurrentBlockUserData` instead
    ///
    pub const QBaseCurrentBlockUserData = SuperCurrentBlockUserData;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlockUserData `
    ///
    pub fn OnCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn CurrentBlock(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCurrentBlock` instead
    ///
    pub const QBaseCurrentBlock = SuperCurrentBlock;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperCurrentBlock(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    pub fn OnCurrentBlock(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Sender(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperSender(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SenderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn SuperSenderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn Delete(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_Delete(@ptrCast(self.ptr));
    }
};
