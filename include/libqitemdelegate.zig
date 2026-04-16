const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QHelpEvent = @import("libqt6").QHelpEvent;
const QItemEditorFactory = @import("libqt6").QItemEditorFactory;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QStyleOptionViewItem = @import("libqt6").QStyleOptionViewItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html)
pub const QItemDelegate = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemDelegate,

    pub const _is_QItemDelegate = {};
    pub const _is_QAbstractItemDelegate = {};
    pub const _is_QObject = {};

    /// New constructs a new QItemDelegate object.
    ///
    pub fn New() QItemDelegate {
        return .{ .ptr = qtc.QItemDelegate_new() };
    }

    /// New2 constructs a new QItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QItemDelegate {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QItemDelegate_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn MetaObject(self: QItemDelegate) QMetaObject {
        return .{ .ptr = qtc.QItemDelegate_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QItemDelegate, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QItemDelegate_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    pub fn SuperMetaObject(self: QItemDelegate) QMetaObject {
        return .{ .ptr = qtc.QItemDelegate_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemDelegate_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QItemDelegate, callback: *const fn (QItemDelegate, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemDelegate_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn HasClipping(self: QItemDelegate) bool {
        return qtc.QItemDelegate_HasClipping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` clip: bool `
    ///
    pub fn SetClipping(self: QItemDelegate, clip: bool) void {
        qtc.QItemDelegate_SetClipping(@ptrCast(self.ptr), clip);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Paint(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPaint(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperPaint(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHint(self: QItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) QSize) void {
        qtc.QItemDelegate_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSizeHint(self: QItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperSizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CreateEditor(self: QItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_CreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, parent: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QWidget `
    ///
    pub fn OnCreateEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QWidget) void {
        qtc.QItemDelegate_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateEditor` instead
    ///
    pub const QBaseCreateEditor = SuperCreateEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperCreateEditor(self: QItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperCreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetEditorData(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetEditorData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEditorData` instead
    ///
    pub const QBaseSetEditorData = SuperSetEditorData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetEditorData(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperSetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetModelData(self: QItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget, model: QAbstractItemModel, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetModelData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QAbstractItemModel, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetModelData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModelData` instead
    ///
    pub const QBaseSetModelData = SuperSetModelData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetModelData(self: QItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperSetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn UpdateEditorGeometry(self: QItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_UpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometry(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnUpdateEditorGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometry` instead
    ///
    pub const QBaseUpdateEditorGeometry = SuperUpdateEditorGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperUpdateEditorGeometry(self: QItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn ItemEditorFactory(self: QItemDelegate) QItemEditorFactory {
        return .{ .ptr = qtc.QItemDelegate_ItemEditorFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` factory: QItemEditorFactory `
    ///
    pub fn SetItemEditorFactory(self: QItemDelegate, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QItemEditorFactory;
        qtc.QItemDelegate_SetItemEditorFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawDisplay(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, text: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_DrawDisplay(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, rect: QRect, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDrawDisplay(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDisplay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawDisplay` instead
    ///
    pub const QBaseDrawDisplay = SuperDrawDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperDrawDisplay(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, text: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_SuperDrawDisplay(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawDecoration(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QItemDelegate_DrawDecoration(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, rect: QRect, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn OnDrawDecoration(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, QPixmap) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDecoration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawDecoration` instead
    ///
    pub const QBaseDrawDecoration = SuperDrawDecoration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperDrawDecoration(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QItemDelegate_SuperDrawDecoration(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn DrawFocus(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QItemDelegate_DrawFocus(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, rect: QRect) callconv(.c) void `
    ///
    pub fn OnDrawFocus(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawFocus` instead
    ///
    pub const QBaseDrawFocus = SuperDrawFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn SuperDrawFocus(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QItemDelegate_SuperDrawFocus(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn DrawCheck(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QItemDelegate_DrawCheck(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, rect: QRect, state: qnamespace_enums.CheckState) callconv(.c) void `
    ///
    pub fn OnDrawCheck(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, i32) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawCheck` instead
    ///
    pub const QBaseDrawCheck = SuperDrawCheck;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` rect: QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn SuperDrawCheck(self: QItemDelegate, painter: anytype, option: anytype, rect: anytype, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QItemDelegate_SuperDrawCheck(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(rect.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DrawBackground(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawBackground` instead
    ///
    pub const QBaseDrawBackground = SuperDrawBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDrawBackground(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` checkRect: QRect `
    ///
    /// ` iconRect: QRect `
    ///
    /// ` textRect: QRect `
    ///
    /// ` hint: bool `
    ///
    pub fn DoLayout(self: QItemDelegate, option: anytype, checkRect: anytype, iconRect: anytype, textRect: anytype, hint: bool) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(checkRect)._is_QRect;
        comptime _ = @TypeOf(iconRect)._is_QRect;
        comptime _ = @TypeOf(textRect)._is_QRect;
        qtc.QItemDelegate_DoLayout(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(checkRect.ptr), @ptrCast(iconRect.ptr), @ptrCast(textRect.ptr), hint);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, option: QStyleOptionViewItem, checkRect: QRect, iconRect: QRect, textRect: QRect, hint: bool) callconv(.c) void `
    ///
    pub fn OnDoLayout(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QRect, QRect, QRect, bool) callconv(.c) void) void {
        qtc.QItemDelegate_OnDoLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoLayout` instead
    ///
    pub const QBaseDoLayout = SuperDoLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` checkRect: QRect `
    ///
    /// ` iconRect: QRect `
    ///
    /// ` textRect: QRect `
    ///
    /// ` hint: bool `
    ///
    pub fn SuperDoLayout(self: QItemDelegate, option: anytype, checkRect: anytype, iconRect: anytype, textRect: anytype, hint: bool) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(checkRect)._is_QRect;
        comptime _ = @TypeOf(iconRect)._is_QRect;
        comptime _ = @TypeOf(textRect)._is_QRect;
        qtc.QItemDelegate_SuperDoLayout(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(checkRect.ptr), @ptrCast(iconRect.ptr), @ptrCast(textRect.ptr), hint);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Rect(self: QItemDelegate, option: anytype, index: anytype, role: i32) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_Rect(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, option: QStyleOptionViewItem, index: QModelIndex, role: i32) callconv(.c) QRect `
    ///
    pub fn OnRect(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QModelIndex, i32) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRect` instead
    ///
    pub const QBaseRect = SuperRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperRect(self: QItemDelegate, option: anytype, index: anytype, role: i32) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperRect(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QItemDelegate, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemDelegate_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QItemDelegate, callback: *const fn (QItemDelegate, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QItemDelegate, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemDelegate_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn EditorEvent(self: QItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_EditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QEvent, model: QAbstractItemModel, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnEditorEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent, QAbstractItemModel, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEditorEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEditorEvent` instead
    ///
    pub const QBaseEditorEvent = SuperEditorEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperEditorEvent(self: QItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_SuperEditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SetOptions(self: QItemDelegate, index: anytype, option: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QItemDelegate_SetOptions(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, index: QModelIndex, option: QStyleOptionViewItem) callconv(.c) QStyleOptionViewItem `
    ///
    pub fn OnSetOptions(self: QItemDelegate, callback: *const fn (QItemDelegate, QModelIndex, QStyleOptionViewItem) callconv(.c) QStyleOptionViewItem) void {
        qtc.QItemDelegate_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOptions` instead
    ///
    pub const QBaseSetOptions = SuperSetOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SuperSetOptions(self: QItemDelegate, index: anytype, option: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QItemDelegate_SuperSetOptions(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn Decoration(self: QItemDelegate, option: anytype, variant: anytype) QPixmap {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_Decoration(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, option: QStyleOptionViewItem, variant: QVariant) callconv(.c) QPixmap `
    ///
    pub fn OnDecoration(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QVariant) callconv(.c) QPixmap) void {
        qtc.QItemDelegate_OnDecoration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDecoration` instead
    ///
    pub const QBaseDecoration = SuperDecoration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperDecoration(self: QItemDelegate, option: anytype, variant: anytype) QPixmap {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_SuperDecoration(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` bounding: QRect `
    ///
    /// ` variant: QVariant `
    ///
    pub fn DoCheck(self: QItemDelegate, option: anytype, bounding: anytype, variant: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(bounding)._is_QRect;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_DoCheck(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(bounding.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, option: QStyleOptionViewItem, bounding: QRect, variant: QVariant) callconv(.c) QRect `
    ///
    pub fn OnDoCheck(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QRect, QVariant) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnDoCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoCheck` instead
    ///
    pub const QBaseDoCheck = SuperDoCheck;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` bounding: QRect `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperDoCheck(self: QItemDelegate, option: anytype, bounding: anytype, variant: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(bounding)._is_QRect;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_SuperDoCheck(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(bounding.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` font: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextRectangle(self: QItemDelegate, painter: anytype, rect: anytype, font: anytype, text: []const u8) QRect {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(font)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QItemDelegate_TextRectangle(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(font.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, painter: QPainter, rect: QRect, font: QFont, text: [*:0]const u8) callconv(.c) QRect `
    ///
    pub fn OnTextRectangle(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QRect, QFont, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnTextRectangle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTextRectangle` instead
    ///
    pub const QBaseTextRectangle = SuperTextRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` font: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperTextRectangle(self: QItemDelegate, painter: anytype, rect: anytype, font: anytype, text: []const u8) QRect {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(font)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QItemDelegate_SuperTextRectangle(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(font.ptr), text_str) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: QItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CloseEditor(self: QItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: QModelIndex `
    ///
    pub fn SizeHintChanged(self: QItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QModelIndex;
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSizeHintChanged(self: QItemDelegate, callback: *const fn (QItemDelegate, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor2(self: QItemDelegate, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor2(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QItemDelegate, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn IsWidgetType(self: QItemDelegate) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn IsWindowType(self: QItemDelegate) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn IsQuickItemType(self: QItemDelegate) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn SignalsBlocked(self: QItemDelegate) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QItemDelegate, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn Thread(self: QItemDelegate) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QItemDelegate, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QItemDelegate, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QItemDelegate, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QItemDelegate, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QItemDelegate, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qitemdelegate.Children: Memory allocation failed");
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
    /// ` self: QItemDelegate `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QItemDelegate, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QItemDelegate, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QItemDelegate, obj: anytype) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemDelegate `
    ///
    pub fn Disconnect3(self: QItemDelegate) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QItemDelegate, receiver: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn DumpObjectTree(self: QItemDelegate) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn DumpObjectInfo(self: QItemDelegate) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QItemDelegate, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QItemDelegate, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qitemdelegate.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qitemdelegate.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QItemDelegate `
    ///
    pub fn BindingStorage(self: QItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn BindingStorage2(self: QItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn Destroyed(self: QItemDelegate) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QItemDelegate, callback: *const fn (QItemDelegate) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn Parent(self: QItemDelegate) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QItemDelegate, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn DeleteLater(self: QItemDelegate) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QItemDelegate, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QItemDelegate, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QItemDelegate, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QItemDelegate, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QItemDelegate, callback: *const fn (QItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DestroyEditor(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_DestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroyEditor` instead
    ///
    pub const QBaseDestroyEditor = SuperDestroyEditor;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDestroyEditor(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperDestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDestroyEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnDestroyEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn HelpEvent(self: QItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperHelpEvent` instead
    ///
    pub const QBaseHelpEvent = SuperHelpEvent;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperHelpEvent(self: QItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QHelpEvent, view: QAbstractItemView, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHelpEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QHelpEvent, QAbstractItemView, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.QItemDelegate_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PaintingRoles(self: QItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_PaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPaintingRoles` instead
    ///
    pub const QBasePaintingRoles = SuperPaintingRoles;

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPaintingRoles(self: QItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_SuperPaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnPaintingRoles(self: QItemDelegate, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QItemDelegate_OnPaintingRoles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemDelegate_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemDelegate_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QItemDelegate_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QItemDelegate_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QTimerEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QItemDelegate_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QItemDelegate_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QChildEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QItemDelegate_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QItemDelegate_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.QItemDelegate_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.QItemDelegate_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn Sender(self: QItemDelegate) QObject {
        return .{ .ptr = qtc.QItemDelegate_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemDelegate `
    ///
    pub fn SuperSender(self: QItemDelegate) QObject {
        return .{ .ptr = qtc.QItemDelegate_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QItemDelegate, callback: *const fn () callconv(.c) QObject) void {
        qtc.QItemDelegate_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn SenderSignalIndex(self: QItemDelegate) i32 {
        return qtc.QItemDelegate_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemDelegate `
    ///
    pub fn SuperSenderSignalIndex(self: QItemDelegate) i32 {
        return qtc.QItemDelegate_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QItemDelegate, callback: *const fn () callconv(.c) i32) void {
        qtc.QItemDelegate_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) i32) void {
        qtc.QItemDelegate_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemDelegate_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemDelegate_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) bool) void {
        qtc.QItemDelegate_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#dtor.QItemDelegate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn Delete(self: QItemDelegate) void {
        qtc.QItemDelegate_Delete(@ptrCast(self.ptr));
    }
};
