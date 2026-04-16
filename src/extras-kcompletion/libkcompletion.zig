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

    /// New constructs a new KCompletion object.
    ///
    pub fn New() KCompletion {
        return .{ .ptr = qtc.KCompletion_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn MetaObject(self: KCompletion) QMetaObject {
        return .{ .ptr = qtc.KCompletion_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KCompletion, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCompletion_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompletion `
    ///
    pub fn SuperMetaObject(self: KCompletion) QMetaObject {
        return .{ .ptr = qtc.KCompletion_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompletion_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCompletion_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompletion_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompletion_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KCompletion, callback: *const fn (KCompletion, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCompletion_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompletion_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn SubstringCompletion(self: KCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self.ptr), stringVal_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletion.SubstringCompletion: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletion.SubstringCompletion: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LastMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_LastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLastMatch(self: KCompletion, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnLastMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLastMatch` instead
    ///
    pub const QBaseLastMatch = SuperLastMatch;

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
    pub fn SuperLastMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_SuperLastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: KCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletion.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletion.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn IsEmpty(self: KCompletion) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: KCompletion, mode: i32) void {
        qtc.KCompletion_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnSetCompletionMode(self: KCompletion, callback: *const fn (KCompletion, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionMode` instead
    ///
    pub const QBaseSetCompletionMode = SuperSetCompletionMode;

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
    pub fn SuperSetCompletionMode(self: KCompletion, mode: i32) void {
        qtc.KCompletion_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn CompletionMode(self: KCompletion) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` order: kcompletion_enums.CompOrder `
    ///
    pub fn SetOrder(self: KCompletion, order: i32) void {
        qtc.KCompletion_SetOrder(@ptrCast(self.ptr), @bitCast(order));
    }

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
    pub fn OnSetOrder(self: KCompletion, callback: *const fn (KCompletion, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOrder` instead
    ///
    pub const QBaseSetOrder = SuperSetOrder;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` order: kcompletion_enums.CompOrder `
    ///
    pub fn SuperSetOrder(self: KCompletion, order: i32) void {
        qtc.KCompletion_SuperSetOrder(@ptrCast(self.ptr), @bitCast(order));
    }

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
    pub fn Order(self: KCompletion) i32 {
        return qtc.KCompletion_Order(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` ignoreCase: bool `
    ///
    pub fn SetIgnoreCase(self: KCompletion, ignoreCase: bool) void {
        qtc.KCompletion_SetIgnoreCase(@ptrCast(self.ptr), ignoreCase);
    }

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
    pub fn OnSetIgnoreCase(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIgnoreCase` instead
    ///
    pub const QBaseSetIgnoreCase = SuperSetIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` ignoreCase: bool `
    ///
    pub fn SuperSetIgnoreCase(self: KCompletion, ignoreCase: bool) void {
        qtc.KCompletion_SuperSetIgnoreCase(@ptrCast(self.ptr), ignoreCase);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn IgnoreCase(self: KCompletion) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn ShouldAutoSuggest(self: KCompletion) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllMatches(self: KCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletion.AllMatches: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletion.AllMatches: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn AllMatches2(self: KCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self.ptr), stringVal_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcompletion.AllMatches2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletion.AllMatches2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn AllWeightedMatches(self: KCompletion) KCompletionMatches {
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn AllWeightedMatches2(self: KCompletion, stringVal: []const u8) KCompletionMatches {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches2(@ptrCast(self.ptr), stringVal_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSoundsEnabled(self: KCompletion, enable: bool) void {
        qtc.KCompletion_SetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

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
    pub fn OnSetSoundsEnabled(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetSoundsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSoundsEnabled` instead
    ///
    pub const QBaseSetSoundsEnabled = SuperSetSoundsEnabled;

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
    pub fn SuperSetSoundsEnabled(self: KCompletion, enable: bool) void {
        qtc.KCompletion_SuperSetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn SoundsEnabled(self: KCompletion) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn HasMultipleMatches(self: KCompletion) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn MakeCompletion(self: KCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        var _str = qtc.KCompletion_MakeCompletion(@ptrCast(self.ptr), stringVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, stringVal: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMakeCompletion(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMakeCompletion` instead
    ///
    pub const QBaseMakeCompletion = SuperMakeCompletion;

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
    /// ` stringVal: []const u8 `
    ///
    pub fn SuperMakeCompletion(self: KCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        var _str = qtc.KCompletion_SuperMakeCompletion(@ptrCast(self.ptr), stringVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreviousMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_PreviousMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.PreviousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextMatch(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_NextMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.NextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    pub fn InsertItems(self: KCompletion, allocator: std.mem.Allocator, items: []const []const u8) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletion.InsertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self.ptr), items_list);
    }

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
    pub fn SetItems(self: KCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i|
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_SetItems(@ptrCast(self.ptr), itemList_list);
    }

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
    pub fn OnSetItems(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnSetItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetItems` instead
    ///
    pub const QBaseSetItems = SuperSetItems;

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
    pub fn SuperSetItems(self: KCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i|
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_SuperSetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn AddItem(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self.ptr), item_str);
    }

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
    pub fn AddItem2(self: KCompletion, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self.ptr), item_str, @bitCast(weight));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn RemoveItem(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self.ptr), item_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn Clear(self: KCompletion) void {
        qtc.KCompletion_Clear(@ptrCast(self.ptr));
    }

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
    pub fn OnClear(self: KCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KCompletion_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn SuperClear(self: KCompletion) void {
        qtc.KCompletion_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn Match(self: KCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self.ptr), item_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, item: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMatch(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Matches(self: KCompletion, allocator: std.mem.Allocator, matchlist: []const []const u8) void {
        const matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("kcompletion.Matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |item, i|
            matchlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self.ptr), matchlist_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion, matchlist: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMatches(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn MultipleMatches(self: KCompletion) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletion `
    ///
    /// ` callback: *const fn (self: KCompletion) callconv(.c) void `
    ///
    pub fn OnMultipleMatches(self: KCompletion, callback: *const fn (KCompletion) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PostProcessMatches(self: KCompletion, allocator: std.mem.Allocator, matchList: []const []const u8) void {
        const matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("kcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |item, i|
            matchList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_PostProcessMatches(@ptrCast(self.ptr), matchList_list);
    }

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
    pub fn OnPostProcessMatches(self: KCompletion, callback: *const fn (KCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnPostProcessMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPostProcessMatches` instead
    ///
    pub const QBasePostProcessMatches = SuperPostProcessMatches;

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
    pub fn SuperPostProcessMatches(self: KCompletion, allocator: std.mem.Allocator, matchList: []const []const u8) void {
        const matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("kcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |item, i|
            matchList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_SuperPostProcessMatches(@ptrCast(self.ptr), matchList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` matches: KCompletionMatches `
    ///
    pub fn PostProcessMatches2(self: KCompletion, matches: anytype) void {
        comptime _ = @TypeOf(matches)._is_KCompletionMatches;
        qtc.KCompletion_PostProcessMatches2(@ptrCast(self.ptr), @ptrCast(matches.ptr));
    }

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
    pub fn OnPostProcessMatches2(self: KCompletion, callback: *const fn (KCompletion, KCompletionMatches) callconv(.c) void) void {
        qtc.KCompletion_OnPostProcessMatches2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPostProcessMatches2` instead
    ///
    pub const QBasePostProcessMatches2 = SuperPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` matches: KCompletionMatches `
    ///
    pub fn SuperPostProcessMatches2(self: KCompletion, matches: anytype) void {
        comptime _ = @TypeOf(matches)._is_KCompletionMatches;
        qtc.KCompletion_SuperPostProcessMatches2(@ptrCast(self.ptr), @ptrCast(matches.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` shouldAutosuggest: bool `
    ///
    pub fn SetShouldAutoSuggest(self: KCompletion, shouldAutosuggest: bool) void {
        qtc.KCompletion_SetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

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
    pub fn OnSetShouldAutoSuggest(self: KCompletion, callback: *const fn (KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetShouldAutoSuggest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetShouldAutoSuggest` instead
    ///
    pub const QBaseSetShouldAutoSuggest = SuperSetShouldAutoSuggest;

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
    pub fn SuperSetShouldAutoSuggest(self: KCompletion, shouldAutosuggest: bool) void {
        qtc.KCompletion_SuperSetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: KCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KCompletion, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn IsWidgetType(self: KCompletion) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn IsWindowType(self: KCompletion) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn IsQuickItemType(self: KCompletion) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn SignalsBlocked(self: KCompletion) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KCompletion, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn Thread(self: KCompletion) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KCompletion, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KCompletion, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KCompletion, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KCompletion, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KCompletion, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KCompletion, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kcompletion.Children: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KCompletion, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KCompletion, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KCompletion, obj: anytype) void {
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
    /// ` self: KCompletion `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KCompletion, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCompletion `
    ///
    pub fn Disconnect3(self: KCompletion) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KCompletion, receiver: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    pub fn DumpObjectTree(self: KCompletion) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn DumpObjectInfo(self: KCompletion) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KCompletion, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KCompletion, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KCompletion, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcompletion.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompletion.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCompletion `
    ///
    pub fn BindingStorage(self: KCompletion) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn BindingStorage2(self: KCompletion) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn Destroyed(self: KCompletion) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KCompletion, callback: *const fn (KCompletion) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn Parent(self: KCompletion) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KCompletion, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletion `
    ///
    pub fn DeleteLater(self: KCompletion) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KCompletion, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KCompletion, time: i64, timerType: i32) i32 {
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
    /// ` self: KCompletion `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KCompletion, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KCompletion, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KCompletion, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KCompletion, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KCompletion, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompletion `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KCompletion, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KCompletion, callback: *const fn (KCompletion, QObject) callconv(.c) void) void {
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
    /// ` self: KCompletion `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KCompletion, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCompletion_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KCompletion, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCompletion_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KCompletion, callback: *const fn (KCompletion, QEvent) callconv(.c) bool) void {
        qtc.KCompletion_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KCompletion, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCompletion_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KCompletion, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KCompletion_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KCompletion, callback: *const fn (KCompletion, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCompletion_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCompletion_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KCompletion_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KCompletion, callback: *const fn (KCompletion, QTimerEvent) callconv(.c) void) void {
        qtc.KCompletion_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCompletion_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KCompletion_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KCompletion, callback: *const fn (KCompletion, QChildEvent) callconv(.c) void) void {
        qtc.KCompletion_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCompletion_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KCompletion_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KCompletion, callback: *const fn (KCompletion, QEvent) callconv(.c) void) void {
        qtc.KCompletion_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KCompletion_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompletion_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KCompletion_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KCompletion) QObject {
        return .{ .ptr = qtc.KCompletion_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCompletion `
    ///
    pub fn SuperSender(self: KCompletion) QObject {
        return .{ .ptr = qtc.KCompletion_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KCompletion, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCompletion_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KCompletion) i32 {
        return qtc.KCompletion_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCompletion `
    ///
    pub fn SuperSenderSignalIndex(self: KCompletion) i32 {
        return qtc.KCompletion_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KCompletion_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCompletion_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompletion_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompletion_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KCompletion, callback: *const fn (KCompletion, QMetaMethod) callconv(.c) bool) void {
        qtc.KCompletion_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KCompletion, callback: *const fn (KCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#dtor.KCompletion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletion `
    ///
    pub fn Delete(self: KCompletion) void {
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
