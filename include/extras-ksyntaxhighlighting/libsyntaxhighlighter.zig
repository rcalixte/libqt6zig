const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__AbstractHighlighter = @import("libqt6").KSyntaxHighlighting__AbstractHighlighter;
const KSyntaxHighlighting__Definition = @import("libqt6").KSyntaxHighlighting__Definition;
const KSyntaxHighlighting__FoldingRegion = @import("libqt6").KSyntaxHighlighting__FoldingRegion;
const KSyntaxHighlighting__Format = @import("libqt6").KSyntaxHighlighting__Format;
const KSyntaxHighlighting__State = @import("libqt6").KSyntaxHighlighting__State;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::SyntaxHighlighter object in C++ memory
    ///
    pub fn new() KSyntaxHighlighting__SyntaxHighlighter {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSyntaxHighlighting::SyntaxHighlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn new2(_document: anytype) KSyntaxHighlighting__SyntaxHighlighter {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new2(@ptrCast(_document.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KSyntaxHighlighting::SyntaxHighlighter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) KSyntaxHighlighting__SyntaxHighlighter {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_new3(@ptrCast(_parent.ptr)) };
    }

    /// Upcasts to a KSyntaxHighlighting::AbstractHighlighter object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn asKSyntaxHighlighting__AbstractHighlighter(self: KSyntaxHighlighting__SyntaxHighlighter) KSyntaxHighlighting__AbstractHighlighter {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_AsKSyntaxHighlighting__AbstractHighlighter(@ptrCast(self.ptr)) };
    }

    /// Downcasts to a KSyntaxHighlighting__SyntaxHighlighter object
    ///
    /// ## Parameter(s):
    ///
    /// ` _ksyntaxhighlighting__abstracthighlighter: KSyntaxHighlighting__AbstractHighlighter `
    ///
    pub fn fromKSyntaxHighlighting__AbstractHighlighter(_ksyntaxhighlighting__abstracthighlighter: anytype) KSyntaxHighlighting__SyntaxHighlighter {
        comptime _ = @TypeOf(_ksyntaxhighlighting__abstracthighlighter)._is_KSyntaxHighlighting__AbstractHighlighter;
        return @bitCast(qtc.KSyntaxHighlighting__SyntaxHighlighter_FromKSyntaxHighlighting__AbstractHighlighter(@ptrCast(_ksyntaxhighlighting__abstracthighlighter.ptr)));
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn metaObject(self: KSyntaxHighlighting__SyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn superMetaObject(self: KSyntaxHighlighting__SyntaxHighlighter) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KSyntaxHighlighting__SyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KSyntaxHighlighting__SyntaxHighlighter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KSyntaxHighlighting__SyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KSyntaxHighlighting__SyntaxHighlighter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefinition` instead
    ///
    pub const SetDefinition = setDefinition;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` def: KSyntaxHighlighting__Definition `
    ///
    pub fn setDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefinition` instead
    ///
    pub const OnSetDefinition = onSetDefinition;

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
    pub fn onSetDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, KSyntaxHighlighting__Definition) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefinition` instead
    ///
    pub const SuperSetDefinition = superSetDefinition;

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
    pub fn superSetDefinition(self: KSyntaxHighlighting__SyntaxHighlighter, def: anytype) void {
        comptime _ = @TypeOf(def)._is_KSyntaxHighlighting__Definition;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetDefinition(@ptrCast(self.ptr), @ptrCast(def.ptr));
    }

    /// ### DEPRECATED: Use `setTheme` instead
    ///
    pub const SetTheme = setTheme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _theme: KSyntaxHighlighting__Theme `
    ///
    pub fn setTheme(self: KSyntaxHighlighting__SyntaxHighlighter, _theme: anytype) void {
        comptime _ = @TypeOf(_theme)._is_KSyntaxHighlighting__Theme;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetTheme(@ptrCast(self.ptr), @ptrCast(_theme.ptr));
    }

    /// ### DEPRECATED: Use `onSetTheme` instead
    ///
    pub const OnSetTheme = onSetTheme;

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
    pub fn onSetTheme(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, KSyntaxHighlighting__Theme) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTheme` instead
    ///
    pub const SuperSetTheme = superSetTheme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _theme: KSyntaxHighlighting__Theme `
    ///
    pub fn superSetTheme(self: KSyntaxHighlighting__SyntaxHighlighter, _theme: anytype) void {
        comptime _ = @TypeOf(_theme)._is_KSyntaxHighlighting__Theme;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetTheme(@ptrCast(self.ptr), @ptrCast(_theme.ptr));
    }

    /// ### DEPRECATED: Use `startsFoldingRegion` instead
    ///
    pub const StartsFoldingRegion = startsFoldingRegion;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#startsFoldingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` startBlock: QTextBlock `
    ///
    pub fn startsFoldingRegion(self: KSyntaxHighlighting__SyntaxHighlighter, startBlock: anytype) bool {
        comptime _ = @TypeOf(startBlock)._is_QTextBlock;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion(@ptrCast(self.ptr), @ptrCast(startBlock.ptr));
    }

    /// ### DEPRECATED: Use `findFoldingRegionEnd` instead
    ///
    pub const FindFoldingRegionEnd = findFoldingRegionEnd;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#findFoldingRegionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` startBlock: QTextBlock `
    ///
    pub fn findFoldingRegionEnd(self: KSyntaxHighlighting__SyntaxHighlighter, startBlock: anytype) QTextBlock {
        comptime _ = @TypeOf(startBlock)._is_QTextBlock;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd(@ptrCast(self.ptr), @ptrCast(startBlock.ptr)) };
    }

    /// ### DEPRECATED: Use `highlightBlock` instead
    ///
    pub const HighlightBlock = highlightBlock;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn highlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onHighlightBlock` instead
    ///
    pub const OnHighlightBlock = onHighlightBlock;

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
    pub fn onHighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHighlightBlock` instead
    ///
    pub const SuperHighlightBlock = superHighlightBlock;

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
    pub fn superHighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightBlock(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `applyFormat` instead
    ///
    pub const ApplyFormat = applyFormat;

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
    /// ` _format: KSyntaxHighlighting__Format `
    ///
    pub fn applyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onApplyFormat` instead
    ///
    pub const OnApplyFormat = onApplyFormat;

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
    pub fn onApplyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, KSyntaxHighlighting__Format) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApplyFormat` instead
    ///
    pub const SuperApplyFormat = superApplyFormat;

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
    /// ` _format: KSyntaxHighlighting__Format `
    ///
    pub fn superApplyFormat(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_KSyntaxHighlighting__Format;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFormat(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `applyFolding` instead
    ///
    pub const ApplyFolding = applyFolding;

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
    pub fn applyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `onApplyFolding` instead
    ///
    pub const OnApplyFolding = onApplyFolding;

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
    pub fn onApplyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, KSyntaxHighlighting__FoldingRegion) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApplyFolding` instead
    ///
    pub const SuperApplyFolding = superApplyFolding;

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
    pub fn superApplyFolding(self: KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: anytype) void {
        comptime _ = @TypeOf(region)._is_KSyntaxHighlighting__FoldingRegion;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFolding(@ptrCast(self.ptr), @bitCast(offset), @bitCast(length), @ptrCast(region.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

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
    pub fn setDocument(self: KSyntaxHighlighting__SyntaxHighlighter, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn document(self: KSyntaxHighlighting__SyntaxHighlighter) QTextDocument {
        return .{ .ptr = qtc.QSyntaxHighlighter_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rehighlight` instead
    ///
    pub const Rehighlight = rehighlight;

    /// Inherited from QSyntaxHighlighter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn rehighlight(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rehighlightBlock` instead
    ///
    pub const RehighlightBlock = rehighlightBlock;

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
    pub fn rehighlightBlock(self: KSyntaxHighlighting__SyntaxHighlighter, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.objectName: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KSyntaxHighlighting__SyntaxHighlighter, name: []const u8) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn isWidgetType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn isWindowType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn isQuickItemType(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn signalsBlocked(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KSyntaxHighlighting__SyntaxHighlighter, b: bool) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn thread(self: KSyntaxHighlighting__SyntaxHighlighter) QThread {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KSyntaxHighlighting__SyntaxHighlighter, _thread: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KSyntaxHighlighting__SyntaxHighlighter, interval: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KSyntaxHighlighting__SyntaxHighlighter, time: i64) i32 {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KSyntaxHighlighting__SyntaxHighlighter, id: i32) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KSyntaxHighlighting__SyntaxHighlighter, id: i32) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.children: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KSyntaxHighlighting__SyntaxHighlighter, _parent: anytype) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, filterObj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, obj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KSyntaxHighlighting__SyntaxHighlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn disconnect3(self: KSyntaxHighlighting__SyntaxHighlighter) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KSyntaxHighlighting__SyntaxHighlighter, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn dumpObjectTree(self: KSyntaxHighlighting__SyntaxHighlighter) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn dumpObjectInfo(self: KSyntaxHighlighting__SyntaxHighlighter) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KSyntaxHighlighting__SyntaxHighlighter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KSyntaxHighlighting__SyntaxHighlighter, name: [:0]const u8) QVariant {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__SyntaxHighlighter.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn bindingStorage(self: KSyntaxHighlighting__SyntaxHighlighter) QBindingStorage {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn bindingStorage2(self: KSyntaxHighlighting__SyntaxHighlighter) QBindingStorage {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn destroyed(self: KSyntaxHighlighting__SyntaxHighlighter) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter) callconv(.c) void) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn parent(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KSyntaxHighlighting__SyntaxHighlighter, classname: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn deleteLater(self: KSyntaxHighlighting__SyntaxHighlighter) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KSyntaxHighlighting__SyntaxHighlighter, interval: i32, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KSyntaxHighlighting__SyntaxHighlighter, time: i64, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KSyntaxHighlighting__SyntaxHighlighter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KSyntaxHighlighting__SyntaxHighlighter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KSyntaxHighlighting__SyntaxHighlighter, param1: anytype) void {
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `definition` instead
    ///
    pub const Definition = definition;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn definition(self: KSyntaxHighlighting__SyntaxHighlighter) KSyntaxHighlighting__Definition {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn theme(self: KSyntaxHighlighting__SyntaxHighlighter) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QTimerEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QChildEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KSyntaxHighlighting__SyntaxHighlighter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superSetFormat` instead
    ///
    pub const SuperSetFormat = superSetFormat;

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
    /// ` _format: QTextCharFormat `
    ///
    pub fn superSetFormat(self: KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetFormat(@ptrCast(self.ptr), @bitCast(start), @bitCast(count), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat` instead
    ///
    pub const OnSetFormat = onSetFormat;

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
    pub fn onSetFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32, i32, QTextCharFormat) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

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
    pub fn format(self: KSyntaxHighlighting__SyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    pub fn superFormat(self: KSyntaxHighlighting__SyntaxHighlighter, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32) callconv(.c) QTextCharFormat) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `previousBlockState` instead
    ///
    pub const PreviousBlockState = previousBlockState;

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
    pub fn previousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPreviousBlockState` instead
    ///
    pub const SuperPreviousBlockState = superPreviousBlockState;

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
    pub fn superPreviousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperPreviousBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreviousBlockState` instead
    ///
    pub const OnPreviousBlockState = onPreviousBlockState;

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
    pub fn onPreviousBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnPreviousBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlockState` instead
    ///
    pub const CurrentBlockState = currentBlockState;

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
    pub fn currentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCurrentBlockState` instead
    ///
    pub const SuperCurrentBlockState = superCurrentBlockState;

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
    pub fn superCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentBlockState` instead
    ///
    pub const OnCurrentBlockState = onCurrentBlockState;

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
    pub fn onCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentBlockState` instead
    ///
    pub const SetCurrentBlockState = setCurrentBlockState;

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
    pub fn setCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockState` instead
    ///
    pub const SuperSetCurrentBlockState = superSetCurrentBlockState;

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
    pub fn superSetCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockState` instead
    ///
    pub const OnSetCurrentBlockState = onSetCurrentBlockState;

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
    pub fn onSetCurrentBlockState(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, i32) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentBlockUserData` instead
    ///
    pub const SetCurrentBlockUserData = setCurrentBlockUserData;

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
    pub fn setCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `superSetCurrentBlockUserData` instead
    ///
    pub const SuperSetCurrentBlockUserData = superSetCurrentBlockUserData;

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
    pub fn superSetCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onSetCurrentBlockUserData` instead
    ///
    pub const OnSetCurrentBlockUserData = onSetCurrentBlockUserData;

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
    pub fn onSetCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QTextBlockUserData) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlockUserData` instead
    ///
    pub const CurrentBlockUserData = currentBlockUserData;

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
    pub fn currentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCurrentBlockUserData` instead
    ///
    pub const SuperCurrentBlockUserData = superCurrentBlockUserData;

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
    pub fn superCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlockUserData {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockUserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlockUserData` instead
    ///
    pub const OnCurrentBlockUserData = onCurrentBlockUserData;

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
    pub fn onCurrentBlockUserData(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlockUserData) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentBlock` instead
    ///
    pub const CurrentBlock = currentBlock;

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
    pub fn currentBlock(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCurrentBlock` instead
    ///
    pub const SuperCurrentBlock = superCurrentBlock;

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
    pub fn superCurrentBlock(self: KSyntaxHighlighting__SyntaxHighlighter) QTextBlock {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentBlock` instead
    ///
    pub const OnCurrentBlock = onCurrentBlock;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentBlock(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn sender(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn superSender(self: KSyntaxHighlighting__SyntaxHighlighter) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn senderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn superSenderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KSyntaxHighlighting__SyntaxHighlighter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, QMetaMethod) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highlightLine` instead
    ///
    pub const HighlightLine = highlightLine;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    /// ` state: KSyntaxHighlighting__State `
    ///
    pub fn highlightLine(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8, state: anytype) KSyntaxHighlighting__State {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(state)._is_KSyntaxHighlighting__State;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_HighlightLine(@ptrCast(self.ptr), text_str, @ptrCast(state.ptr)) };
    }

    /// ### DEPRECATED: Use `superHighlightLine` instead
    ///
    pub const SuperHighlightLine = superHighlightLine;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` text: []const u8 `
    ///
    /// ` state: KSyntaxHighlighting__State `
    ///
    pub fn superHighlightLine(self: KSyntaxHighlighting__SyntaxHighlighter, text: []const u8, state: anytype) KSyntaxHighlighting__State {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(state)._is_KSyntaxHighlighting__State;
        return .{ .ptr = qtc.KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightLine(@ptrCast(self.ptr), text_str, @ptrCast(state.ptr)) };
    }

    /// ### DEPRECATED: Use `onHighlightLine` instead
    ///
    pub const OnHighlightLine = onHighlightLine;

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, text: [*:0]const u8, state: KSyntaxHighlighting__State) callconv(.c) KSyntaxHighlighting__State `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHighlightLine(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8, KSyntaxHighlighting__State) callconv(.c) KSyntaxHighlighting__State) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnHighlightLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__SyntaxHighlighter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (KSyntaxHighlighting__SyntaxHighlighter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__SyntaxHighlighter `
    ///
    pub fn delete(self: KSyntaxHighlighting__SyntaxHighlighter) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_Delete(@ptrCast(self.ptr));
    }
};
