const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletion = @import("libqt6").KCompletion;
const QKeySequence = @import("libqt6").QKeySequence;
const kcompletion_enums = @import("libkcompletion.zig").enums;
const kcompletionbase_enums = enums;
const std = @import("std");
const ArrayMap_i32_SliceQKeySequence = std.array_hash_map.Auto(i32, []QKeySequence);

/// ### [Upstream resources](https://api.kde.org/kcompletionbase.html)
pub const KCompletionBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCompletionBase,

    pub const _is_KCompletionBase = {};

    /// New constructs a new KCompletionBase object.
    ///
    pub fn New() KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn CompletionObject(self: KCompletionBase) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` completionObject: KCompletion `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn SetCompletionObject(self: KCompletionBase, completionObject: anytype, handleSignals: bool) void {
        comptime _ = @TypeOf(completionObject)._is_KCompletion;
        qtc.KCompletionBase_SetCompletionObject(@ptrCast(self.ptr), @ptrCast(completionObject.ptr), handleSignals);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, completionObject: KCompletion, handleSignals: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletionObject(self: KCompletionBase, callback: *const fn (KCompletionBase, KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionObject` instead
    ///
    pub const QBaseSetCompletionObject = SuperSetCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` completionObject: KCompletion `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn SuperSetCompletionObject(self: KCompletionBase, completionObject: anytype, handleSignals: bool) void {
        comptime _ = @TypeOf(completionObject)._is_KCompletion;
        qtc.KCompletionBase_SuperSetCompletionObject(@ptrCast(self.ptr), @ptrCast(completionObject.ptr), handleSignals);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` handle: bool `
    ///
    pub fn SetHandleSignals(self: KCompletionBase, handle: bool) void {
        qtc.KCompletionBase_SetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, handle: bool) callconv(.c) void `
    ///
    pub fn OnSetHandleSignals(self: KCompletionBase, callback: *const fn (KCompletionBase, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetHandleSignals(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHandleSignals` instead
    ///
    pub const QBaseSetHandleSignals = SuperSetHandleSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` handle: bool `
    ///
    pub fn SuperSetHandleSignals(self: KCompletionBase, handle: bool) void {
        qtc.KCompletionBase_SuperSetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn IsCompletionObjectAutoDeleted(self: KCompletionBase) bool {
        return qtc.KCompletionBase_IsCompletionObjectAutoDeleted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDeleteCompletionObject(self: KCompletionBase, autoDelete: bool) void {
        qtc.KCompletionBase_SetAutoDeleteCompletionObject(@ptrCast(self.ptr), autoDelete);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnableSignals(self: KCompletionBase, enable: bool) void {
        qtc.KCompletionBase_SetEnableSignals(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn HandleSignals(self: KCompletionBase) bool {
        return qtc.KCompletionBase_HandleSignals(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn EmitSignals(self: KCompletionBase) bool {
        return qtc.KCompletionBase_EmitSignals(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` emitRotationSignals: bool `
    ///
    pub fn SetEmitSignals(self: KCompletionBase, emitRotationSignals: bool) void {
        qtc.KCompletionBase_SetEmitSignals(@ptrCast(self.ptr), emitRotationSignals);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: KCompletionBase, mode: i32) void {
        qtc.KCompletionBase_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, mode: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn OnSetCompletionMode(self: KCompletionBase, callback: *const fn (KCompletionBase, i32) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionMode` instead
    ///
    pub const QBaseSetCompletionMode = SuperSetCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SuperSetCompletionMode(self: KCompletionBase, mode: i32) void {
        qtc.KCompletionBase_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompletionMode `
    ///
    pub fn CompletionMode(self: KCompletionBase) i32 {
        return qtc.KCompletionBase_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    /// ` key: []QKeySequence `
    ///
    pub fn SetKeyBinding(self: KCompletionBase, item: i32, key: []QKeySequence) bool {
        const key_list = qtc.libqt_list{
            .len = key.len,
            .data = @ptrCast(key.ptr),
        };
        return qtc.KCompletionBase_SetKeyBinding(@ptrCast(self.ptr), @bitCast(item), key_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn KeyBinding(self: KCompletionBase, allocator: std.mem.Allocator, item: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KCompletionBase_KeyBinding(@ptrCast(self.ptr), @bitCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kcompletionbase.KeyBinding: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn UseGlobalKeyBindings(self: KCompletionBase) void {
        qtc.KCompletionBase_UseGlobalKeyBindings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetCompletedText(self: KCompletionBase, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_SetCompletedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetCompletedText(self: KCompletionBase, callback: *const fn (KCompletionBase, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletedText` instead
    ///
    pub const QBaseSetCompletedText = SuperSetCompletedText;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetCompletedText(self: KCompletionBase, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_SuperSetCompletedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SetCompletedItems(self: KCompletionBase, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletionbase.SetCompletedItems: Memory allocation failed");
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
        qtc.KCompletionBase_SetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, items: ?[*:null]?[*:0]const u8, autoSuggest: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletedItems(self: KCompletionBase, callback: *const fn (KCompletionBase, ?[*:null]?[*:0]const u8, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletedItems` instead
    ///
    pub const QBaseSetCompletedItems = SuperSetCompletedItems;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SuperSetCompletedItems(self: KCompletionBase, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kcompletionbase.SetCompletedItems: Memory allocation failed");
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
        qtc.KCompletionBase_SuperSetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn CompObj(self: KCompletionBase) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompObj(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn KeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_KeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_SliceQKeySequence `
    ///
    pub fn OnKeyBindingMap(self: KCompletionBase, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KCompletionBase_OnKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyBindingMap` instead
    ///
    pub const QBaseKeyBindingMap = SuperKeyBindingMap;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_SuperKeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("kcompletionbase.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SetKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KCompletionBase_SetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, keyBindingMap: qtc.libqt_map (ArrayMap_i32_SliceQKeySequence)) callconv(.c) void `
    ///
    pub fn OnSetKeyBindingMap(self: KCompletionBase, callback: *const fn (KCompletionBase, qtc.libqt_map) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetKeyBindingMap` instead
    ///
    pub const QBaseSetKeyBindingMap = SuperSetKeyBindingMap;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperSetKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("kcompletionbase.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KCompletionBase_SuperSetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SetDelegate(self: KCompletionBase, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KCompletionBase_SetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, delegate: KCompletionBase) callconv(.c) void `
    ///
    pub fn OnSetDelegate(self: KCompletionBase, callback: *const fn (KCompletionBase, KCompletionBase) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDelegate` instead
    ///
    pub const QBaseSetDelegate = SuperSetDelegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SuperSetDelegate(self: KCompletionBase, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KCompletionBase_SuperSetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn Delegate(self: KCompletionBase) KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_Delegate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn () callconv(.c) KCompletionBase `
    ///
    pub fn OnDelegate(self: KCompletionBase, callback: *const fn () callconv(.c) KCompletionBase) void {
        qtc.KCompletionBase_OnDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDelegate` instead
    ///
    pub const QBaseDelegate = SuperDelegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn SuperDelegate(self: KCompletionBase) KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_SuperDelegate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KCompletionBase, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` callback: *const fn (self: KCompletionBase, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KCompletionBase, callback: *const fn (KCompletionBase, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletionBase_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KCompletionBase, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn CompletionObject1(self: KCompletionBase, handleSignals: bool) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject1(@ptrCast(self.ptr), handleSignals) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#dtor.KCompletionBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn Delete(self: KCompletionBase) void {
        qtc.KCompletionBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#public-types)
pub const enums = struct {
    pub const KeyBindingType = enum(i32) {
        pub const TextCompletion: i32 = 0;
        pub const PrevCompletionMatch: i32 = 1;
        pub const NextCompletionMatch: i32 = 2;
        pub const SubstringCompletion: i32 = 3;
    };
};
