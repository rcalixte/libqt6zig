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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCompletionBase object in C++ memory
    ///
    pub fn new() KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_new() };
    }

    /// ### DEPRECATED: Use `completionObject` instead
    ///
    pub const CompletionObject = completionObject;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn completionObject(self: KCompletionBase) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCompletionObject` instead
    ///
    pub const SetCompletionObject = setCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` _completionObject: KCompletion `
    ///
    /// ` _handleSignals: bool `
    ///
    pub fn setCompletionObject(self: KCompletionBase, _completionObject: anytype, _handleSignals: bool) void {
        comptime _ = @TypeOf(_completionObject)._is_KCompletion;
        qtc.KCompletionBase_SetCompletionObject(@ptrCast(self.ptr), @ptrCast(_completionObject.ptr), _handleSignals);
    }

    /// ### DEPRECATED: Use `onSetCompletionObject` instead
    ///
    pub const OnSetCompletionObject = onSetCompletionObject;

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
    pub fn onSetCompletionObject(self: KCompletionBase, callback: *const fn (KCompletionBase, KCompletion, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompletionObject` instead
    ///
    pub const SuperSetCompletionObject = superSetCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` _completionObject: KCompletion `
    ///
    /// ` _handleSignals: bool `
    ///
    pub fn superSetCompletionObject(self: KCompletionBase, _completionObject: anytype, _handleSignals: bool) void {
        comptime _ = @TypeOf(_completionObject)._is_KCompletion;
        qtc.KCompletionBase_SuperSetCompletionObject(@ptrCast(self.ptr), @ptrCast(_completionObject.ptr), _handleSignals);
    }

    /// ### DEPRECATED: Use `setHandleSignals` instead
    ///
    pub const SetHandleSignals = setHandleSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` handle: bool `
    ///
    pub fn setHandleSignals(self: KCompletionBase, handle: bool) void {
        qtc.KCompletionBase_SetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### DEPRECATED: Use `onSetHandleSignals` instead
    ///
    pub const OnSetHandleSignals = onSetHandleSignals;

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
    pub fn onSetHandleSignals(self: KCompletionBase, callback: *const fn (KCompletionBase, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetHandleSignals(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHandleSignals` instead
    ///
    pub const SuperSetHandleSignals = superSetHandleSignals;

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
    pub fn superSetHandleSignals(self: KCompletionBase, handle: bool) void {
        qtc.KCompletionBase_SuperSetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### DEPRECATED: Use `isCompletionObjectAutoDeleted` instead
    ///
    pub const IsCompletionObjectAutoDeleted = isCompletionObjectAutoDeleted;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn isCompletionObjectAutoDeleted(self: KCompletionBase) bool {
        return qtc.KCompletionBase_IsCompletionObjectAutoDeleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDeleteCompletionObject` instead
    ///
    pub const SetAutoDeleteCompletionObject = setAutoDeleteCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn setAutoDeleteCompletionObject(self: KCompletionBase, autoDelete: bool) void {
        qtc.KCompletionBase_SetAutoDeleteCompletionObject(@ptrCast(self.ptr), autoDelete);
    }

    /// ### DEPRECATED: Use `setEnableSignals` instead
    ///
    pub const SetEnableSignals = setEnableSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnableSignals(self: KCompletionBase, enable: bool) void {
        qtc.KCompletionBase_SetEnableSignals(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `handleSignals` instead
    ///
    pub const HandleSignals = handleSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn handleSignals(self: KCompletionBase) bool {
        return qtc.KCompletionBase_HandleSignals(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `emitSignals` instead
    ///
    pub const EmitSignals = emitSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn emitSignals(self: KCompletionBase) bool {
        return qtc.KCompletionBase_EmitSignals(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEmitSignals` instead
    ///
    pub const SetEmitSignals = setEmitSignals;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` emitRotationSignals: bool `
    ///
    pub fn setEmitSignals(self: KCompletionBase, emitRotationSignals: bool) void {
        qtc.KCompletionBase_SetEmitSignals(@ptrCast(self.ptr), emitRotationSignals);
    }

    /// ### DEPRECATED: Use `setCompletionMode` instead
    ///
    pub const SetCompletionMode = setCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn setCompletionMode(self: KCompletionBase, mode: i32) void {
        qtc.KCompletionBase_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetCompletionMode` instead
    ///
    pub const OnSetCompletionMode = onSetCompletionMode;

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
    pub fn onSetCompletionMode(self: KCompletionBase, callback: *const fn (KCompletionBase, i32) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompletionMode` instead
    ///
    pub const SuperSetCompletionMode = superSetCompletionMode;

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
    pub fn superSetCompletionMode(self: KCompletionBase, mode: i32) void {
        qtc.KCompletionBase_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `completionMode` instead
    ///
    pub const CompletionMode = completionMode;

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
    pub fn completionMode(self: KCompletionBase) i32 {
        return qtc.KCompletionBase_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyBinding` instead
    ///
    pub const SetKeyBinding = setKeyBinding;

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
    pub fn setKeyBinding(self: KCompletionBase, item: i32, key: []QKeySequence) bool {
        const key_list = qtc.libqt_list{
            .len = key.len,
            .data = @ptrCast(key.ptr),
        };
        return qtc.KCompletionBase_SetKeyBinding(@ptrCast(self.ptr), @bitCast(item), key_list);
    }

    /// ### DEPRECATED: Use `keyBinding` instead
    ///
    pub const KeyBinding = keyBinding;

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
    pub fn keyBinding(self: KCompletionBase, allocator: std.mem.Allocator, item: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KCompletionBase_KeyBinding(@ptrCast(self.ptr), @bitCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KCompletionBase.keyBinding: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `useGlobalKeyBindings` instead
    ///
    pub const UseGlobalKeyBindings = useGlobalKeyBindings;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn useGlobalKeyBindings(self: KCompletionBase) void {
        qtc.KCompletionBase_UseGlobalKeyBindings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompletedText` instead
    ///
    pub const SetCompletedText = setCompletedText;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setCompletedText(self: KCompletionBase, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_SetCompletedText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSetCompletedText` instead
    ///
    pub const OnSetCompletedText = onSetCompletedText;

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
    pub fn onSetCompletedText(self: KCompletionBase, callback: *const fn (KCompletionBase, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompletedText` instead
    ///
    pub const SuperSetCompletedText = superSetCompletedText;

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
    pub fn superSetCompletedText(self: KCompletionBase, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KCompletionBase_SuperSetCompletedText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setCompletedItems` instead
    ///
    pub const SetCompletedItems = setCompletedItems;

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
    pub fn setCompletedItems(self: KCompletionBase, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("KCompletionBase.setCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |str_item, i|
            items_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletionBase_SetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### DEPRECATED: Use `onSetCompletedItems` instead
    ///
    pub const OnSetCompletedItems = onSetCompletedItems;

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
    pub fn onSetCompletedItems(self: KCompletionBase, callback: *const fn (KCompletionBase, ?[*:null]?[*:0]const u8, bool) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetCompletedItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompletedItems` instead
    ///
    pub const SuperSetCompletedItems = superSetCompletedItems;

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
    pub fn superSetCompletedItems(self: KCompletionBase, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("KCompletionBase.setCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |str_item, i|
            items_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletionBase_SuperSetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### DEPRECATED: Use `compObj` instead
    ///
    pub const CompObj = compObj;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn compObj(self: KCompletionBase) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompObj(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `keyBindingMap` instead
    ///
    pub const KeyBindingMap = keyBindingMap;

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
    pub fn keyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_KeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCompletionBase.keyBindingMap: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("KCompletionBase.keyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |j|
                _value_slice[j] = .{ .ptr = _value_data[j] };
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onKeyBindingMap` instead
    ///
    pub const OnKeyBindingMap = onKeyBindingMap;

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
    pub fn onKeyBindingMap(self: KCompletionBase, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KCompletionBase_OnKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyBindingMap` instead
    ///
    pub const SuperKeyBindingMap = superKeyBindingMap;

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
    pub fn superKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KCompletionBase_SuperKeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCompletionBase.keyBindingMap: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("KCompletionBase.keyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |j|
                _value_slice[j] = .{ .ptr = _value_data[j] };
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setKeyBindingMap` instead
    ///
    pub const SetKeyBindingMap = setKeyBindingMap;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn setKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator, _keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = _keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("KCompletionBase.setKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("KCompletionBase.setKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = _keyBindingMap.iterator();
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

    /// ### DEPRECATED: Use `onSetKeyBindingMap` instead
    ///
    pub const OnSetKeyBindingMap = onSetKeyBindingMap;

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
    pub fn onSetKeyBindingMap(self: KCompletionBase, callback: *const fn (KCompletionBase, qtc.libqt_map) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetKeyBindingMap` instead
    ///
    pub const SuperSetKeyBindingMap = superSetKeyBindingMap;

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
    /// ` _keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn superSetKeyBindingMap(self: KCompletionBase, allocator: std.mem.Allocator, _keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = _keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("KCompletionBase.setKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("KCompletionBase.setKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = _keyBindingMap.iterator();
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

    /// ### DEPRECATED: Use `setDelegate` instead
    ///
    pub const SetDelegate = setDelegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` _delegate: KCompletionBase `
    ///
    pub fn setDelegate(self: KCompletionBase, _delegate: anytype) void {
        comptime _ = @TypeOf(_delegate)._is_KCompletionBase;
        qtc.KCompletionBase_SetDelegate(@ptrCast(self.ptr), @ptrCast(_delegate.ptr));
    }

    /// ### DEPRECATED: Use `onSetDelegate` instead
    ///
    pub const OnSetDelegate = onSetDelegate;

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
    pub fn onSetDelegate(self: KCompletionBase, callback: *const fn (KCompletionBase, KCompletionBase) callconv(.c) void) void {
        qtc.KCompletionBase_OnSetDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDelegate` instead
    ///
    pub const SuperSetDelegate = superSetDelegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` _delegate: KCompletionBase `
    ///
    pub fn superSetDelegate(self: KCompletionBase, _delegate: anytype) void {
        comptime _ = @TypeOf(_delegate)._is_KCompletionBase;
        qtc.KCompletionBase_SuperSetDelegate(@ptrCast(self.ptr), @ptrCast(_delegate.ptr));
    }

    /// ### DEPRECATED: Use `delegate` instead
    ///
    pub const Delegate = delegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn delegate(self: KCompletionBase) KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_Delegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDelegate` instead
    ///
    pub const OnDelegate = onDelegate;

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
    pub fn onDelegate(self: KCompletionBase, callback: *const fn () callconv(.c) KCompletionBase) void {
        qtc.KCompletionBase_OnDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDelegate` instead
    ///
    pub const SuperDelegate = superDelegate;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn superDelegate(self: KCompletionBase) KCompletionBase {
        return .{ .ptr = qtc.KCompletionBase_SuperDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KCompletionBase, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KCompletionBase, callback: *const fn (KCompletionBase, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompletionBase_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KCompletionBase, id: i32, data: ?*anyopaque) void {
        qtc.KCompletionBase_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `completionObject1` instead
    ///
    pub const CompletionObject1 = completionObject1;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompletionBase `
    ///
    /// ` _handleSignals: bool `
    ///
    pub fn completionObject1(self: KCompletionBase, _handleSignals: bool) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject1(@ptrCast(self.ptr), _handleSignals) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#dtor.KCompletionBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompletionBase `
    ///
    pub fn delete(self: KCompletionBase) void {
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
