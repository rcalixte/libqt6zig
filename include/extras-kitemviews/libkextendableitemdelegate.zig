const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemdelegate_enums = @import("../libqabstractitemdelegate.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html)
pub const kextendableitemdelegate = struct {
    /// New constructs a new KExtendableItemDelegate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QAbstractItemView `
    ///
    pub fn New(parent: ?*anyopaque) QtC.KExtendableItemDelegate {
        return qtc.KExtendableItemDelegate_new(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KExtendableItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KExtendableItemDelegate_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KExtendableItemDelegate_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KExtendableItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KExtendableItemDelegate_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KExtendableItemDelegate_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KExtendableItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KExtendableItemDelegate_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KExtendableItemDelegate_SuperSizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, painter: QtC.QPainter, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperPaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ExtendItem(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtendItem(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ContractItem(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ContractItem(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn ContractAll(self: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ContractAll(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsExtended(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_IsExtended(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn UpdateExtenderGeometry(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_UpdateExtenderGeometry(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateExtenderGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateExtenderGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperUpdateExtenderGeometry(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperUpdateExtenderGeometry(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ExtenderCreated(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtenderCreated(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnExtenderCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderCreated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ExtenderDestroyed(self: ?*anyopaque, extender: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ExtenderDestroyed(@ptrCast(self), @ptrCast(extender), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnExtenderDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_Connect_ExtenderDestroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ExtenderRect(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.KExtendableItemDelegate_ExtenderRect(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, extender: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QRect `
    ///
    pub fn OnExtenderRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.KExtendableItemDelegate_OnExtenderRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` extender: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperExtenderRect(self: ?*anyopaque, extender: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QRect {
        return qtc.KExtendableItemDelegate_SuperExtenderRect(@ptrCast(self), @ptrCast(extender), @ptrCast(option), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SetExtendPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetExtendPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap) callconv(.c) void `
    ///
    pub fn OnSetExtendPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetExtendPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SuperSetExtendPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperSetExtendPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SetContractPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetContractPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, pixmap: QtC.QPixmap) callconv(.c) void `
    ///
    pub fn OnSetContractPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetContractPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SuperSetContractPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperSetContractPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn ExtendPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_ExtendPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPixmap `
    ///
    pub fn OnExtendPixmap(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPixmap) void {
        qtc.KExtendableItemDelegate_OnExtendPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SuperExtendPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_SuperExtendPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn ContractPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_ContractPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPixmap `
    ///
    pub fn OnContractPixmap(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPixmap) void {
        qtc.KExtendableItemDelegate_OnContractPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SuperContractPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KExtendableItemDelegate_SuperContractPixmap(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kextendableitemdelegate.Tr2: Memory allocation failed");
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn ItemEditorFactory(self: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QStyledItemDelegate_ItemEditorFactory(@ptrCast(self));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` factory: QtC.QItemEditorFactory `
    ///
    pub fn SetItemEditorFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QStyledItemDelegate_SetItemEditorFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget) callconv(.c) void `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget) callconv(.c) void `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, param1: QtC.QModelIndex) callconv(.c) void `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate) callconv(.c) void `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn CreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KExtendableItemDelegate_CreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` parent: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperCreateEditor(self: ?*anyopaque, parent: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) QtC.QWidget {
        return qtc.KExtendableItemDelegate_SuperCreateEditor(@ptrCast(self), @ptrCast(parent), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, parent: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) QtC.QWidget `
    ///
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KExtendableItemDelegate_OnCreateEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSetEditorData(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperSetEditorData(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetEditorData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetEditorData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSetModelData(self: ?*anyopaque, editor: ?*anyopaque, model: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperSetModelData(@ptrCast(self), @ptrCast(editor), @ptrCast(model), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, model: QtC.QAbstractItemModel, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetModelData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnSetModelData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn UpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_UpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperUpdateEditorGeometry(self: ?*anyopaque, editor: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperUpdateEditorGeometry(@ptrCast(self), @ptrCast(editor), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnUpdateEditorGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` locale: QtC.QLocale `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayText(self: ?*anyopaque, value: ?*anyopaque, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KExtendableItemDelegate_DisplayText(@ptrCast(self), @ptrCast(value), @ptrCast(locale));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` locale: QtC.QLocale `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperDisplayText(self: ?*anyopaque, value: ?*anyopaque, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KExtendableItemDelegate_SuperDisplayText(@ptrCast(self), @ptrCast(value), @ptrCast(locale));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, value: QtC.QVariant, locale: QtC.QLocale) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnDisplayText(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.KExtendableItemDelegate_OnDisplayText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_InitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` option: QtC.QStyleOptionViewItem `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperInitStyleOption(self: ?*anyopaque, option: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperInitStyleOption(@ptrCast(self), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnInitStyleOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_SuperEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
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
        return qtc.KExtendableItemDelegate_EditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
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
        return qtc.KExtendableItemDelegate_SuperEditorEvent(@ptrCast(self), @ptrCast(event), @ptrCast(model), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QStyledItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent, model: QtC.QAbstractItemModel, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnEditorEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEditorEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn DestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_DestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` editor: QtC.QWidget `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperDestroyEditor(self: ?*anyopaque, editor: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperDestroyEditor(@ptrCast(self), @ptrCast(editor), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, editor: QtC.QWidget, index: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDestroyEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDestroyEditor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
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
        return qtc.KExtendableItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
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
    /// ` self: QtC.KExtendableItemDelegate `
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
        return qtc.KExtendableItemDelegate_SuperHelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(index));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QHelpEvent, view: QtC.QAbstractItemView, option: QtC.QStyleOptionViewItem, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHelpEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnHelpEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemDelegate
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_PaintingRoles(@ptrCast(self));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPaintingRoles(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KExtendableItemDelegate_SuperPaintingRoles(@ptrCast(self));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnPaintingRoles(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KExtendableItemDelegate_OnPaintingRoles(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KExtendableItemDelegate_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KExtendableItemDelegate_Sender(@ptrCast(self));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KExtendableItemDelegate_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KExtendableItemDelegate_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KExtendableItemDelegate_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KExtendableItemDelegate_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KExtendableItemDelegate_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KExtendableItemDelegate_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate`
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KExtendableItemDelegate_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    /// ` callback: *const fn (self: QtC.KExtendableItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KExtendableItemDelegate `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KExtendableItemDelegate_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#public-types)
pub const enums = struct {
    pub const auxDataRoles = enum(i32) {
        pub const ShowExtensionIndicatorRole: i32 = 456;
    };
};
