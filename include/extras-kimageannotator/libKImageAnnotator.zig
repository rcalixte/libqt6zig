const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QColor = @import("libqt6").QColor;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEnterEvent = @import("libqt6").QEnterEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
pub const kImageAnnotator = extern struct {
    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.kImageAnnotator,

    pub const _is_kImageAnnotator = {};

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    pub fn LoadTranslations() void {
        qtc.kImageAnnotator_LoadTranslations();
    }
};

/// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
pub const kImageAnnotator__KImageAnnotator = extern struct {
    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.kImageAnnotator__KImageAnnotator,

    pub const _is_kImageAnnotator__KImageAnnotator = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new kImageAnnotator::KImageAnnotator object.
    ///
    pub fn New() kImageAnnotator__KImageAnnotator {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MetaObject(self: kImageAnnotator__KImageAnnotator) QMetaObject {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperMetaObject(self: kImageAnnotator__KImageAnnotator) QMetaObject {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: kImageAnnotator__KImageAnnotator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.kImageAnnotator__KImageAnnotator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: kImageAnnotator__KImageAnnotator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.kImageAnnotator__KImageAnnotator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: kImageAnnotator__KImageAnnotator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: kImageAnnotator__KImageAnnotator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Image(self: kImageAnnotator__KImageAnnotator) QImage {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_Image(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    pub fn ImageAt(self: kImageAnnotator__KImageAnnotator, index: i32) QImage {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_ImageAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UndoAction(self: kImageAnnotator__KImageAnnotator) QAction {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_UndoAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn RedoAction(self: kImageAnnotator__KImageAnnotator) QAction {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_RedoAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SizeHint(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QSize) void {
        qtc.kImageAnnotator__KImageAnnotator_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperSizeHint(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowAnnotator(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowAnnotator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowCropper(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowCropper(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowScaler(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowScaler(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowRotator(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowRotator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowCanvasModifier(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowCanvasModifier(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowCutter(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ShowCutter(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn LoadImage(self: kImageAnnotator__KImageAnnotator, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.kImageAnnotator__KImageAnnotator_LoadImage(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` title: []const u8 `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn AddTab(self: kImageAnnotator__KImageAnnotator, pixmap: anytype, title: []const u8, toolTip: []const u8) i32 {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        return qtc.kImageAnnotator__KImageAnnotator_AddTab(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), title_str, toolTip_str);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn UpdateTabInfo(self: kImageAnnotator__KImageAnnotator, index: i32, title: []const u8, toolTip: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.kImageAnnotator__KImageAnnotator_UpdateTabInfo(@ptrCast(self.ptr), @bitCast(index), title_str, toolTip_str);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` position: QPointF `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn InsertImageItem(self: kImageAnnotator__KImageAnnotator, position: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.kImageAnnotator__KImageAnnotator_InsertImageItem(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTextFont(self: kImageAnnotator__KImageAnnotator, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.kImageAnnotator__KImageAnnotator_SetTextFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` font: QFont `
    ///
    pub fn SetNumberFont(self: kImageAnnotator__KImageAnnotator, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.kImageAnnotator__KImageAnnotator_SetNumberFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetItemShadowEnabled(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetItemShadowEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetSmoothPathEnabled(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSmoothPathEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetSaveToolSelection(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSaveToolSelection(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` factor: i32 `
    ///
    pub fn SetSmoothFactor(self: kImageAnnotator__KImageAnnotator, factor: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSmoothFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetSwitchToSelectToolAfterDrawingItem(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSwitchToSelectToolAfterDrawingItem(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetNumberToolSeedChangeUpdatesAllItems(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetNumberToolSeedChangeUpdatesAllItems(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTabBarAutoHide(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetTabBarAutoHide(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveTab(self: kImageAnnotator__KImageAnnotator, index: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_RemoveTab(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stickerPaths: []const []const u8 `
    ///
    /// ` keepDefault: bool `
    ///
    pub fn SetStickers(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator, stickerPaths: []const []const u8, keepDefault: bool) void {
        const stickerPaths_arr = allocator.alloc(qtc.libqt_string, stickerPaths.len) catch @panic("kimageannotator__kimageannotator.SetStickers: Memory allocation failed");
        defer allocator.free(stickerPaths_arr);
        for (stickerPaths, 0..stickerPaths.len) |item, i|
            stickerPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const stickerPaths_list = qtc.libqt_list{
            .len = stickerPaths.len,
            .data = stickerPaths_arr.ptr,
        };
        qtc.kImageAnnotator__KImageAnnotator_SetStickers(@ptrCast(self.ptr), stickerPaths_list, keepDefault);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddTabContextMenuActions(self: kImageAnnotator__KImageAnnotator, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.kImageAnnotator__KImageAnnotator_AddTabContextMenuActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` isCollapsed: bool `
    ///
    pub fn SetSettingsCollapsed(self: kImageAnnotator__KImageAnnotator, isCollapsed: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSettingsCollapsed(@ptrCast(self.ptr), isCollapsed);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` color: QColor `
    ///
    pub fn SetCanvasColor(self: kImageAnnotator__KImageAnnotator, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.kImageAnnotator__KImageAnnotator_SetCanvasColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetSelectItemAfterDrawing(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetSelectItemAfterDrawing(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetControlsWidgetVisible(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetControlsWidgetVisible(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ImageChanged(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_ImageChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator) callconv(.c) void `
    ///
    pub fn OnImageChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_Connect_ImageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    pub fn CurrentTabChanged(self: kImageAnnotator__KImageAnnotator, index: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_CurrentTabChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, index: i32) callconv(.c) void `
    ///
    pub fn OnCurrentTabChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_Connect_CurrentTabChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    pub fn TabCloseRequested(self: kImageAnnotator__KImageAnnotator, index: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_TabCloseRequested(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, index: i32) callconv(.c) void `
    ///
    pub fn OnTabCloseRequested(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_Connect_TabCloseRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` fromIndex: i32 `
    ///
    /// ` toIndex: i32 `
    ///
    pub fn TabMoved(self: kImageAnnotator__KImageAnnotator, fromIndex: i32, toIndex: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_TabMoved(@ptrCast(self.ptr), @bitCast(fromIndex), @bitCast(toIndex));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, fromIndex: i32, toIndex: i32) callconv(.c) void `
    ///
    pub fn OnTabMoved(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32, i32) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_Connect_TabMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` index: i32 `
    ///
    pub fn TabContextMenuOpened(self: kImageAnnotator__KImageAnnotator, index: i32) void {
        qtc.kImageAnnotator__KImageAnnotator_TabContextMenuOpened(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, index: i32) callconv(.c) void `
    ///
    pub fn OnTabContextMenuOpened(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_Connect_TabContextMenuOpened(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn WinId(self: kImageAnnotator__KImageAnnotator) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn CreateWinId(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn InternalWinId(self: kImageAnnotator__KImageAnnotator) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn EffectiveWinId(self: kImageAnnotator__KImageAnnotator) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Style(self: kImageAnnotator__KImageAnnotator) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: kImageAnnotator__KImageAnnotator, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsTopLevel(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsWindow(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsModal(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: kImageAnnotator__KImageAnnotator, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsEnabled(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: kImageAnnotator__KImageAnnotator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: kImageAnnotator__KImageAnnotator, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: kImageAnnotator__KImageAnnotator, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FrameGeometry(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Geometry(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn NormalGeometry(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn X(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Y(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Pos(self: kImageAnnotator__KImageAnnotator) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FrameSize(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Size(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Width(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Height(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Rect(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ChildrenRect(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ChildrenRegion(self: kImageAnnotator__KImageAnnotator) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MinimumSize(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MaximumSize(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MinimumWidth(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MinimumHeight(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MaximumWidth(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MaximumHeight(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: kImageAnnotator__KImageAnnotator, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: kImageAnnotator__KImageAnnotator, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: kImageAnnotator__KImageAnnotator, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: kImageAnnotator__KImageAnnotator, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: kImageAnnotator__KImageAnnotator, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: kImageAnnotator__KImageAnnotator, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: kImageAnnotator__KImageAnnotator, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: kImageAnnotator__KImageAnnotator, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SizeIncrement(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: kImageAnnotator__KImageAnnotator, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: kImageAnnotator__KImageAnnotator, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn BaseSize(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: kImageAnnotator__KImageAnnotator, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: kImageAnnotator__KImageAnnotator, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: kImageAnnotator__KImageAnnotator, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: kImageAnnotator__KImageAnnotator, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: kImageAnnotator__KImageAnnotator, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: kImageAnnotator__KImageAnnotator, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: kImageAnnotator__KImageAnnotator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: kImageAnnotator__KImageAnnotator, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: kImageAnnotator__KImageAnnotator, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: kImageAnnotator__KImageAnnotator, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: kImageAnnotator__KImageAnnotator, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Window(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn NativeParentWidget(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn TopLevelWidget(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Palette(self: kImageAnnotator__KImageAnnotator) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: kImageAnnotator__KImageAnnotator, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: kImageAnnotator__KImageAnnotator, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: kImageAnnotator__KImageAnnotator, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Font(self: kImageAnnotator__KImageAnnotator) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: kImageAnnotator__KImageAnnotator, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FontMetrics(self: kImageAnnotator__KImageAnnotator) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FontInfo(self: kImageAnnotator__KImageAnnotator) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Cursor(self: kImageAnnotator__KImageAnnotator) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: kImageAnnotator__KImageAnnotator, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UnsetCursor(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: kImageAnnotator__KImageAnnotator, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn HasMouseTracking(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UnderMouse(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: kImageAnnotator__KImageAnnotator, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn HasTabletTracking(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: kImageAnnotator__KImageAnnotator, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: kImageAnnotator__KImageAnnotator, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Mask(self: kImageAnnotator__KImageAnnotator) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ClearMask(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: kImageAnnotator__KImageAnnotator, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: kImageAnnotator__KImageAnnotator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Grab(self: kImageAnnotator__KImageAnnotator) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn GraphicsEffect(self: kImageAnnotator__KImageAnnotator) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: kImageAnnotator__KImageAnnotator, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: kImageAnnotator__KImageAnnotator, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: kImageAnnotator__KImageAnnotator, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: kImageAnnotator__KImageAnnotator, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: kImageAnnotator__KImageAnnotator, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: kImageAnnotator__KImageAnnotator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn WindowIcon(self: kImageAnnotator__KImageAnnotator) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: kImageAnnotator__KImageAnnotator, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: kImageAnnotator__KImageAnnotator, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: kImageAnnotator__KImageAnnotator, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: kImageAnnotator__KImageAnnotator, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn WindowOpacity(self: kImageAnnotator__KImageAnnotator) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsWindowModified(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: kImageAnnotator__KImageAnnotator, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: kImageAnnotator__KImageAnnotator, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ToolTipDuration(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: kImageAnnotator__KImageAnnotator, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: kImageAnnotator__KImageAnnotator, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: kImageAnnotator__KImageAnnotator, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: kImageAnnotator__KImageAnnotator, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: kImageAnnotator__KImageAnnotator, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UnsetLayoutDirection(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: kImageAnnotator__KImageAnnotator, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Locale(self: kImageAnnotator__KImageAnnotator) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UnsetLocale(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsRightToLeft(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsLeftToRight(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SetFocus(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsActiveWindow(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ActivateWindow(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ClearFocus(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: kImageAnnotator__KImageAnnotator, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: kImageAnnotator__KImageAnnotator, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn HasFocus(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QWidget `
    ///
    pub fn SetTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: kImageAnnotator__KImageAnnotator, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FocusProxy(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: kImageAnnotator__KImageAnnotator, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn GrabMouse(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ReleaseMouse(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn GrabKeyboard(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ReleaseKeyboard(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: kImageAnnotator__KImageAnnotator, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: kImageAnnotator__KImageAnnotator, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: kImageAnnotator__KImageAnnotator, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: kImageAnnotator__KImageAnnotator, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UpdatesEnabled(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: kImageAnnotator__KImageAnnotator, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn GraphicsProxyWidget(self: kImageAnnotator__KImageAnnotator) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Update(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Repaint(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: kImageAnnotator__KImageAnnotator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: kImageAnnotator__KImageAnnotator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: kImageAnnotator__KImageAnnotator, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Show(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Hide(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowMinimized(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowMaximized(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowFullScreen(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ShowNormal(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Close(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Raise(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Lower(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: kImageAnnotator__KImageAnnotator, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: kImageAnnotator__KImageAnnotator, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: kImageAnnotator__KImageAnnotator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: kImageAnnotator__KImageAnnotator, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kimageannotator__kimageannotator.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: kImageAnnotator__KImageAnnotator, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn AdjustSize(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsVisible(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: kImageAnnotator__KImageAnnotator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsHidden(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsMinimized(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsMaximized(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsFullScreen(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: kImageAnnotator__KImageAnnotator, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: kImageAnnotator__KImageAnnotator, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SizePolicy(self: kImageAnnotator__KImageAnnotator) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: kImageAnnotator__KImageAnnotator, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: kImageAnnotator__KImageAnnotator, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn VisibleRegion(self: kImageAnnotator__KImageAnnotator) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: kImageAnnotator__KImageAnnotator, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: kImageAnnotator__KImageAnnotator, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ContentsMargins(self: kImageAnnotator__KImageAnnotator) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ContentsRect(self: kImageAnnotator__KImageAnnotator) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Layout(self: kImageAnnotator__KImageAnnotator) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: kImageAnnotator__KImageAnnotator, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UpdateGeometry(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: kImageAnnotator__KImageAnnotator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: kImageAnnotator__KImageAnnotator, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: kImageAnnotator__KImageAnnotator, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: kImageAnnotator__KImageAnnotator, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FocusWidget(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn NextInFocusChain(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn PreviousInFocusChain(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn AcceptDrops(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: kImageAnnotator__KImageAnnotator, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: kImageAnnotator__KImageAnnotator, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: kImageAnnotator__KImageAnnotator, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: kImageAnnotator__KImageAnnotator, before: anytype, actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: kImageAnnotator__KImageAnnotator, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: kImageAnnotator__KImageAnnotator, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kimageannotator__kimageannotator.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: kImageAnnotator__KImageAnnotator, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: kImageAnnotator__KImageAnnotator, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: kImageAnnotator__KImageAnnotator, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: kImageAnnotator__KImageAnnotator, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ParentWidget(self: kImageAnnotator__KImageAnnotator) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: kImageAnnotator__KImageAnnotator, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: kImageAnnotator__KImageAnnotator, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: kImageAnnotator__KImageAnnotator, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn Find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: kImageAnnotator__KImageAnnotator, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: kImageAnnotator__KImageAnnotator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: kImageAnnotator__KImageAnnotator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: kImageAnnotator__KImageAnnotator, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: kImageAnnotator__KImageAnnotator, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn EnsurePolished(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: kImageAnnotator__KImageAnnotator, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn AutoFillBackground(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: kImageAnnotator__KImageAnnotator, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn BackingStore(self: kImageAnnotator__KImageAnnotator) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn WindowHandle(self: kImageAnnotator__KImageAnnotator) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Screen(self: kImageAnnotator__KImageAnnotator) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: kImageAnnotator__KImageAnnotator, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn CreateWindowContainer(window: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(window.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: kImageAnnotator__KImageAnnotator, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: kImageAnnotator__KImageAnnotator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: kImageAnnotator__KImageAnnotator, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: kImageAnnotator__KImageAnnotator, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: kImageAnnotator__KImageAnnotator, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: kImageAnnotator__KImageAnnotator, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: kImageAnnotator__KImageAnnotator, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: kImageAnnotator__KImageAnnotator, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: kImageAnnotator__KImageAnnotator, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: kImageAnnotator__KImageAnnotator, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: kImageAnnotator__KImageAnnotator, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: kImageAnnotator__KImageAnnotator, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: kImageAnnotator__KImageAnnotator, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: kImageAnnotator__KImageAnnotator, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: kImageAnnotator__KImageAnnotator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: kImageAnnotator__KImageAnnotator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: kImageAnnotator__KImageAnnotator, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: kImageAnnotator__KImageAnnotator, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWindowContainer2(window: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(window.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: anytype, parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(window.ptr), @ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kimageannotator__kimageannotator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: kImageAnnotator__KImageAnnotator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsWidgetType(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsWindowType(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn IsQuickItemType(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SignalsBlocked(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: kImageAnnotator__KImageAnnotator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Thread(self: kImageAnnotator__KImageAnnotator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: kImageAnnotator__KImageAnnotator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: kImageAnnotator__KImageAnnotator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: kImageAnnotator__KImageAnnotator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: kImageAnnotator__KImageAnnotator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: kImageAnnotator__KImageAnnotator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kimageannotator__kimageannotator.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: kImageAnnotator__KImageAnnotator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: kImageAnnotator__KImageAnnotator, obj: anytype) void {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: kImageAnnotator__KImageAnnotator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Disconnect3(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: kImageAnnotator__KImageAnnotator, receiver: anytype) bool {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DumpObjectTree(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DumpObjectInfo(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: kImageAnnotator__KImageAnnotator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: kImageAnnotator__KImageAnnotator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: kImageAnnotator__KImageAnnotator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kimageannotator__kimageannotator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kimageannotator__kimageannotator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn BindingStorage(self: kImageAnnotator__KImageAnnotator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn BindingStorage2(self: kImageAnnotator__KImageAnnotator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Destroyed(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Parent(self: kImageAnnotator__KImageAnnotator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: kImageAnnotator__KImageAnnotator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DeleteLater(self: kImageAnnotator__KImageAnnotator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: kImageAnnotator__KImageAnnotator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: kImageAnnotator__KImageAnnotator, time: i64, timerType: i32) i32 {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: kImageAnnotator__KImageAnnotator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: kImageAnnotator__KImageAnnotator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: kImageAnnotator__KImageAnnotator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: kImageAnnotator__KImageAnnotator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: kImageAnnotator__KImageAnnotator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn PaintingActive(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn WidthMM(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn HeightMM(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn LogicalDpiX(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn LogicalDpiY(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn PhysicalDpiX(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn PhysicalDpiY(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DevicePixelRatio(self: kImageAnnotator__KImageAnnotator) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DevicePixelRatioF(self: kImageAnnotator__KImageAnnotator) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn ColorCount(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Depth(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn DevType(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperDevType(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: kImageAnnotator__KImageAnnotator, visible: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: kImageAnnotator__KImageAnnotator, visible: bool) void {
        qtc.kImageAnnotator__KImageAnnotator_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, bool) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn MinimumSizeHint(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperMinimumSizeHint(self: kImageAnnotator__KImageAnnotator) QSize {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QSize) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: kImageAnnotator__KImageAnnotator, param1: i32) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: kImageAnnotator__KImageAnnotator, param1: i32) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn HasHeightForWidth(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperHasHeightForWidth(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn PaintEngine(self: kImageAnnotator__KImageAnnotator) QPaintEngine {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperPaintEngine(self: kImageAnnotator__KImageAnnotator) QPaintEngine {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.kImageAnnotator__KImageAnnotator_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: kImageAnnotator__KImageAnnotator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kImageAnnotator__KImageAnnotator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kImageAnnotator__KImageAnnotator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QEvent) callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMouseEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMouseEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMouseEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMouseEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.kImageAnnotator__KImageAnnotator_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QWheelEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.kImageAnnotator__KImageAnnotator_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QKeyEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.kImageAnnotator__KImageAnnotator_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QKeyEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.kImageAnnotator__KImageAnnotator_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QFocusEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.kImageAnnotator__KImageAnnotator_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QFocusEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.kImageAnnotator__KImageAnnotator_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QEnterEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.kImageAnnotator__KImageAnnotator_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QPaintEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.kImageAnnotator__KImageAnnotator_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMoveEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.kImageAnnotator__KImageAnnotator_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QResizeEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.kImageAnnotator__KImageAnnotator_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QCloseEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.kImageAnnotator__KImageAnnotator_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QContextMenuEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.kImageAnnotator__KImageAnnotator_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QTabletEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.kImageAnnotator__KImageAnnotator_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QActionEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.kImageAnnotator__KImageAnnotator_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QDragEnterEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.kImageAnnotator__KImageAnnotator_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QDragMoveEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.kImageAnnotator__KImageAnnotator_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QDragLeaveEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.kImageAnnotator__KImageAnnotator_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QDropEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.kImageAnnotator__KImageAnnotator_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QShowEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.kImageAnnotator__KImageAnnotator_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QHideEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: kImageAnnotator__KImageAnnotator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.kImageAnnotator__KImageAnnotator_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: kImageAnnotator__KImageAnnotator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.kImageAnnotator__KImageAnnotator_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: kImageAnnotator__KImageAnnotator, param1: i32) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: kImageAnnotator__KImageAnnotator, param1: i32) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: kImageAnnotator__KImageAnnotator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.kImageAnnotator__KImageAnnotator_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: kImageAnnotator__KImageAnnotator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.kImageAnnotator__KImageAnnotator_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QPainter) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: kImageAnnotator__KImageAnnotator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: kImageAnnotator__KImageAnnotator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QPoint) callconv(.c) QPaintDevice) void {
        qtc.kImageAnnotator__KImageAnnotator_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SharedPainter(self: kImageAnnotator__KImageAnnotator) QPainter {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperSharedPainter(self: kImageAnnotator__KImageAnnotator) QPainter {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QPainter) void {
        qtc.kImageAnnotator__KImageAnnotator_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.kImageAnnotator__KImageAnnotator_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: kImageAnnotator__KImageAnnotator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QInputMethodEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: kImageAnnotator__KImageAnnotator, param1: i32) QVariant {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: kImageAnnotator__KImageAnnotator, param1: i32) QVariant {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32) callconv(.c) QVariant) void {
        qtc.kImageAnnotator__KImageAnnotator_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: kImageAnnotator__KImageAnnotator, next: bool) bool {
        return qtc.kImageAnnotator__KImageAnnotator_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: kImageAnnotator__KImageAnnotator, next: bool) bool {
        return qtc.kImageAnnotator__KImageAnnotator_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, bool) callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: kImageAnnotator__KImageAnnotator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kImageAnnotator__KImageAnnotator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: kImageAnnotator__KImageAnnotator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kImageAnnotator__KImageAnnotator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QObject, QEvent) callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.kImageAnnotator__KImageAnnotator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QTimerEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.kImageAnnotator__KImageAnnotator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QChildEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: kImageAnnotator__KImageAnnotator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kImageAnnotator__KImageAnnotator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QEvent) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: kImageAnnotator__KImageAnnotator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kImageAnnotator__KImageAnnotator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: kImageAnnotator__KImageAnnotator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kImageAnnotator__KImageAnnotator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMetaMethod) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: kImageAnnotator__KImageAnnotator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kImageAnnotator__KImageAnnotator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: kImageAnnotator__KImageAnnotator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kImageAnnotator__KImageAnnotator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMetaMethod) callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn UpdateMicroFocus(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperUpdateMicroFocus(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Create(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperCreate(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Destroy(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperDestroy(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) void) void {
        qtc.kImageAnnotator__KImageAnnotator_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FocusNextChild(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperFocusNextChild(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn FocusPreviousChild(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperFocusPreviousChild(self: kImageAnnotator__KImageAnnotator) bool {
        return qtc.kImageAnnotator__KImageAnnotator_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Sender(self: kImageAnnotator__KImageAnnotator) QObject {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperSender(self: kImageAnnotator__KImageAnnotator) QObject {
        return .{ .ptr = qtc.kImageAnnotator__KImageAnnotator_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) QObject) void {
        qtc.kImageAnnotator__KImageAnnotator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SenderSignalIndex(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn SuperSenderSignalIndex(self: kImageAnnotator__KImageAnnotator) i32 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: kImageAnnotator__KImageAnnotator, callback: *const fn () callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: kImageAnnotator__KImageAnnotator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.kImageAnnotator__KImageAnnotator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: kImageAnnotator__KImageAnnotator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.kImageAnnotator__KImageAnnotator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, [*:0]const u8) callconv(.c) i32) void {
        qtc.kImageAnnotator__KImageAnnotator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: kImageAnnotator__KImageAnnotator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.kImageAnnotator__KImageAnnotator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: kImageAnnotator__KImageAnnotator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.kImageAnnotator__KImageAnnotator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, QMetaMethod) callconv(.c) bool) void {
        qtc.kImageAnnotator__KImageAnnotator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: kImageAnnotator__KImageAnnotator, metricA: i32, metricB: i32) f64 {
        return qtc.kImageAnnotator__KImageAnnotator_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: kImageAnnotator__KImageAnnotator, metricA: i32, metricB: i32) f64 {
        return qtc.kImageAnnotator__KImageAnnotator_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator`
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, i32, i32) callconv(.c) f64) void {
        qtc.kImageAnnotator__KImageAnnotator_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    /// ` callback: *const fn (self: kImageAnnotator__KImageAnnotator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: kImageAnnotator__KImageAnnotator, callback: *const fn (kImageAnnotator__KImageAnnotator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/ksnip/kImageAnnotator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: kImageAnnotator__KImageAnnotator `
    ///
    pub fn Delete(self: kImageAnnotator__KImageAnnotator) void {
        qtc.kImageAnnotator__KImageAnnotator_Delete(@ptrCast(self.ptr));
    }
};
