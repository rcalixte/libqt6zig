const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QCursor = @import("libqt6").QCursor;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QScreen = @import("libqt6").QScreen;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html)
pub const KEncodingFileDialog = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEncodingFileDialog,

    pub const _is_KEncodingFileDialog = {};
    pub const _is_QDialog = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MetaObject(self: KEncodingFileDialog) QMetaObject {
        return .{ .ptr = qtc.KEncodingFileDialog_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KEncodingFileDialog, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KEncodingFileDialog_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KEncodingFileDialog, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KEncodingFileDialog_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    pub fn GetOpenFileNameAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    pub fn GetOpenFileNamesAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    pub fn GetOpenUrlAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    pub fn GetOpenUrlsAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    pub fn GetSaveFileNameAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    pub fn GetSaveUrlAndEncoding() KEncodingFileDialog__Result {
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding() };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn SizeHint(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.KEncodingFileDialog_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetOpenFileNameAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetOpenFileNameAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileNameAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileNameAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetOpenFileNameAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNameAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetOpenFileNamesAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetOpenFileNamesAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileNamesAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileNamesAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetOpenFileNamesAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenFileNamesAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetOpenUrlAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetOpenUrlAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenUrlAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenUrlAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetOpenUrlAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetOpenUrlsAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetOpenUrlsAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenUrlsAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenUrlsAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetOpenUrlsAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetOpenUrlsAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetSaveFileNameAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetSaveFileNameAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetSaveFileNameAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetSaveFileNameAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetSaveFileNameAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveFileNameAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn GetSaveUrlAndEncoding1(encoding: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding1(encoding_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    pub fn GetSaveUrlAndEncoding2(encoding: []const u8, startDir: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding2(encoding_str, @ptrCast(startDir.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetSaveUrlAndEncoding3(encoding: []const u8, startDir: anytype, filter: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding3(encoding_str, @ptrCast(startDir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetSaveUrlAndEncoding4(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding4(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoding: []const u8 `
    ///
    /// ` startDir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn GetSaveUrlAndEncoding5(encoding: []const u8, startDir: anytype, filter: []const u8, parent: anytype, title: []const u8) KEncodingFileDialog__Result {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        comptime _ = @TypeOf(startDir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KEncodingFileDialog_GetSaveUrlAndEncoding5(encoding_str, @ptrCast(startDir.ptr), filter_str, @ptrCast(parent.ptr), title_str) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Result(self: KEncodingFileDialog) i32 {
        return qtc.QDialog_Result(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KEncodingFileDialog, visible: bool) void {
        qtc.QDialog_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MinimumSizeHint(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QDialog_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` sizeGripEnabled: bool `
    ///
    pub fn SetSizeGripEnabled(self: KEncodingFileDialog, sizeGripEnabled: bool) void {
        qtc.QDialog_SetSizeGripEnabled(@ptrCast(self.ptr), sizeGripEnabled);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsSizeGripEnabled(self: KEncodingFileDialog) bool {
        return qtc.QDialog_IsSizeGripEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` modal: bool `
    ///
    pub fn SetModal(self: KEncodingFileDialog, modal: bool) void {
        qtc.QDialog_SetModal(@ptrCast(self.ptr), modal);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` r: i32 `
    ///
    pub fn SetResult(self: KEncodingFileDialog, r: i32) void {
        qtc.QDialog_SetResult(@ptrCast(self.ptr), @bitCast(r));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` result: i32 `
    ///
    pub fn Finished(self: KEncodingFileDialog, result: i32) void {
        qtc.QDialog_Finished(@ptrCast(self.ptr), @bitCast(result));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, result: i32) callconv(.c) void `
    ///
    pub fn OnFinished(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, i32) callconv(.c) void) void {
        qtc.QDialog_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Accepted(self: KEncodingFileDialog) void {
        qtc.QDialog_Accepted(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog) callconv(.c) void `
    ///
    pub fn OnAccepted(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Accepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Rejected(self: KEncodingFileDialog) void {
        qtc.QDialog_Rejected(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog) callconv(.c) void `
    ///
    pub fn OnRejected(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Rejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Open(self: KEncodingFileDialog) void {
        qtc.QDialog_Open(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Exec(self: KEncodingFileDialog) i32 {
        return qtc.QDialog_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn Done(self: KEncodingFileDialog, param1: i32) void {
        qtc.QDialog_Done(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Accept(self: KEncodingFileDialog) void {
        qtc.QDialog_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Reject(self: KEncodingFileDialog) void {
        qtc.QDialog_Reject(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DevType(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_DevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn WinId(self: KEncodingFileDialog) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn CreateWinId(self: KEncodingFileDialog) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn InternalWinId(self: KEncodingFileDialog) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn EffectiveWinId(self: KEncodingFileDialog) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Style(self: KEncodingFileDialog) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KEncodingFileDialog, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsTopLevel(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsWindow(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsModal(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KEncodingFileDialog, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsEnabled(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KEncodingFileDialog, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KEncodingFileDialog, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KEncodingFileDialog, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KEncodingFileDialog, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FrameGeometry(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Geometry(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn NormalGeometry(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn X(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Y(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Pos(self: KEncodingFileDialog) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FrameSize(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Size(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Width(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Height(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Rect(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ChildrenRect(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ChildrenRegion(self: KEncodingFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MinimumSize(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MaximumSize(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MinimumWidth(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MinimumHeight(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MaximumWidth(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn MaximumHeight(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KEncodingFileDialog, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KEncodingFileDialog, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KEncodingFileDialog, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KEncodingFileDialog, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KEncodingFileDialog, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KEncodingFileDialog, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KEncodingFileDialog, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KEncodingFileDialog, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn SizeIncrement(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KEncodingFileDialog, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KEncodingFileDialog, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn BaseSize(self: KEncodingFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KEncodingFileDialog, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KEncodingFileDialog, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KEncodingFileDialog, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KEncodingFileDialog, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KEncodingFileDialog, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KEncodingFileDialog, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KEncodingFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KEncodingFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KEncodingFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KEncodingFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KEncodingFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KEncodingFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KEncodingFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KEncodingFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KEncodingFileDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KEncodingFileDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KEncodingFileDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KEncodingFileDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Window(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn NativeParentWidget(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn TopLevelWidget(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Palette(self: KEncodingFileDialog) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KEncodingFileDialog, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KEncodingFileDialog, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KEncodingFileDialog, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Font(self: KEncodingFileDialog) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KEncodingFileDialog, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FontMetrics(self: KEncodingFileDialog) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FontInfo(self: KEncodingFileDialog) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Cursor(self: KEncodingFileDialog) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KEncodingFileDialog, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UnsetCursor(self: KEncodingFileDialog) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KEncodingFileDialog, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn HasMouseTracking(self: KEncodingFileDialog) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UnderMouse(self: KEncodingFileDialog) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KEncodingFileDialog, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn HasTabletTracking(self: KEncodingFileDialog) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KEncodingFileDialog, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KEncodingFileDialog, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Mask(self: KEncodingFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ClearMask(self: KEncodingFileDialog) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KEncodingFileDialog, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KEncodingFileDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Grab(self: KEncodingFileDialog) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn GraphicsEffect(self: KEncodingFileDialog) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KEncodingFileDialog, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KEncodingFileDialog, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KEncodingFileDialog, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KEncodingFileDialog, windowTitle: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KEncodingFileDialog, styleSheet: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KEncodingFileDialog, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn WindowIcon(self: KEncodingFileDialog) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KEncodingFileDialog, windowIconText: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KEncodingFileDialog, windowRole: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KEncodingFileDialog, filePath: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KEncodingFileDialog, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn WindowOpacity(self: KEncodingFileDialog) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsWindowModified(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KEncodingFileDialog, toolTip: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KEncodingFileDialog, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ToolTipDuration(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KEncodingFileDialog, statusTip: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KEncodingFileDialog, whatsThis: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KEncodingFileDialog, name: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KEncodingFileDialog, description: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KEncodingFileDialog, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UnsetLayoutDirection(self: KEncodingFileDialog) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KEncodingFileDialog, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Locale(self: KEncodingFileDialog) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UnsetLocale(self: KEncodingFileDialog) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsRightToLeft(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsLeftToRight(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn SetFocus(self: KEncodingFileDialog) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsActiveWindow(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ActivateWindow(self: KEncodingFileDialog) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ClearFocus(self: KEncodingFileDialog) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KEncodingFileDialog, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KEncodingFileDialog, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn HasFocus(self: KEncodingFileDialog) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KEncodingFileDialog, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FocusProxy(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KEncodingFileDialog, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn GrabMouse(self: KEncodingFileDialog) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ReleaseMouse(self: KEncodingFileDialog) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn GrabKeyboard(self: KEncodingFileDialog) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ReleaseKeyboard(self: KEncodingFileDialog) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KEncodingFileDialog, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KEncodingFileDialog, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KEncodingFileDialog, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KEncodingFileDialog, id: i32) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UpdatesEnabled(self: KEncodingFileDialog) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KEncodingFileDialog, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn GraphicsProxyWidget(self: KEncodingFileDialog) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Update(self: KEncodingFileDialog) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Repaint(self: KEncodingFileDialog) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KEncodingFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KEncodingFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KEncodingFileDialog, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Show(self: KEncodingFileDialog) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Hide(self: KEncodingFileDialog) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ShowMinimized(self: KEncodingFileDialog) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ShowMaximized(self: KEncodingFileDialog) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ShowFullScreen(self: KEncodingFileDialog) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ShowNormal(self: KEncodingFileDialog) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Close(self: KEncodingFileDialog) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Raise(self: KEncodingFileDialog) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Lower(self: KEncodingFileDialog) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KEncodingFileDialog, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KEncodingFileDialog, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KEncodingFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KEncodingFileDialog, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KEncodingFileDialog, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kencodingfiledialog.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KEncodingFileDialog, geometry: []u8) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn AdjustSize(self: KEncodingFileDialog) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsVisible(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KEncodingFileDialog, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsHidden(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsMinimized(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsMaximized(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsFullScreen(self: KEncodingFileDialog) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KEncodingFileDialog, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KEncodingFileDialog, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn SizePolicy(self: KEncodingFileDialog) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KEncodingFileDialog, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KEncodingFileDialog, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KEncodingFileDialog, param1: i32) i32 {
        return qtc.QWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn HasHeightForWidth(self: KEncodingFileDialog) bool {
        return qtc.QWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn VisibleRegion(self: KEncodingFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KEncodingFileDialog, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KEncodingFileDialog, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ContentsMargins(self: KEncodingFileDialog) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ContentsRect(self: KEncodingFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Layout(self: KEncodingFileDialog) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KEncodingFileDialog, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn UpdateGeometry(self: KEncodingFileDialog) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KEncodingFileDialog, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KEncodingFileDialog, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KEncodingFileDialog, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KEncodingFileDialog, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn FocusWidget(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn NextInFocusChain(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn PreviousInFocusChain(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn AcceptDrops(self: KEncodingFileDialog) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KEncodingFileDialog, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KEncodingFileDialog, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KEncodingFileDialog, actions: []QAction) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KEncodingFileDialog, before: anytype, actions: []QAction) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KEncodingFileDialog, before: anytype, action: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KEncodingFileDialog, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KEncodingFileDialog, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kencodingfiledialog.Actions: Memory allocation failed");
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KEncodingFileDialog, text: []const u8) QAction {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KEncodingFileDialog, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KEncodingFileDialog, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KEncodingFileDialog, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ParentWidget(self: KEncodingFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KEncodingFileDialog, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KEncodingFileDialog, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KEncodingFileDialog, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KEncodingFileDialog) i32 {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KEncodingFileDialog, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KEncodingFileDialog, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KEncodingFileDialog, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KEncodingFileDialog, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KEncodingFileDialog, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn PaintEngine(self: KEncodingFileDialog) QPaintEngine {
        return .{ .ptr = qtc.QWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn EnsurePolished(self: KEncodingFileDialog) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KEncodingFileDialog, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn AutoFillBackground(self: KEncodingFileDialog) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KEncodingFileDialog, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn BackingStore(self: KEncodingFileDialog) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn WindowHandle(self: KEncodingFileDialog) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Screen(self: KEncodingFileDialog) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KEncodingFileDialog, screen: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KEncodingFileDialog, title: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KEncodingFileDialog, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KEncodingFileDialog, iconText: []const u8) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KEncodingFileDialog, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KEncodingFileDialog, param1: i32) QVariant {
        return .{ .ptr = qtc.QWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KEncodingFileDialog) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KEncodingFileDialog, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KEncodingFileDialog, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KEncodingFileDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KEncodingFileDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KEncodingFileDialog, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KEncodingFileDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KEncodingFileDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KEncodingFileDialog, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KEncodingFileDialog, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KEncodingFileDialog, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KEncodingFileDialog, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KEncodingFileDialog, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KEncodingFileDialog, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KEncodingFileDialog, param1: i32, on: bool) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KEncodingFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingfiledialog.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KEncodingFileDialog, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsWidgetType(self: KEncodingFileDialog) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsWindowType(self: KEncodingFileDialog) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn IsQuickItemType(self: KEncodingFileDialog) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn SignalsBlocked(self: KEncodingFileDialog) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KEncodingFileDialog, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Thread(self: KEncodingFileDialog) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KEncodingFileDialog, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KEncodingFileDialog, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KEncodingFileDialog, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KEncodingFileDialog, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KEncodingFileDialog, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KEncodingFileDialog, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kencodingfiledialog.Children: Memory allocation failed");
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KEncodingFileDialog, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KEncodingFileDialog, obj: anytype) void {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KEncodingFileDialog, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Disconnect3(self: KEncodingFileDialog) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KEncodingFileDialog, receiver: anytype) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DumpObjectTree(self: KEncodingFileDialog) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DumpObjectInfo(self: KEncodingFileDialog) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KEncodingFileDialog, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KEncodingFileDialog, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KEncodingFileDialog, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kencodingfiledialog.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kencodingfiledialog.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KEncodingFileDialog `
    ///
    pub fn BindingStorage(self: KEncodingFileDialog) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn BindingStorage2(self: KEncodingFileDialog) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Destroyed(self: KEncodingFileDialog) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Parent(self: KEncodingFileDialog) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KEncodingFileDialog, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DeleteLater(self: KEncodingFileDialog) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KEncodingFileDialog, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KEncodingFileDialog, time: i64, timerType: i32) i32 {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KEncodingFileDialog, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KEncodingFileDialog, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KEncodingFileDialog, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KEncodingFileDialog, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KEncodingFileDialog, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KEncodingFileDialog `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KEncodingFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn PaintingActive(self: KEncodingFileDialog) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn WidthMM(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn HeightMM(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn LogicalDpiX(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn LogicalDpiY(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn PhysicalDpiX(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn PhysicalDpiY(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DevicePixelRatio(self: KEncodingFileDialog) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn DevicePixelRatioF(self: KEncodingFileDialog) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn ColorCount(self: KEncodingFileDialog) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog `
    ///
    pub fn Depth(self: KEncodingFileDialog) i32 {
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

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KEncodingFileDialog `
    ///
    /// ` callback: *const fn (self: KEncodingFileDialog, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KEncodingFileDialog, callback: *const fn (KEncodingFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html)
pub const KEncodingFileDialog__Result = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEncodingFileDialog__Result,

    pub const _is_KEncodingFileDialog__Result = {};

    /// New constructs a new KEncodingFileDialog::Result object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KEncodingFileDialog__Result `
    ///
    pub fn New(param1: anytype) KEncodingFileDialog__Result {
        comptime _ = @TypeOf(param1)._is_KEncodingFileDialog__Result;
        return .{ .ptr = qtc.KEncodingFileDialog__Result_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#fileNames-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileNames(self: KEncodingFileDialog__Result, allocator: std.mem.Allocator) []const []const u8 {
        const fileNames_arr: qtc.libqt_list = qtc.KEncodingFileDialog__Result_FileNames(@ptrCast(self.ptr));
        var fileNames_str: [*]qtc.libqt_string = @ptrCast(@alignCast(fileNames_arr.data));
        defer {
            for (0..fileNames_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&fileNames_str[i]));
            qtc.libqt_free(fileNames_arr.data);
        }
        const fileNames_ret = allocator.alloc([]const u8, fileNames_arr.len) catch @panic("kencodingfiledialog__result.FileNames: Memory allocation failed");
        for (0..fileNames_arr.len) |i| {
            const fileNames_data = fileNames_str[i];
            const fileNames_buf = allocator.alloc(u8, fileNames_data.len) catch @panic("kencodingfiledialog__result.FileNames: Memory allocation failed");
            @memcpy(fileNames_buf, fileNames_data.data[0..fileNames_data.len]);
            fileNames_ret[i] = fileNames_buf;
        }
        return fileNames_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#fileNames-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileNames: []const []const u8 `
    ///
    pub fn SetFileNames(self: KEncodingFileDialog__Result, allocator: std.mem.Allocator, fileNames: []const []const u8) void {
        const fileNames_arr = allocator.alloc(qtc.libqt_string, fileNames.len) catch @panic("kencodingfiledialog__result.SetFileNames: Memory allocation failed");
        defer allocator.free(fileNames_arr);
        for (fileNames, 0..fileNames.len) |item, i|
            fileNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const fileNames_list = qtc.libqt_list{
            .len = fileNames.len,
            .data = fileNames_arr.ptr,
        };
        qtc.KEncodingFileDialog__Result_SetFileNames(@ptrCast(self.ptr), fileNames_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#URLs-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn URLs(self: KEncodingFileDialog__Result, allocator: std.mem.Allocator) []QUrl {
        const URLs_arr: qtc.libqt_list = qtc.KEncodingFileDialog__Result_URLs(@ptrCast(self.ptr));
        defer qtc.libqt_free(URLs_arr.data);
        const URLs_ret = allocator.alloc(QUrl, URLs_arr.len) catch @panic("kencodingfiledialog__result.URLs: Memory allocation failed");
        const URLs_data: [*]QtC.QUrl = @ptrCast(@alignCast(URLs_arr.data));
        for (0..URLs_arr.len) |ii|
            URLs_ret[ii] = .{ .ptr = URLs_data[ii] };
        return URLs_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#URLs-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` URLs: []QUrl `
    ///
    pub fn SetURLs(self: KEncodingFileDialog__Result, _URLs: []QUrl) void {
        const URLs_list = qtc.libqt_list{
            .len = _URLs.len,
            .data = @ptrCast(_URLs.ptr),
        };
        qtc.KEncodingFileDialog__Result_SetURLs(@ptrCast(self.ptr), URLs_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#encoding-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Encoding(self: KEncodingFileDialog__Result, allocator: std.mem.Allocator) []const u8 {
        var encoding_str = qtc.KEncodingFileDialog__Result_Encoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&encoding_str);
        const encoding_ret = allocator.alloc(u8, encoding_str.len) catch @panic("kencodingfiledialog__result.Encoding: Memory allocation failed");
        @memcpy(encoding_ret, encoding_str.data[0..encoding_str.len]);
        return encoding_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#encoding-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn SetEncoding(self: KEncodingFileDialog__Result, encoding: []const u8) void {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        qtc.KEncodingFileDialog__Result_SetEncoding(@ptrCast(self.ptr), encoding_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kencodingfiledialog-result.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    /// ` param1: KEncodingFileDialog__Result `
    ///
    pub fn OperatorAssign(self: KEncodingFileDialog__Result, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KEncodingFileDialog__Result;
        qtc.KEncodingFileDialog__Result_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KEncodingFileDialog__Result `
    ///
    pub fn Delete(self: KEncodingFileDialog__Result) void {
        qtc.KEncodingFileDialog__Result_Delete(@ptrCast(self.ptr));
    }
};
