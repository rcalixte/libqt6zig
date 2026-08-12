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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCompleter object in C++ memory
    ///
    pub fn new() QCompleter {
        return .{ .ptr = qtc.QCompleter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCompleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn new2(_model: anytype) QCompleter {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QCompleter_new2(@ptrCast(_model.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCompleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` completions: []const []const u8 `
    ///
    pub fn new3(allocator: std.mem.Allocator, completions: []const []const u8) QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("QCompleter.new3: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |str_item, i|
            completions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };
        return .{ .ptr = qtc.QCompleter_new3(completions_list) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCompleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QCompleter {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCompleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _model: QAbstractItemModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_model: anytype, _parent: anytype) QCompleter {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new5(@ptrCast(_model.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCompleter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` completions: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(allocator: std.mem.Allocator, completions: []const []const u8, _parent: anytype) QCompleter {
        const completions_arr = allocator.alloc(qtc.libqt_string, completions.len) catch @panic("QCompleter.new6: Memory allocation failed");
        defer allocator.free(completions_arr);
        for (completions, 0..completions.len) |str_item, i|
            completions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const completions_list = qtc.libqt_list{
            .len = completions.len,
            .data = completions_arr.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCompleter_new6(completions_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn metaObject(self: QCompleter) QMetaObject {
        return .{ .ptr = qtc.QCompleter_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCompleter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCompleter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    pub fn superMetaObject(self: QCompleter) QMetaObject {
        return .{ .ptr = qtc.QCompleter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCompleter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCompleter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCompleter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCompleter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QCompleter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCompleter, callback: *const fn (QCompleter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCompleter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QCompleter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCompleter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QCompleter, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QCompleter_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn widget(self: QCompleter) QWidget {
        return .{ .ptr = qtc.QCompleter_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` c: QAbstractItemModel `
    ///
    pub fn setModel(self: QCompleter, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QAbstractItemModel;
        qtc.QCompleter_SetModel(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn model(self: QCompleter) QAbstractItemModel {
        return .{ .ptr = qtc.QCompleter_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCompletionMode` instead
    ///
    pub const SetCompletionMode = setCompletionMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` mode: qcompleter_enums.CompletionMode `
    ///
    pub fn setCompletionMode(self: QCompleter, mode: i32) void {
        qtc.QCompleter_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `completionMode` instead
    ///
    pub const CompletionMode = completionMode;

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
    pub fn completionMode(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterMode` instead
    ///
    pub const SetFilterMode = setFilterMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` _filterMode: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn setFilterMode(self: QCompleter, _filterMode: i32) void {
        qtc.QCompleter_SetFilterMode(@ptrCast(self.ptr), @bitCast(_filterMode));
    }

    /// ### DEPRECATED: Use `filterMode` instead
    ///
    pub const FilterMode = filterMode;

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
    pub fn filterMode(self: QCompleter) i32 {
        return qtc.QCompleter_FilterMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn popup(self: QCompleter) QAbstractItemView {
        return .{ .ptr = qtc.QCompleter_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` _popup: QAbstractItemView `
    ///
    pub fn setPopup(self: QCompleter, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_QAbstractItemView;
        qtc.QCompleter_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `setCaseSensitivity` instead
    ///
    pub const SetCaseSensitivity = setCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` _caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCaseSensitivity(self: QCompleter, _caseSensitivity: i32) void {
        qtc.QCompleter_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(_caseSensitivity));
    }

    /// ### DEPRECATED: Use `caseSensitivity` instead
    ///
    pub const CaseSensitivity = caseSensitivity;

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
    pub fn caseSensitivity(self: QCompleter) i32 {
        return qtc.QCompleter_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModelSorting` instead
    ///
    pub const SetModelSorting = setModelSorting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` sorting: qcompleter_enums.ModelSorting `
    ///
    pub fn setModelSorting(self: QCompleter, sorting: i32) void {
        qtc.QCompleter_SetModelSorting(@ptrCast(self.ptr), @bitCast(sorting));
    }

    /// ### DEPRECATED: Use `modelSorting` instead
    ///
    pub const ModelSorting = modelSorting;

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
    pub fn modelSorting(self: QCompleter) i32 {
        return qtc.QCompleter_ModelSorting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompletionColumn` instead
    ///
    pub const SetCompletionColumn = setCompletionColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` column: i32 `
    ///
    pub fn setCompletionColumn(self: QCompleter, column: i32) void {
        qtc.QCompleter_SetCompletionColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `completionColumn` instead
    ///
    pub const CompletionColumn = completionColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn completionColumn(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompletionRole` instead
    ///
    pub const SetCompletionRole = setCompletionRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` role: i32 `
    ///
    pub fn setCompletionRole(self: QCompleter, role: i32) void {
        qtc.QCompleter_SetCompletionRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `completionRole` instead
    ///
    pub const CompletionRole = completionRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn completionRole(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wrapAround` instead
    ///
    pub const WrapAround = wrapAround;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn wrapAround(self: QCompleter) bool {
        return qtc.QCompleter_WrapAround(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxVisibleItems` instead
    ///
    pub const MaxVisibleItems = maxVisibleItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn maxVisibleItems(self: QCompleter) i32 {
        return qtc.QCompleter_MaxVisibleItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxVisibleItems` instead
    ///
    pub const SetMaxVisibleItems = setMaxVisibleItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` maxItems: i32 `
    ///
    pub fn setMaxVisibleItems(self: QCompleter, maxItems: i32) void {
        qtc.QCompleter_SetMaxVisibleItems(@ptrCast(self.ptr), @bitCast(maxItems));
    }

    /// ### DEPRECATED: Use `completionCount` instead
    ///
    pub const CompletionCount = completionCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn completionCount(self: QCompleter) i32 {
        return qtc.QCompleter_CompletionCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentRow` instead
    ///
    pub const SetCurrentRow = setCurrentRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` row: i32 `
    ///
    pub fn setCurrentRow(self: QCompleter, row: i32) bool {
        return qtc.QCompleter_SetCurrentRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `currentRow` instead
    ///
    pub const CurrentRow = currentRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn currentRow(self: QCompleter) i32 {
        return qtc.QCompleter_CurrentRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn currentIndex(self: QCompleter) QModelIndex {
        return .{ .ptr = qtc.QCompleter_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentCompletion` instead
    ///
    pub const CurrentCompletion = currentCompletion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentCompletion(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CurrentCompletion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.currentCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `completionModel` instead
    ///
    pub const CompletionModel = completionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn completionModel(self: QCompleter) QAbstractItemModel {
        return .{ .ptr = qtc.QCompleter_CompletionModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `completionPrefix` instead
    ///
    pub const CompletionPrefix = completionPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completionPrefix(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCompleter_CompletionPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.completionPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCompletionPrefix` instead
    ///
    pub const SetCompletionPrefix = setCompletionPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn setCompletionPrefix(self: QCompleter, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QCompleter_SetCompletionPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `complete` instead
    ///
    pub const Complete = complete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    pub fn complete(self: QCompleter) void {
        qtc.QCompleter_Complete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapAround` instead
    ///
    pub const SetWrapAround = setWrapAround;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` wrap: bool `
    ///
    pub fn setWrapAround(self: QCompleter, wrap: bool) void {
        qtc.QCompleter_SetWrapAround(@ptrCast(self.ptr), wrap);
    }

    /// ### DEPRECATED: Use `pathFromIndex` instead
    ///
    pub const PathFromIndex = pathFromIndex;

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
    pub fn pathFromIndex(self: QCompleter, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.QCompleter_PathFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.pathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPathFromIndex` instead
    ///
    pub const OnPathFromIndex = onPathFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, index: QModelIndex) callconv(.c) [*:0]const u8 `
    ///
    pub fn onPathFromIndex(self: QCompleter, callback: *const fn (QCompleter, QModelIndex) callconv(.c) [*:0]const u8) void {
        qtc.QCompleter_OnPathFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPathFromIndex` instead
    ///
    pub const SuperPathFromIndex = superPathFromIndex;

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
    pub fn superPathFromIndex(self: QCompleter, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.QCompleter_SuperPathFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.pathFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `splitPath` instead
    ///
    pub const SplitPath = splitPath;

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
    pub fn splitPath(self: QCompleter, allocator: std.mem.Allocator, path: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCompleter.splitPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCompleter.splitPath: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSplitPath` instead
    ///
    pub const OnSplitPath = onSplitPath;

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
    pub fn onSplitPath(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QCompleter_OnSplitPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSplitPath` instead
    ///
    pub const SuperSplitPath = superSplitPath;

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
    pub fn superSplitPath(self: QCompleter, allocator: std.mem.Allocator, path: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCompleter.splitPath: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCompleter.splitPath: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    pub fn eventFilter(self: QCompleter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QCompleter_EventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QCompleter, callback: *const fn (QCompleter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCompleter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    pub fn superEventFilter(self: QCompleter, o: anytype, e: anytype) bool {
        comptime _ = @TypeOf(o)._is_QObject;
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QCompleter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(o.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QCompleter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QCompleter_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QCompleter, callback: *const fn (QCompleter, QEvent) callconv(.c) bool) void {
        qtc.QCompleter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QCompleter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QCompleter_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn activated(self: QCompleter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Activated(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `activated2` instead
    ///
    pub const Activated2 = activated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn activated2(self: QCompleter, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QCompleter_Activated2(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `highlighted` instead
    ///
    pub const Highlighted = highlighted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn highlighted(self: QCompleter, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCompleter_Highlighted(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `highlighted2` instead
    ///
    pub const Highlighted2 = highlighted2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn highlighted2(self: QCompleter, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QCompleter_Highlighted2(@ptrCast(self.ptr), @ptrCast(index.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `complete1` instead
    ///
    pub const Complete1 = complete1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCompleter `
    ///
    /// ` rect: QRect `
    ///
    pub fn complete1(self: QCompleter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QCompleter_Complete1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCompleter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCompleter.objectName: Memory allocation failed");
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
    /// ` self: QCompleter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCompleter, name: []const u8) void {
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
    /// ` self: QCompleter `
    ///
    pub fn isWidgetType(self: QCompleter) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn isWindowType(self: QCompleter) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn isQuickItemType(self: QCompleter) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn signalsBlocked(self: QCompleter) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCompleter, b: bool) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn thread(self: QCompleter) QThread {
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
    /// ` self: QCompleter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCompleter, _thread: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCompleter, interval: i32) i32 {
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
    /// ` self: QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCompleter, time: i64) i32 {
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
    /// ` self: QCompleter `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCompleter, id: i32) void {
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
    /// ` self: QCompleter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCompleter, id: i32) void {
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
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCompleter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCompleter.children: Memory allocation failed");
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
    /// ` self: QCompleter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCompleter, _parent: anytype) void {
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
    /// ` self: QCompleter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCompleter, filterObj: anytype) void {
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
    /// ` self: QCompleter `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCompleter, obj: anytype) void {
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
    /// ` self: QCompleter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCompleter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCompleter `
    ///
    pub fn disconnect3(self: QCompleter) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCompleter, receiver: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn dumpObjectTree(self: QCompleter) void {
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
    /// ` self: QCompleter `
    ///
    pub fn dumpObjectInfo(self: QCompleter) void {
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
    /// ` self: QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCompleter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCompleter, name: [:0]const u8) QVariant {
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
    /// ` self: QCompleter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCompleter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCompleter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCompleter.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCompleter `
    ///
    pub fn bindingStorage(self: QCompleter) QBindingStorage {
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
    /// ` self: QCompleter `
    ///
    pub fn bindingStorage2(self: QCompleter) QBindingStorage {
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
    /// ` self: QCompleter `
    ///
    pub fn destroyed(self: QCompleter) void {
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
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCompleter, callback: *const fn (QCompleter) callconv(.c) void) void {
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
    /// ` self: QCompleter `
    ///
    pub fn parent(self: QCompleter) QObject {
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
    /// ` self: QCompleter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCompleter, classname: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    pub fn deleteLater(self: QCompleter) void {
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
    /// ` self: QCompleter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCompleter, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCompleter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCompleter, time: i64, timerType: i32) i32 {
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
    /// ` self: QCompleter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCompleter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCompleter, signal: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCompleter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCompleter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCompleter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCompleter `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCompleter, param1: anytype) void {
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
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCompleter, callback: *const fn (QCompleter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCompleter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCompleter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCompleter, callback: *const fn (QCompleter, QTimerEvent) callconv(.c) void) void {
        qtc.QCompleter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCompleter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCompleter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCompleter, callback: *const fn (QCompleter, QChildEvent) callconv(.c) void) void {
        qtc.QCompleter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCompleter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCompleter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCompleter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCompleter, callback: *const fn (QCompleter, QEvent) callconv(.c) void) void {
        qtc.QCompleter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) void) void {
        qtc.QCompleter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCompleter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCompleter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) void) void {
        qtc.QCompleter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    pub fn sender(self: QCompleter) QObject {
        return .{ .ptr = qtc.QCompleter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCompleter `
    ///
    pub fn superSender(self: QCompleter) QObject {
        return .{ .ptr = qtc.QCompleter_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCompleter, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCompleter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    pub fn senderSignalIndex(self: QCompleter) i32 {
        return qtc.QCompleter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCompleter `
    ///
    pub fn superSenderSignalIndex(self: QCompleter) i32 {
        return qtc.QCompleter_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCompleter, callback: *const fn () callconv(.c) i32) void {
        qtc.QCompleter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCompleter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCompleter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCompleter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCompleter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCompleter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCompleter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCompleter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCompleter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCompleter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCompleter`
    ///
    /// ` callback: *const fn (self: QCompleter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCompleter, callback: *const fn (QCompleter, QMetaMethod) callconv(.c) bool) void {
        qtc.QCompleter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCompleter `
    ///
    /// ` callback: *const fn (self: QCompleter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCompleter, callback: *const fn (QCompleter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#dtor.QCompleter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCompleter `
    ///
    pub fn delete(self: QCompleter) void {
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
