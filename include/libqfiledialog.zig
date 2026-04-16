const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractFileIconProvider = @import("libqt6").QAbstractFileIconProvider;
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractProxyModel = @import("libqt6").QAbstractProxyModel;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDir = @import("libqt6").QDir;
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
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qdir_enums = @import("libqdir.zig").enums;
const qfiledialog_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)
pub const QFileDialog = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFileDialog,

    pub const _is_QFileDialog = {};
    pub const _is_QDialog = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QFileDialog object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QFileDialog {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFileDialog_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QFileDialog object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn New2(parent: anytype, f: i32) QFileDialog {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFileDialog_new2(@ptrCast(parent.ptr), @bitCast(f)) };
    }

    /// New3 constructs a new QFileDialog object.
    ///
    pub fn New3() QFileDialog {
        return .{ .ptr = qtc.QFileDialog_new3() };
    }

    /// New4 constructs a new QFileDialog object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn New4(parent: anytype, caption: []const u8) QFileDialog {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_new4(@ptrCast(parent.ptr), caption_str) };
    }

    /// New5 constructs a new QFileDialog object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn New5(parent: anytype, caption: []const u8, directory: []const u8) QFileDialog {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_new5(@ptrCast(parent.ptr), caption_str, directory_str) };
    }

    /// New6 constructs a new QFileDialog object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn New6(parent: anytype, caption: []const u8, directory: []const u8, filter: []const u8) QFileDialog {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_new6(@ptrCast(parent.ptr), caption_str, directory_str, filter_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MetaObject(self: QFileDialog) QMetaObject {
        return .{ .ptr = qtc.QFileDialog_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QFileDialog, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QFileDialog_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperMetaObject(self: QFileDialog) QMetaObject {
        return .{ .ptr = qtc.QFileDialog_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QFileDialog, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFileDialog_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QFileDialog_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QFileDialog, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFileDialog_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QFileDialog, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFileDialog_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QFileDialog, callback: *const fn (QFileDialog, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QFileDialog_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QFileDialog, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFileDialog_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn SetDirectory(self: QFileDialog, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QFileDialog_SetDirectory(@ptrCast(self.ptr), directory_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` directory: QDir `
    ///
    pub fn SetDirectory2(self: QFileDialog, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QDir;
        qtc.QFileDialog_SetDirectory2(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Directory(self: QFileDialog) QDir {
        return .{ .ptr = qtc.QFileDialog_Directory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` directory: QUrl `
    ///
    pub fn SetDirectoryUrl(self: QFileDialog, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QUrl;
        qtc.QFileDialog_SetDirectoryUrl(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DirectoryUrl(self: QFileDialog) QUrl {
        return .{ .ptr = qtc.QFileDialog_DirectoryUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn SelectFile(self: QFileDialog, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QFileDialog_SelectFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedFiles(self: QFileDialog, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_SelectedFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.SelectedFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.SelectedFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` url: QUrl `
    ///
    pub fn SelectUrl(self: QFileDialog, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QFileDialog_SelectUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedUrls(self: QFileDialog, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.QFileDialog_SelectedUrls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.SelectedUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SetNameFilter(self: QFileDialog, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QFileDialog_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn SetNameFilters(self: QFileDialog, allocator: std.mem.Allocator, filters: []const []const u8) void {
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("qfiledialog.SetNameFilters: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        qtc.QFileDialog_SetNameFilters(@ptrCast(self.ptr), filters_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#nameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFilters(self: QFileDialog, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_NameFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.NameFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.NameFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SelectNameFilter(self: QFileDialog, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QFileDialog_SelectNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedMimeTypeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedMimeTypeFilter(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_SelectedMimeTypeFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.SelectedMimeTypeFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedNameFilter(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_SelectedNameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.SelectedNameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setMimeTypeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn SetMimeTypeFilters(self: QFileDialog, allocator: std.mem.Allocator, filters: []const []const u8) void {
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("qfiledialog.SetMimeTypeFilters: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        qtc.QFileDialog_SetMimeTypeFilters(@ptrCast(self.ptr), filters_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#mimeTypeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypeFilters(self: QFileDialog, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_MimeTypeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.MimeTypeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.MimeTypeFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectMimeTypeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SelectMimeTypeFilter(self: QFileDialog, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QFileDialog_SelectMimeTypeFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.Filter `
    ///
    pub fn Filter(self: QFileDialog) i32 {
        return qtc.QFileDialog_Filter(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn SetFilter(self: QFileDialog, filters: i32) void {
        qtc.QFileDialog_SetFilter(@ptrCast(self.ptr), @bitCast(filters));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` mode: qfiledialog_enums.ViewMode `
    ///
    pub fn SetViewMode(self: QFileDialog, mode: i32) void {
        qtc.QFileDialog_SetViewMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qfiledialog_enums.ViewMode `
    ///
    pub fn ViewMode(self: QFileDialog) i32 {
        return qtc.QFileDialog_ViewMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setFileMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` mode: qfiledialog_enums.FileMode `
    ///
    pub fn SetFileMode(self: QFileDialog, mode: i32) void {
        qtc.QFileDialog_SetFileMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qfiledialog_enums.FileMode `
    ///
    pub fn FileMode(self: QFileDialog) i32 {
        return qtc.QFileDialog_FileMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setAcceptMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` mode: qfiledialog_enums.AcceptMode `
    ///
    pub fn SetAcceptMode(self: QFileDialog, mode: i32) void {
        qtc.QFileDialog_SetAcceptMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#acceptMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qfiledialog_enums.AcceptMode `
    ///
    pub fn AcceptMode(self: QFileDialog) i32 {
        return qtc.QFileDialog_AcceptMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setSidebarUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn SetSidebarUrls(self: QFileDialog, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.QFileDialog_SetSidebarUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#sidebarUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SidebarUrls(self: QFileDialog, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.QFileDialog_SidebarUrls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.SidebarUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveState(self: QFileDialog, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QFileDialog_SaveState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfiledialog.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` state: []u8 `
    ///
    pub fn RestoreState(self: QFileDialog, state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QFileDialog_RestoreState(@ptrCast(self.ptr), state_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDefaultSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` suffix: []const u8 `
    ///
    pub fn SetDefaultSuffix(self: QFileDialog, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
            .len = suffix.len,
            .data = suffix.ptr,
        };
        qtc.QFileDialog_SetDefaultSuffix(@ptrCast(self.ptr), suffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#defaultSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultSuffix(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_DefaultSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.DefaultSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setHistory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn SetHistory(self: QFileDialog, allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("qfiledialog.SetHistory: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |item, i|
            paths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        qtc.QFileDialog_SetHistory(@ptrCast(self.ptr), paths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#history)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn History(self: QFileDialog, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_History(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.History: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.History: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: QFileDialog, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QFileDialog_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ItemDelegate(self: QFileDialog) QAbstractItemDelegate {
        return .{ .ptr = qtc.QFileDialog_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setIconProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` provider: QAbstractFileIconProvider `
    ///
    pub fn SetIconProvider(self: QFileDialog, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_QAbstractFileIconProvider;
        qtc.QFileDialog_SetIconProvider(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#iconProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IconProvider(self: QFileDialog) QAbstractFileIconProvider {
        return .{ .ptr = qtc.QFileDialog_IconProvider(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setLabelText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` label: qfiledialog_enums.DialogLabel `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetLabelText(self: QFileDialog, label: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QFileDialog_SetLabelText(@ptrCast(self.ptr), @bitCast(label), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#labelText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` label: qfiledialog_enums.DialogLabel `
    ///
    pub fn LabelText(self: QFileDialog, allocator: std.mem.Allocator, label: i32) []const u8 {
        var _str = qtc.QFileDialog_LabelText(@ptrCast(self.ptr), @bitCast(label));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.LabelText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setSupportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` schemes: []const []const u8 `
    ///
    pub fn SetSupportedSchemes(self: QFileDialog, allocator: std.mem.Allocator, schemes: []const []const u8) void {
        const schemes_arr = allocator.alloc(qtc.libqt_string, schemes.len) catch @panic("qfiledialog.SetSupportedSchemes: Memory allocation failed");
        defer allocator.free(schemes_arr);
        for (schemes, 0..schemes.len) |item, i|
            schemes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const schemes_list = qtc.libqt_list{
            .len = schemes.len,
            .data = schemes_arr.ptr,
        };
        qtc.QFileDialog_SetSupportedSchemes(@ptrCast(self.ptr), schemes_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemes(self: QFileDialog, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_SupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.SupportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.SupportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setProxyModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` model: QAbstractProxyModel `
    ///
    pub fn SetProxyModel(self: QFileDialog, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractProxyModel;
        qtc.QFileDialog_SetProxyModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#proxyModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ProxyModel(self: QFileDialog) QAbstractProxyModel {
        return .{ .ptr = qtc.QFileDialog_ProxyModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` option: qfiledialog_enums.Option `
    ///
    pub fn SetOption(self: QFileDialog, option: i32) void {
        qtc.QFileDialog_SetOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#testOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` option: qfiledialog_enums.Option `
    ///
    pub fn TestOption(self: QFileDialog, option: i32) bool {
        return qtc.QFileDialog_TestOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` options: flag of qfiledialog_enums.Option `
    ///
    pub fn SetOptions(self: QFileDialog, options: i32) void {
        qtc.QFileDialog_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledialog_enums.Option `
    ///
    pub fn Options(self: QFileDialog) i32 {
        return qtc.QFileDialog_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QFileDialog, visible: bool) void {
        qtc.QFileDialog_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QFileDialog, callback: *const fn (QFileDialog, bool) callconv(.c) void) void {
        qtc.QFileDialog_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QFileDialog, visible: bool) void {
        qtc.QFileDialog_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` file: []const u8 `
    ///
    pub fn FileSelected(self: QFileDialog, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileDialog_FileSelected(@ptrCast(self.ptr), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFileSelected(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FileSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    pub fn FilesSelected(self: QFileDialog, allocator: std.mem.Allocator, files: []const []const u8) void {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("qfiledialog.FilesSelected: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        qtc.QFileDialog_FilesSelected(@ptrCast(self.ptr), files_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, files: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFilesSelected(self: QFileDialog, callback: *const fn (QFileDialog, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FilesSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` path: []const u8 `
    ///
    pub fn CurrentChanged(self: QFileDialog, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QFileDialog_CurrentChanged(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_CurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn DirectoryEntered(self: QFileDialog, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QFileDialog_DirectoryEntered(@ptrCast(self.ptr), directory_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, directory: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDirectoryEntered(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_DirectoryEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlSelected(self: QFileDialog, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QFileDialog_UrlSelected(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlSelected(self: QFileDialog, callback: *const fn (QFileDialog, QUrl) callconv(.c) void) void {
        qtc.QFileDialog_Connect_UrlSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn UrlsSelected(self: QFileDialog, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.QFileDialog_UrlsSelected(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, urls: qtc.libqt_list ([]QUrl)) callconv(.c) void `
    ///
    pub fn OnUrlsSelected(self: QFileDialog, callback: *const fn (QFileDialog, qtc.libqt_list) callconv(.c) void) void {
        qtc.QFileDialog_Connect_UrlsSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` url: QUrl `
    ///
    pub fn CurrentUrlChanged(self: QFileDialog, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QFileDialog_CurrentUrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, url: QUrl) callconv(.c) void `
    ///
    pub fn OnCurrentUrlChanged(self: QFileDialog, callback: *const fn (QFileDialog, QUrl) callconv(.c) void) void {
        qtc.QFileDialog_Connect_CurrentUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` directory: QUrl `
    ///
    pub fn DirectoryUrlEntered(self: QFileDialog, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QUrl;
        qtc.QFileDialog_DirectoryUrlEntered(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, directory: QUrl) callconv(.c) void `
    ///
    pub fn OnDirectoryUrlEntered(self: QFileDialog, callback: *const fn (QFileDialog, QUrl) callconv(.c) void) void {
        qtc.QFileDialog_Connect_DirectoryUrlEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn FilterSelected(self: QFileDialog, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.QFileDialog_FilterSelected(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, filter: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFilterSelected(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FilterSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetOpenFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_GetOpenFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
    ///
    pub fn GetOpenFileUrl() QUrl {
        return .{ .ptr = qtc.QFileDialog_GetOpenFileUrl() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetSaveFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_GetSaveFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
    ///
    pub fn GetSaveFileUrl() QUrl {
        return .{ .ptr = qtc.QFileDialog_GetSaveFileUrl() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetExistingDirectory(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileDialog_GetExistingDirectory();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    pub fn GetExistingDirectoryUrl() QUrl {
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetOpenFileNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.GetOpenFileNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.GetOpenFileNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetOpenFileUrls(allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileUrls();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.GetOpenFileUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` fileContentsReady: *const fn (funcparam1: [*:0]const u8, funcparam2: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn GetOpenFileContent(nameFilter: []const u8, fileContentsReady: *const fn ([*:0]const u8, qtc.libqt_string) callconv(.c) void) void {
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        qtc.QFileDialog_GetOpenFileContent(nameFilter_str, @bitCast(@intFromPtr(fileContentsReady)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContent: []u8 `
    ///
    /// ` fileNameHint: []const u8 `
    ///
    pub fn SaveFileContent(fileContent: []u8, fileNameHint: []const u8) void {
        const fileContent_str = qtc.libqt_string{
            .len = fileContent.len,
            .data = fileContent.ptr,
        };
        const fileNameHint_str = qtc.libqt_string{
            .len = fileNameHint.len,
            .data = fileNameHint.ptr,
        };
        qtc.QFileDialog_SaveFileContent(fileContent_str, fileNameHint_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` result: i32 `
    ///
    pub fn Done(self: QFileDialog, result: i32) void {
        qtc.QFileDialog_Done(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, result: i32) callconv(.c) void `
    ///
    pub fn OnDone(self: QFileDialog, callback: *const fn (QFileDialog, i32) callconv(.c) void) void {
        qtc.QFileDialog_OnDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDone` instead
    ///
    pub const QBaseDone = SuperDone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` result: i32 `
    ///
    pub fn SuperDone(self: QFileDialog, result: i32) void {
        qtc.QFileDialog_SuperDone(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Accept(self: QFileDialog) void {
        qtc.QFileDialog_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAccept(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnAccept(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAccept` instead
    ///
    pub const QBaseAccept = SuperAccept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperAccept(self: QFileDialog) void {
        qtc.QFileDialog_SuperAccept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: QFileDialog, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QFileDialog_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QFileDialog, callback: *const fn (QFileDialog, QEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: QFileDialog, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QFileDialog_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` option: qfiledialog_enums.Option `
    ///
    /// ` on: bool `
    ///
    pub fn SetOption2(self: QFileDialog, option: i32, on: bool) void {
        qtc.QFileDialog_SetOption2(@ptrCast(self.ptr), @bitCast(option), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileName1(allocator: std.mem.Allocator, parent: anytype) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        var _str = qtc.QFileDialog_GetOpenFileName1(@ptrCast(parent.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetOpenFileName2(allocator: std.mem.Allocator, parent: anytype, caption: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        var _str = qtc.QFileDialog_GetOpenFileName2(@ptrCast(parent.ptr), caption_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn GetOpenFileName3(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        var _str = qtc.QFileDialog_GetOpenFileName3(@ptrCast(parent.ptr), caption_str, dir_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileName4(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8, filter: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        var _str = qtc.QFileDialog_GetOpenFileName4(@ptrCast(parent.ptr), caption_str, dir_str, filter_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileUrl1(parent: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFileDialog_GetOpenFileUrl1(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetOpenFileUrl2(parent: anytype, caption: []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetOpenFileUrl2(@ptrCast(parent.ptr), caption_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    pub fn GetOpenFileUrl3(parent: anytype, caption: []const u8, dir: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        return .{ .ptr = qtc.QFileDialog_GetOpenFileUrl3(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileUrl4(parent: anytype, caption: []const u8, dir: anytype, filter: []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetOpenFileUrl4(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetSaveFileName1(allocator: std.mem.Allocator, parent: anytype) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        var _str = qtc.QFileDialog_GetSaveFileName1(@ptrCast(parent.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetSaveFileName2(allocator: std.mem.Allocator, parent: anytype, caption: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        var _str = qtc.QFileDialog_GetSaveFileName2(@ptrCast(parent.ptr), caption_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn GetSaveFileName3(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        var _str = qtc.QFileDialog_GetSaveFileName3(@ptrCast(parent.ptr), caption_str, dir_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetSaveFileName4(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8, filter: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        var _str = qtc.QFileDialog_GetSaveFileName4(@ptrCast(parent.ptr), caption_str, dir_str, filter_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetSaveFileUrl1(parent: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFileDialog_GetSaveFileUrl1(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetSaveFileUrl2(parent: anytype, caption: []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetSaveFileUrl2(@ptrCast(parent.ptr), caption_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    pub fn GetSaveFileUrl3(parent: anytype, caption: []const u8, dir: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        return .{ .ptr = qtc.QFileDialog_GetSaveFileUrl3(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetSaveFileUrl4(parent: anytype, caption: []const u8, dir: anytype, filter: []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetSaveFileUrl4(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr), filter_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetExistingDirectory1(allocator: std.mem.Allocator, parent: anytype) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        var _str = qtc.QFileDialog_GetExistingDirectory1(@ptrCast(parent.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetExistingDirectory2(allocator: std.mem.Allocator, parent: anytype, caption: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        var _str = qtc.QFileDialog_GetExistingDirectory2(@ptrCast(parent.ptr), caption_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn GetExistingDirectory3(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        var _str = qtc.QFileDialog_GetExistingDirectory3(@ptrCast(parent.ptr), caption_str, dir_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    /// ` options: flag of qfiledialog_enums.Option `
    ///
    pub fn GetExistingDirectory4(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8, options: i32) []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        var _str = qtc.QFileDialog_GetExistingDirectory4(@ptrCast(parent.ptr), caption_str, dir_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetExistingDirectoryUrl1(parent: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl1(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetExistingDirectoryUrl2(parent: anytype, caption: []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl2(@ptrCast(parent.ptr), caption_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    pub fn GetExistingDirectoryUrl3(parent: anytype, caption: []const u8, dir: anytype) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl3(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    /// ` options: flag of qfiledialog_enums.Option `
    ///
    pub fn GetExistingDirectoryUrl4(parent: anytype, caption: []const u8, dir: anytype, options: i32) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl4(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    /// ` options: flag of qfiledialog_enums.Option `
    ///
    /// ` supportedSchemes: []const []const u8 `
    ///
    pub fn GetExistingDirectoryUrl5(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: anytype, options: i32, supportedSchemes: []const []const u8) QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        const supportedSchemes_arr = allocator.alloc(qtc.libqt_string, supportedSchemes.len) catch @panic("qfiledialog.GetExistingDirectoryUrl5: Memory allocation failed");
        defer allocator.free(supportedSchemes_arr);
        for (supportedSchemes, 0..supportedSchemes.len) |item, i|
            supportedSchemes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const supportedSchemes_list = qtc.libqt_list{
            .len = supportedSchemes.len,
            .data = supportedSchemes_arr.ptr,
        };
        return .{ .ptr = qtc.QFileDialog_GetExistingDirectoryUrl5(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr), @bitCast(options), supportedSchemes_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileNames1(allocator: std.mem.Allocator, parent: anytype) []const []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileNames1(@ptrCast(parent.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.GetOpenFileNames1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.GetOpenFileNames1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetOpenFileNames2(allocator: std.mem.Allocator, parent: anytype, caption: []const u8) []const []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileNames2(@ptrCast(parent.ptr), caption_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.GetOpenFileNames2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.GetOpenFileNames2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn GetOpenFileNames3(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8) []const []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileNames3(@ptrCast(parent.ptr), caption_str, dir_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.GetOpenFileNames3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.GetOpenFileNames3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: []const u8 `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileNames4(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: []const u8, filter: []const u8) []const []const u8 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileNames4(@ptrCast(parent.ptr), caption_str, dir_str, filter_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfiledialog.GetOpenFileNames4: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.GetOpenFileNames4: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileUrls1(allocator: std.mem.Allocator, parent: anytype) []QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileUrls1(@ptrCast(parent.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.GetOpenFileUrls1: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn GetOpenFileUrls2(allocator: std.mem.Allocator, parent: anytype, caption: []const u8) []QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileUrls2(@ptrCast(parent.ptr), caption_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.GetOpenFileUrls2: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    pub fn GetOpenFileUrls3(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: anytype) []QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileUrls3(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.GetOpenFileUrls3: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` dir: QUrl `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn GetOpenFileUrls4(allocator: std.mem.Allocator, parent: anytype, caption: []const u8, dir: anytype, filter: []const u8) []QUrl {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        comptime _ = @TypeOf(dir)._is_QUrl;
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFileDialog_GetOpenFileUrls4(@ptrCast(parent.ptr), caption_str, @ptrCast(dir.ptr), filter_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qfiledialog.GetOpenFileUrls4: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` fileContentsReady: *const fn (funcparam1: [*:0]const u8, funcparam2: qtc.libqt_string) callconv(.c) void `
    ///
    /// ` parent: QWidget `
    ///
    pub fn GetOpenFileContent3(nameFilter: []const u8, fileContentsReady: *const fn ([*:0]const u8, qtc.libqt_string) callconv(.c) void, parent: anytype) void {
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QFileDialog_GetOpenFileContent3(nameFilter_str, @bitCast(@intFromPtr(fileContentsReady)), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContent: []u8 `
    ///
    /// ` fileNameHint: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SaveFileContent3(fileContent: []u8, fileNameHint: []const u8, parent: anytype) void {
        const fileContent_str = qtc.libqt_string{
            .len = fileContent.len,
            .data = fileContent.ptr,
        };
        const fileNameHint_str = qtc.libqt_string{
            .len = fileNameHint.len,
            .data = fileNameHint.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QFileDialog_SaveFileContent3(fileContent_str, fileNameHint_str, @ptrCast(parent.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Result(self: QFileDialog) i32 {
        return qtc.QDialog_Result(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` sizeGripEnabled: bool `
    ///
    pub fn SetSizeGripEnabled(self: QFileDialog, sizeGripEnabled: bool) void {
        qtc.QDialog_SetSizeGripEnabled(@ptrCast(self.ptr), sizeGripEnabled);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsSizeGripEnabled(self: QFileDialog) bool {
        return qtc.QDialog_IsSizeGripEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` modal: bool `
    ///
    pub fn SetModal(self: QFileDialog, modal: bool) void {
        qtc.QDialog_SetModal(@ptrCast(self.ptr), modal);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` r: i32 `
    ///
    pub fn SetResult(self: QFileDialog, r: i32) void {
        qtc.QDialog_SetResult(@ptrCast(self.ptr), @bitCast(r));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` result: i32 `
    ///
    pub fn Finished(self: QFileDialog, result: i32) void {
        qtc.QDialog_Finished(@ptrCast(self.ptr), @bitCast(result));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, result: i32) callconv(.c) void `
    ///
    pub fn OnFinished(self: QFileDialog, callback: *const fn (QFileDialog, i32) callconv(.c) void) void {
        qtc.QDialog_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Accepted(self: QFileDialog) void {
        qtc.QDialog_Accepted(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog) callconv(.c) void `
    ///
    pub fn OnAccepted(self: QFileDialog, callback: *const fn (QFileDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Accepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Rejected(self: QFileDialog) void {
        qtc.QDialog_Rejected(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog) callconv(.c) void `
    ///
    pub fn OnRejected(self: QFileDialog, callback: *const fn (QFileDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Rejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn WinId(self: QFileDialog) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn CreateWinId(self: QFileDialog) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn InternalWinId(self: QFileDialog) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn EffectiveWinId(self: QFileDialog) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Style(self: QFileDialog) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QFileDialog, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsTopLevel(self: QFileDialog) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsWindow(self: QFileDialog) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsModal(self: QFileDialog) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QFileDialog) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QFileDialog, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsEnabled(self: QFileDialog) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QFileDialog, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QFileDialog, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QFileDialog, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QFileDialog, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FrameGeometry(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Geometry(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn NormalGeometry(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn X(self: QFileDialog) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Y(self: QFileDialog) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Pos(self: QFileDialog) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FrameSize(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Size(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Width(self: QFileDialog) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Height(self: QFileDialog) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Rect(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ChildrenRect(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ChildrenRegion(self: QFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MinimumSize(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MaximumSize(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MinimumWidth(self: QFileDialog) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MinimumHeight(self: QFileDialog) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MaximumWidth(self: QFileDialog) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MaximumHeight(self: QFileDialog) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QFileDialog, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QFileDialog, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QFileDialog, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QFileDialog, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QFileDialog, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QFileDialog, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QFileDialog, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QFileDialog, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SizeIncrement(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QFileDialog, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QFileDialog, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn BaseSize(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QFileDialog, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QFileDialog, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QFileDialog, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QFileDialog, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QFileDialog, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QFileDialog, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QFileDialog, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QFileDialog, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QFileDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QFileDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QFileDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QFileDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QFileDialog `
    ///
    pub fn Window(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn NativeParentWidget(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn TopLevelWidget(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Palette(self: QFileDialog) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QFileDialog, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QFileDialog, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QFileDialog) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QFileDialog, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QFileDialog) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Font(self: QFileDialog) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QFileDialog, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FontMetrics(self: QFileDialog) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FontInfo(self: QFileDialog) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Cursor(self: QFileDialog) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QFileDialog, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UnsetCursor(self: QFileDialog) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QFileDialog, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn HasMouseTracking(self: QFileDialog) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UnderMouse(self: QFileDialog) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QFileDialog, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn HasTabletTracking(self: QFileDialog) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QFileDialog, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QFileDialog, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Mask(self: QFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ClearMask(self: QFileDialog) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QFileDialog, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QFileDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Grab(self: QFileDialog) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn GraphicsEffect(self: QFileDialog) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QFileDialog, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QFileDialog, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QFileDialog, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QFileDialog, windowTitle: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QFileDialog, styleSheet: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QFileDialog, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn WindowIcon(self: QFileDialog) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QFileDialog, windowIconText: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QFileDialog, windowRole: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QFileDialog, filePath: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QFileDialog, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn WindowOpacity(self: QFileDialog) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsWindowModified(self: QFileDialog) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QFileDialog, toolTip: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QFileDialog, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ToolTipDuration(self: QFileDialog) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QFileDialog, statusTip: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QFileDialog, whatsThis: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QFileDialog, name: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QFileDialog, description: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QFileDialog, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QFileDialog) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UnsetLayoutDirection(self: QFileDialog) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QFileDialog, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Locale(self: QFileDialog) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UnsetLocale(self: QFileDialog) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsRightToLeft(self: QFileDialog) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsLeftToRight(self: QFileDialog) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SetFocus(self: QFileDialog) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsActiveWindow(self: QFileDialog) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ActivateWindow(self: QFileDialog) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ClearFocus(self: QFileDialog) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QFileDialog, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QFileDialog) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QFileDialog, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn HasFocus(self: QFileDialog) bool {
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
    /// ` self: QFileDialog `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QFileDialog, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FocusProxy(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QFileDialog) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QFileDialog, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn GrabMouse(self: QFileDialog) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ReleaseMouse(self: QFileDialog) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn GrabKeyboard(self: QFileDialog) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ReleaseKeyboard(self: QFileDialog) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QFileDialog, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QFileDialog, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QFileDialog, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QFileDialog, id: i32) void {
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
    /// ` self: QFileDialog `
    ///
    pub fn UpdatesEnabled(self: QFileDialog) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QFileDialog, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn GraphicsProxyWidget(self: QFileDialog) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Update(self: QFileDialog) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Repaint(self: QFileDialog) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QFileDialog, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Show(self: QFileDialog) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Hide(self: QFileDialog) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ShowMinimized(self: QFileDialog) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ShowMaximized(self: QFileDialog) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ShowFullScreen(self: QFileDialog) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ShowNormal(self: QFileDialog) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Close(self: QFileDialog) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Raise(self: QFileDialog) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Lower(self: QFileDialog) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QFileDialog, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QFileDialog, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QFileDialog, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QFileDialog, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QFileDialog, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfiledialog.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QFileDialog, geometry: []u8) bool {
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
    /// ` self: QFileDialog `
    ///
    pub fn AdjustSize(self: QFileDialog) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsVisible(self: QFileDialog) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QFileDialog, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsHidden(self: QFileDialog) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsMinimized(self: QFileDialog) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsMaximized(self: QFileDialog) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsFullScreen(self: QFileDialog) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QFileDialog) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QFileDialog, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QFileDialog, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SizePolicy(self: QFileDialog) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QFileDialog, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QFileDialog, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn VisibleRegion(self: QFileDialog) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QFileDialog, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QFileDialog, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ContentsMargins(self: QFileDialog) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ContentsRect(self: QFileDialog) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Layout(self: QFileDialog) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QFileDialog, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UpdateGeometry(self: QFileDialog) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QFileDialog, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QFileDialog, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QFileDialog, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QFileDialog, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FocusWidget(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn NextInFocusChain(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn PreviousInFocusChain(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn AcceptDrops(self: QFileDialog) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QFileDialog, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QFileDialog, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QFileDialog, actions: []QAction) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QFileDialog, before: anytype, actions: []QAction) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QFileDialog, before: anytype, action: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QFileDialog, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QFileDialog, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qfiledialog.Actions: Memory allocation failed");
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
    /// ` self: QFileDialog `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QFileDialog, text: []const u8) QAction {
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
    /// ` self: QFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QFileDialog, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QFileDialog `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QFileDialog, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QFileDialog, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QFileDialog `
    ///
    pub fn ParentWidget(self: QFileDialog) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QFileDialog, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QFileDialog) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QFileDialog, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QFileDialog, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QFileDialog) i32 {
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
    /// ` self: QFileDialog `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QFileDialog, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QFileDialog, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QFileDialog, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QFileDialog, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QFileDialog, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn EnsurePolished(self: QFileDialog) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QFileDialog, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn AutoFillBackground(self: QFileDialog) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QFileDialog, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn BackingStore(self: QFileDialog) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn WindowHandle(self: QFileDialog) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Screen(self: QFileDialog) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QFileDialog, screen: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QFileDialog, title: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QFileDialog, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QFileDialog, callback: *const fn (QFileDialog, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QFileDialog, iconText: []const u8) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QFileDialog, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QFileDialog, callback: *const fn (QFileDialog, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QFileDialog) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QFileDialog, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QFileDialog, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QFileDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QFileDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QFileDialog, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QFileDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QFileDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QFileDialog, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QFileDialog, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QFileDialog, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QFileDialog, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QFileDialog, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QFileDialog, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QFileDialog, param1: i32, on: bool) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QFileDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QFileDialog, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsWidgetType(self: QFileDialog) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsWindowType(self: QFileDialog) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn IsQuickItemType(self: QFileDialog) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SignalsBlocked(self: QFileDialog) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QFileDialog, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Thread(self: QFileDialog) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QFileDialog, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QFileDialog, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QFileDialog, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QFileDialog, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QFileDialog, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QFileDialog, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qfiledialog.Children: Memory allocation failed");
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
    /// ` self: QFileDialog `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QFileDialog, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QFileDialog, obj: anytype) void {
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
    /// ` self: QFileDialog `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QFileDialog, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QFileDialog `
    ///
    pub fn Disconnect3(self: QFileDialog) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QFileDialog, receiver: anytype) bool {
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
    /// ` self: QFileDialog `
    ///
    pub fn DumpObjectTree(self: QFileDialog) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DumpObjectInfo(self: QFileDialog) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QFileDialog, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QFileDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QFileDialog, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QFileDialog, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qfiledialog.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfiledialog.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QFileDialog `
    ///
    pub fn BindingStorage(self: QFileDialog) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn BindingStorage2(self: QFileDialog) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Destroyed(self: QFileDialog) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QFileDialog, callback: *const fn (QFileDialog) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Parent(self: QFileDialog) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QFileDialog, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DeleteLater(self: QFileDialog) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QFileDialog, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QFileDialog, time: i64, timerType: i32) i32 {
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
    /// ` self: QFileDialog `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QFileDialog, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QFileDialog, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QFileDialog, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QFileDialog, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFileDialog `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QFileDialog, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QFileDialog, callback: *const fn (QFileDialog, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn PaintingActive(self: QFileDialog) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn WidthMM(self: QFileDialog) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn HeightMM(self: QFileDialog) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn LogicalDpiX(self: QFileDialog) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn LogicalDpiY(self: QFileDialog) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn PhysicalDpiX(self: QFileDialog) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn PhysicalDpiY(self: QFileDialog) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DevicePixelRatio(self: QFileDialog) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DevicePixelRatioF(self: QFileDialog) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn ColorCount(self: QFileDialog) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Depth(self: QFileDialog) i32 {
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

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SizeHint(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QFileDialog_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperSizeHint(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QFileDialog_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QFileDialog, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFileDialog_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn MinimumSizeHint(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QFileDialog_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperMinimumSizeHint(self: QFileDialog) QSize {
        return .{ .ptr = qtc.QFileDialog_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QFileDialog, callback: *const fn () callconv(.c) QSize) void {
        qtc.QFileDialog_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Open(self: QFileDialog) void {
        qtc.QFileDialog_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperOpen(self: QFileDialog) void {
        qtc.QFileDialog_SuperOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnOpen(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Exec(self: QFileDialog) i32 {
        return qtc.QFileDialog_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExec` instead
    ///
    pub const QBaseExec = SuperExec;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperExec(self: QFileDialog) i32 {
        return qtc.QFileDialog_SuperExec(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExec(self: QFileDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileDialog_OnExec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Reject(self: QFileDialog) void {
        qtc.QFileDialog_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReject` instead
    ///
    pub const QBaseReject = SuperReject;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SuperReject(self: QFileDialog) void {
        qtc.QFileDialog_SuperReject(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReject(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnReject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QFileDialog_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QFileDialog_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QFileDialog, callback: *const fn (QFileDialog, QKeyEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn CloseEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QFileDialog_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QFileDialog_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QFileDialog, callback: *const fn (QFileDialog, QCloseEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn ShowEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QFileDialog_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QFileDialog_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QFileDialog, callback: *const fn (QFileDialog, QShowEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QFileDialog_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QFileDialog_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QFileDialog, callback: *const fn (QFileDialog, QResizeEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QFileDialog_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QFileDialog_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QFileDialog, callback: *const fn (QFileDialog, QContextMenuEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QFileDialog, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QFileDialog_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QFileDialog, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QFileDialog_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QFileDialog, callback: *const fn (QFileDialog, QObject, QEvent) callconv(.c) bool) void {
        qtc.QFileDialog_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn DevType(self: QFileDialog) i32 {
        return qtc.QFileDialog_DevType(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperDevType(self: QFileDialog) i32 {
        return qtc.QFileDialog_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QFileDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileDialog_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QFileDialog, param1: i32) i32 {
        return qtc.QFileDialog_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QFileDialog, param1: i32) i32 {
        return qtc.QFileDialog_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QFileDialog, callback: *const fn (QFileDialog, i32) callconv(.c) i32) void {
        qtc.QFileDialog_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn HasHeightForWidth(self: QFileDialog) bool {
        return qtc.QFileDialog_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperHasHeightForWidth(self: QFileDialog) bool {
        return qtc.QFileDialog_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QFileDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.QFileDialog_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn PaintEngine(self: QFileDialog) QPaintEngine {
        return .{ .ptr = qtc.QFileDialog_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperPaintEngine(self: QFileDialog) QPaintEngine {
        return .{ .ptr = qtc.QFileDialog_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QFileDialog, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QFileDialog_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QFileDialog, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFileDialog_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QFileDialog, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFileDialog_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QFileDialog, callback: *const fn (QFileDialog, QEvent) callconv(.c) bool) void {
        qtc.QFileDialog_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QFileDialog, callback: *const fn (QFileDialog, QMouseEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QFileDialog, callback: *const fn (QFileDialog, QMouseEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QFileDialog, callback: *const fn (QFileDialog, QMouseEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QFileDialog_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QFileDialog, callback: *const fn (QFileDialog, QMouseEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QFileDialog_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QFileDialog_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QFileDialog, callback: *const fn (QFileDialog, QWheelEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QFileDialog_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QFileDialog_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QFileDialog, callback: *const fn (QFileDialog, QKeyEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QFileDialog_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QFileDialog_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QFileDialog, callback: *const fn (QFileDialog, QFocusEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QFileDialog_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QFileDialog_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QFileDialog, callback: *const fn (QFileDialog, QFocusEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QFileDialog_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QFileDialog_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QFileDialog, callback: *const fn (QFileDialog, QEnterEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFileDialog_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFileDialog_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QFileDialog, callback: *const fn (QFileDialog, QEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QFileDialog_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QFileDialog_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QFileDialog, callback: *const fn (QFileDialog, QPaintEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QFileDialog_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QFileDialog_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QFileDialog, callback: *const fn (QFileDialog, QMoveEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QFileDialog_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QFileDialog_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QFileDialog, callback: *const fn (QFileDialog, QTabletEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QFileDialog_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QFileDialog_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QFileDialog, callback: *const fn (QFileDialog, QActionEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QFileDialog_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QFileDialog_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QFileDialog, callback: *const fn (QFileDialog, QDragEnterEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QFileDialog_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QFileDialog_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QFileDialog, callback: *const fn (QFileDialog, QDragMoveEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QFileDialog_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QFileDialog_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QFileDialog, callback: *const fn (QFileDialog, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QFileDialog_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QFileDialog_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QFileDialog, callback: *const fn (QFileDialog, QDropEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QFileDialog_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QFileDialog_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QFileDialog, callback: *const fn (QFileDialog, QHideEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QFileDialog, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QFileDialog_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QFileDialog `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QFileDialog, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QFileDialog_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QFileDialog, callback: *const fn (QFileDialog, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QFileDialog_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QFileDialog, param1: i32) i32 {
        return qtc.QFileDialog_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QFileDialog, param1: i32) i32 {
        return qtc.QFileDialog_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QFileDialog, callback: *const fn (QFileDialog, i32) callconv(.c) i32) void {
        qtc.QFileDialog_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QFileDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QFileDialog_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QFileDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QFileDialog_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QFileDialog, callback: *const fn (QFileDialog, QPainter) callconv(.c) void) void {
        qtc.QFileDialog_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QFileDialog, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QFileDialog_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QFileDialog `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QFileDialog, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QFileDialog_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QFileDialog, callback: *const fn (QFileDialog, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QFileDialog_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SharedPainter(self: QFileDialog) QPainter {
        return .{ .ptr = qtc.QFileDialog_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperSharedPainter(self: QFileDialog) QPainter {
        return .{ .ptr = qtc.QFileDialog_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QFileDialog, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QFileDialog_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QFileDialog_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QFileDialog_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QFileDialog, callback: *const fn (QFileDialog, QInputMethodEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QFileDialog, param1: i32) QVariant {
        return .{ .ptr = qtc.QFileDialog_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: QFileDialog `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QFileDialog, param1: i32) QVariant {
        return .{ .ptr = qtc.QFileDialog_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QFileDialog, callback: *const fn (QFileDialog, i32) callconv(.c) QVariant) void {
        qtc.QFileDialog_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QFileDialog, next: bool) bool {
        return qtc.QFileDialog_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QFileDialog `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QFileDialog, next: bool) bool {
        return qtc.QFileDialog_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QFileDialog, callback: *const fn (QFileDialog, bool) callconv(.c) bool) void {
        qtc.QFileDialog_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QFileDialog_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QFileDialog_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QFileDialog, callback: *const fn (QFileDialog, QTimerEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QFileDialog_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QFileDialog_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QFileDialog, callback: *const fn (QFileDialog, QChildEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFileDialog_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QFileDialog, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QFileDialog_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QFileDialog, callback: *const fn (QFileDialog, QEvent) callconv(.c) void) void {
        qtc.QFileDialog_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QFileDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFileDialog_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QFileDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFileDialog_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QFileDialog, callback: *const fn (QFileDialog, QMetaMethod) callconv(.c) void) void {
        qtc.QFileDialog_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QFileDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFileDialog_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QFileDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QFileDialog_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QFileDialog, callback: *const fn (QFileDialog, QMetaMethod) callconv(.c) void) void {
        qtc.QFileDialog_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn AdjustPosition(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QFileDialog_AdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdjustPosition` instead
    ///
    pub const QBaseAdjustPosition = SuperAdjustPosition;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn SuperAdjustPosition(self: QFileDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QFileDialog_SuperAdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, param1: QWidget) callconv(.c) void `
    ///
    pub fn OnAdjustPosition(self: QFileDialog, callback: *const fn (QFileDialog, QWidget) callconv(.c) void) void {
        qtc.QFileDialog_OnAdjustPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn UpdateMicroFocus(self: QFileDialog) void {
        qtc.QFileDialog_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperUpdateMicroFocus(self: QFileDialog) void {
        qtc.QFileDialog_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Create(self: QFileDialog) void {
        qtc.QFileDialog_Create(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperCreate(self: QFileDialog) void {
        qtc.QFileDialog_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Destroy(self: QFileDialog) void {
        qtc.QFileDialog_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperDestroy(self: QFileDialog) void {
        qtc.QFileDialog_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QFileDialog, callback: *const fn () callconv(.c) void) void {
        qtc.QFileDialog_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FocusNextChild(self: QFileDialog) bool {
        return qtc.QFileDialog_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperFocusNextChild(self: QFileDialog) bool {
        return qtc.QFileDialog_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QFileDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.QFileDialog_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn FocusPreviousChild(self: QFileDialog) bool {
        return qtc.QFileDialog_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperFocusPreviousChild(self: QFileDialog) bool {
        return qtc.QFileDialog_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QFileDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.QFileDialog_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Sender(self: QFileDialog) QObject {
        return .{ .ptr = qtc.QFileDialog_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperSender(self: QFileDialog) QObject {
        return .{ .ptr = qtc.QFileDialog_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QFileDialog, callback: *const fn () callconv(.c) QObject) void {
        qtc.QFileDialog_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    pub fn SenderSignalIndex(self: QFileDialog) i32 {
        return qtc.QFileDialog_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QFileDialog `
    ///
    pub fn SuperSenderSignalIndex(self: QFileDialog) i32 {
        return qtc.QFileDialog_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QFileDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileDialog_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QFileDialog, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFileDialog_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QFileDialog, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFileDialog_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFileDialog_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QFileDialog, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFileDialog_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QFileDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QFileDialog, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QFileDialog_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QFileDialog, callback: *const fn (QFileDialog, QMetaMethod) callconv(.c) bool) void {
        qtc.QFileDialog_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileDialog `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QFileDialog, metricA: i32, metricB: i32) f64 {
        return qtc.QFileDialog_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QFileDialog `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QFileDialog, metricA: i32, metricB: i32) f64 {
        return qtc.QFileDialog_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog`
    ///
    /// ` callback: *const fn (self: QFileDialog, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QFileDialog, callback: *const fn (QFileDialog, i32, i32) callconv(.c) f64) void {
        qtc.QFileDialog_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileDialog `
    ///
    /// ` callback: *const fn (self: QFileDialog, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QFileDialog, callback: *const fn (QFileDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#dtor.QFileDialog)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileDialog `
    ///
    pub fn Delete(self: QFileDialog) void {
        qtc.QFileDialog_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)
pub const enums = struct {
    pub const ViewMode = enum(i32) {
        pub const Detail: i32 = 0;
        pub const List: i32 = 1;
    };

    pub const FileMode = enum(i32) {
        pub const AnyFile: i32 = 0;
        pub const ExistingFile: i32 = 1;
        pub const Directory: i32 = 2;
        pub const ExistingFiles: i32 = 3;
    };

    pub const AcceptMode = enum(i32) {
        pub const AcceptOpen: i32 = 0;
        pub const AcceptSave: i32 = 1;
    };

    pub const DialogLabel = enum(i32) {
        pub const LookIn: i32 = 0;
        pub const FileName: i32 = 1;
        pub const FileType: i32 = 2;
        pub const Accept: i32 = 3;
        pub const Reject: i32 = 4;
    };

    pub const Option = enum(i32) {
        pub const ShowDirsOnly: i32 = 1;
        pub const DontResolveSymlinks: i32 = 2;
        pub const DontConfirmOverwrite: i32 = 4;
        pub const DontUseNativeDialog: i32 = 8;
        pub const ReadOnly: i32 = 16;
        pub const HideNameFilterDetails: i32 = 32;
        pub const DontUseCustomDirectoryIcons: i32 = 64;
    };
};
