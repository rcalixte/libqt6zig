const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcompletion_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kcompletion.html
pub const kcompletion = struct {
    /// New constructs a new KCompletion object.
    ///
    ///
    pub fn New() QtC.KCompletion {
        return qtc.KCompletion_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCompletion_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KCompletion, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompletion_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCompletion_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCompletion_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCompletion_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KCompletion_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#substringCompletion)
    ///
    /// ``` self: QtC.KCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn SubstringCompletion(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self), stringVal_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn LastMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_LastMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLastMatch(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnLastMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn QBaseLastMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_QBaseLastMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#items)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// ``` self: QtC.KCompletion, mode: kcompletion_enums.CompletionMode ```
    pub fn SetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KCompletion_SetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, mode: kcompletion_enums.CompletionMode) callconv(.c) void ```
    pub fn OnSetCompletionMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetCompletionMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, mode: kcompletion_enums.CompletionMode ```
    pub fn QBaseSetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KCompletion_QBaseSetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#completionMode)
    ///
    /// ``` self: QtC.KCompletion ```
    ///
    /// Returns: ``` kcompletion_enums.CompletionMode ```
    pub fn CompletionMode(self: ?*anyopaque) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// ``` self: QtC.KCompletion, order: kcompletion_enums.CompOrder ```
    pub fn SetOrder(self: ?*anyopaque, order: i32) void {
        qtc.KCompletion_SetOrder(@ptrCast(self), @intCast(order));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, order: kcompletion_enums.CompOrder) callconv(.c) void ```
    pub fn OnSetOrder(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompletion_OnSetOrder(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, order: kcompletion_enums.CompOrder ```
    pub fn QBaseSetOrder(self: ?*anyopaque, order: i32) void {
        qtc.KCompletion_QBaseSetOrder(@ptrCast(self), @intCast(order));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#order)
    ///
    /// ``` self: QtC.KCompletion ```
    ///
    /// Returns: ``` kcompletion_enums.CompOrder ```
    pub fn Order(self: ?*anyopaque) i32 {
        return qtc.KCompletion_Order(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// ``` self: QtC.KCompletion, ignoreCase: bool ```
    pub fn SetIgnoreCase(self: ?*anyopaque, ignoreCase: bool) void {
        qtc.KCompletion_SetIgnoreCase(@ptrCast(self), ignoreCase);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, ignoreCase: bool) callconv(.c) void ```
    pub fn OnSetIgnoreCase(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetIgnoreCase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, ignoreCase: bool ```
    pub fn QBaseSetIgnoreCase(self: ?*anyopaque, ignoreCase: bool) void {
        qtc.KCompletion_QBaseSetIgnoreCase(@ptrCast(self), ignoreCase);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn IgnoreCase(self: ?*anyopaque) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn ShouldAutoSuggest(self: ?*anyopaque) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn AllMatches(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ``` self: QtC.KCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn AllMatches2(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self), stringVal_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// ``` self: QtC.KCompletion, enable: bool ```
    pub fn SetSoundsEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KCompletion_SetSoundsEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, enable: bool) callconv(.c) void ```
    pub fn OnSetSoundsEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetSoundsEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, enable: bool ```
    pub fn QBaseSetSoundsEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KCompletion_QBaseSetSoundsEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn SoundsEnabled(self: ?*anyopaque) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn HasMultipleMatches(self: ?*anyopaque) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// ``` self: QtC.KCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn MakeCompletion(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _str = qtc.KCompletion_MakeCompletion(@ptrCast(self), stringVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, stringVal: [*:0]const u8) callconv(.c) [*:0]const u8 ```
    pub fn OnMakeCompletion(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KCompletion_OnMakeCompletion(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#makeCompletion)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, stringVal: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseMakeCompletion(self: ?*anyopaque, stringVal: []const u8, allocator: std.mem.Allocator) []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _str = qtc.KCompletion_QBaseMakeCompletion(@ptrCast(self), stringVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#previousMatch)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn PreviousMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_PreviousMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.PreviousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#nextMatch)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn NextMatch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompletion_NextMatch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.NextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#insertItems)
    ///
    /// ``` self: QtC.KCompletion, items: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertItems(self: ?*anyopaque, items: [][]const u8, allocator: std.mem.Allocator) void {
        var items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletion.InsertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i| {
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// ``` self: QtC.KCompletion, itemList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetItems(self: ?*anyopaque, itemList: [][]const u8, allocator: std.mem.Allocator) void {
        var itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i| {
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_SetItems(@ptrCast(self), itemList_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, itemList: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnSetItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnSetItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, itemList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QBaseSetItems(self: ?*anyopaque, itemList: [][]const u8, allocator: std.mem.Allocator) void {
        var itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i| {
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KCompletion_QBaseSetItems(@ptrCast(self), itemList_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ``` self: QtC.KCompletion, item: []const u8 ```
    pub fn AddItem(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self), item_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ``` self: QtC.KCompletion, item: []const u8, weight: u32 ```
    pub fn AddItem2(self: ?*anyopaque, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self), item_str, @intCast(weight));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#removeItem)
    ///
    /// ``` self: QtC.KCompletion, item: []const u8 ```
    pub fn RemoveItem(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self), item_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KCompletion_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCompletion_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.KCompletion_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#match)
    ///
    /// ``` self: QtC.KCompletion, item: []const u8 ```
    pub fn Match(self: ?*anyopaque, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self), item_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#match)
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, item: [*:0]const u8) callconv(.c) void ```
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ``` self: QtC.KCompletion, matchlist: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Matches(self: ?*anyopaque, matchlist: [][]const u8, allocator: std.mem.Allocator) void {
        var matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("kcompletion.Matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |item, i| {
            matchlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self), matchlist_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, matchlist: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnMatches(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn MultipleMatches(self: ?*anyopaque) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion) callconv(.c) void ```
    pub fn OnMultipleMatches(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// ``` self: QtC.KCompletion, matchList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn PostProcessMatches(self: ?*anyopaque, matchList: [][]const u8, allocator: std.mem.Allocator) void {
        var matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("kcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |item, i| {
            matchList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_PostProcessMatches(@ptrCast(self), matchList_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, matchList: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnPostProcessMatches(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_OnPostProcessMatches(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, matchList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QBasePostProcessMatches(self: ?*anyopaque, matchList: [][]const u8, allocator: std.mem.Allocator) void {
        var matchList_arr = allocator.alloc(qtc.libqt_string, matchList.len) catch @panic("kcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matchList_arr);
        for (matchList, 0..matchList.len) |item, i| {
            matchList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const matchList_list = qtc.libqt_list{
            .len = matchList.len,
            .data = matchList_arr.ptr,
        };
        qtc.KCompletion_QBasePostProcessMatches(@ptrCast(self), matchList_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// ``` self: QtC.KCompletion, shouldAutosuggest: bool ```
    pub fn SetShouldAutoSuggest(self: ?*anyopaque, shouldAutosuggest: bool) void {
        qtc.KCompletion_SetShouldAutoSuggest(@ptrCast(self), shouldAutosuggest);
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, shouldAutosuggest: bool) callconv(.c) void ```
    pub fn OnSetShouldAutoSuggest(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCompletion_OnSetShouldAutoSuggest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletion, shouldAutosuggest: bool ```
    pub fn QBaseSetShouldAutoSuggest(self: ?*anyopaque, shouldAutosuggest: bool) void {
        qtc.KCompletion_QBaseSetShouldAutoSuggest(@ptrCast(self), shouldAutosuggest);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCompletion_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCompletion_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompletion.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KCompletion, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KCompletion, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCompletion, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCompletion, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCompletion, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCompletion, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcompletion.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KCompletion, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KCompletion, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KCompletion, obj: QtC.QObject ```
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
    /// ``` self: QtC.KCompletion, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KCompletion ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KCompletion, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KCompletion, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KCompletion, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KCompletion, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCompletion, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCompletion, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KCompletion, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompletion, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompletion_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompletion_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompletion_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompletion_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompletion_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompletion_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompletion_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompletion_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompletion_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompletion_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompletion_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletion_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCompletion_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCompletion_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KCompletion_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCompletion_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCompletion_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KCompletion_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompletion_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCompletion_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCompletion_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCompletion_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompletion_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompletion, callback: *const fn (self: QtC.KCompletion, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletion.html#dtor.KCompletion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCompletion ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCompletion_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcompletion.html#types
pub const enums = struct {
    pub const CompletionMode = enum {
        pub const CompletionNone: i32 = 1;
        pub const CompletionAuto: i32 = 2;
        pub const CompletionMan: i32 = 3;
        pub const CompletionShell: i32 = 4;
        pub const CompletionPopup: i32 = 5;
        pub const CompletionPopupAuto: i32 = 6;
    };

    pub const CompOrder = enum {
        pub const Sorted: i32 = 0;
        pub const Insertion: i32 = 1;
        pub const Weighted: i32 = 2;
    };
};
