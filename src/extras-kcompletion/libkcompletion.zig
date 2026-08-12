const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletionMatches = @import("libqt6").KCompletionMatches;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kcompletion_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcompletion.html)
pub const KCompletion = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCompletion,

    pub const _is_KCompletion = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCompletion object in C++ memory
    ///
    pub fn new() KCompletion {
        return .{ .ptr = qtc.KCompletion_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn metaObject(self: KCompletion) QMetaObject {
        return .{ .ptr = qtc.KCompletion_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCompletion, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCompletion_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    pub fn superMetaObject(self: KCompletion) QMetaObject {
        return .{ .ptr = qtc.KCompletion_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompletion_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCompletion_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompletion_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompletion_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCompletion, callback: *const fn (KCompletion, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCompletion_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompletion_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `substringCompletion` instead
    ///
    pub const SubstringCompletion = substringCompletion;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn substringCompletion(self: KCompletion, allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self.ptr), string_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletion.substringCompletion: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletion.substringCompletion: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `lastMatch` instead
    ///
    pub const LastMatch = lastMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_LastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.lastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLastMatch` instead
    ///
    pub const OnLastMatch = onLastMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLastMatch(self: KCompletion, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnLastMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastMatch` instead
    ///
    pub const SuperLastMatch = superLastMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superLastMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_SuperLastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.lastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletion.items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletion.items: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn isEmpty(self: KCompletion) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompletionMode` instead
    ///
    pub const SetCompletionMode = setCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn setCompletionMode(self: KCompletion, mode: i32) void {
        qtc.KCompletion_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetCompletionMode` instead
    ///
    pub const OnSetCompletionMode = onSetCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, mode: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn onSetCompletionMode(self: KCompletion, callback: *const fn (KCompletion, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompletionMode` instead
    ///
    pub const SuperSetCompletionMode = superSetCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn superSetCompletionMode(self: KCompletion, mode: i32) void {
        qtc.KCompletion_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `completionMode` instead
    ///
    pub const CompletionMode = completionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompletionMode `
    ///
    pub fn completionMode(self: KCompletion) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrder` instead
    ///
    pub const SetOrder = setOrder;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _order: kcompletion_enums.CompOrder `
    ///
    pub fn setOrder(self: KCompletion, _order: i32) void {
        qtc.KCompletion_SetOrder(@ptrCast(self.ptr), @bitCast(_order));
    }

    /// ### DEPRECATED: Use `onSetOrder` instead
    ///
    pub const OnSetOrder = onSetOrder;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, order: kcompletion_enums.CompOrder) callconv(.c) void `
    ///
    pub fn onSetOrder(self: KCompletion, callback: *const fn (KCompletion, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOrder` instead
    ///
    pub const SuperSetOrder = superSetOrder;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _order: kcompletion_enums.CompOrder `
    ///
    pub fn superSetOrder(self: KCompletion, _order: i32) void {
        qtc.KCompletion_SuperSetOrder(@ptrCast(self.ptr), @bitCast(_order));
    }

    /// ### DEPRECATED: Use `order` instead
    ///
    pub const Order = order;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#order)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompOrder `
    ///
    pub fn order(self: KCompletion) i32 {
        return qtc.KCompletion_Order(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIgnoreCase` instead
    ///
    pub const SetIgnoreCase = setIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _ignoreCase: bool `
    ///
    pub fn setIgnoreCase(self: KCompletion, _ignoreCase: bool) void {
        qtc.KCompletion_SetIgnoreCase(@ptrCast(self.ptr), _ignoreCase);
    }

    /// ### DEPRECATED: Use `onSetIgnoreCase` instead
    ///
    pub const OnSetIgnoreCase = onSetIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, ignoreCase: bool) callconv(.c) void `
    ///
    pub fn onSetIgnoreCase(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIgnoreCase` instead
    ///
    pub const SuperSetIgnoreCase = superSetIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _ignoreCase: bool `
    ///
    pub fn superSetIgnoreCase(self: KCompletion, _ignoreCase: bool) void {
        qtc.KCompletion_SuperSetIgnoreCase(@ptrCast(self.ptr), _ignoreCase);
    }

    /// ### DEPRECATED: Use `ignoreCase` instead
    ///
    pub const IgnoreCase = ignoreCase;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn ignoreCase(self: KCompletion) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shouldAutoSuggest` instead
    ///
    pub const ShouldAutoSuggest = shouldAutoSuggest;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn shouldAutoSuggest(self: KCompletion) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allMatches` instead
    ///
    pub const AllMatches = allMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allMatches(self: KCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletion.allMatches: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletion.allMatches: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allMatches2` instead
    ///
    pub const AllMatches2 = allMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn allMatches2(self: KCompletion, allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self.ptr), string_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCompletion.allMatches2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletion.allMatches2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allWeightedMatches` instead
    ///
    pub const AllWeightedMatches = allWeightedMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn allWeightedMatches(self: KCompletion) KCompletionMatches {
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `allWeightedMatches2` instead
    ///
    pub const AllWeightedMatches2 = allWeightedMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` string: []const u8 `
    ///
    pub fn allWeightedMatches2(self: KCompletion, string: []const u8) KCompletionMatches {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches2(@ptrCast(self.ptr), string_str) };
    }

    /// ### DEPRECATED: Use `setSoundsEnabled` instead
    ///
    pub const SetSoundsEnabled = setSoundsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` enable: bool `
    ///
    pub fn setSoundsEnabled(self: KCompletion, enable: bool) void {
        qtc.KCompletion_SetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSetSoundsEnabled` instead
    ///
    pub const OnSetSoundsEnabled = onSetSoundsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, enable: bool) callconv(.c) void `
    ///
    pub fn onSetSoundsEnabled(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetSoundsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSoundsEnabled` instead
    ///
    pub const SuperSetSoundsEnabled = superSetSoundsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` enable: bool `
    ///
    pub fn superSetSoundsEnabled(self: KCompletion, enable: bool) void {
        qtc.KCompletion_SuperSetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `soundsEnabled` instead
    ///
    pub const SoundsEnabled = soundsEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn soundsEnabled(self: KCompletion) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasMultipleMatches` instead
    ///
    pub const HasMultipleMatches = hasMultipleMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn hasMultipleMatches(self: KCompletion) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeCompletion` instead
    ///
    pub const MakeCompletion = makeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn makeCompletion(self: KCompletion, allocator: std.mem.Allocator, string: []const u8) []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        var _str = qtc.KCompletion_MakeCompletion(@ptrCast(self.ptr), string_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.makeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onMakeCompletion` instead
    ///
    pub const OnMakeCompletion = onMakeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, string: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onMakeCompletion(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMakeCompletion` instead
    ///
    pub const SuperMakeCompletion = superMakeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn superMakeCompletion(self: KCompletion, allocator: std.mem.Allocator, string: []const u8) []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        var _str = qtc.KCompletion_SuperMakeCompletion(@ptrCast(self.ptr), string_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.makeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `previousMatch` instead
    ///
    pub const PreviousMatch = previousMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previousMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_PreviousMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.previousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextMatch` instead
    ///
    pub const NextMatch = nextMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_NextMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.nextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `insertItems` instead
    ///
    pub const InsertItems = insertItems;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _items: []const []const u8 `
    ///
    pub fn insertItems(self: KCompletion, allocator: std.mem.Allocator, _items: []const []const u8) void {
        const items_arr = allocator.alloc(qtc.libqt_string, _items.len) catch @panic("KCompletion.insertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (_items, 0.._items.len) |str_item, i|
            items_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` itemList: []const []const u8 `
    ///
    pub fn setItems(self: KCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("KCompletion.setItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |str_item, i|
            itemList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_SetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### DEPRECATED: Use `onSetItems` instead
    ///
    pub const OnSetItems = onSetItems;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, itemList: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetItems(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnSetItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetItems` instead
    ///
    pub const SuperSetItems = superSetItems;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` itemList: []const []const u8 `
    ///
    pub fn superSetItems(self: KCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("KCompletion.setItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |str_item, i|
            itemList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_SuperSetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn addItem(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    /// ` weight: u32 `
    ///
    pub fn addItem2(self: KCompletion, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self.ptr), item_str, @bitCast(weight));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn removeItem(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn clear(self: KCompletion) void {
        qtc.KCompletion_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClear(self: KCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KCompletion_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn superClear(self: KCompletion) void {
        qtc.KCompletion_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn match(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, item: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMatch(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` matchlist: []const []const u8 `
    ///
    pub fn matches(self: KCompletion, allocator: std.mem.Allocator, matchlist: []const []const u8) void {
        const matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("KCompletion.matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |str_item, i|
            matchlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self.ptr), matchlist_list);
    }

    /// ### DEPRECATED: Use `onMatches` instead
    ///
    pub const OnMatches = onMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, matchlist: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMatches(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multipleMatches` instead
    ///
    pub const MultipleMatches = multipleMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn multipleMatches(self: KCompletion) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMultipleMatches` instead
    ///
    pub const OnMultipleMatches = onMultipleMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion) callconv(.c) void `
    ///
    pub fn onMultipleMatches(self: KCompletion, callback: *const fn (KCompletion) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `postProcessMatches` instead
    ///
    pub const PostProcessMatches = postProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` matchList: []const []const u8 `
    ///
    pub fn postProcessMatches(self: KCompletion, allocator: std.mem.Allocator, matchList: []const []const u8) void {
        const matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("KCompletion.postProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |str_item, i|
            matchList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_PostProcessMatches(@ptrCast(self.ptr), matchList_list);
    }

    /// ### DEPRECATED: Use `onPostProcessMatches` instead
    ///
    pub const OnPostProcessMatches = onPostProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, matchList: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onPostProcessMatches(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnPostProcessMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPostProcessMatches` instead
    ///
    pub const SuperPostProcessMatches = superPostProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` matchList: []const []const u8 `
    ///
    pub fn superPostProcessMatches(self: KCompletion, allocator: std.mem.Allocator, matchList: []const []const u8) void {
        const matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("KCompletion.postProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |str_item, i|
            matchList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_SuperPostProcessMatches(@ptrCast(self.ptr), matchList_list);
    }

    /// ### DEPRECATED: Use `postProcessMatches2` instead
    ///
    pub const PostProcessMatches2 = postProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _matches: KCompletionMatches `
    ///
    pub fn postProcessMatches2(self: KCompletion, _matches: anytype) void {
        comptime _ = @TypeOf(_matches)._is_KCompletionMatches;
        qtc.KCompletion_PostProcessMatches2(@ptrCast(self.ptr), @ptrCast(_matches.ptr));
    }

    /// ### DEPRECATED: Use `onPostProcessMatches2` instead
    ///
    pub const OnPostProcessMatches2 = onPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, matches: KCompletionMatches) callconv(.c) void `
    ///
    pub fn onPostProcessMatches2(self: KCompletion, callback: *const fn (KCompletion, KCompletionMatches) callconv(.c) void) void {
        qtc.KCompletion_OnPostProcessMatches2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPostProcessMatches2` instead
    ///
    pub const SuperPostProcessMatches2 = superPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` _matches: KCompletionMatches `
    ///
    pub fn superPostProcessMatches2(self: KCompletion, _matches: anytype) void {
        comptime _ = @TypeOf(_matches)._is_KCompletionMatches;
        qtc.KCompletion_SuperPostProcessMatches2(@ptrCast(self.ptr), @ptrCast(_matches.ptr));
    }

    /// ### DEPRECATED: Use `setShouldAutoSuggest` instead
    ///
    pub const SetShouldAutoSuggest = setShouldAutoSuggest;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` shouldAutosuggest: bool `
    ///
    pub fn setShouldAutoSuggest(self: KCompletion, shouldAutosuggest: bool) void {
        qtc.KCompletion_SetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

    /// ### DEPRECATED: Use `onSetShouldAutoSuggest` instead
    ///
    pub const OnSetShouldAutoSuggest = onSetShouldAutoSuggest;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, shouldAutosuggest: bool) callconv(.c) void `
    ///
    pub fn onSetShouldAutoSuggest(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetShouldAutoSuggest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetShouldAutoSuggest` instead
    ///
    pub const SuperSetShouldAutoSuggest = superSetShouldAutoSuggest;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` shouldAutosuggest: bool `
    ///
    pub fn superSetShouldAutoSuggest(self: KCompletion, shouldAutosuggest: bool) void {
        qtc.KCompletion_SuperSetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.tr3: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompletion.objectName: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCompletion, name: []const u8) void {
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
    /// ` self: KCompletion `
    ///
    pub fn isWidgetType(self: KCompletion) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn isWindowType(self: KCompletion) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn isQuickItemType(self: KCompletion) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn signalsBlocked(self: KCompletion) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCompletion, b: bool) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn thread(self: KCompletion) QThread {
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
    /// ` self: KCompletion `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCompletion, _thread: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCompletion, interval: i32) i32 {
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
    /// ` self: KCompletion `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCompletion, time: i64) i32 {
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
    /// ` self: KCompletion `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCompletion, id: i32) void {
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
    /// ` self: KCompletion `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCompletion, id: i32) void {
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
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCompletion, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCompletion.children: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCompletion, _parent: anytype) void {
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
    /// ` self: KCompletion `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCompletion, filterObj: anytype) void {
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
    /// ` self: KCompletion `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCompletion, obj: anytype) void {
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
    /// ` self: KCompletion `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCompletion, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCompletion `
    ///
    pub fn disconnect3(self: KCompletion) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCompletion, receiver: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn dumpObjectTree(self: KCompletion) void {
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
    /// ` self: KCompletion `
    ///
    pub fn dumpObjectInfo(self: KCompletion) void {
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
    /// ` self: KCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCompletion, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCompletion, name: [:0]const u8) QVariant {
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
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCompletion, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCompletion.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompletion.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    pub fn bindingStorage(self: KCompletion) QBindingStorage {
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
    /// ` self: KCompletion `
    ///
    pub fn bindingStorage2(self: KCompletion) QBindingStorage {
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
    /// ` self: KCompletion `
    ///
    pub fn destroyed(self: KCompletion) void {
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
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCompletion, callback: *const fn (KCompletion) callconv(.c) void) void {
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
    /// ` self: KCompletion `
    ///
    pub fn parent(self: KCompletion) QObject {
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
    /// ` self: KCompletion `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCompletion, classname: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn deleteLater(self: KCompletion) void {
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
    /// ` self: KCompletion `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCompletion, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCompletion `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCompletion, time: i64, timerType: i32) i32 {
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
    /// ` self: KCompletion `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCompletion, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCompletion, signal: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCompletion, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCompletion, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCompletion, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCompletion, param1: anytype) void {
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
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCompletion, callback: *const fn (KCompletion, QObject) callconv(.c) void) void {
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCompletion, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompletion_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCompletion, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompletion_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCompletion, callback: *const fn (KCompletion, QEvent) callconv(.c) bool) void {
        qtc.KCompletion_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCompletion, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompletion_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCompletion, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompletion_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCompletion, callback: *const fn (KCompletion, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCompletion_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCompletion_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCompletion_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCompletion, callback: *const fn (KCompletion, QTimerEvent) callconv(.c) void) void {
        qtc.KCompletion_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCompletion_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCompletion_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCompletion, callback: *const fn (KCompletion, QChildEvent) callconv(.c) void) void {
        qtc.KCompletion_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCompletion_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCompletion_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCompletion, callback: *const fn (KCompletion, QEvent) callconv(.c) void) void {
        qtc.KCompletion_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KCompletion_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KCompletion_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    pub fn sender(self: KCompletion) QObject {
        return .{ .ptr = qtc.KCompletion_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCompletion `
    ///
    pub fn superSender(self: KCompletion) QObject {
        return .{ .ptr = qtc.KCompletion_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCompletion, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCompletion_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    pub fn senderSignalIndex(self: KCompletion) i32 {
        return qtc.KCompletion_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCompletion `
    ///
    pub fn superSenderSignalIndex(self: KCompletion) i32 {
        return qtc.KCompletion_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KCompletion_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCompletion_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompletion_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompletion_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion`
    ///
    /// ` callback: *const fn (self: KCompletion, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) bool) void {
        qtc.KCompletion_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#dtor.KCompletion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletion `
    ///
    pub fn delete(self: KCompletion) void {
        qtc.KCompletion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcompletion.html#public-types)
pub const enums = struct {
    pub const CompletionMode = enum(i32) {
        pub const CompletionNone: i32 = 1;
        pub const CompletionAuto: i32 = 2;
        pub const CompletionMan: i32 = 3;
        pub const CompletionShell: i32 = 4;
        pub const CompletionPopup: i32 = 5;
        pub const CompletionPopupAuto: i32 = 6;
    };

    pub const CompOrder = enum(i32) {
        pub const Sorted: i32 = 0;
        pub const Insertion: i32 = 1;
        pub const Weighted: i32 = 2;
    };
};
