const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kextendableitemdelegate.html
pub const kextendableitemdelegate = struct {
    /// New constructs a new KExtendableItemDelegate object.
    ///
    /// ``` parent: QtC.QAbstractItemView ```
    pub fn New(parent: ?*anyopaque) QtC.KExtendableItemDelegate {
        return qtc.KExtendableItemDelegate_new(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KExtendableItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KExtendableItemDelegate, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KExtendableItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KExtendableItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KExtendableItemDelegate_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KExtendableItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KExtendableItemDelegate_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KExtendableItemDelegate_QBaseSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extendItem)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn ExtendItem(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtendItem(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#contractItem)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, index: QtC.QModelIndex ```
    pub fn ContractItem(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ContractItem(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#contractAll)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn ContractAll(self: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ContractAll(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#isExtended)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, index: QtC.QModelIndex ```
    pub fn IsExtended(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_IsExtended(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn UpdateExtenderGeometry(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_UpdateExtenderGeometry(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnUpdateExtenderGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateExtenderGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseUpdateExtenderGeometry(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseUpdateExtenderGeometry(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn ExtenderCreated(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtenderCreated(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnExtenderCreated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderCreated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn ExtenderDestroyed(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtenderDestroyed(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnExtenderDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderDestroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn ExtenderRect(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.KExtendableItemDelegate_ExtenderRect(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QRect ```
    pub fn OnExtenderRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.KExtendableItemDelegate_OnExtenderRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseExtenderRect(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.KExtendableItemDelegate_QBaseExtenderRect(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap ```
    pub fn SetExtendPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetExtendPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap) callconv(.c) void ```
    pub fn OnSetExtendPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetExtendPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap ```
    pub fn QBaseSetExtendPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseSetExtendPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap ```
    pub fn SetContractPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetContractPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap) callconv(.c) void ```
    pub fn OnSetContractPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetContractPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap ```
    pub fn QBaseSetContractPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseSetContractPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn ExtendPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_ExtendPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnExtendPixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.KExtendableItemDelegate_OnExtendPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn QBaseExtendPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_QBaseExtendPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn ContractPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_ContractPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnContractPixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.KExtendableItemDelegate_OnContractPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn QBaseContractPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_QBaseContractPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KExtendableItemDelegate_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KExtendableItemDelegate_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#itemEditorFactory)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn ItemEditorFactory(self: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QStyledItemDelegate_ItemEditorFactory(@ptrCast(self));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, factory: QtC.QItemEditorFactory ```
    pub fn SetItemEditorFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QStyledItemDelegate_SetItemEditorFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget ```
    pub fn CommitData(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCommitData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget ```
    pub fn CloseEditor(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self), @ptrCast(editor));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget) callconv(.c) void ```
    pub fn OnCloseEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, param1: QtC.QModelIndex ```
    pub fn SizeHintChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, param1: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSizeHintChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint ```
    pub fn CloseEditor2(self: ?*anyopaque, editor: ?*anyopaque, hint: i32) void {
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self), @ptrCast(editor), @intCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void ```
    pub fn OnCloseEditor2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kextendableitemdelegate.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kextendableitemdelegate.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kextendableitemdelegate.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KExtendableItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KExtendableItemDelegate_QBaseCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QWidget ```
    pub fn OnCreateEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KExtendableItemDelegate_OnCreateEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn QBaseSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetEditorData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetEditorData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex ```
    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex ```
    pub fn QBaseSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnSetModelData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetModelData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, value: QtC.QVariant, locale: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn DisplayText(self: ?*anyopaque, value: ?*anyopaque, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KExtendableItemDelegate_DisplayText(@ptrCast(self), @ptrCast(value), @ptrCast(locale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, value: QtC.QVariant, locale: QtC.QLocale, allocator: std.mem.Allocator ```
    pub fn QBaseDisplayText(self: ?*anyopaque, value: ?*anyopaque, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KExtendableItemDelegate_QBaseDisplayText(@ptrCast(self), @ptrCast(value), @ptrCast(locale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, value: QtC.QVariant, locale: QtC.QLocale) callconv(.c) [*:0]const u8 ```
    pub fn OnDisplayText(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KExtendableItemDelegate_OnDisplayText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_InitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn EditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseEditorEvent(self: ?*anyopaque, event: ?*anyopaque, model: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_QBaseEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnEditorEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEditorEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn DestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_DestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex ```
    pub fn QBaseDestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseDestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDestroyEditor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDestroyEditor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex ```
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_QBaseHelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHelpEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnHelpEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, allocator: std.mem.Allocator ```
    pub fn PaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_PaintingRoles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kextendableitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, allocator: std.mem.Allocator ```
    pub fn QBasePaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_QBasePaintingRoles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kextendableitemdelegate.PaintingRoles: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn () callconv(.c) [*:-1]i32 ```
    pub fn OnPaintingRoles(self: ?*anyopaque, slot: fn () callconv(.c) [*:-1]i32) void {
        qtc.KExtendableItemDelegate_OnPaintingRoles(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KExtendableItemDelegate_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KExtendableItemDelegate_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KExtendableItemDelegate_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KExtendableItemDelegate, slot: fn (self: QtC.KExtendableItemDelegate, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kextendableitemdelegate.html#dtor.KExtendableItemDelegate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KExtendableItemDelegate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kextendableitemdelegate.html#types
pub const enums = struct {
    pub const auxDataRoles = enum {
        pub const ShowExtensionIndicatorRole: i32 = 456;
    };
};
