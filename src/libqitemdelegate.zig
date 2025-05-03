const C = @import("qt6c");
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qitemdelegate.html
pub const qitemdelegate = struct {
    /// New constructs a new QItemDelegate object.
    ///
    ///
    pub fn New() ?*C.QItemDelegate {
        return C.QItemDelegate_new();
    }

    /// New2 constructs a new QItemDelegate object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QItemDelegate {
        return C.QItemDelegate_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QItemDelegate, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QItemDelegate_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QItemDelegate_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QItemDelegate_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QItemDelegate_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn HasClipping(self: ?*anyopaque) bool {
        return C.QItemDelegate_HasClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
    ///
    /// ``` self: ?*C.QItemDelegate, clip: bool ```
    pub fn SetClipping(self: ?*anyopaque, clip: bool) void {
        C.QItemDelegate_SetClipping(@ptrCast(self), clip);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QSize) void {
        C.QItemDelegate_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QItemDelegate_QBaseSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
    ///
    /// ``` self: ?*C.QItemDelegate, parent: ?*C.QWidget, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) ?*C.QWidget {
        return C.QItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QWidget, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) ?*C.QWidget ```
    pub fn OnCreateEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QWidget) void {
        C.QItemDelegate_OnCreateEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, parent: ?*C.QWidget, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) ?*C.QWidget {
        return C.QItemDelegate_QBaseCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, index: ?*C.QModelIndex ```
    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QWidget, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnSetEditorData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnSetEditorData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, index: ?*C.QModelIndex ```
    pub fn QBaseSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBaseSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, model: ?*C.QAbstractItemModel, index: ?*C.QModelIndex ```
    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QWidget, ?*C.QAbstractItemModel, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnSetModelData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnSetModelData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, model: ?*C.QAbstractItemModel, index: ?*C.QModelIndex ```
    pub fn QBaseSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBaseSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QWidget, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBaseUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn ItemEditorFactory(self: ?*anyopaque) ?*C.QItemEditorFactory {
        return C.QItemDelegate_ItemEditorFactory(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
    ///
    /// ``` self: ?*C.QItemDelegate, factory: ?*C.QItemEditorFactory ```
    pub fn SetItemEditorFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        C.QItemDelegate_SetItemEditorFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, text: []const u8 ```
    pub fn DrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QItemDelegate_DrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QRect, []const u8) callconv(.c) void ```
    pub fn OnDrawDisplay(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, []const u8) callconv(.c) void) void {
        C.QItemDelegate_OnDrawDisplay(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, text: []const u8 ```
    pub fn QBaseDrawDisplay(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QItemDelegate_QBaseDrawDisplay(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, pixmap: ?*C.QPixmap ```
    pub fn DrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        C.QItemDelegate_DrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QRect, ?*C.QPixmap) callconv(.c) void ```
    pub fn OnDrawDecoration(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnDrawDecoration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, pixmap: ?*C.QPixmap ```
    pub fn QBaseDrawDecoration(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, pixmap: ?*anyopaque) void {
        C.QItemDelegate_QBaseDrawDecoration(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect ```
    pub fn DrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        C.QItemDelegate_DrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QRect) callconv(.c) void ```
    pub fn OnDrawFocus(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnDrawFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect ```
    pub fn QBaseDrawFocus(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque) void {
        C.QItemDelegate_QBaseDrawFocus(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, state: qnamespace_enums.CheckState ```
    pub fn DrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i64) void {
        C.QItemDelegate_DrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @intCast(state));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QRect, qnamespace_enums.CheckState) callconv(.c) void ```
    pub fn OnDrawCheck(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QItemDelegate_OnDrawCheck(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, rect: ?*C.QRect, state: qnamespace_enums.CheckState ```
    pub fn QBaseDrawCheck(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, rect: ?*anyopaque, state: i64) void {
        C.QItemDelegate_QBaseDrawCheck(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(rect), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDrawBackground(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnDrawBackground(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, checkRect: ?*C.QRect, iconRect: ?*C.QRect, textRect: ?*C.QRect, hint: bool ```
    pub fn DoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        C.QItemDelegate_DoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QStyleOptionViewItem, ?*C.QRect, ?*C.QRect, ?*C.QRect, bool) callconv(.c) void ```
    pub fn OnDoLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        C.QItemDelegate_OnDoLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, checkRect: ?*C.QRect, iconRect: ?*C.QRect, textRect: ?*C.QRect, hint: bool ```
    pub fn QBaseDoLayout(self: ?*anyopaque, option: ?*anyopaque, checkRect: ?*anyopaque, iconRect: ?*anyopaque, textRect: ?*anyopaque, hint: bool) void {
        C.QItemDelegate_QBaseDoLayout(@ptrCast(self), @ptrCast(option), @ptrCast(checkRect), @ptrCast(iconRect), @ptrCast(textRect), hint);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex, role: i32 ```
    pub fn Rect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QRect {
        return C.QItemDelegate_Rect(@ptrCast(self), @ptrCast(option), @ptrCast(index), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QStyleOptionViewItem, ?*C.QModelIndex, i32) callconv(.c) ?*C.QRect ```
    pub fn OnRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) ?*C.QRect) void {
        C.QItemDelegate_OnRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex, role: i32 ```
    pub fn QBaseRect(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QRect {
        return C.QItemDelegate_QBaseRect(@ptrCast(self), @ptrCast(option), @ptrCast(index), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
    ///
    /// ``` self: ?*C.QItemDelegate, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemDelegate_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemDelegate_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, object: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemDelegate_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent, model: ?*C.QAbstractItemModel, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn EditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QEvent, ?*C.QAbstractItemModel, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnEditorEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemDelegate_OnEditorEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent, model: ?*C.QAbstractItemModel, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseEditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemDelegate_QBaseEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
    ///
    /// ``` self: ?*C.QItemDelegate, index: ?*C.QModelIndex, option: ?*C.QStyleOptionViewItem ```
    pub fn SetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) ?*C.QStyleOptionViewItem {
        return C.QItemDelegate_SetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QModelIndex, ?*C.QStyleOptionViewItem) callconv(.c) ?*C.QStyleOptionViewItem ```
    pub fn OnSetOptions(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QStyleOptionViewItem) void {
        C.QItemDelegate_OnSetOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, index: ?*C.QModelIndex, option: ?*C.QStyleOptionViewItem ```
    pub fn QBaseSetOptions(self: ?*anyopaque, index: ?*anyopaque, option: ?*anyopaque) ?*C.QStyleOptionViewItem {
        return C.QItemDelegate_QBaseSetOptions(@ptrCast(self), @ptrCast(index), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, variant: ?*C.QVariant ```
    pub fn Decoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) ?*C.QPixmap {
        return C.QItemDelegate_Decoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QStyleOptionViewItem, ?*C.QVariant) callconv(.c) ?*C.QPixmap ```
    pub fn OnDecoration(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPixmap) void {
        C.QItemDelegate_OnDecoration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, variant: ?*C.QVariant ```
    pub fn QBaseDecoration(self: ?*anyopaque, option: ?*anyopaque, variant: ?*anyopaque) ?*C.QPixmap {
        return C.QItemDelegate_QBaseDecoration(@ptrCast(self), @ptrCast(option), @ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, bounding: ?*C.QRect, variant: ?*C.QVariant ```
    pub fn DoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) ?*C.QRect {
        return C.QItemDelegate_DoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QStyleOptionViewItem, ?*C.QRect, ?*C.QVariant) callconv(.c) ?*C.QRect ```
    pub fn OnDoCheck(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QItemDelegate_OnDoCheck(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, option: ?*C.QStyleOptionViewItem, bounding: ?*C.QRect, variant: ?*C.QVariant ```
    pub fn QBaseDoCheck(self: ?*anyopaque, option: ?*anyopaque, bounding: ?*anyopaque, variant: ?*anyopaque) ?*C.QRect {
        return C.QItemDelegate_QBaseDoCheck(@ptrCast(self), @ptrCast(option), @ptrCast(bounding), @ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, rect: ?*C.QRect, font: ?*C.QFont, text: []const u8 ```
    pub fn TextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QItemDelegate_TextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QPainter, ?*C.QRect, ?*C.QFont, []const u8) callconv(.c) ?*C.QRect ```
    pub fn OnTextRectangle(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, []const u8) callconv(.c) ?*C.QRect) void {
        C.QItemDelegate_OnTextRectangle(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemDelegate, painter: ?*C.QPainter, rect: ?*C.QRect, font: ?*C.QFont, text: []const u8 ```
    pub fn QBaseTextRectangle(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, font: ?*anyopaque, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QItemDelegate_QBaseTextRectangle(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(font), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QItemDelegate_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QItemDelegate_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QAbstractItemDelegate_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ``` self: ?*C.QAbstractItemDelegate, slot: fn (?*C.QAbstractItemDelegate, ?*C.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        C.QAbstractItemDelegate_CloseEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ``` self: ?*C.QAbstractItemDelegate, slot: fn (?*C.QAbstractItemDelegate, ?*C.QWidget) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: ?*C.QItemDelegate, param1: ?*C.QModelIndex ```
    pub fn SizeHintChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ``` self: ?*C.QAbstractItemDelegate, slot: fn (?*C.QAbstractItemDelegate, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnSizeHintChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor2(self: ?*anyopaque, editor: ?*anyopaque, hint: i64) void {
        C.QAbstractItemDelegate_CloseEditor2(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ``` self: ?*C.QAbstractItemDelegate, slot: fn (?*C.QAbstractItemDelegate, ?*C.QWidget, qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QItemDelegate, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QItemDelegate, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QItemDelegate, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QItemDelegate, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QItemDelegate, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QItemDelegate, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QItemDelegate, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QItemDelegate, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QItemDelegate, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QItemDelegate, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QItemDelegate, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QItemDelegate ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QItemDelegate, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QItemDelegate, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QItemDelegate, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QItemDelegate ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QItemDelegate ```
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
    /// ``` self: ?*C.QItemDelegate ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QItemDelegate, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QItemDelegate, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QItemDelegate, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QItemDelegate, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, index: ?*C.QModelIndex ```
    pub fn DestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_DestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, editor: ?*C.QWidget, index: ?*C.QModelIndex ```
    pub fn QBaseDestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        C.QItemDelegate_QBaseDestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QWidget, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDestroyEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnDestroyEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QHelpEvent, view: ?*C.QAbstractItemView, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QHelpEvent, view: ?*C.QAbstractItemView, option: ?*C.QStyleOptionViewItem, index: ?*C.QModelIndex ```
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemDelegate_QBaseHelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QHelpEvent, ?*C.QAbstractItemView, ?*C.QStyleOptionViewItem, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnHelpEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemDelegate_OnHelpEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, allocator: std.mem.Allocator ```
    pub fn PaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: C.struct_libqt_list = C.QItemDelegate_PaintingRoles(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, allocator: std.mem.Allocator ```
    pub fn QBasePaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: C.struct_libqt_list = C.QItemDelegate_QBasePaintingRoles(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn () callconv(.c) []i32 ```
    pub fn OnPaintingRoles(self: ?*anyopaque, slot: fn () callconv(.c) []i32) void {
        C.QItemDelegate_OnPaintingRoles(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemDelegate_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemDelegate_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemDelegate_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemDelegate_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemDelegate_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemDelegate_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemDelegate_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemDelegate_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemDelegate_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QItemDelegate_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QItemDelegate_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QItemDelegate_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QItemDelegate_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QItemDelegate_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QItemDelegate_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QItemDelegate_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QItemDelegate_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QItemDelegate_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QItemDelegate_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QItemDelegate_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemDelegate, slot: fn (?*C.QItemDelegate, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemDelegate_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QItemDelegate ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QItemDelegate_Delete(@ptrCast(self));
    }
};
