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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFind object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` _options: isize `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_pattern: []const u8, _options: isize, _parent: anytype) KFind {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KFind_new(pattern_str, @bitCast(_options), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFind object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` _options: isize `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` findDialog: QWidget `
    ///
    pub fn new2(_pattern: []const u8, _options: isize, _parent: anytype, findDialog: anytype) KFind {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(findDialog)._is_QWidget;
        return .{ .ptr = qtc.KFind_new2(pattern_str, @bitCast(_options), @ptrCast(_parent.ptr), @ptrCast(findDialog.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn metaObject(self: KFind) QMetaObject {
        return .{ .ptr = qtc.KFind_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KFind `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KFind, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFind_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    pub fn superMetaObject(self: KFind) QMetaObject {
        return .{ .ptr = qtc.KFind_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KFind, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFind_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFind_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KFind, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFind_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KFind, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFind_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KFind, callback: *const fn (KFind, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFind_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KFind, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFind_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFind.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `needData` instead
    ///
    pub const NeedData = needData;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#needData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn needData(self: KFind) bool {
        return qtc.KFind_NeedData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` data: []const u8 `
    ///
    pub fn setData(self: KFind, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

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
    pub fn setData2(self: KFind, id: i32, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData2(@ptrCast(self.ptr), @bitCast(id), data_str);
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

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
    pub fn find(self: KFind) i32 {
        return qtc.KFind_Find(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn options(self: KFind) isize {
        return qtc.KFind_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` _options: isize `
    ///
    pub fn setOptions(self: KFind, _options: isize) void {
        qtc.KFind_SetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `onSetOptions` instead
    ///
    pub const OnSetOptions = onSetOptions;

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
    pub fn onSetOptions(self: KFind, callback: *const fn (KFind, isize) callconv(.c) void) void {
        qtc.KFind_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOptions` instead
    ///
    pub const SuperSetOptions = superSetOptions;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` _options: isize `
    ///
    pub fn superSetOptions(self: KFind, _options: isize) void {
        qtc.KFind_SuperSetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#pattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: KFind, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFind_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFind.pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPattern` instead
    ///
    pub const SetPattern = setPattern;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#setPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn setPattern(self: KFind, _pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        qtc.KFind_SetPattern(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `numMatches` instead
    ///
    pub const NumMatches = numMatches;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#numMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn numMatches(self: KFind) i32 {
        return qtc.KFind_NumMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetCounts` instead
    ///
    pub const ResetCounts = resetCounts;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn resetCounts(self: KFind) void {
        qtc.KFind_ResetCounts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetCounts` instead
    ///
    pub const OnResetCounts = onResetCounts;

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
    pub fn onResetCounts(self: KFind, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnResetCounts(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetCounts` instead
    ///
    pub const SuperResetCounts = superResetCounts;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn superResetCounts(self: KFind) void {
        qtc.KFind_SuperResetCounts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `validateMatch` instead
    ///
    pub const ValidateMatch = validateMatch;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn validateMatch(self: KFind, text: []const u8, _index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_ValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(_index), @bitCast(matchedlength));
    }

    /// ### DEPRECATED: Use `onValidateMatch` instead
    ///
    pub const OnValidateMatch = onValidateMatch;

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
    pub fn onValidateMatch(self: KFind, callback: *const fn (KFind, [*:0]const u8, i32, i32) callconv(.c) bool) void {
        qtc.KFind_OnValidateMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superValidateMatch` instead
    ///
    pub const SuperValidateMatch = superValidateMatch;

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
    /// ` _index: i32 `
    ///
    /// ` matchedlength: i32 `
    ///
    pub fn superValidateMatch(self: KFind, text: []const u8, _index: i32, matchedlength: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFind_SuperValidateMatch(@ptrCast(self.ptr), text_str, @bitCast(_index), @bitCast(matchedlength));
    }

    /// ### DEPRECATED: Use `shouldRestart` instead
    ///
    pub const ShouldRestart = shouldRestart;

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
    pub fn shouldRestart(self: KFind, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_ShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

    /// ### DEPRECATED: Use `onShouldRestart` instead
    ///
    pub const OnShouldRestart = onShouldRestart;

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
    pub fn onShouldRestart(self: KFind, callback: *const fn (KFind, bool, bool) callconv(.c) bool) void {
        qtc.KFind_OnShouldRestart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShouldRestart` instead
    ///
    pub const SuperShouldRestart = superShouldRestart;

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
    pub fn superShouldRestart(self: KFind, forceAsking: bool, showNumMatches: bool) bool {
        return qtc.KFind_SuperShouldRestart(@ptrCast(self.ptr), forceAsking, showNumMatches);
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _pattern: []const u8 `
    ///
    /// ` _index: i32 `
    ///
    /// ` _options: isize `
    ///
    /// ` matchedLength: *i32 `
    ///
    /// ` rmatch: QRegularExpressionMatch `
    ///
    pub fn find2(text: []const u8, _pattern: []const u8, _index: i32, _options: isize, matchedLength: *i32, rmatch: anytype) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        comptime _ = @TypeOf(rmatch)._is_QRegularExpressionMatch;
        return qtc.KFind_Find2(text_str, pattern_str, @bitCast(_index), @bitCast(_options), @ptrCast(matchedLength), @ptrCast(rmatch.ptr));
    }

    /// ### DEPRECATED: Use `displayFinalDialog` instead
    ///
    pub const DisplayFinalDialog = displayFinalDialog;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn displayFinalDialog(self: KFind) void {
        qtc.KFind_DisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisplayFinalDialog` instead
    ///
    pub const OnDisplayFinalDialog = onDisplayFinalDialog;

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
    pub fn onDisplayFinalDialog(self: KFind, callback: *const fn () callconv(.c) void) void {
        qtc.KFind_OnDisplayFinalDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisplayFinalDialog` instead
    ///
    pub const SuperDisplayFinalDialog = superDisplayFinalDialog;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn superDisplayFinalDialog(self: KFind) void {
        qtc.KFind_SuperDisplayFinalDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findNextDialog` instead
    ///
    pub const FindNextDialog = findNextDialog;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn findNextDialog(self: KFind) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `closeFindNextDialog` instead
    ///
    pub const CloseFindNextDialog = closeFindNextDialog;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn closeFindNextDialog(self: KFind) void {
        qtc.KFind_CloseFindNextDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn index(self: KFind) i32 {
        return qtc.KFind_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textFound` instead
    ///
    pub const TextFound = textFound;

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
    pub fn textFound(self: KFind, text: []const u8, matchingIndex: i32, matchedLength: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFind_TextFound(@ptrCast(self.ptr), text_str, @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// ### DEPRECATED: Use `onTextFound` instead
    ///
    pub const OnTextFound = onTextFound;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, text: [*:0]const u8, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn onTextFound(self: KFind, callback: *const fn (KFind, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textFoundAtId` instead
    ///
    pub const TextFoundAtId = textFoundAtId;

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
    pub fn textFoundAtId(self: KFind, id: i32, matchingIndex: i32, matchedLength: i32) void {
        qtc.KFind_TextFoundAtId(@ptrCast(self.ptr), @bitCast(id), @bitCast(matchingIndex), @bitCast(matchedLength));
    }

    /// ### DEPRECATED: Use `onTextFoundAtId` instead
    ///
    pub const OnTextFoundAtId = onTextFoundAtId;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, id: i32, matchingIndex: i32, matchedLength: i32) callconv(.c) void `
    ///
    pub fn onTextFoundAtId(self: KFind, callback: *const fn (KFind, i32, i32, i32) callconv(.c) void) void {
        qtc.KFind_Connect_TextFoundAtId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findNext` instead
    ///
    pub const FindNext = findNext;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn findNext(self: KFind) void {
        qtc.KFind_FindNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFindNext` instead
    ///
    pub const OnFindNext = onFindNext;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNext)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn onFindNext(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_FindNext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `optionsChanged` instead
    ///
    pub const OptionsChanged = optionsChanged;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn optionsChanged(self: KFind) void {
        qtc.KFind_OptionsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOptionsChanged` instead
    ///
    pub const OnOptionsChanged = onOptionsChanged;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn onOptionsChanged(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_OptionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dialogClosed` instead
    ///
    pub const DialogClosed = dialogClosed;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn dialogClosed(self: KFind) void {
        qtc.KFind_DialogClosed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDialogClosed` instead
    ///
    pub const OnDialogClosed = onDialogClosed;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn onDialogClosed(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
        qtc.KFind_Connect_DialogClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn parentWidget(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onParentWidget` instead
    ///
    pub const OnParentWidget = onParentWidget;

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
    pub fn onParentWidget(self: KFind, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KFind_OnParentWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParentWidget` instead
    ///
    pub const SuperParentWidget = superParentWidget;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn superParentWidget(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_SuperParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dialogsParent` instead
    ///
    pub const DialogsParent = dialogsParent;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn dialogsParent(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_DialogsParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDialogsParent` instead
    ///
    pub const OnDialogsParent = onDialogsParent;

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
    pub fn onDialogsParent(self: KFind, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KFind_OnDialogsParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDialogsParent` instead
    ///
    pub const SuperDialogsParent = superDialogsParent;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    pub fn superDialogsParent(self: KFind) QWidget {
        return .{ .ptr = qtc.KFind_SuperDialogsParent(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFind.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFind.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData22` instead
    ///
    pub const SetData22 = setData22;

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
    pub fn setData22(self: KFind, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData22(@ptrCast(self.ptr), data_str, @bitCast(startPos));
    }

    /// ### DEPRECATED: Use `setData3` instead
    ///
    pub const SetData3 = setData3;

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
    pub fn setData3(self: KFind, id: i32, data: []const u8, startPos: i32) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KFind_SetData3(@ptrCast(self.ptr), @bitCast(id), data_str, @bitCast(startPos));
    }

    /// ### DEPRECATED: Use `findNextDialog1` instead
    ///
    pub const FindNextDialog1 = findNextDialog1;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFind `
    ///
    /// ` create: bool `
    ///
    pub fn findNextDialog1(self: KFind, create: bool) QDialog {
        return .{ .ptr = qtc.KFind_FindNextDialog1(@ptrCast(self.ptr), create) };
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
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KFind, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFind.objectName: Memory allocation failed");
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
    /// ` self: KFind `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KFind, name: []const u8) void {
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
    /// ` self: KFind `
    ///
    pub fn isWidgetType(self: KFind) bool {
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
    /// ` self: KFind `
    ///
    pub fn isWindowType(self: KFind) bool {
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
    /// ` self: KFind `
    ///
    pub fn isQuickItemType(self: KFind) bool {
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
    /// ` self: KFind `
    ///
    pub fn signalsBlocked(self: KFind) bool {
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
    /// ` self: KFind `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KFind, b: bool) bool {
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
    /// ` self: KFind `
    ///
    pub fn thread(self: KFind) QThread {
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
    /// ` self: KFind `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KFind, _thread: anytype) bool {
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
    /// ` self: KFind `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KFind, interval: i32) i32 {
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
    /// ` self: KFind `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KFind, time: i64) i32 {
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
    /// ` self: KFind `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KFind, id: i32) void {
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
    /// ` self: KFind `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KFind, id: i32) void {
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
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KFind, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KFind.children: Memory allocation failed");
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
    /// ` self: KFind `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KFind, _parent: anytype) void {
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
    /// ` self: KFind `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KFind, filterObj: anytype) void {
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
    /// ` self: KFind `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KFind, obj: anytype) void {
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
    /// ` self: KFind `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KFind, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFind `
    ///
    pub fn disconnect3(self: KFind) bool {
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
    /// ` self: KFind `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KFind, receiver: anytype) bool {
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
    /// ` self: KFind `
    ///
    pub fn dumpObjectTree(self: KFind) void {
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
    /// ` self: KFind `
    ///
    pub fn dumpObjectInfo(self: KFind) void {
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
    /// ` self: KFind `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KFind, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFind `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KFind, name: [:0]const u8) QVariant {
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
    /// ` self: KFind `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KFind, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KFind.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFind.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFind `
    ///
    pub fn bindingStorage(self: KFind) QBindingStorage {
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
    /// ` self: KFind `
    ///
    pub fn bindingStorage2(self: KFind) QBindingStorage {
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
    /// ` self: KFind `
    ///
    pub fn destroyed(self: KFind) void {
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
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KFind, callback: *const fn (KFind) callconv(.c) void) void {
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
    /// ` self: KFind `
    ///
    pub fn parent(self: KFind) QObject {
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
    /// ` self: KFind `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KFind, classname: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    pub fn deleteLater(self: KFind) void {
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
    /// ` self: KFind `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KFind, interval: i32, timerType: i32) i32 {
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
    /// ` self: KFind `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KFind, time: i64, timerType: i32) i32 {
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
    /// ` self: KFind `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KFind, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KFind, signal: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KFind, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KFind, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KFind, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFind `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KFind, param1: anytype) void {
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
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KFind, callback: *const fn (KFind, QObject) callconv(.c) void) void {
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
    /// ` self: KFind `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KFind, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFind_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KFind, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFind_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KFind, callback: *const fn (KFind, QEvent) callconv(.c) bool) void {
        qtc.KFind_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KFind, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFind_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KFind, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFind_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KFind, callback: *const fn (KFind, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFind_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KFind_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KFind_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KFind, callback: *const fn (KFind, QTimerEvent) callconv(.c) void) void {
        qtc.KFind_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KFind_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KFind_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KFind, callback: *const fn (KFind, QChildEvent) callconv(.c) void) void {
        qtc.KFind_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KFind_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KFind, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KFind_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KFind, callback: *const fn (KFind, QEvent) callconv(.c) void) void {
        qtc.KFind_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) void) void {
        qtc.KFind_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KFind, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFind_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) void) void {
        qtc.KFind_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    pub fn sender(self: KFind) QObject {
        return .{ .ptr = qtc.KFind_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFind `
    ///
    pub fn superSender(self: KFind) QObject {
        return .{ .ptr = qtc.KFind_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KFind, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFind_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    pub fn senderSignalIndex(self: KFind) i32 {
        return qtc.KFind_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFind `
    ///
    pub fn superSenderSignalIndex(self: KFind) i32 {
        return qtc.KFind_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KFind, callback: *const fn () callconv(.c) i32) void {
        qtc.KFind_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KFind, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFind `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KFind, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFind_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFind_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KFind, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFind_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KFind, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFind_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFind`
    ///
    /// ` callback: *const fn (self: KFind, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KFind, callback: *const fn (KFind, QMetaMethod) callconv(.c) bool) void {
        qtc.KFind_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFind `
    ///
    /// ` callback: *const fn (self: KFind, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KFind, callback: *const fn (KFind, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfind.html#dtor.KFind)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFind `
    ///
    pub fn delete(self: KFind) void {
        qtc.KFind_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfind.html#public-types)
pub const enums = struct {
    pub const Options = enum {
        pub const WholeWordsOnly: i32 = 1;
        pub const FromCursor: i32 = 2;
        pub const SelectedText: i32 = 4;
        pub const CaseSensitive: i32 = 8;
        pub const FindBackwards: i32 = 16;
        pub const RegularExpression: i32 = 32;
        pub const FindIncremental: i32 = 64;
        pub const MinimumUserOption: i32 = 65536;
    };

    pub const Result = enum {
        pub const NoMatch: i32 = 0;
        pub const Match: i32 = 1;
    };
};
