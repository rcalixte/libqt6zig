const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qcompleter_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)
pub const QCompleter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCompleter,

    pub const _is_QCompleter = {};
    pub const _is_QObject = {};

    /// New constructs a new QCompleter object.
    ///
    pub fn New() QCompleter {
        return .{ .ptr = qtc.QCompleter_new() };
    }

    /// New2 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn New2(model: anytype) QCompleter {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QCompleter_new2(@ptrCast(model.ptr)) };
    }

    /// New3 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` completions: []const []const u8 `
    ///
    pub fn New3(allocator: std.mem.Allocator, completions: []const []const u8) QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("qcompleter.New3: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, i|
            completions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };
        return .{ .ptr = qtc.QCompleter_new3(completions_list) };
    }

    /// New4 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) QCompleter {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new4(@ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(model: anytype, parent: anytype) QCompleter {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new5(@ptrCast(model.ptr), @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new QCompleter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` completions: []const []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(allocator: std.mem.Allocator, completions: []const []const u8, parent: anytype) QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("qcompleter.New6: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |item, i|
            completions_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new6(completions_list, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn MetaObject(self: QCompleter) QMetaObject {
        return .{ .ptr = qtc.QCompleter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QCompleter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCompleter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    pub fn SuperMetaObject(self: QCompleter) QMetaObject {
        return .{ .ptr = qtc.QCompleter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCompleter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCompleter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCompleter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QCompleter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCompleter, callback: *const fn (QCompleter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCompleter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QCompleter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QCompleter, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCompleter_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Widget(self: QCompleter) QWidget {
        return .{ .ptr = qtc.QCompleter_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` c: QAbstractItemModel `
    ///
    pub fn SetModel(self: QCompleter, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QAbstractItemModel;
        qtc.QCompleter_SetModel(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Model(self: QCompleter) QAbstractItemModel {
        return .{ .ptr = qtc.QCompleter_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` mode: qcompleter_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: QCompleter, mode: i32) void {
        qtc.QCompleter_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qcompleter_enums.CompletionMode `
    ///
    pub fn CompletionMode(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` filterMode: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn SetFilterMode(self: QCompleter, filterMode: i32) void {
        qtc.QCompleter_SetFilterMode(@ptrCast(self.ptr), @bitCast(filterMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FilterMode(self: QCompleter) i32 {
        return qtc.QCompleter_FilterMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Popup(self: QCompleter) QAbstractItemView {
        return .{ .ptr = qtc.QCompleter_Popup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` popup: QAbstractItemView `
    ///
    pub fn SetPopup(self: QCompleter, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_QAbstractItemView;
        qtc.QCompleter_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: QCompleter, caseSensitivity: i32) void {
        qtc.QCompleter_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(caseSensitivity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: QCompleter) i32 {
        return qtc.QCompleter_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` sorting: qcompleter_enums.ModelSorting `
    ///
    pub fn SetModelSorting(self: QCompleter, sorting: i32) void {
        qtc.QCompleter_SetModelSorting(@ptrCast(self.ptr), @bitCast(sorting));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ## Returns:
    ///
    /// ` qcompleter_enums.ModelSorting `
    ///
    pub fn ModelSorting(self: QCompleter) i32 {
        return qtc.QCompleter_ModelSorting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` column: i32 `
    ///
    pub fn SetCompletionColumn(self: QCompleter, column: i32) void {
        qtc.QCompleter_SetCompletionColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CompletionColumn(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` role: i32 `
    ///
    pub fn SetCompletionRole(self: QCompleter, role: i32) void {
        qtc.QCompleter_SetCompletionRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CompletionRole(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionRole(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn WrapAround(self: QCompleter) bool {
        return qtc.QCompleter_WrapAround(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn MaxVisibleItems(self: QCompleter) i32 {
        return qtc.QCompleter_MaxVisibleItems(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn SetMaxVisibleItems(self: QCompleter, maxItems: i32) void {
        qtc.QCompleter_SetMaxVisibleItems(@ptrCast(self.ptr), @bitCast(maxItems));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CompletionCount(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` row: i32 `
    ///
    pub fn SetCurrentRow(self: QCompleter, row: i32) bool {
        return qtc.QCompleter_SetCurrentRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CurrentRow(self: QCompleter) i32 {
        return qtc.QCompleter_CurrentRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CurrentIndex(self: QCompleter) QModelIndex {
        return .{ .ptr = qtc.QCompleter_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentCompletion(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CurrentCompletion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CurrentCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn CompletionModel(self: QCompleter) QAbstractItemModel {
        return .{ .ptr = qtc.QCompleter_CompletionModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompletionPrefix(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CompletionPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.CompletionPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetCompletionPrefix(self: QCompleter, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QCompleter_SetCompletionPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Complete(self: QCompleter) void {
        qtc.QCompleter_Complete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` wrap: bool `
    ///
    pub fn SetWrapAround(self: QCompleter, wrap: bool) void {
        qtc.QCompleter_SetWrapAround(@ptrCast(self.ptr), wrap);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn PathFromIndex(self: QCompleter, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.QCompleter_PathFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, index: QModelIndex) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPathFromIndex(self: QCompleter, callback: *const fn (QCompleter, QModelIndex) callconv(.c) [*:0]const u8) void {
        qtc.QCompleter_OnPathFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperPathFromIndex(self: QCompleter, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.QCompleter_SuperPathFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.PathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SplitPath(self: QCompleter, allocator: std.mem.Allocator, path: []const u8) []const []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCompleter_SplitPath(@ptrCast(self.ptr), path_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, path: [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSplitPath(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QCompleter_OnSplitPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SuperSplitPath(self: QCompleter, allocator: std.mem.Allocator, path: []const u8) []const []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCompleter_SuperSplitPath(@ptrCast(self.ptr), path_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCompleter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn EventFilter(self: QCompleter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QCompleter_EventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, o: QObject, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QCompleter, callback: *const fn (QCompleter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCompleter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` o: QObject `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEventFilter(self: QCompleter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QCompleter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: QCompleter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QCompleter_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QCompleter, callback: *const fn (QCompleter, QEvent) callconv(.c) bool) void {
        qtc.QCompleter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: QCompleter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QCompleter_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Activated(self: QCompleter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Activated(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Activated2(self: QCompleter, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QCompleter_Activated2(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Highlighted(self: QCompleter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Highlighted(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Highlighted2(self: QCompleter, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QCompleter_Highlighted2(@ptrCast(self.ptr), @ptrCast(index.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcompleter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` rect: QRect `
    ///
    pub fn Complete1(self: QCompleter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QCompleter_Complete1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QCompleter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn IsWidgetType(self: QCompleter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn IsWindowType(self: QCompleter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn IsQuickItemType(self: QCompleter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn SignalsBlocked(self: QCompleter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QCompleter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Thread(self: QCompleter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCompleter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QCompleter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QCompleter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QCompleter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QCompleter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QCompleter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcompleter.Children: Memory allocation failed");
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
    /// ` self: QCompleter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCompleter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QCompleter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QCompleter, obj: anytype) void {
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
    /// ` self: QCompleter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCompleter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCompleter `
    ///
    pub fn Disconnect3(self: QCompleter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QCompleter, receiver: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn DumpObjectTree(self: QCompleter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn DumpObjectInfo(self: QCompleter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QCompleter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCompleter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QCompleter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCompleter `
    ///
    pub fn BindingStorage(self: QCompleter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn BindingStorage2(self: QCompleter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Destroyed(self: QCompleter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QCompleter, callback: *const fn (QCompleter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Parent(self: QCompleter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QCompleter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn DeleteLater(self: QCompleter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QCompleter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QCompleter, time: i64, timerType: i32) i32 {
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
    /// ` self: QCompleter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCompleter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCompleter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QCompleter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCompleter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCompleter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCompleter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QCompleter, callback: *const fn (QCompleter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCompleter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCompleter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QCompleter, callback: *const fn (QCompleter, QTimerEvent) callconv(.c) void) void {
        qtc.QCompleter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCompleter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCompleter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QCompleter, callback: *const fn (QCompleter, QChildEvent) callconv(.c) void) void {
        qtc.QCompleter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCompleter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCompleter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCompleter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QCompleter, callback: *const fn (QCompleter, QEvent) callconv(.c) void) void {
        qtc.QCompleter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) void) void {
        qtc.QCompleter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) void) void {
        qtc.QCompleter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn Sender(self: QCompleter) QObject {
        return .{ .ptr = qtc.QCompleter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCompleter `
    ///
    pub fn SuperSender(self: QCompleter) QObject {
        return .{ .ptr = qtc.QCompleter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QCompleter, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCompleter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn SenderSignalIndex(self: QCompleter) i32 {
        return qtc.QCompleter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCompleter `
    ///
    pub fn SuperSenderSignalIndex(self: QCompleter) i32 {
        return qtc.QCompleter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QCompleter, callback: *const fn () callconv(.c) i32) void {
        qtc.QCompleter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QCompleter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCompleter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCompleter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QCompleter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCompleter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCompleter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCompleter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) bool) void {
        qtc.QCompleter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    pub fn Delete(self: QCompleter) void {
        qtc.QCompleter_Delete(@ptrCast(self.ptr));
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
