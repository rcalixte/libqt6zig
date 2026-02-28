const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html)
pub const qitemdelegate = struct {
    /// New constructs a new QItemDelegate object.
    ///
    pub fn New() QtC.QItemDelegate {
        return qtc.QItemDelegate_new();
    }

    /// New2 constructs a new QItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QItemDelegate {
        return qtc.QItemDelegate_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QItemDelegate_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QItemDelegate_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemDelegate_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemDelegate_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemDelegate_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemDelegate_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn HasClipping(self: ?*anyopaque) bool {
        return qtc.QItemDelegate_HasClipping(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` clip: bool `
    ///
    pub fn SetClipping(self: ?*anyopaque, clip: bool) void {
        qtc.QItemDelegate_SetClipping(@ptrCast(self), clip);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperPaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QItemDelegate_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QItemDelegate_SuperSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemDelegate_OnCreateEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.QItemDelegate_SuperCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetEditorData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetEditorData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetModelData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnSetModelData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn ItemEditorFactory(self: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QItemDelegate_ItemEditorFactory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` factory: QtC.QItemEditorFactory `
    ///
    pub fn SetItemEditorFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QItemDelegate_SetItemEditorFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_DrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, rect: QtC.QRect, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDrawDisplay(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDisplay(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperDrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QItemDelegate_SuperDrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn DrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QItemDelegate_DrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, rect: QtC.QRect, pixmap: QtC.QPixmap) callconv(.c) void `
    ///
    pub fn OnDrawDecoration(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawDecoration(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SuperDrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QItemDelegate_SuperDrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn DrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QItemDelegate_DrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, rect: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnDrawFocus(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawFocus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SuperDrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QItemDelegate_SuperDrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn DrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i32) void {
        qtc.QItemDelegate_DrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, rect: QtC.QRect, state: qnamespace_enums.CheckState) callconv(.c) void `
    ///
    pub fn OnDrawCheck(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawCheck(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn SuperDrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i32) void {
        qtc.QItemDelegate_SuperDrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDrawBackground(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` checkRect: QtC.QRect `
    ///
    /// ` iconRect: QtC.QRect `
    ///
    /// ` textRect: QtC.QRect `
    ///
    /// ` hint: bool `
    ///
    pub fn DoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        qtc.QItemDelegate_DoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, option: QtC.QStyleOptionViewItem, checkRect: QtC.QRect, iconRect: QtC.QRect, textRect: QtC.QRect, hint: bool) callconv(.c) void `
    ///
    pub fn OnDoLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QItemDelegate_OnDoLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` checkRect: QtC.QRect `
    ///
    /// ` iconRect: QtC.QRect `
    ///
    /// ` textRect: QtC.QRect `
    ///
    /// ` hint: bool `
    ///
    pub fn SuperDoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        qtc.QItemDelegate_SuperDoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Rect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QRect {
        return qtc.QItemDelegate_Rect(@ptrCast(self), @ptrCast(option), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QRect `
    ///
    pub fn OnRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperRect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QRect {
        return qtc.QItemDelegate_SuperRect(@ptrCast(self), @ptrCast(option), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_SuperEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn EditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnEditorEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEditorEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperEditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_SuperEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    pub fn SetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QItemDelegate_SetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, index: QtC.QModelIndex, option: QtC.QStyleOptionViewItem) callconv(.c) QtC.QStyleOptionViewItem `
    ///
    pub fn OnSetOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QStyleOptionViewItem) void {
        qtc.QItemDelegate_OnSetOptions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    pub fn SuperSetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QItemDelegate_SuperSetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn Decoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) QtC.QPixmap {
        return qtc.QItemDelegate_Decoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, option: QtC.QStyleOptionViewItem, variant: QtC.QVariant) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnDecoration(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QItemDelegate_OnDecoration(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperDecoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) QtC.QPixmap {
        return qtc.QItemDelegate_SuperDecoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` bounding: QtC.QRect `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn DoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) QtC.QRect {
        return qtc.QItemDelegate_DoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, option: QtC.QStyleOptionViewItem, bounding: QtC.QRect, variant: QtC.QVariant) callconv(.c) QtC.QRect `
    ///
    pub fn OnDoCheck(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnDoCheck(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` bounding: QtC.QRect `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperDoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) QtC.QRect {
        return qtc.QItemDelegate_SuperDoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QItemDelegate_TextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, painter: QtC.QPainter, rect: QtC.QRect, font: QtC.QFont, text: [*:0]const u8) callconv(.c) QtC.QRect `
    ///
    pub fn OnTextRectangle(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QItemDelegate_OnTextRectangle(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperTextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QItemDelegate_SuperTextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemdelegate.Tr2: Memory allocation failed");
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` param1: QtC.QModelIndex `
    ///
    pub fn SizeHintChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, param1: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSizeHintChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor2(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self), @ptrCast(editor), @bitCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qitemdelegate.Children: Memory allocation failed");
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate) callconv(.c) void `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn DestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_DestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperDestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QItemDelegate_SuperDestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDestroyEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDestroyEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QHelpEvent `
    ///
    /// ` view: QtC.QAbstractItemView `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QHelpEvent `
    ///
    /// ` view: QtC.QAbstractItemView `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperHelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemDelegate_SuperHelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHelpEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnHelpEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_PaintingRoles(@ptrCast(self));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QItemDelegate_SuperPaintingRoles(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnPaintingRoles(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QItemDelegate_OnPaintingRoles(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemDelegate_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemDelegate_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemDelegate_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemDelegate_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemDelegate_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemDelegate_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemDelegate_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QItemDelegate_Sender(@ptrCast(self));
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
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QItemDelegate_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QItemDelegate_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QItemDelegate_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QItemDelegate_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QItemDelegate_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemDelegate_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QItemDelegate_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QItemDelegate_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QItemDelegate_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemDelegate_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.QItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QItemDelegate `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QItemDelegate_Delete(@ptrCast(self));
    }
};
