const C = @import("qt6c");
const qcompleter_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcompleter.html
pub const qcompleter = struct {
    /// New constructs a new QCompleter object.
    ///
    ///
    pub fn New() ?*C.QCompleter {
        return C.QCompleter_new();
    }

    /// New2 constructs a new QCompleter object.
    ///
    /// ``` model: ?*C.QAbstractItemModel ```
    pub fn New2(model: ?*anyopaque) ?*C.QCompleter {
        return C.QCompleter_new2(@ptrCast(model));
    }

    /// New3 constructs a new QCompleter object.
    ///
    /// ``` completions: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New3(completions: [][]const u8, allocator: std.mem.Allocator) ?*C.QCompleter {
        var completions_arr = allocator.alloc(C.struct_libqt_string, completions.len) catch @panic("Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, _i| {
            completions_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const completions_list = C.struct_libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };

        return C.QCompleter_new3(completions_list);
    }

    /// New4 constructs a new QCompleter object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New4(parent: ?*anyopaque) ?*C.QCompleter {
        return C.QCompleter_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QCompleter object.
    ///
    /// ``` model: ?*C.QAbstractItemModel, parent: ?*C.QObject ```
    pub fn New5(model: ?*anyopaque, parent: ?*anyopaque) ?*C.QCompleter {
        return C.QCompleter_new5(@ptrCast(model), @ptrCast(parent));
    }

    /// New6 constructs a new QCompleter object.
    ///
    /// ``` completions: [][]const u8, parent: ?*C.QObject, allocator: std.mem.Allocator ```
    pub fn New6(completions: [][]const u8, parent: ?*anyopaque, allocator: std.mem.Allocator) ?*C.QCompleter {
        var completions_arr = allocator.alloc(C.struct_libqt_string, completions.len) catch @panic("Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, _i| {
            completions_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const completions_list = C.struct_libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };

        return C.QCompleter_new6(completions_list, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QCompleter_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QCompleter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QCompleter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QCompleter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCompleter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QCompleter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCompleter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCompleter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QCompleter_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
    ///
    /// ``` self: ?*C.QCompleter, widget: ?*C.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCompleter_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#widget)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QCompleter_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModel)
    ///
    /// ``` self: ?*C.QCompleter, c: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, c: ?*anyopaque) void {
        C.QCompleter_SetModel(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#model)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QCompleter_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
    ///
    /// ``` self: ?*C.QCompleter, mode: qcompleter_enums.CompletionMode ```
    pub fn SetCompletionMode(self: ?*anyopaque, mode: i64) void {
        C.QCompleter_SetCompletionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CompletionMode(self: ?*anyopaque) i64 {
        return C.QCompleter_CompletionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
    ///
    /// ``` self: ?*C.QCompleter, filterMode: i32 ```
    pub fn SetFilterMode(self: ?*anyopaque, filterMode: i64) void {
        C.QCompleter_SetFilterMode(@ptrCast(self), @intCast(filterMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn FilterMode(self: ?*anyopaque) i64 {
        return C.QCompleter_FilterMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#popup)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Popup(self: ?*anyopaque) ?*C.QAbstractItemView {
        return C.QCompleter_Popup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
    ///
    /// ``` self: ?*C.QCompleter, popup: ?*C.QAbstractItemView ```
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        C.QCompleter_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
    ///
    /// ``` self: ?*C.QCompleter, caseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn SetCaseSensitivity(self: ?*anyopaque, caseSensitivity: i64) void {
        C.QCompleter_SetCaseSensitivity(@ptrCast(self), @intCast(caseSensitivity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CaseSensitivity(self: ?*anyopaque) i64 {
        return C.QCompleter_CaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
    ///
    /// ``` self: ?*C.QCompleter, sorting: qcompleter_enums.ModelSorting ```
    pub fn SetModelSorting(self: ?*anyopaque, sorting: i64) void {
        C.QCompleter_SetModelSorting(@ptrCast(self), @intCast(sorting));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn ModelSorting(self: ?*anyopaque) i64 {
        return C.QCompleter_ModelSorting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
    ///
    /// ``` self: ?*C.QCompleter, column: i32 ```
    pub fn SetCompletionColumn(self: ?*anyopaque, column: i32) void {
        C.QCompleter_SetCompletionColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CompletionColumn(self: ?*anyopaque) i32 {
        return C.QCompleter_CompletionColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
    ///
    /// ``` self: ?*C.QCompleter, role: i32 ```
    pub fn SetCompletionRole(self: ?*anyopaque, role: i32) void {
        C.QCompleter_SetCompletionRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CompletionRole(self: ?*anyopaque) i32 {
        return C.QCompleter_CompletionRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn WrapAround(self: ?*anyopaque) bool {
        return C.QCompleter_WrapAround(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn MaxVisibleItems(self: ?*anyopaque) i32 {
        return C.QCompleter_MaxVisibleItems(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
    ///
    /// ``` self: ?*C.QCompleter, maxItems: i32 ```
    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        C.QCompleter_SetMaxVisibleItems(@ptrCast(self), @intCast(maxItems));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CompletionCount(self: ?*anyopaque) i32 {
        return C.QCompleter_CompletionCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
    ///
    /// ``` self: ?*C.QCompleter, row: i32 ```
    pub fn SetCurrentRow(self: ?*anyopaque, row: i32) bool {
        return C.QCompleter_SetCurrentRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CurrentRow(self: ?*anyopaque) i32 {
        return C.QCompleter_CurrentRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CurrentIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QCompleter_CurrentIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
    ///
    /// ``` self: ?*C.QCompleter, allocator: std.mem.Allocator ```
    pub fn CurrentCompletion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCompleter_CurrentCompletion(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn CompletionModel(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QCompleter_CompletionModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
    ///
    /// ``` self: ?*C.QCompleter, allocator: std.mem.Allocator ```
    pub fn CompletionPrefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCompleter_CompletionPrefix(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
    ///
    /// ``` self: ?*C.QCompleter, prefix: []const u8 ```
    pub fn SetCompletionPrefix(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        C.QCompleter_SetCompletionPrefix(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Complete(self: ?*anyopaque) void {
        C.QCompleter_Complete(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
    ///
    /// ``` self: ?*C.QCompleter, wrap: bool ```
    pub fn SetWrapAround(self: ?*anyopaque, wrap: bool) void {
        C.QCompleter_SetWrapAround(@ptrCast(self), wrap);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// ``` self: ?*C.QCompleter, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn PathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCompleter_PathFromIndex(@ptrCast(self), @ptrCast(index));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QModelIndex) callconv(.c) []const u8 ```
    pub fn OnPathFromIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        C.QCompleter_OnPathFromIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCompleter, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBasePathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCompleter_QBasePathFromIndex(@ptrCast(self), @ptrCast(index));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
    ///
    /// ``` self: ?*C.QCompleter, path: []const u8, allocator: std.mem.Allocator ```
    pub fn SplitPath(self: ?*anyopaque, path: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        const _arr: C.struct_libqt_list = C.QCompleter_SplitPath(@ptrCast(self), path_str);
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, []const u8) callconv(.c) [][]const u8 ```
    pub fn OnSplitPath(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) [][]const u8) void {
        C.QCompleter_OnSplitPath(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCompleter, path: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseSplitPath(self: ?*anyopaque, path: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        const _arr: C.struct_libqt_list = C.QCompleter_QBaseSplitPath(@ptrCast(self), path_str);
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
    ///
    /// ``` self: ?*C.QCompleter, o: ?*C.QObject, e: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QCompleter_EventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCompleter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCompleter, o: ?*C.QObject, e: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QCompleter_QBaseEventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// ``` self: ?*C.QCompleter, param1: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QCompleter_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCompleter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCompleter, param1: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QCompleter_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ``` self: ?*C.QCompleter, text: []const u8 ```
    pub fn Activated(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QCompleter_Activated(@ptrCast(self), text_str);
    }

    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, []const u8) callconv(.c) void ```
    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ``` self: ?*C.QCompleter, index: ?*C.QModelIndex ```
    pub fn ActivatedWithIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QCompleter_ActivatedWithIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QModelIndex) callconv(.c) void ```
    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ``` self: ?*C.QCompleter, text: []const u8 ```
    pub fn Highlighted(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QCompleter_Highlighted(@ptrCast(self), text_str);
    }

    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, []const u8) callconv(.c) void ```
    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ``` self: ?*C.QCompleter, index: ?*C.QModelIndex ```
    pub fn HighlightedWithIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        C.QCompleter_HighlightedWithIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QModelIndex) callconv(.c) void ```
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QCompleter_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QCompleter_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ``` self: ?*C.QCompleter, rect: ?*C.QRect ```
    pub fn Complete1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QCompleter_Complete1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QCompleter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QCompleter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QCompleter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QCompleter, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCompleter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QCompleter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QCompleter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QCompleter, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QCompleter, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QCompleter, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QCompleter, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QCompleter, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QCompleter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QCompleter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QCompleter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCompleter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QCompleter, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCompleter, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCompleter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCompleter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCompleter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCompleter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCompleter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCompleter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCompleter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCompleter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCompleter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCompleter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QCompleter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QCompleter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QCompleter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCompleter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCompleter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QCompleter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCompleter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCompleter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QCompleter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCompleter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCompleter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCompleter, slot: fn (?*C.QCompleter, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCompleter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCompleter ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCompleter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcompleter.html#types
pub const enums = struct {
    pub const CompletionMode = enum {
        pub const PopupCompletion: i32 = 0;
        pub const UnfilteredPopupCompletion: i32 = 1;
        pub const InlineCompletion: i32 = 2;
    };

    pub const ModelSorting = enum {
        pub const UnsortedModel: i32 = 0;
        pub const CaseSensitivelySortedModel: i32 = 1;
        pub const CaseInsensitivelySortedModel: i32 = 2;
    };
};
