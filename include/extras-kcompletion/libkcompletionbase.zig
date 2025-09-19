const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcompletion_enums = @import("libkcompletion.zig").enums;
const kcompletionbase_enums = enums;
const std = @import("std");
pub const map_i32_qtcqkeysequence = std.AutoHashMapUnmanaged(i32, []QtC.QKeySequence);

/// https://api.kde.org/kcompletionbase.html
pub const kcompletionbase = struct {
    /// New constructs a new KCompletionBase object.
    ///
    ///
    pub fn New() QtC.KCompletionBase {
        return qtc.KCompletionBase_new();
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn CompletionObject(self: ?*anyopaque) QtC.KCompletion {
        return qtc.KCompletionBase_CompletionObject(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// ``` self: QtC.KCompletionBase, completionObject: QtC.KCompletion, handleSignals: bool ```
    pub fn SetCompletionObject(self: ?*anyopaque, completionObject: ?*anyopaque, handleSignals: bool) void {
        qtc.KCompletionBase_SetCompletionObject(@ptrCast(self), @ptrCast(completionObject), handleSignals);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, completionObject: QtC.KCompletion, handleSignals: bool) callconv(.c) void ```
    pub fn OnSetCompletionObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, completionObject: QtC.KCompletion, handleSignals: bool ```
    pub fn QBaseSetCompletionObject(self: ?*anyopaque, completionObject: ?*anyopaque, handleSignals: bool) void {
        qtc.KCompletionBase_QBaseSetCompletionObject(@ptrCast(self), @ptrCast(completionObject), handleSignals);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// ``` self: QtC.KCompletionBase, handle: bool ```
    pub fn SetHandleSignals(self: ?*anyopaque, handle: bool) void {
        qtc.KCompletionBase_SetHandleSignals(@ptrCast(self), handle);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, handle: bool) callconv(.c) void ```
    pub fn OnSetHandleSignals(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetHandleSignals(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, handle: bool ```
    pub fn QBaseSetHandleSignals(self: ?*anyopaque, handle: bool) void {
        qtc.KCompletionBase_QBaseSetHandleSignals(@ptrCast(self), handle);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn IsCompletionObjectAutoDeleted(self: ?*anyopaque) bool {
        return qtc.KCompletionBase_IsCompletionObjectAutoDeleted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
    ///
    /// ``` self: QtC.KCompletionBase, autoDelete: bool ```
    pub fn SetAutoDeleteCompletionObject(self: ?*anyopaque, autoDelete: bool) void {
        qtc.KCompletionBase_SetAutoDeleteCompletionObject(@ptrCast(self), autoDelete);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEnableSignals)
    ///
    /// ``` self: QtC.KCompletionBase, enable: bool ```
    pub fn SetEnableSignals(self: ?*anyopaque, enable: bool) void {
        qtc.KCompletionBase_SetEnableSignals(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#handleSignals)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn HandleSignals(self: ?*anyopaque) bool {
        return qtc.KCompletionBase_HandleSignals(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#emitSignals)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn EmitSignals(self: ?*anyopaque) bool {
        return qtc.KCompletionBase_EmitSignals(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEmitSignals)
    ///
    /// ``` self: QtC.KCompletionBase, emitRotationSignals: bool ```
    pub fn SetEmitSignals(self: ?*anyopaque, emitRotationSignals: bool) void {
        qtc.KCompletionBase_SetEmitSignals(@ptrCast(self), emitRotationSignals);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// ``` self: QtC.KCompletionBase, mode: kcompletion_enums.CompletionMode ```
    pub fn SetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KCompletionBase_SetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, mode: kcompletion_enums.CompletionMode) callconv(.c) void ```
    pub fn OnSetCompletionMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, mode: kcompletion_enums.CompletionMode ```
    pub fn QBaseSetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.KCompletionBase_QBaseSetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionMode)
    ///
    /// ``` self: QtC.KCompletionBase ```
    ///
    /// Returns: ``` kcompletion_enums.CompletionMode ```
    pub fn CompletionMode(self: ?*anyopaque) i32 {
        return qtc.KCompletionBase_CompletionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBinding)
    ///
    /// ``` self: QtC.KCompletionBase, item: kcompletionbase_enums.KeyBindingType, key: []QtC.QKeySequence ```
    pub fn SetKeyBinding(self: ?*anyopaque, item: i32, key: []QtC.QKeySequence) bool {
        const key_list = qtc.libqt_list{
            .len = key.len,
            .data = @ptrCast(key.ptr),
        };
        return qtc.KCompletionBase_SetKeyBinding(@ptrCast(self), @intCast(item), key_list);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBinding)
    ///
    /// ``` self: QtC.KCompletionBase, item: kcompletionbase_enums.KeyBindingType, allocator: std.mem.Allocator ```
    pub fn KeyBinding(self: ?*anyopaque, item: i32, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KCompletionBase_KeyBinding(@ptrCast(self), @intCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kcompletionbase.KeyBinding: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn UseGlobalKeyBindings(self: ?*anyopaque) void {
        qtc.KCompletionBase_UseGlobalKeyBindings(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// ``` self: QtC.KCompletionBase, text: []const u8 ```
    pub fn SetCompletedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_SetCompletedText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetCompletedText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, text: []const u8 ```
    pub fn QBaseSetCompletedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_QBaseSetCompletedText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// ``` self: QtC.KCompletionBase, items: [][]const u8, autoSuggest: bool, allocator: std.mem.Allocator ```
    pub fn SetCompletedItems(self: ?*anyopaque, items: [][]const u8, autoSuggest: bool, allocator: std.mem.Allocator) void {
        var items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletionbase.SetCompletedItems: Memory allocation failed");
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
        qtc.KCompletionBase_SetCompletedItems(@ptrCast(self), items_list, autoSuggest);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, items: [*][*:0]const u8, autoSuggest: bool) callconv(.c) void ```
    pub fn OnSetCompletedItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, items: [][]const u8, autoSuggest: bool, allocator: std.mem.Allocator ```
    pub fn QBaseSetCompletedItems(self: ?*anyopaque, items: [][]const u8, autoSuggest: bool, allocator: std.mem.Allocator) void {
        var items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletionbase.SetCompletedItems: Memory allocation failed");
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
        qtc.KCompletionBase_QBaseSetCompletedItems(@ptrCast(self), items_list, autoSuggest);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#compObj)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn CompObj(self: ?*anyopaque) QtC.KCompletion {
        return qtc.KCompletionBase_CompObj(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// ``` self: QtC.KCompletionBase, allocator: std.mem.Allocator ```
    pub fn KeyBindingMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqkeysequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_KeyBindingMap(@ptrCast(self));
        var _ret: map_i32_qtcqkeysequence = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]QtC.QKeySequence = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn () callconv(.c) map_i32_qtcqkeysequence ```
    pub fn OnKeyBindingMap(self: ?*anyopaque, callback: *const fn () callconv(.c) map_i32_qtcqkeysequence) void {
        qtc.KCompletionBase_OnKeyBindingMap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, allocator: std.mem.Allocator ```
    pub fn QBaseKeyBindingMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqkeysequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_QBaseKeyBindingMap(@ptrCast(self));
        var _ret: map_i32_qtcqkeysequence = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]QtC.QKeySequence = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// ``` self: QtC.KCompletionBase, keyBindingMap: map_i32_qtcqkeysequence, allocator: std.mem.Allocator ```
    pub fn SetKeyBindingMap(self: ?*anyopaque, keyBindingMap: map_i32_qtcqkeysequence, allocator: std.mem.Allocator) void {
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap.count()) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc([]QtC.QKeySequence, keyBindingMap.count()) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |entry| {
            const key = entry.key_ptr.*;
            keyBindingMap_keys[i] = @intCast(key);
            keyBindingMap_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap.count(),
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KCompletionBase_SetKeyBindingMap(@ptrCast(self), keyBindingMap_map);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, keyBindingMap: map_i32_qtcqkeysequence) callconv(.c) void ```
    pub fn OnSetKeyBindingMap(self: ?*anyopaque, callback: *const fn (?*anyopaque, map_i32_qtcqkeysequence) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetKeyBindingMap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, keyBindingMap: map_i32_qtcqkeysequence, allocator: std.mem.Allocator ```
    pub fn QBaseSetKeyBindingMap(self: ?*anyopaque, keyBindingMap: map_i32_qtcqkeysequence, allocator: std.mem.Allocator) void {
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap.count()) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc([]QtC.QKeySequence, keyBindingMap.count()) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |entry| {
            const key = entry.key_ptr.*;
            keyBindingMap_keys[i] = @intCast(key);
            keyBindingMap_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap.count(),
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KCompletionBase_QBaseSetKeyBindingMap(@ptrCast(self), keyBindingMap_map);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// ``` self: QtC.KCompletionBase, delegate: QtC.KCompletionBase ```
    pub fn SetDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KCompletionBase_SetDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, delegate: QtC.KCompletionBase) callconv(.c) void ```
    pub fn OnSetDelegate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetDelegate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, delegate: QtC.KCompletionBase ```
    pub fn QBaseSetDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KCompletionBase_QBaseSetDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn Delegate(self: ?*anyopaque) QtC.KCompletionBase {
        return qtc.KCompletionBase_Delegate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn () callconv(.c) QtC.KCompletionBase ```
    pub fn OnDelegate(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KCompletionBase) void {
        qtc.KCompletionBase_OnDelegate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn QBaseDelegate(self: ?*anyopaque) QtC.KCompletionBase {
        return qtc.KCompletionBase_QBaseDelegate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// ``` self: QtC.KCompletionBase, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompletionBase, callback: *const fn (self: QtC.KCompletionBase, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletionBase_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompletionBase, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ``` self: QtC.KCompletionBase, handleSignals: bool ```
    pub fn CompletionObject1(self: ?*anyopaque, handleSignals: bool) QtC.KCompletion {
        return qtc.KCompletionBase_CompletionObject1(@ptrCast(self), handleSignals);
    }

    /// [Qt documentation](https://api.kde.org/kcompletionbase.html#dtor.KCompletionBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCompletionBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCompletionBase_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcompletionbase.html#types
pub const enums = struct {
    pub const KeyBindingType = enum {
        pub const TextCompletion: i32 = 0;
        pub const PrevCompletionMatch: i32 = 1;
        pub const NextCompletionMatch: i32 = 2;
        pub const SubstringCompletion: i32 = 3;
    };
};
