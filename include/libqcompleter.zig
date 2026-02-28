const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcompleter_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)
pub const qcompleter = struct {
    /// New constructs a new QCompleter object.
    ///
    pub fn New() QtC.QCompleter {
        return qtc.QCompleter_new();
    }

    /// New2 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn New2(model: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new2(@ptrCast(model));
    }

    /// New3 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` completions: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New3(completions: []const []const u8, allocator: std.mem.Allocator) QtC.QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("qcompleter.New3: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, i| {
            completions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };

        return qtc.QCompleter_new3(completions_list);
    }

    /// New4 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(parent: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New5(model: ?*anyopaque, parent: ?*anyopaque) QtC.QCompleter {
        return qtc.QCompleter_new5(@ptrCast(model), @ptrCast(parent));
    }

    /// New6 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` completions: []const []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New6(completions: []const []const u8, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("qcompleter.New6: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, i| {
            completions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };

        return qtc.QCompleter_new6(completions_list, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCompleter_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QCompleter_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QCompleter `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCompleter_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCompleter_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCompleter_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCompleter_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QCompleter_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` c: QtC.QAbstractItemModel `
    ///
    pub fn SetModel(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QCompleter_SetModel(@ptrCast(self), @ptrCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QCompleter_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` mode: qcompleter_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCompleter_SetCompletionMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qcompleter_enums.CompletionMode `
    ///
    pub fn CompletionMode(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CompletionMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` filterMode: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn SetFilterMode(self: ?*anyopaque, filterMode: i32) void {
        qtc.QCompleter_SetFilterMode(@ptrCast(self), @bitCast(filterMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FilterMode(self: ?*anyopaque) i32 {
        return qtc.QCompleter_FilterMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QCompleter_Popup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` popup: QtC.QAbstractItemView `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.QCompleter_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: ?*anyopaque, caseSensitivity: i32) void {
        qtc.QCompleter_SetCaseSensitivity(@ptrCast(self), @bitCast(caseSensitivity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CaseSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` sorting: qcompleter_enums.ModelSorting `
    ///
    pub fn SetModelSorting(self: ?*anyopaque, sorting: i32) void {
        qtc.QCompleter_SetModelSorting(@ptrCast(self), @bitCast(sorting));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qcompleter_enums.ModelSorting `
    ///
    pub fn ModelSorting(self: ?*anyopaque) i32 {
        return qtc.QCompleter_ModelSorting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` column: i32 `
    ///
    pub fn SetCompletionColumn(self: ?*anyopaque, column: i32) void {
        qtc.QCompleter_SetCompletionColumn(@ptrCast(self), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CompletionColumn(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CompletionColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` role: i32 `
    ///
    pub fn SetCompletionRole(self: ?*anyopaque, role: i32) void {
        qtc.QCompleter_SetCompletionRole(@ptrCast(self), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CompletionRole(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CompletionRole(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn WrapAround(self: ?*anyopaque) bool {
        return qtc.QCompleter_WrapAround(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn MaxVisibleItems(self: ?*anyopaque) i32 {
        return qtc.QCompleter_MaxVisibleItems(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.QCompleter_SetMaxVisibleItems(@ptrCast(self), @bitCast(maxItems));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CompletionCount(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CompletionCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` row: i32 `
    ///
    pub fn SetCurrentRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QCompleter_SetCurrentRow(@ptrCast(self), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CurrentRow(self: ?*anyopaque) i32 {
        return qtc.QCompleter_CurrentRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QCompleter_CurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentCompletion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CurrentCompletion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CurrentCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn CompletionModel(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QCompleter_CompletionModel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompletionPrefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CompletionPrefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CompletionPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetCompletionPrefix(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QCompleter_SetCompletionPrefix(@ptrCast(self), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Complete(self: ?*anyopaque) void {
        qtc.QCompleter_Complete(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` wrap: bool `
    ///
    pub fn SetWrapAround(self: ?*anyopaque, wrap: bool) void {
        qtc.QCompleter_SetWrapAround(@ptrCast(self), wrap);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_PathFromIndex(@ptrCast(self), @ptrCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, index: QtC.QModelIndex) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPathFromIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QCompleter_OnPathFromIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPathFromIndex` instead
    ///
    pub const QBasePathFromIndex = SuperPathFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPathFromIndex(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_SuperPathFromIndex(@ptrCast(self), @ptrCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` path: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SplitPath(self: ?*anyopaque, path: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCompleter_SplitPath(@ptrCast(self), path_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcompleter.SplitPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcompleter.SplitPath: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, path: [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSplitPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QCompleter_OnSplitPath(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSplitPath` instead
    ///
    pub const QBaseSplitPath = SuperSplitPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` path: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSplitPath(self: ?*anyopaque, path: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCompleter_SuperSplitPath(@ptrCast(self), path_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcompleter.SplitPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcompleter.SplitPath: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCompleter_EventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, o: QtC.QObject, e: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCompleter_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` o: QtC.QObject `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, o: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCompleter_SuperEventFilter(@ptrCast(self), @ptrCast(o), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCompleter_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCompleter_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCompleter_SuperEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Activated(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Activated(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Activated2(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QCompleter_Activated2(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Highlighted(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Highlighted(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Highlighted2(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QCompleter_Highlighted2(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn Complete1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QCompleter_Complete1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcompleter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcompleter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcompleter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QCompleter `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCompleter_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCompleter_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCompleter_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCompleter_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCompleter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCompleter_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCompleter_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCompleter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCompleter_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCompleter_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCompleter_Sender(@ptrCast(self));
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
    /// ` self: QtC.QCompleter `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCompleter_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QCompleter_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCompleter_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QCompleter `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCompleter_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QCompleter_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCompleter_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCompleter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QCompleter `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCompleter_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter`
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCompleter_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCompleter `
    ///
    /// ` callback: *const fn (self: QtC.QCompleter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#dtor.QCompleter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCompleter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QCompleter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#public-types)
pub const enums = struct {
    pub const CompletionMode = enum(i32) {
        pub const PopupCompletion: i32 = 0;
        pub const UnfilteredPopupCompletion: i32 = 1;
        pub const InlineCompletion: i32 = 2;
    };

    pub const ModelSorting = enum(i32) {
        pub const UnsortedModel: i32 = 0;
        pub const CaseSensitivelySortedModel: i32 = 1;
        pub const CaseInsensitivelySortedModel: i32 = 2;
    };
};
