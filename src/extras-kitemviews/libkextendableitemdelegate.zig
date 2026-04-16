const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHelpEvent = @import("libqt6").QHelpEvent;
const QItemEditorFactory = @import("libqt6").QItemEditorFactory;
const QLocale = @import("libqt6").QLocale;
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
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html)
pub const KExtendableItemDelegate = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KExtendableItemDelegate,

    pub const _is_KExtendableItemDelegate = {};
    pub const _is_QStyledItemDelegate = {};
    pub const _is_QAbstractItemDelegate = {};
    pub const _is_QObject = {};

    /// New constructs a new KExtendableItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QAbstractItemView `
    ///
    pub fn New(parent: anytype) KExtendableItemDelegate {
        comptime _ = @TypeOf(parent)._is_QAbstractItemView;
        return .{ .ptr = qtc.KExtendableItemDelegate_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn MetaObject(self: KExtendableItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KExtendableItemDelegate_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KExtendableItemDelegate_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SuperMetaObject(self: KExtendableItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KExtendableItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KExtendableItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KExtendableItemDelegate_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KExtendableItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KExtendableItemDelegate_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KExtendableItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KExtendableItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHint(self: KExtendableItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) QSize) void {
        qtc.KExtendableItemDelegate_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSizeHint(self: KExtendableItemDelegate, option: anytype, index: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperSizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Paint(self: KExtendableItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, painter: QPainter, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPaint(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperPaint(self: KExtendableItemDelegate, painter: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ExtendItem(self: KExtendableItemDelegate, extender: anytype, index: anytype) void {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_ExtendItem(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ContractItem(self: KExtendableItemDelegate, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_ContractItem(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn ContractAll(self: KExtendableItemDelegate) void {
        qtc.KExtendableItemDelegate_ContractAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsExtended(self: KExtendableItemDelegate, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KExtendableItemDelegate_IsExtended(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn UpdateExtenderGeometry(self: KExtendableItemDelegate, extender: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_UpdateExtenderGeometry(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, extender: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateExtenderGeometry(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateExtenderGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateExtenderGeometry` instead
    ///
    pub const QBaseUpdateExtenderGeometry = SuperUpdateExtenderGeometry;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperUpdateExtenderGeometry(self: KExtendableItemDelegate, extender: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperUpdateExtenderGeometry(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ExtenderCreated(self: KExtendableItemDelegate, extender: anytype, index: anytype) void {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_ExtenderCreated(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, extender: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnExtenderCreated(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ExtenderDestroyed(self: KExtendableItemDelegate, extender: anytype, index: anytype) void {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_ExtenderDestroyed(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, extender: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnExtenderDestroyed(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ExtenderRect(self: KExtendableItemDelegate, extender: anytype, option: anytype, index: anytype) QRect {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_ExtenderRect(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, extender: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnExtenderRect(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QRect) void {
        qtc.KExtendableItemDelegate_OnExtenderRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExtenderRect` instead
    ///
    pub const QBaseExtenderRect = SuperExtenderRect;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` extender: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperExtenderRect(self: KExtendableItemDelegate, extender: anytype, option: anytype, index: anytype) QRect {
        comptime _ = @TypeOf(extender)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperExtenderRect(@ptrCast(self.ptr), @ptrCast(extender.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetExtendPixmap(self: KExtendableItemDelegate, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KExtendableItemDelegate_SetExtendPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn OnSetExtendPixmap(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QPixmap) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetExtendPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetExtendPixmap` instead
    ///
    pub const QBaseSetExtendPixmap = SuperSetExtendPixmap;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperSetExtendPixmap(self: KExtendableItemDelegate, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KExtendableItemDelegate_SuperSetExtendPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetContractPixmap(self: KExtendableItemDelegate, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KExtendableItemDelegate_SetContractPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn OnSetContractPixmap(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QPixmap) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetContractPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetContractPixmap` instead
    ///
    pub const QBaseSetContractPixmap = SuperSetContractPixmap;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperSetContractPixmap(self: KExtendableItemDelegate, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KExtendableItemDelegate_SuperSetContractPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn ExtendPixmap(self: KExtendableItemDelegate) QPixmap {
        return .{ .ptr = qtc.KExtendableItemDelegate_ExtendPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    pub fn OnExtendPixmap(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.KExtendableItemDelegate_OnExtendPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExtendPixmap` instead
    ///
    pub const QBaseExtendPixmap = SuperExtendPixmap;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SuperExtendPixmap(self: KExtendableItemDelegate) QPixmap {
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperExtendPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn ContractPixmap(self: KExtendableItemDelegate) QPixmap {
        return .{ .ptr = qtc.KExtendableItemDelegate_ContractPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    pub fn OnContractPixmap(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.KExtendableItemDelegate_OnContractPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContractPixmap` instead
    ///
    pub const QBaseContractPixmap = SuperContractPixmap;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SuperContractPixmap(self: KExtendableItemDelegate) QPixmap {
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperContractPixmap(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#itemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn ItemEditorFactory(self: KExtendableItemDelegate) QItemEditorFactory {
        return .{ .ptr = qtc.QStyledItemDelegate_ItemEditorFactory(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` factory: QItemEditorFactory `
    ///
    pub fn SetItemEditorFactory(self: KExtendableItemDelegate, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QItemEditorFactory;
        qtc.QStyledItemDelegate_SetItemEditorFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: KExtendableItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CloseEditor(self: KExtendableItemDelegate, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: QModelIndex `
    ///
    pub fn SizeHintChanged(self: KExtendableItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QModelIndex;
        qtc.QAbstractItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, param1: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSizeHintChanged(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor2(self: KExtendableItemDelegate, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QAbstractItemDelegate_CloseEditor2(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor2(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, i32) callconv(.c) void) void {
        qtc.QAbstractItemDelegate_Connect_CloseEditor2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KExtendableItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KExtendableItemDelegate, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn IsWidgetType(self: KExtendableItemDelegate) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn IsWindowType(self: KExtendableItemDelegate) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn IsQuickItemType(self: KExtendableItemDelegate) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SignalsBlocked(self: KExtendableItemDelegate) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KExtendableItemDelegate, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Thread(self: KExtendableItemDelegate) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KExtendableItemDelegate, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KExtendableItemDelegate, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KExtendableItemDelegate, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KExtendableItemDelegate, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KExtendableItemDelegate, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KExtendableItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kextendableitemdelegate.Children: Memory allocation failed");
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KExtendableItemDelegate, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KExtendableItemDelegate, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KExtendableItemDelegate, obj: anytype) void {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KExtendableItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Disconnect3(self: KExtendableItemDelegate) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KExtendableItemDelegate, receiver: anytype) bool {
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
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn DumpObjectTree(self: KExtendableItemDelegate) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn DumpObjectInfo(self: KExtendableItemDelegate) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KExtendableItemDelegate, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KExtendableItemDelegate, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KExtendableItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn BindingStorage(self: KExtendableItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn BindingStorage2(self: KExtendableItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Destroyed(self: KExtendableItemDelegate) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Parent(self: KExtendableItemDelegate) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KExtendableItemDelegate, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn DeleteLater(self: KExtendableItemDelegate) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KExtendableItemDelegate, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KExtendableItemDelegate, time: i64, timerType: i32) i32 {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KExtendableItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KExtendableItemDelegate, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KExtendableItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KExtendableItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KExtendableItemDelegate, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KExtendableItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CreateEditor(self: KExtendableItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_CreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateEditor` instead
    ///
    pub const QBaseCreateEditor = SuperCreateEditor;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` parent: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperCreateEditor(self: KExtendableItemDelegate, parent: anytype, option: anytype, index: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperCreateEditor(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, parent: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) QWidget `
    ///
    pub fn OnCreateEditor(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) QWidget) void {
        qtc.KExtendableItemDelegate_OnCreateEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetEditorData(self: KExtendableItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetEditorData` instead
    ///
    pub const QBaseSetEditorData = SuperSetEditorData;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetEditorData(self: KExtendableItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperSetEditorData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetEditorData(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetModelData(self: KExtendableItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetModelData` instead
    ///
    pub const QBaseSetModelData = SuperSetModelData;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetModelData(self: KExtendableItemDelegate, editor: anytype, model: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperSetModelData(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(model.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget, model: QAbstractItemModel, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetModelData(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QAbstractItemModel, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetModelData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn UpdateEditorGeometry(self: KExtendableItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_UpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometry` instead
    ///
    pub const QBaseUpdateEditorGeometry = SuperUpdateEditorGeometry;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperUpdateEditorGeometry(self: KExtendableItemDelegate, editor: anytype, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometry(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateEditorGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: QVariant `
    ///
    /// ` locale: QLocale `
    ///
    pub fn DisplayText(self: KExtendableItemDelegate, allocator: std.mem.Allocator, value: anytype, locale: anytype) []const u8 {
        comptime _ = @TypeOf(value)._is_QVariant;
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.KExtendableItemDelegate_DisplayText(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperDisplayText` instead
    ///
    pub const QBaseDisplayText = SuperDisplayText;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: QVariant `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SuperDisplayText(self: KExtendableItemDelegate, allocator: std.mem.Allocator, value: anytype, locale: anytype) []const u8 {
        comptime _ = @TypeOf(value)._is_QVariant;
        comptime _ = @TypeOf(locale)._is_QLocale;
        var _str = qtc.KExtendableItemDelegate_SuperDisplayText(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(locale.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, value: QVariant, locale: QLocale) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnDisplayText(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QVariant, QLocale) callconv(.c) [*:0]const u8) void {
        qtc.KExtendableItemDelegate_OnDisplayText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn InitStyleOption(self: KExtendableItemDelegate, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperInitStyleOption(self: KExtendableItemDelegate, option: anytype, index: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KExtendableItemDelegate, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KExtendableItemDelegate_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KExtendableItemDelegate, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KExtendableItemDelegate_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QObject, QEvent) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn EditorEvent(self: KExtendableItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KExtendableItemDelegate_EditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperEditorEvent` instead
    ///
    pub const QBaseEditorEvent = SuperEditorEvent;

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperEditorEvent(self: KExtendableItemDelegate, event: anytype, model: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KExtendableItemDelegate_SuperEditorEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(model.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QEvent, model: QAbstractItemModel, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnEditorEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QEvent, QAbstractItemModel, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEditorEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DestroyEditor(self: KExtendableItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_DestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` editor: QWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDestroyEditor(self: KExtendableItemDelegate, editor: anytype, index: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KExtendableItemDelegate_SuperDestroyEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, editor: QWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDestroyEditor(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QWidget, QModelIndex) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDestroyEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn HelpEvent(self: KExtendableItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KExtendableItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: QAbstractItemView `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperHelpEvent(self: KExtendableItemDelegate, event: anytype, view: anytype, option: anytype, index: anytype) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KExtendableItemDelegate_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QHelpEvent, view: QAbstractItemView, option: QStyleOptionViewItem, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHelpEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QHelpEvent, QAbstractItemView, QStyleOptionViewItem, QModelIndex) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PaintingRoles(self: KExtendableItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_PaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kextendableitemdelegate.PaintingRoles: Memory allocation failed");
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPaintingRoles(self: KExtendableItemDelegate, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_SuperPaintingRoles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kextendableitemdelegate.PaintingRoles: Memory allocation failed");
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
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnPaintingRoles(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KExtendableItemDelegate_OnPaintingRoles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KExtendableItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KExtendableItemDelegate_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KExtendableItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KExtendableItemDelegate_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QEvent) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KExtendableItemDelegate_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KExtendableItemDelegate_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QTimerEvent) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KExtendableItemDelegate_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KExtendableItemDelegate_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QChildEvent) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KExtendableItemDelegate_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KExtendableItemDelegate, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KExtendableItemDelegate_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QEvent) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KExtendableItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KExtendableItemDelegate_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KExtendableItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KExtendableItemDelegate_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KExtendableItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KExtendableItemDelegate_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KExtendableItemDelegate, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KExtendableItemDelegate_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QMetaMethod) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Sender(self: KExtendableItemDelegate) QObject {
        return .{ .ptr = qtc.KExtendableItemDelegate_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SuperSender(self: KExtendableItemDelegate) QObject {
        return .{ .ptr = qtc.KExtendableItemDelegate_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) QObject) void {
        qtc.KExtendableItemDelegate_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SenderSignalIndex(self: KExtendableItemDelegate) i32 {
        return qtc.KExtendableItemDelegate_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn SuperSenderSignalIndex(self: KExtendableItemDelegate) i32 {
        return qtc.KExtendableItemDelegate_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KExtendableItemDelegate, callback: *const fn () callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KExtendableItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KExtendableItemDelegate, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, [*:0]const u8) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KExtendableItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KExtendableItemDelegate_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KExtendableItemDelegate, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KExtendableItemDelegate_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, QMetaMethod) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: KExtendableItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KExtendableItemDelegate, callback: *const fn (KExtendableItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#dtor.KExtendableItemDelegate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KExtendableItemDelegate `
    ///
    pub fn Delete(self: KExtendableItemDelegate) void {
        qtc.KExtendableItemDelegate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#public-types)
pub const enums = struct {
    pub const auxDataRoles = enum(i32) {
        pub const ShowExtensionIndicatorRole: i32 = 456;
    };
};
