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
const QPalette = @import("libqt6").QPalette;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QItemDelegate object in C++ memory
    ///
    pub fn new() QItemDelegate {
        return .{ .ptr = qtc.QItemDelegate_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QItemDelegate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QItemDelegate {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QItemDelegate_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn metaObject(self: QItemDelegate) QMetaObject {
        return .{ .ptr = qtc.QItemDelegate_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QItemDelegate, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QItemDelegate_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    pub fn superMetaObject(self: QItemDelegate) QMetaObject {
        return .{ .ptr = qtc.QItemDelegate_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemDelegate_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QItemDelegate, callback: *const fn (QItemDelegate, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemDelegate_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemDelegate.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasClipping` instead
    ///
    pub const HasClipping = hasClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn hasClipping(self: QItemDelegate) bool {
        return qtc.QItemDelegate_HasClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClipping` instead
    ///
    pub const SetClipping = setClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` clip: bool `
    ///
    pub fn setClipping(self: QItemDelegate, clip: bool) void {
        qtc.QItemDelegate_SetClipping(@ptrCast(self.ptr), clip);
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

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
    pub fn onPaint(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

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
    pub fn superPaint(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: QItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) QSize) void {
        qtc.QItemDelegate_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: QItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperSizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `createEditor` instead
    ///
    pub const CreateEditor = createEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn createEditor(self: QItemDelegate, _parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_CreateEditor(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateEditor` instead
    ///
    pub const OnCreateEditor = onCreateEditor;

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
    pub fn onCreateEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QWidget) void {
        qtc.QItemDelegate_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateEditor` instead
    ///
    pub const SuperCreateEditor = superCreateEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superCreateEditor(self: QItemDelegate, _parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperCreateEditor(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `setEditorData` instead
    ///
    pub const SetEditorData = setEditorData;

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
    pub fn setEditorData(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetEditorData` instead
    ///
    pub const OnSetEditorData = onSetEditorData;

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
    pub fn onSetEditorData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEditorData` instead
    ///
    pub const SuperSetEditorData = superSetEditorData;

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
    pub fn superSetEditorData(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperSetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `setModelData` instead
    ///
    pub const SetModelData = setModelData;

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
    pub fn setModelData(self: QItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetModelData` instead
    ///
    pub const OnSetModelData = onSetModelData;

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
    pub fn onSetModelData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QAbstractItemModel, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetModelData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModelData` instead
    ///
    pub const SuperSetModelData = superSetModelData;

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
    pub fn superSetModelData(self: QItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperSetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `updateEditorGeometry` instead
    ///
    pub const UpdateEditorGeometry = updateEditorGeometry;

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
    pub fn updateEditorGeometry(self: QItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_UpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorGeometry` instead
    ///
    pub const OnUpdateEditorGeometry = onUpdateEditorGeometry;

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
    pub fn onUpdateEditorGeometry(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnUpdateEditorGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateEditorGeometry` instead
    ///
    pub const SuperUpdateEditorGeometry = superUpdateEditorGeometry;

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
    pub fn superUpdateEditorGeometry(self: QItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `itemEditorFactory` instead
    ///
    pub const ItemEditorFactory = itemEditorFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn itemEditorFactory(self: QItemDelegate) QItemEditorFactory {
        return .{ .ptr = qtc.QItemDelegate_ItemEditorFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemEditorFactory` instead
    ///
    pub const SetItemEditorFactory = setItemEditorFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` factory: QItemEditorFactory `
    ///
    pub fn setItemEditorFactory(self: QItemDelegate, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QItemEditorFactory;
        qtc.QItemDelegate_SetItemEditorFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// ### DEPRECATED: Use `drawDisplay` instead
    ///
    pub const DrawDisplay = drawDisplay;

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
    /// ` _rect: QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn drawDisplay(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, text: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_DrawDisplay(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onDrawDisplay` instead
    ///
    pub const OnDrawDisplay = onDrawDisplay;

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
    pub fn onDrawDisplay(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDisplay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawDisplay` instead
    ///
    pub const SuperDrawDisplay = superDrawDisplay;

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
    /// ` _rect: QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superDrawDisplay(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, text: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_SuperDrawDisplay(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), text_str);
    }

    /// ### DEPRECATED: Use `drawDecoration` instead
    ///
    pub const DrawDecoration = drawDecoration;

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
    /// ` _rect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn drawDecoration(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QItemDelegate_DrawDecoration(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `onDrawDecoration` instead
    ///
    pub const OnDrawDecoration = onDrawDecoration;

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
    pub fn onDrawDecoration(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, QPixmap) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDecoration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawDecoration` instead
    ///
    pub const SuperDrawDecoration = superDrawDecoration;

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
    /// ` _rect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn superDrawDecoration(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QItemDelegate_SuperDrawDecoration(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `drawFocus` instead
    ///
    pub const DrawFocus = drawFocus;

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
    /// ` _rect: QRect `
    ///
    pub fn drawFocus(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QItemDelegate_DrawFocus(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `onDrawFocus` instead
    ///
    pub const OnDrawFocus = onDrawFocus;

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
    pub fn onDrawFocus(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawFocus` instead
    ///
    pub const SuperDrawFocus = superDrawFocus;

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
    /// ` _rect: QRect `
    ///
    pub fn superDrawFocus(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QItemDelegate_SuperDrawFocus(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `drawCheck` instead
    ///
    pub const DrawCheck = drawCheck;

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
    /// ` _rect: QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn drawCheck(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QItemDelegate_DrawCheck(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onDrawCheck` instead
    ///
    pub const OnDrawCheck = onDrawCheck;

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
    pub fn onDrawCheck(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QRect, i32) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawCheck` instead
    ///
    pub const SuperDrawCheck = superDrawCheck;

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
    /// ` _rect: QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn superDrawCheck(self: QItemDelegate, painter: anytype, option: anytype, _rect: anytype, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QItemDelegate_SuperDrawCheck(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_rect.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `drawBackground` instead
    ///
    pub const DrawBackground = drawBackground;

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
    pub fn drawBackground(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDrawBackground` instead
    ///
    pub const OnDrawBackground = onDrawBackground;

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
    pub fn onDrawBackground(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawBackground` instead
    ///
    pub const SuperDrawBackground = superDrawBackground;

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
    pub fn superDrawBackground(self: QItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `doLayout` instead
    ///
    pub const DoLayout = doLayout;

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
    pub fn doLayout(self: QItemDelegate, option: anytype, checkRect: anytype, iconRect: anytype, textRect: anytype, hint: bool) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(checkRect)._is_QRect;
        comptime _ = @TypeOf(iconRect)._is_QRect;
        comptime _ = @TypeOf(textRect)._is_QRect;
        qtc.QItemDelegate_DoLayout(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(checkRect.ptr), @ptrCast(iconRect.ptr), @ptrCast(textRect.ptr), hint);
    }

    /// ### DEPRECATED: Use `onDoLayout` instead
    ///
    pub const OnDoLayout = onDoLayout;

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
    pub fn onDoLayout(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QRect, QRect, QRect, bool) callconv(.c) void) void {
        qtc.QItemDelegate_OnDoLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoLayout` instead
    ///
    pub const SuperDoLayout = superDoLayout;

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
    pub fn superDoLayout(self: QItemDelegate, option: anytype, checkRect: anytype, iconRect: anytype, textRect: anytype, hint: bool) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(checkRect)._is_QRect;
        comptime _ = @TypeOf(iconRect)._is_QRect;
        comptime _ = @TypeOf(textRect)._is_QRect;
        qtc.QItemDelegate_SuperDoLayout(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(checkRect.ptr), @ptrCast(iconRect.ptr), @ptrCast(textRect.ptr), hint);
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

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
    pub fn rect(self: QItemDelegate, option: anytype, index: anytype, role: i32) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_Rect(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onRect` instead
    ///
    pub const OnRect = onRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRect(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QModelIndex, i32) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRect` instead
    ///
    pub const SuperRect = superRect;

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
    pub fn superRect(self: QItemDelegate, option: anytype, index: anytype, role: i32) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemDelegate_SuperRect(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QItemDelegate, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemDelegate_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QItemDelegate, callback: *const fn (QItemDelegate, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QItemDelegate, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemDelegate_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `editorEvent` instead
    ///
    pub const EditorEvent = editorEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn editorEvent(self: QItemDelegate, _event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_EditorEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onEditorEvent` instead
    ///
    pub const OnEditorEvent = onEditorEvent;

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
    pub fn onEditorEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent, QAbstractItemModel, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEditorEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEditorEvent` instead
    ///
    pub const SuperEditorEvent = superEditorEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superEditorEvent(self: QItemDelegate, _event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_SuperEditorEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

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
    pub fn setOptions(self: QItemDelegate, index: anytype, option: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QItemDelegate_SetOptions(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr)) };
    }

    /// ### DEPRECATED: Use `onSetOptions` instead
    ///
    pub const OnSetOptions = onSetOptions;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSetOptions(self: QItemDelegate, callback: *const fn (QItemDelegate, QModelIndex, QStyleOptionViewItem) callconv(.c) QStyleOptionViewItem) void {
        qtc.QItemDelegate_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOptions` instead
    ///
    pub const SuperSetOptions = superSetOptions;

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
    pub fn superSetOptions(self: QItemDelegate, index: anytype, option: anytype) QStyleOptionViewItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        return .{ .ptr = qtc.QItemDelegate_SuperSetOptions(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(option.ptr)) };
    }

    /// ### DEPRECATED: Use `decoration` instead
    ///
    pub const Decoration = decoration;

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
    pub fn decoration(self: QItemDelegate, option: anytype, variant: anytype) QPixmap {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_Decoration(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `onDecoration` instead
    ///
    pub const OnDecoration = onDecoration;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDecoration(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QVariant) callconv(.c) QPixmap) void {
        qtc.QItemDelegate_OnDecoration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDecoration` instead
    ///
    pub const SuperDecoration = superDecoration;

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
    pub fn superDecoration(self: QItemDelegate, option: anytype, variant: anytype) QPixmap {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_SuperDecoration(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedPixmap` instead
    ///
    pub const SelectedPixmap = selectedPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#selectedPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` palette: QPalette `
    ///
    /// ` enabled: bool `
    ///
    pub fn selectedPixmap(self: QItemDelegate, pixmap: anytype, palette: anytype, enabled: bool) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.QItemDelegate_SelectedPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @ptrCast(palette.ptr), enabled) };
    }

    /// ### DEPRECATED: Use `onSelectedPixmap` instead
    ///
    pub const OnSelectedPixmap = onSelectedPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#selectedPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, pixmap: QPixmap, palette: QPalette, enabled: bool) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSelectedPixmap(self: QItemDelegate, callback: *const fn (QItemDelegate, QPixmap, QPalette, bool) callconv(.c) QPixmap) void {
        qtc.QItemDelegate_OnSelectedPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectedPixmap` instead
    ///
    pub const SuperSelectedPixmap = superSelectedPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#selectedPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` palette: QPalette `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSelectedPixmap(self: QItemDelegate, pixmap: anytype, palette: anytype, enabled: bool) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.QItemDelegate_SuperSelectedPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @ptrCast(palette.ptr), enabled) };
    }

    /// ### DEPRECATED: Use `doCheck` instead
    ///
    pub const DoCheck = doCheck;

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
    pub fn doCheck(self: QItemDelegate, option: anytype, bounding: anytype, variant: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(bounding)._is_QRect;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_DoCheck(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(bounding.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `onDoCheck` instead
    ///
    pub const OnDoCheck = onDoCheck;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDoCheck(self: QItemDelegate, callback: *const fn (QItemDelegate, QStyleOptionViewItem, QRect, QVariant) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnDoCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoCheck` instead
    ///
    pub const SuperDoCheck = superDoCheck;

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
    pub fn superDoCheck(self: QItemDelegate, option: anytype, bounding: anytype, variant: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(bounding)._is_QRect;
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QItemDelegate_SuperDoCheck(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(bounding.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `textRectangle` instead
    ///
    pub const TextRectangle = textRectangle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` _rect: QRect `
    ///
    /// ` font: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textRectangle(self: QItemDelegate, painter: anytype, _rect: anytype, font: anytype, text: []const u8) QRect {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(font)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QItemDelegate_TextRectangle(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(font.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `onTextRectangle` instead
    ///
    pub const OnTextRectangle = onTextRectangle;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onTextRectangle(self: QItemDelegate, callback: *const fn (QItemDelegate, QPainter, QRect, QFont, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QItemDelegate_OnTextRectangle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextRectangle` instead
    ///
    pub const SuperTextRectangle = superTextRectangle;

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
    /// ` _rect: QRect `
    ///
    /// ` font: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superTextRectangle(self: QItemDelegate, painter: anytype, _rect: anytype, font: anytype, text: []const u8) QRect {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(font)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QItemDelegate_SuperTextRectangle(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(font.ptr), text_str) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemDelegate.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemDelegate.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `commitData` instead
    ///
    pub const CommitData = commitData;

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
    pub fn commitData(self: QItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCommitData` instead
    ///
    pub const OnCommitData = onCommitData;

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
    pub fn onCommitData(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor` instead
    ///
    pub const CloseEditor = closeEditor;

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
    pub fn closeEditor(self: QItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEditor` instead
    ///
    pub const OnCloseEditor = onCloseEditor;

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
    pub fn onCloseEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintChanged` instead
    ///
    pub const SizeHintChanged = sizeHintChanged;

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
    pub fn sizeHintChanged(self: QItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QModelIndex;
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onSizeHintChanged` instead
    ///
    pub const OnSizeHintChanged = onSizeHintChanged;

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
    pub fn onSizeHintChanged(self: QItemDelegate, callback: *const fn (QItemDelegate, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor2` instead
    ///
    pub const CloseEditor2 = closeEditor2;

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
    pub fn closeEditor2(self: QItemDelegate, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onCloseEditor2` instead
    ///
    pub const OnCloseEditor2 = onCloseEditor2;

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
    pub fn onCloseEditor2(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QItemDelegate.objectName: Memory allocation failed");
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
    /// ` self: QItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QItemDelegate, name: []const u8) void {
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
    /// ` self: QItemDelegate `
    ///
    pub fn isWidgetType(self: QItemDelegate) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn isWindowType(self: QItemDelegate) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn isQuickItemType(self: QItemDelegate) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn signalsBlocked(self: QItemDelegate) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QItemDelegate, b: bool) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn thread(self: QItemDelegate) QThread {
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
    /// ` self: QItemDelegate `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QItemDelegate, _thread: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QItemDelegate, interval: i32) i32 {
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
    /// ` self: QItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QItemDelegate, time: i64) i32 {
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
    /// ` self: QItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QItemDelegate, id: i32) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QItemDelegate, id: i32) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QItemDelegate.children: Memory allocation failed");
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
    /// ` self: QItemDelegate `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QItemDelegate, _parent: anytype) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QItemDelegate, filterObj: anytype) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QItemDelegate, obj: anytype) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemDelegate `
    ///
    pub fn disconnect3(self: QItemDelegate) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QItemDelegate, receiver: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn dumpObjectTree(self: QItemDelegate) void {
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
    /// ` self: QItemDelegate `
    ///
    pub fn dumpObjectInfo(self: QItemDelegate) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QItemDelegate, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QItemDelegate, name: [:0]const u8) QVariant {
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
    /// ` self: QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QItemDelegate.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QItemDelegate.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QItemDelegate `
    ///
    pub fn bindingStorage(self: QItemDelegate) QBindingStorage {
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
    /// ` self: QItemDelegate `
    ///
    pub fn bindingStorage2(self: QItemDelegate) QBindingStorage {
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
    /// ` self: QItemDelegate `
    ///
    pub fn destroyed(self: QItemDelegate) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QItemDelegate, callback: *const fn (QItemDelegate) callconv(.c) void) void {
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
    /// ` self: QItemDelegate `
    ///
    pub fn parent(self: QItemDelegate) QObject {
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
    /// ` self: QItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QItemDelegate, classname: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    pub fn deleteLater(self: QItemDelegate) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QItemDelegate, interval: i32, timerType: i32) i32 {
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
    /// ` self: QItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QItemDelegate, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QItemDelegate, signal: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QItemDelegate, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QItemDelegate, param1: anytype) void {
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
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QItemDelegate, callback: *const fn (QItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroyEditor` instead
    ///
    pub const DestroyEditor = destroyEditor;

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
    pub fn destroyEditor(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_DestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superDestroyEditor` instead
    ///
    pub const SuperDestroyEditor = superDestroyEditor;

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
    pub fn superDestroyEditor(self: QItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemDelegate_SuperDestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyEditor` instead
    ///
    pub const OnDestroyEditor = onDestroyEditor;

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
    pub fn onDestroyEditor(self: QItemDelegate, callback: *const fn (QItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.QItemDelegate_OnDestroyEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `helpEvent` instead
    ///
    pub const HelpEvent = helpEvent;

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
    /// ` _event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn helpEvent(self: QItemDelegate, _event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superHelpEvent` instead
    ///
    pub const SuperHelpEvent = superHelpEvent;

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
    /// ` _event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superHelpEvent(self: QItemDelegate, _event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemDelegate_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onHelpEvent` instead
    ///
    pub const OnHelpEvent = onHelpEvent;

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
    pub fn onHelpEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QHelpEvent, QAbstractItemView, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.QItemDelegate_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingRoles` instead
    ///
    pub const PaintingRoles = paintingRoles;

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
    pub fn paintingRoles(self: QItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_PaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QItemDelegate.paintingRoles: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superPaintingRoles` instead
    ///
    pub const SuperPaintingRoles = superPaintingRoles;

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
    pub fn superPaintingRoles(self: QItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_SuperPaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QItemDelegate.paintingRoles: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPaintingRoles` instead
    ///
    pub const OnPaintingRoles = onPaintingRoles;

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
    pub fn onPaintingRoles(self: QItemDelegate, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QItemDelegate_OnPaintingRoles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QItemDelegate, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemDelegate_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QItemDelegate, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QItemDelegate_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemDelegate_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QItemDelegate_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QTimerEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemDelegate_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QItemDelegate_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QChildEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemDelegate_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QItemDelegate, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QItemDelegate_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QItemDelegate, callback: *const fn (QItemDelegate, QEvent) callconv(.c) void) void {
        qtc.QItemDelegate_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.QItemDelegate_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemDelegate_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.QItemDelegate_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    pub fn sender(self: QItemDelegate) QObject {
        return .{ .ptr = qtc.QItemDelegate_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemDelegate `
    ///
    pub fn superSender(self: QItemDelegate) QObject {
        return .{ .ptr = qtc.QItemDelegate_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QItemDelegate, callback: *const fn () callconv(.c) QObject) void {
        qtc.QItemDelegate_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    pub fn senderSignalIndex(self: QItemDelegate) i32 {
        return qtc.QItemDelegate_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemDelegate `
    ///
    pub fn superSenderSignalIndex(self: QItemDelegate) i32 {
        return qtc.QItemDelegate_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QItemDelegate, callback: *const fn () callconv(.c) i32) void {
        qtc.QItemDelegate_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) i32) void {
        qtc.QItemDelegate_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemDelegate_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemDelegate_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemDelegate`
    ///
    /// ` callback: *const fn (self: QItemDelegate, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QItemDelegate, callback: *const fn (QItemDelegate, QMetaMethod) callconv(.c) bool) void {
        qtc.QItemDelegate_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemDelegate `
    ///
    /// ` callback: *const fn (self: QItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QItemDelegate, callback: *const fn (QItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#dtor.QItemDelegate)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemDelegate `
    ///
    pub fn delete(self: QItemDelegate) void {
        qtc.QItemDelegate_Delete(@ptrCast(self.ptr));
    }
};
