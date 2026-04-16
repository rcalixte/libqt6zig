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
const kfind_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfind.html)
pub const KFind = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfind.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFind,

    pub const _is_KFind = {};
    pub const _is_QObject = {};

    /// New constructs a new KFind object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` options: isize `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(pattern: []const u8, options: isize, parent: anytype) KFind {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KFind_new(pattern_str, @bitCast(options), @ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KFind object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` options: isize `
    ///
    /// ` parent: QWidget `
    ///
    /// ` findDialog: QWidget `
    ///
    pub fn New2(pattern: []const u8, options: isize, parent: anytype, findDialog: anytype) KFind {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(findDialog)._is_QWidget;
        return .{ .ptr = qtc.KFind_new2(pattern_str, @bitCast(options), @ptrCast(parent.ptr), @ptrCast(findDialog.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn MetaObject(self: KFind) QMetaObject {
        return .{ .ptr = qtc.KFind_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KFind, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFind_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    pub fn SuperMetaObject(self: KFind) QMetaObject {
        return .{ .ptr = qtc.KFind_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KFind, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFind_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFind_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KFind, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFind_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KFind, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFind_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KFind, callback: *const fn (KFind, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFind_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KFind, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFind_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#needData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn NeedData(self: KFind) bool {
        return qtc.KFind_NeedData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: KFind, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` id: i32 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData2(self: KFind, id: i32, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData2(@ptrCast(self.ptr), @bitCast(id), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ## Returns:
    ///
    /// ` kfind_enums.Result `
    ///
    pub fn Find(self: KFind) i32 {
        return qtc.KFind_Find(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Options(self: KFind) isize {
        return qtc.KFind_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` options: isize `
    ///
    pub fn SetOptions(self: KFind, options: isize) void {
        qtc.KFind_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, options: isize) callconv(.c) void `
    ///
    pub fn OnSetOptions(self: KFind, callback: *const fn (KFind, isize) callconv(.c) void) void {
        qtc.KFind_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOptions` instead
    ///
    pub const QBaseSetOptions = SuperSetOptions;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` options: isize `
    ///
    pub fn SuperSetOptions(self: KFind, options: isize) void {
        qtc.KFind_SuperSetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pattern(self: KFind, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFind_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetPattern(self: KFind, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KFind_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#numMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn NumMatches(self: KFind) i32 {
        return qtc.KFind_NumMatches(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn ResetCounts(self: KFind) void {
        qtc.KFind_ResetCounts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetCounts(self: KFind, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnResetCounts(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetCounts` instead
    ///
    pub const QBaseResetCounts = SuperResetCounts;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SuperResetCounts(self: KFind) void {
        qtc.KFind_SuperResetCounts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` text: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn ValidateMatch(self: KFind, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_ValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(index), @bitCast(matchedlength));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, text: [*:0]const u8, index: i32, matchedlength: i32) callconv(.c) bool `
    ///
    pub fn OnValidateMatch(self: KFind, callback: *const fn (KFind, [*:0]const u8, i32, i32) callconv(.c) bool) void {
        qtc.KFind_OnValidateMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValidateMatch` instead
    ///
    pub const QBaseValidateMatch = SuperValidateMatch;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` text: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn SuperValidateMatch(self: KFind, text: []const u8, index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_SuperValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(index), @bitCast(matchedlength));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` forceAsking: bool `
    ///
    /// ` showNumMatches: bool `
    ///
    pub fn ShouldRestart(self: KFind, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_ShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, forceAsking: bool, showNumMatches: bool) callconv(.c) bool `
    ///
    pub fn OnShouldRestart(self: KFind, callback: *const fn (KFind, bool, bool) callconv(.c) bool) void {
        qtc.KFind_OnShouldRestart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShouldRestart` instead
    ///
    pub const QBaseShouldRestart = SuperShouldRestart;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` forceAsking: bool `
    ///
    /// ` showNumMatches: bool `
    ///
    pub fn SuperShouldRestart(self: KFind, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_SuperShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

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

    /// ### [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn DisplayFinalDialog(self: KFind) void {
        qtc.KFind_DisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisplayFinalDialog(self: KFind, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnDisplayFinalDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisplayFinalDialog` instead
    ///
    pub const QBaseDisplayFinalDialog = SuperDisplayFinalDialog;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SuperDisplayFinalDialog(self: KFind) void {
        qtc.KFind_SuperDisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn FindNextDialog(self: KFind) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn CloseFindNextDialog(self: KFind) void {
        qtc.KFind_CloseFindNextDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Index(self: KFind) i32 {
        return qtc.KFind_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` text: []const u8 `
    ///
    /// ` matchingIndex: i32 `
    ///
    /// ` matchedLength: i32 `
    ///
    pub fn TextFound(self: KFind, text: []const u8, matchingIndex: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFind_TextFound(@ptrCast(self.ptr), text_str, @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, text: [*:0]const u8, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn OnTextFound(self: KFind, callback: *const fn (KFind, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` id: i32 `
    ///
    /// ` matchingIndex: i32 `
    ///
    /// ` matchedLength: i32 `
    ///
    pub fn TextFoundAtId(self: KFind, id: i32, matchingIndex: i32, matchedLength: i32) void {
        qtc.KFind_TextFoundAtId(@ptrCast(self.ptr), @bitCast(id), @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, id: i32, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn OnTextFoundAtId(self: KFind, callback: *const fn (KFind, i32, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFoundAtId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn FindNext(self: KFind) void {
        qtc.KFind_FindNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn OnFindNext(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_FindNext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn OptionsChanged(self: KFind) void {
        qtc.KFind_OptionsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn OnOptionsChanged(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_OptionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn DialogClosed(self: KFind) void {
        qtc.KFind_DialogClosed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn OnDialogClosed(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_DialogClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn ParentWidget(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnParentWidget(self: KFind, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KFind_OnParentWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParentWidget` instead
    ///
    pub const QBaseParentWidget = SuperParentWidget;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SuperParentWidget(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_SuperParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn DialogsParent(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_DialogsParent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnDialogsParent(self: KFind, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KFind_OnDialogsParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDialogsParent` instead
    ///
    pub const QBaseDialogsParent = SuperDialogsParent;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SuperDialogsParent(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_SuperDialogsParent(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` data: []const u8 `
    ///
    /// ` startPos: i32 `
    ///
    pub fn SetData22(self: KFind, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData22(@ptrCast(self.ptr), data_str, @bitCast(startPos));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` id: i32 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` startPos: i32 `
    ///
    pub fn SetData3(self: KFind, id: i32, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData3(@ptrCast(self.ptr), @bitCast(id), data_str, @bitCast(startPos));
    }

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` create: bool `
    ///
    pub fn FindNextDialog1(self: KFind, create: bool) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog1(@ptrCast(self.ptr), create) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KFind, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfind.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KFind, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn IsWidgetType(self: KFind) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn IsWindowType(self: KFind) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn IsQuickItemType(self: KFind) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SignalsBlocked(self: KFind) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KFind, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Thread(self: KFind) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KFind, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KFind, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KFind, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KFind, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KFind, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KFind, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kfind.Children: Memory allocation failed");
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
    /// ` self: KFind `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KFind, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KFind, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KFind, obj: anytype) void {
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
    /// ` self: KFind `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KFind, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFind `
    ///
    pub fn Disconnect3(self: KFind) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KFind, receiver: anytype) bool {
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
    /// ` self: KFind `
    ///
    pub fn DumpObjectTree(self: KFind) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn DumpObjectInfo(self: KFind) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KFind, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFind `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KFind, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KFind, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfind.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfind.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFind `
    ///
    pub fn BindingStorage(self: KFind) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn BindingStorage2(self: KFind) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Destroyed(self: KFind) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Parent(self: KFind) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KFind, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn DeleteLater(self: KFind) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KFind, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KFind, time: i64, timerType: i32) i32 {
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
    /// ` self: KFind `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KFind, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KFind, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KFind, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KFind, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KFind, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KFind, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KFind, callback: *const fn (KFind, QObject) callconv(.c) void) void {
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
    /// ` self: KFind `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KFind, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFind_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KFind, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFind_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KFind, callback: *const fn (KFind, QEvent) callconv(.c) bool) void {
        qtc.KFind_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KFind, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFind_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KFind, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFind_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KFind, callback: *const fn (KFind, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFind_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFind_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFind_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KFind, callback: *const fn (KFind, QTimerEvent) callconv(.c) void) void {
        qtc.KFind_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFind_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFind_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KFind, callback: *const fn (KFind, QChildEvent) callconv(.c) void) void {
        qtc.KFind_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFind_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KFind, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFind_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KFind, callback: *const fn (KFind, QEvent) callconv(.c) void) void {
        qtc.KFind_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) void) void {
        qtc.KFind_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) void) void {
        qtc.KFind_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn Sender(self: KFind) QObject {
        return .{ .ptr = qtc.KFind_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFind `
    ///
    pub fn SuperSender(self: KFind) QObject {
        return .{ .ptr = qtc.KFind_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KFind, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFind_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn SenderSignalIndex(self: KFind) i32 {
        return qtc.KFind_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFind `
    ///
    pub fn SuperSenderSignalIndex(self: KFind) i32 {
        return qtc.KFind_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KFind, callback: *const fn () callconv(.c) i32) void {
        qtc.KFind_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KFind, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KFind, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFind_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KFind, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFind_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KFind, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFind_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) bool) void {
        qtc.KFind_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dtor.KFind)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFind `
    ///
    pub fn Delete(self: KFind) void {
        qtc.KFind_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfind.html#public-types)
pub const enums = struct {
    pub const Options = enum(i32) {
        pub const WholeWordsOnly: i32 = 1;
        pub const FromCursor: i32 = 2;
        pub const SelectedText: i32 = 4;
        pub const CaseSensitive: i32 = 8;
        pub const FindBackwards: i32 = 16;
        pub const RegularExpression: i32 = 32;
        pub const FindIncremental: i32 = 64;
        pub const MinimumUserOption: i32 = 65536;
    };

    pub const Result = enum(i32) {
        pub const NoMatch: i32 = 0;
        pub const Match: i32 = 1;
    };
};
