const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDialog = @import("libqt6").QDialog;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRegularExpressionMatch = @import("libqt6").QRegularExpressionMatch;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kfind_enums = @import("libkfind.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kreplace.html)
pub const KReplace = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kreplace.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KReplace,

    pub const _is_KReplace = {};
    pub const _is_KFind = {};
    pub const _is_QObject = {};

    /// New constructs a new KReplace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` replacement: []const u8 `
    ///
    /// ` options: isize `
    ///
    pub fn New(pattern: []const u8, replacement: []const u8, options: isize) KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        return .{ .ptr = qtc.KReplace_new(pattern_str, replacement_str, @bitCast(options)) };
    }

    /// New2 constructs a new KReplace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` replacement: []const u8 `
    ///
    /// ` options: isize `
    ///
    /// ` parent: QWidget `
    ///
    /// ` replaceDialog: QWidget `
    ///
    pub fn New2(pattern: []const u8, replacement: []const u8, options: isize, parent: anytype, replaceDialog: anytype) KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(replaceDialog)._is_QWidget;
        return .{ .ptr = qtc.KReplace_new2(pattern_str, replacement_str, @bitCast(options), @ptrCast(parent.ptr), @ptrCast(replaceDialog.ptr)) };
    }

    /// New3 constructs a new KReplace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` replacement: []const u8 `
    ///
    /// ` options: isize `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New3(pattern: []const u8, replacement: []const u8, options: isize, parent: anytype) KReplace {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KReplace_new3(pattern_str, replacement_str, @bitCast(options), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn MetaObject(self: KReplace) QMetaObject {
        return .{ .ptr = qtc.KReplace_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KReplace, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KReplace_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KReplace `
    ///
    pub fn SuperMetaObject(self: KReplace) QMetaObject {
        return .{ .ptr = qtc.KReplace_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KReplace, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KReplace_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KReplace, callback: *const fn (KReplace, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KReplace_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KReplace, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KReplace_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KReplace, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KReplace_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KReplace, callback: *const fn (KReplace, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KReplace_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KReplace, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KReplace_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#numReplacements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn NumReplacements(self: KReplace) i32 {
        return qtc.KReplace_NumReplacements(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn ResetCounts(self: KReplace) void {
        qtc.KReplace_ResetCounts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetCounts(self: KReplace, callback: *const fn () callconv(.c) void) void {
        qtc.KReplace_OnResetCounts(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetCounts` instead
    ///
    pub const QBaseResetCounts = SuperResetCounts;

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SuperResetCounts(self: KReplace) void {
        qtc.KReplace_SuperResetCounts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ## Returns:
    ///
    /// ` kfind_enums.Result `
    ///
    pub fn Replace(self: KReplace) i32 {
        return qtc.KReplace_Replace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#replaceNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn ReplaceNextDialog(self: KReplace) QDialog {
        return .{ .ptr = qtc.KReplace_ReplaceNextDialog(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#closeReplaceNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn CloseReplaceNextDialog(self: KReplace) void {
        qtc.KReplace_CloseReplaceNextDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` replacement: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` options: isize `
    ///
    /// ` replacedLength: *i32 `
    ///
    pub fn Replace2(text: []const u8, pattern: []const u8, replacement: []const u8, index: i32, options: isize, replacedLength: *i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const replacement_str = qtc.libqt_string{
            .len = replacement.len,
            .data = replacement.ptr,
        };
        return qtc.KReplace_Replace2(text_str, pattern_str, replacement_str, @bitCast(index), @bitCast(options), @ptrCast(replacedLength));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` forceAsking: bool `
    ///
    /// ` showNumMatches: bool `
    ///
    pub fn ShouldRestart(self: KReplace, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KReplace_ShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, forceAsking: bool, showNumMatches: bool) callconv(.c) bool `
    ///
    pub fn OnShouldRestart(self: KReplace, callback: *const fn (KReplace, bool, bool) callconv(.c) bool) void {
        qtc.KReplace_OnShouldRestart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldRestart` instead
    ///
    pub const QBaseShouldRestart = SuperShouldRestart;

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` forceAsking: bool `
    ///
    /// ` showNumMatches: bool `
    ///
    pub fn SuperShouldRestart(self: KReplace, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KReplace_SuperShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn DisplayFinalDialog(self: KReplace) void {
        qtc.KReplace_DisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisplayFinalDialog(self: KReplace, callback: *const fn () callconv(.c) void) void {
        qtc.KReplace_OnDisplayFinalDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisplayFinalDialog` instead
    ///
    pub const QBaseDisplayFinalDialog = SuperDisplayFinalDialog;

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SuperDisplayFinalDialog(self: KReplace) void {
        qtc.KReplace_SuperDisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#textReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` text: []const u8 `
    ///
    /// ` replacementIndex: i32 `
    ///
    /// ` replacedLength: i32 `
    ///
    /// ` matchedLength: i32 `
    ///
    pub fn TextReplaced(self: KReplace, text: []const u8, replacementIndex: i32, replacedLength: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KReplace_TextReplaced(@ptrCast(self.ptr), text_str, @bitCast(replacementIndex), @bitCast(replacedLength), @bitCast(matchedLength));
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#textReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, text: [*:0]const u8, replacementIndex: i32, replacedLength: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn OnTextReplaced(self: KReplace, callback: *const fn (KReplace, [*:0]const u8, i32, i32, i32) callconv(.c) void) void {
        qtc.KReplace_Connect_TextReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#replaceNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` create: bool `
    ///
    pub fn ReplaceNextDialog1(self: KReplace, create: bool) QDialog {
        return .{ .ptr = qtc.KReplace_ReplaceNextDialog1(@ptrCast(self.ptr), create) };
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#needData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn NeedData(self: KReplace) bool {
        return qtc.KFind_NeedData(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: KReplace, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` id: i32 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData2(self: KReplace, id: i32, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData2(@ptrCast(self.ptr), @bitCast(id), data_str);
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ## Returns:
    ///
    /// ` kfind_enums.Result `
    ///
    pub fn Find(self: KReplace) i32 {
        return qtc.KFind_Find(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Options(self: KReplace) isize {
        return qtc.KFind_Options(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: KReplace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFind_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetPattern(self: KReplace, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KFind_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#numMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn NumMatches(self: KReplace) i32 {
        return qtc.KFind_NumMatches(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` options: isize `
    ///
    /// ` matchedLength: *i32 `
    ///
    /// ` rmatch: QRegularExpressionMatch `
    ///
    pub fn Find2(text: []const u8, pattern: []const u8, index: i32, options: isize, matchedLength: *i32, rmatch: anytype) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        comptime _ = @TypeOf(rmatch)._is_QRegularExpressionMatch;
        return qtc.KFind_Find2(text_str, pattern_str, @bitCast(index), @bitCast(options), @ptrCast(matchedLength), @ptrCast(rmatch.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn FindNextDialog(self: KReplace) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog(@ptrCast(self.ptr)) };
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn CloseFindNextDialog(self: KReplace) void {
        qtc.KFind_CloseFindNextDialog(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Index(self: KReplace) i32 {
        return qtc.KFind_Index(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` text: []const u8 `
    ///
    /// ` matchingIndex: i32 `
    ///
    /// ` matchedLength: i32 `
    ///
    pub fn TextFound(self: KReplace, text: []const u8, matchingIndex: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFind_TextFound(@ptrCast(self.ptr), text_str, @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, text: [*:0]const u8, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn OnTextFound(self: KReplace, callback: *const fn (KReplace, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` id: i32 `
    ///
    /// ` matchingIndex: i32 `
    ///
    /// ` matchedLength: i32 `
    ///
    pub fn TextFoundAtId(self: KReplace, id: i32, matchingIndex: i32, matchedLength: i32) void {
        qtc.KFind_TextFoundAtId(@ptrCast(self.ptr), @bitCast(id), @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, id: i32, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn OnTextFoundAtId(self: KReplace, callback: *const fn (KReplace, i32, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFoundAtId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn FindNext(self: KReplace) void {
        qtc.KFind_FindNext(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace) callconv(.c) void `
    ///
    pub fn OnFindNext(self: KReplace, callback: *const fn (KReplace) callconv(.c) void) void {
        qtc.KFind_Connect_FindNext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn OptionsChanged(self: KReplace) void {
        qtc.KFind_OptionsChanged(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace) callconv(.c) void `
    ///
    pub fn OnOptionsChanged(self: KReplace, callback: *const fn (KReplace) callconv(.c) void) void {
        qtc.KFind_Connect_OptionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn DialogClosed(self: KReplace) void {
        qtc.KFind_DialogClosed(@ptrCast(self.ptr));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace) callconv(.c) void `
    ///
    pub fn OnDialogClosed(self: KReplace, callback: *const fn (KReplace) callconv(.c) void) void {
        qtc.KFind_Connect_DialogClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` data: []const u8 `
    ///
    /// ` startPos: i32 `
    ///
    pub fn SetData22(self: KReplace, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData22(@ptrCast(self.ptr), data_str, @bitCast(startPos));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` id: i32 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` startPos: i32 `
    ///
    pub fn SetData3(self: KReplace, id: i32, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData3(@ptrCast(self.ptr), @bitCast(id), data_str, @bitCast(startPos));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` create: bool `
    ///
    pub fn FindNextDialog1(self: KReplace, create: bool) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog1(@ptrCast(self.ptr), create) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KReplace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kreplace.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KReplace, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn IsWidgetType(self: KReplace) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn IsWindowType(self: KReplace) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn IsQuickItemType(self: KReplace) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SignalsBlocked(self: KReplace) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KReplace, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Thread(self: KReplace) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KReplace, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KReplace, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KReplace, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KReplace, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KReplace, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KReplace, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kreplace.Children: Memory allocation failed");
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
    /// ` self: KReplace `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KReplace, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KReplace, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KReplace, obj: anytype) void {
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
    /// ` self: KReplace `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KReplace, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KReplace `
    ///
    pub fn Disconnect3(self: KReplace) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KReplace, receiver: anytype) bool {
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
    /// ` self: KReplace `
    ///
    pub fn DumpObjectTree(self: KReplace) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn DumpObjectInfo(self: KReplace) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KReplace, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KReplace `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KReplace, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KReplace, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kreplace.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kreplace.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KReplace `
    ///
    pub fn BindingStorage(self: KReplace) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn BindingStorage2(self: KReplace) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Destroyed(self: KReplace) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KReplace, callback: *const fn (KReplace) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Parent(self: KReplace) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KReplace, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn DeleteLater(self: KReplace) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KReplace, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KReplace, time: i64, timerType: i32) i32 {
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
    /// ` self: KReplace `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KReplace, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KReplace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KReplace, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KReplace, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KReplace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KReplace, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KReplace `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KReplace, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KReplace `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KReplace, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KReplace, callback: *const fn (KReplace, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` options: isize `
    ///
    pub fn SetOptions(self: KReplace, options: isize) void {
        qtc.KReplace_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `SuperSetOptions` instead
    ///
    pub const QBaseSetOptions = SuperSetOptions;

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` options: isize `
    ///
    pub fn SuperSetOptions(self: KReplace, options: isize) void {
        qtc.KReplace_SuperSetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, options: isize) callconv(.c) void `
    ///
    pub fn OnSetOptions(self: KReplace, callback: *const fn (KReplace, isize) callconv(.c) void) void {
        qtc.KReplace_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` text: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn ValidateMatch(self: KReplace, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KReplace_ValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(index), @bitCast(matchedlength));
    }

    /// ### DEPRECATED: Use `SuperValidateMatch` instead
    ///
    pub const QBaseValidateMatch = SuperValidateMatch;

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` text: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn SuperValidateMatch(self: KReplace, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KReplace_SuperValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(index), @bitCast(matchedlength));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, text: [*:0]const u8, index: i32, matchedlength: i32) callconv(.c) bool `
    ///
    pub fn OnValidateMatch(self: KReplace, callback: *const fn (KReplace, [*:0]const u8, i32, i32) callconv(.c) bool) void {
        qtc.KReplace_OnValidateMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KReplace, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KReplace_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KReplace, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KReplace_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KReplace, callback: *const fn (KReplace, QEvent) callconv(.c) bool) void {
        qtc.KReplace_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KReplace, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KReplace_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KReplace, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KReplace_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KReplace, callback: *const fn (KReplace, QObject, QEvent) callconv(.c) bool) void {
        qtc.KReplace_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KReplace_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KReplace_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KReplace, callback: *const fn (KReplace, QTimerEvent) callconv(.c) void) void {
        qtc.KReplace_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KReplace_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KReplace_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KReplace, callback: *const fn (KReplace, QChildEvent) callconv(.c) void) void {
        qtc.KReplace_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KReplace_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KReplace, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KReplace_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KReplace, callback: *const fn (KReplace, QEvent) callconv(.c) void) void {
        qtc.KReplace_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KReplace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KReplace_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KReplace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KReplace_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KReplace, callback: *const fn (KReplace, QMetaMethod) callconv(.c) void) void {
        qtc.KReplace_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KReplace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KReplace_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KReplace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KReplace_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KReplace, callback: *const fn (KReplace, QMetaMethod) callconv(.c) void) void {
        qtc.KReplace_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn ParentWidget(self: KReplace) QWidget {
        return .{ .ptr = qtc.KReplace_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperParentWidget` instead
    ///
    pub const QBaseParentWidget = SuperParentWidget;

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SuperParentWidget(self: KReplace) QWidget {
        return .{ .ptr = qtc.KReplace_SuperParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnParentWidget(self: KReplace, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KReplace_OnParentWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn DialogsParent(self: KReplace) QWidget {
        return .{ .ptr = qtc.KReplace_DialogsParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDialogsParent` instead
    ///
    pub const QBaseDialogsParent = SuperDialogsParent;

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SuperDialogsParent(self: KReplace) QWidget {
        return .{ .ptr = qtc.KReplace_SuperDialogsParent(@ptrCast(self.ptr)) };
    }

    /// Inherited from KFind
    ///
    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnDialogsParent(self: KReplace, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KReplace_OnDialogsParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn Sender(self: KReplace) QObject {
        return .{ .ptr = qtc.KReplace_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KReplace `
    ///
    pub fn SuperSender(self: KReplace) QObject {
        return .{ .ptr = qtc.KReplace_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KReplace, callback: *const fn () callconv(.c) QObject) void {
        qtc.KReplace_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    pub fn SenderSignalIndex(self: KReplace) i32 {
        return qtc.KReplace_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KReplace `
    ///
    pub fn SuperSenderSignalIndex(self: KReplace) i32 {
        return qtc.KReplace_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KReplace, callback: *const fn () callconv(.c) i32) void {
        qtc.KReplace_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KReplace, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KReplace_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KReplace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KReplace, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KReplace_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KReplace, callback: *const fn (KReplace, [*:0]const u8) callconv(.c) i32) void {
        qtc.KReplace_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KReplace, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KReplace_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KReplace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KReplace, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KReplace_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace`
    ///
    /// ` callback: *const fn (self: KReplace, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KReplace, callback: *const fn (KReplace, QMetaMethod) callconv(.c) bool) void {
        qtc.KReplace_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KReplace `
    ///
    /// ` callback: *const fn (self: KReplace, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KReplace, callback: *const fn (KReplace, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kreplace.html#dtor.KReplace)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KReplace `
    ///
    pub fn Delete(self: KReplace) void {
        qtc.KReplace_Delete(@ptrCast(self.ptr));
    }
};
