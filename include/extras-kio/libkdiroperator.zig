const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletion = @import("libqt6").KCompletion;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KDirLister = @import("libqt6").KDirLister;
const KFileItem = @import("libqt6").KFileItem;
const KFileItemList = @import("libqt6").KFileItemList;
const KFilePreviewGenerator = @import("libqt6").KFilePreviewGenerator;
const KIO__CopyJob = @import("libqt6").KIO__CopyJob;
const KIO__DeleteJob = @import("libqt6").KIO__DeleteJob;
const KPreviewWidgetBase = @import("libqt6").KPreviewWidgetBase;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
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
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
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
const QProgressBar = @import("libqt6").QProgressBar;
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
const kdiroperator_enums = enums;
const kfile_enums = @import("libkfile.zig").enums;
const qdir_enums = @import("../libqdir.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qstyleoption_enums = @import("../libqstyleoption.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kdiroperator.html)
pub const KDirOperator = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDirOperator,

    pub const _is_KDirOperator = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KDirOperator object.
    ///
    pub fn New() KDirOperator {
        return .{ .ptr = qtc.KDirOperator_new() };
    }

    /// New2 constructs a new KDirOperator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` urlName: QUrl `
    ///
    pub fn New2(urlName: anytype) KDirOperator {
        comptime _ = @TypeOf(urlName)._is_QUrl;
        return .{ .ptr = qtc.KDirOperator_new2(@ptrCast(urlName.ptr)) };
    }

    /// New3 constructs a new KDirOperator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` urlName: QUrl `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New3(urlName: anytype, parent: anytype) KDirOperator {
        comptime _ = @TypeOf(urlName)._is_QUrl;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_new3(@ptrCast(urlName.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MetaObject(self: KDirOperator) QMetaObject {
        return .{ .ptr = qtc.KDirOperator_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KDirOperator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirOperator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperMetaObject(self: KDirOperator) QMetaObject {
        return .{ .ptr = qtc.KDirOperator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KDirOperator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirOperator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirOperator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KDirOperator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirOperator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KDirOperator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirOperator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirOperator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KDirOperator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirOperator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` s: bool `
    ///
    pub fn SetShowHiddenFiles(self: KDirOperator, s: bool) void {
        qtc.KDirOperator_SetShowHiddenFiles(@ptrCast(self.ptr), s);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, s: bool) callconv(.c) void `
    ///
    pub fn OnSetShowHiddenFiles(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetShowHiddenFiles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetShowHiddenFiles` instead
    ///
    pub const QBaseSetShowHiddenFiles = SuperSetShowHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` s: bool `
    ///
    pub fn SuperSetShowHiddenFiles(self: KDirOperator, s: bool) void {
        qtc.KDirOperator_SuperSetShowHiddenFiles(@ptrCast(self.ptr), s);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#showHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ShowHiddenFiles(self: KDirOperator) bool {
        return qtc.KDirOperator_ShowHiddenFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Close(self: KDirOperator) void {
        qtc.KDirOperator_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SetNameFilter(self: KDirOperator, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KDirOperator_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#nameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFilter(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDirOperator_NameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.NameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimetypes: []const []const u8 `
    ///
    pub fn SetMimeFilter(self: KDirOperator, allocator: std.mem.Allocator, mimetypes: []const []const u8) void {
        const mimetypes_arr = allocator.alloc(qtc.libqt_string, mimetypes.len) catch @panic("kdiroperator.SetMimeFilter: Memory allocation failed");
        defer allocator.free(mimetypes_arr);
        for (mimetypes, 0..mimetypes.len) |item, i|
            mimetypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimetypes_list = qtc.libqt_list{
            .len = mimetypes.len,
            .data = mimetypes_arr.ptr,
        };
        qtc.KDirOperator_SetMimeFilter(@ptrCast(self.ptr), mimetypes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeFilter(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_MimeFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdiroperator.MimeFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdiroperator.MimeFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setNewFileMenuSupportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mime: []const []const u8 `
    ///
    pub fn SetNewFileMenuSupportedMimeTypes(self: KDirOperator, allocator: std.mem.Allocator, mime: []const []const u8) void {
        const mime_arr = allocator.alloc(qtc.libqt_string, mime.len) catch @panic("kdiroperator.SetNewFileMenuSupportedMimeTypes: Memory allocation failed");
        defer allocator.free(mime_arr);
        for (mime, 0..mime.len) |item, i|
            mime_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mime_list = qtc.libqt_list{
            .len = mime.len,
            .data = mime_arr.ptr,
        };
        qtc.KDirOperator_SetNewFileMenuSupportedMimeTypes(@ptrCast(self.ptr), mime_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#newFileMenuSupportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NewFileMenuSupportedMimeTypes(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_NewFileMenuSupportedMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdiroperator.NewFileMenuSupportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdiroperator.NewFileMenuSupportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setNewFileMenuSelectDirWhenAlreadyExist)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` selectOnDirExists: bool `
    ///
    pub fn SetNewFileMenuSelectDirWhenAlreadyExist(self: KDirOperator, selectOnDirExists: bool) void {
        qtc.KDirOperator_SetNewFileMenuSelectDirWhenAlreadyExist(@ptrCast(self.ptr), selectOnDirExists);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#clearFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ClearFilter(self: KDirOperator) void {
        qtc.KDirOperator_ClearFilter(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Url(self: KDirOperator) QUrl {
        return .{ .ptr = qtc.KDirOperator_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` url: QUrl `
    ///
    /// ` clearforward: bool `
    ///
    pub fn SetUrl(self: KDirOperator, url: anytype, clearforward: bool) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KDirOperator_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), clearforward);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, url: QUrl, clearforward: bool) callconv(.c) void `
    ///
    pub fn OnSetUrl(self: KDirOperator, callback: *const fn (KDirOperator, QUrl, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUrl` instead
    ///
    pub const QBaseSetUrl = SuperSetUrl;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` url: QUrl `
    ///
    /// ` clearforward: bool `
    ///
    pub fn SuperSetUrl(self: KDirOperator, url: anytype, clearforward: bool) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KDirOperator_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), clearforward);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetCurrentItem(self: KDirOperator, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KDirOperator_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SetCurrentItem2(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn SetCurrentItems(self: KDirOperator, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_SetCurrentItems(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn SetCurrentItems2(self: KDirOperator, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KDirOperator_SetCurrentItems2(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn View(self: KDirOperator) QAbstractItemView {
        return .{ .ptr = qtc.KDirOperator_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn SetViewMode(self: KDirOperator, viewKind: i32) void {
        qtc.KDirOperator_SetViewMode(@ptrCast(self.ptr), @bitCast(viewKind));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` kfile_enums.FileView `
    ///
    pub fn ViewMode(self: KDirOperator) i32 {
        return qtc.KDirOperator_ViewMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` sorting: flag of qdir_enums.SortFlag `
    ///
    pub fn SetSorting(self: KDirOperator, sorting: i32) void {
        qtc.KDirOperator_SetSorting(@ptrCast(self.ptr), @bitCast(sorting));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.SortFlag `
    ///
    pub fn Sorting(self: KDirOperator) i32 {
        return qtc.KDirOperator_Sorting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsRoot(self: KDirOperator) bool {
        return qtc.KDirOperator_IsRoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirLister)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DirLister(self: KDirOperator) KDirLister {
        return .{ .ptr = qtc.KDirOperator_DirLister(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#progressBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ProgressBar(self: KDirOperator) QProgressBar {
        return .{ .ptr = qtc.KDirOperator_ProgressBar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` m: flag of kfile_enums.Mode `
    ///
    pub fn SetMode(self: KDirOperator, m: i32) void {
        qtc.KDirOperator_SetMode(@ptrCast(self.ptr), @bitCast(m));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, m: flag of kfile_enums.Mode) callconv(.c) void `
    ///
    pub fn OnSetMode(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMode` instead
    ///
    pub const QBaseSetMode = SuperSetMode;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` m: flag of kfile_enums.Mode `
    ///
    pub fn SuperSetMode(self: KDirOperator, m: i32) void {
        qtc.KDirOperator_SuperSetMode(@ptrCast(self.ptr), @bitCast(m));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` flag of kfile_enums.Mode `
    ///
    pub fn Mode(self: KDirOperator) i32 {
        return qtc.KDirOperator_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setPreviewWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: KPreviewWidgetBase `
    ///
    pub fn SetPreviewWidget(self: KDirOperator, w: anytype) void {
        comptime _ = @TypeOf(w)._is_KPreviewWidgetBase;
        qtc.KDirOperator_SetPreviewWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setPreviewWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, w: KPreviewWidgetBase) callconv(.c) void `
    ///
    pub fn OnSetPreviewWidget(self: KDirOperator, callback: *const fn (KDirOperator, KPreviewWidgetBase) callconv(.c) void) void {
        qtc.KDirOperator_OnSetPreviewWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPreviewWidget` instead
    ///
    pub const QBaseSetPreviewWidget = SuperSetPreviewWidget;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setPreviewWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: KPreviewWidgetBase `
    ///
    pub fn SuperSetPreviewWidget(self: KDirOperator, w: anytype) void {
        comptime _ = @TypeOf(w)._is_KPreviewWidgetBase;
        qtc.KDirOperator_SuperSetPreviewWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SelectedItems(self: KDirOperator) KFileItemList {
        return .{ .ptr = qtc.KDirOperator_SelectedItems(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn IsSelected(self: KDirOperator, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_KFileItem;
        return qtc.KDirOperator_IsSelected(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#numDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn NumDirs(self: KDirOperator) i32 {
        return qtc.KDirOperator_NumDirs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#numFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn NumFiles(self: KDirOperator) i32 {
        return qtc.KDirOperator_NumFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn CompletionObject(self: KDirOperator) KCompletion {
        return .{ .ptr = qtc.KDirOperator_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DirCompletionObject(self: KDirOperator) KCompletion {
        return .{ .ptr = qtc.KDirOperator_DirCompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` action: kdiroperator_enums.Action `
    ///
    pub fn Action(self: KDirOperator, action: i32) QAction {
        return .{ .ptr = qtc.KDirOperator_Action(@ptrCast(self.ptr), @bitCast(action)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#allActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllActions(self: KDirOperator, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KDirOperator_AllActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kdiroperator.AllActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn SetViewConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SetViewConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, configGroup: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnSetViewConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnSetViewConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetViewConfig` instead
    ///
    pub const QBaseSetViewConfig = SuperSetViewConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn SuperSetViewConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperSetViewConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ViewConfigGroup(self: KDirOperator) KConfigGroup {
        return .{ .ptr = qtc.KDirOperator_ViewConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn ReadConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_ReadConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, configGroup: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnReadConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadConfig` instead
    ///
    pub const QBaseReadConfig = SuperReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn SuperReadConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn WriteConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_WriteConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#writeConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, configGroup: KConfigGroup) callconv(.c) void `
    ///
    pub fn OnWriteConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteConfig` instead
    ///
    pub const QBaseWriteConfig = SuperWriteConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#writeConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn SuperWriteConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setOnlyDoubleClickSelectsFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetOnlyDoubleClickSelectsFiles(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetOnlyDoubleClickSelectsFiles(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#onlyDoubleClickSelectsFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn OnlyDoubleClickSelectsFiles(self: KDirOperator) bool {
        return qtc.KDirOperator_OnlyDoubleClickSelectsFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setFollowNewDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFollowNewDirectories(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetFollowNewDirectories(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#followNewDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FollowNewDirectories(self: KDirOperator) bool {
        return qtc.KDirOperator_FollowNewDirectories(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setFollowSelectedDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFollowSelectedDirectories(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetFollowSelectedDirectories(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#followSelectedDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FollowSelectedDirectories(self: KDirOperator) bool {
        return qtc.KDirOperator_FollowSelectedDirectories(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn Del(self: KDirOperator, items: anytype, parent: anytype, ask: bool, showProgress: bool) KIO__DeleteJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_Del(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(parent.ptr), ask, showProgress) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#del)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, items: KFileItemList, parent: QWidget, ask: bool, showProgress: bool) callconv(.c) KIO__DeleteJob `
    ///
    pub fn OnDel(self: KDirOperator, callback: *const fn (KDirOperator, KFileItemList, QWidget, bool, bool) callconv(.c) KIO__DeleteJob) void {
        qtc.KDirOperator_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDel` instead
    ///
    pub const QBaseDel = SuperDel;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#del)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn SuperDel(self: KDirOperator, items: anytype, parent: anytype, ask: bool, showProgress: bool) KIO__DeleteJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperDel(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(parent.ptr), ask, showProgress) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#clearHistory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ClearHistory(self: KDirOperator) void {
        qtc.KDirOperator_ClearHistory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnableDirHighlighting(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetEnableDirHighlighting(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, enable: bool) callconv(.c) void `
    ///
    pub fn OnSetEnableDirHighlighting(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetEnableDirHighlighting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEnableDirHighlighting` instead
    ///
    pub const QBaseSetEnableDirHighlighting = SuperSetEnableDirHighlighting;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SuperSetEnableDirHighlighting(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SuperSetEnableDirHighlighting(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirHighlighting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DirHighlighting(self: KDirOperator) bool {
        return qtc.KDirOperator_DirHighlighting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DirOnlyMode(self: KDirOperator) bool {
        return qtc.KDirOperator_DirOnlyMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: u32 `
    ///
    pub fn DirOnlyMode2(mode: u32) bool {
        return qtc.KDirOperator_DirOnlyMode2(@bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` whichActions: i32 `
    ///
    pub fn SetupMenu(self: KDirOperator, whichActions: i32) void {
        qtc.KDirOperator_SetupMenu(@ptrCast(self.ptr), @bitCast(whichActions));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` b: bool `
    ///
    pub fn SetAcceptDrops(self: KDirOperator, b: bool) void {
        qtc.KDirOperator_SetAcceptDrops(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setAcceptDrops)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, b: bool) callconv(.c) void `
    ///
    pub fn OnSetAcceptDrops(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetAcceptDrops(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAcceptDrops` instead
    ///
    pub const QBaseSetAcceptDrops = SuperSetAcceptDrops;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setAcceptDrops)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetAcceptDrops(self: KDirOperator, b: bool) void {
        qtc.KDirOperator_SuperSetAcceptDrops(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDropOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` options: i32 `
    ///
    pub fn SetDropOptions(self: KDirOperator, options: i32) void {
        qtc.KDirOperator_SetDropOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDropOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, options: i32) callconv(.c) void `
    ///
    pub fn OnSetDropOptions(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_OnSetDropOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDropOptions` instead
    ///
    pub const QBaseSetDropOptions = SuperSetDropOptions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDropOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` options: i32 `
    ///
    pub fn SuperSetDropOptions(self: KDirOperator, options: i32) void {
        qtc.KDirOperator_SuperSetDropOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn Trash(self: KDirOperator, items: anytype, parent: anytype, ask: bool, showProgress: bool) KIO__CopyJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_Trash(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(parent.ptr), ask, showProgress) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trash)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, items: KFileItemList, parent: QWidget, ask: bool, showProgress: bool) callconv(.c) KIO__CopyJob `
    ///
    pub fn OnTrash(self: KDirOperator, callback: *const fn (KDirOperator, KFileItemList, QWidget, bool, bool) callconv(.c) KIO__CopyJob) void {
        qtc.KDirOperator_OnTrash(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTrash` instead
    ///
    pub const QBaseTrash = SuperTrash;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trash)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn SuperTrash(self: KDirOperator, items: anytype, parent: anytype, ask: bool, showProgress: bool) KIO__CopyJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperTrash(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(parent.ptr), ask, showProgress) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#previewGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PreviewGenerator(self: KDirOperator) KFilePreviewGenerator {
        return .{ .ptr = qtc.KDirOperator_PreviewGenerator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setInlinePreviewShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` show: bool `
    ///
    pub fn SetInlinePreviewShown(self: KDirOperator, show: bool) void {
        qtc.KDirOperator_SetInlinePreviewShown(@ptrCast(self.ptr), show);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#decorationPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qstyleoption_enums.Position `
    ///
    pub fn DecorationPosition(self: KDirOperator) i32 {
        return qtc.KDirOperator_DecorationPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDecorationPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` position: qstyleoption_enums.Position `
    ///
    pub fn SetDecorationPosition(self: KDirOperator, position: i32) void {
        qtc.KDirOperator_SetDecorationPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isInlinePreviewShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsInlinePreviewShown(self: KDirOperator) bool {
        return qtc.KDirOperator_IsInlinePreviewShown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IconSize(self: KDirOperator) i32 {
        return qtc.KDirOperator_IconSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setIsSaving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` isSaving: bool `
    ///
    pub fn SetIsSaving(self: KDirOperator, isSaving: bool) void {
        qtc.KDirOperator_SetIsSaving(@ptrCast(self.ptr), isSaving);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isSaving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsSaving(self: KDirOperator) bool {
        return qtc.KDirOperator_IsSaving(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemes(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_SupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdiroperator.SupportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdiroperator.SupportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#showOpenWithActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn ShowOpenWithActions(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_ShowOpenWithActions(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#usingKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UsingKeyNavigation(self: KDirOperator) bool {
        return qtc.KDirOperator_UsingKeyNavigation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#createView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn CreateView(self: KDirOperator, parent: anytype, viewKind: i32) QAbstractItemView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_CreateView(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(viewKind)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#createView)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, parent: QWidget, viewKind: kfile_enums.FileView) callconv(.c) QAbstractItemView `
    ///
    pub fn OnCreateView(self: KDirOperator, callback: *const fn (KDirOperator, QWidget, i32) callconv(.c) QAbstractItemView) void {
        qtc.KDirOperator_OnCreateView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateView` instead
    ///
    pub const QBaseCreateView = SuperCreateView;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#createView)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn SuperCreateView(self: KDirOperator, parent: anytype, viewKind: i32) QAbstractItemView {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperCreateView(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(viewKind)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDirLister)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` lister: KDirLister `
    ///
    pub fn SetDirLister(self: KDirOperator, lister: anytype) void {
        comptime _ = @TypeOf(lister)._is_KDirLister;
        qtc.KDirOperator_SetDirLister(@ptrCast(self.ptr), @ptrCast(lister.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDirLister)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, lister: KDirLister) callconv(.c) void `
    ///
    pub fn OnSetDirLister(self: KDirOperator, callback: *const fn (KDirOperator, KDirLister) callconv(.c) void) void {
        qtc.KDirOperator_OnSetDirLister(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDirLister` instead
    ///
    pub const QBaseSetDirLister = SuperSetDirLister;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDirLister)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` lister: KDirLister `
    ///
    pub fn SuperSetDirLister(self: KDirOperator, lister: anytype) void {
        comptime _ = @TypeOf(lister)._is_KDirLister;
        qtc.KDirOperator_SuperSetDirLister(@ptrCast(self.ptr), @ptrCast(lister.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KDirOperator_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KDirOperator, callback: *const fn (KDirOperator, QResizeEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KDirOperator_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SetupActions(self: KDirOperator) void {
        qtc.KDirOperator_SetupActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetupActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSetupActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupActions` instead
    ///
    pub const QBaseSetupActions = SuperSetupActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSetupActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperSetupActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSortActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateSortActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateSortActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSortActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateSortActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateSortActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSortActions` instead
    ///
    pub const QBaseUpdateSortActions = SuperUpdateSortActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSortActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperUpdateSortActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateSortActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateViewActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateViewActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateViewActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateViewActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateViewActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateViewActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateViewActions` instead
    ///
    pub const QBaseUpdateViewActions = SuperUpdateViewActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateViewActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperUpdateViewActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateViewActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SetupMenu2(self: KDirOperator) void {
        qtc.KDirOperator_SetupMenu2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetupMenu2(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSetupMenu2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupMenu2` instead
    ///
    pub const QBaseSetupMenu2 = SuperSetupMenu2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSetupMenu2(self: KDirOperator) void {
        qtc.KDirOperator_SuperSetupMenu2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PrepareCompletionObjects(self: KDirOperator) void {
        qtc.KDirOperator_PrepareCompletionObjects(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareCompletionObjects(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnPrepareCompletionObjects(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPrepareCompletionObjects` instead
    ///
    pub const QBasePrepareCompletionObjects = SuperPrepareCompletionObjects;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperPrepareCompletionObjects(self: KDirOperator) void {
        qtc.KDirOperator_SuperPrepareCompletionObjects(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn CheckPreviewSupport(self: KDirOperator) bool {
        return qtc.KDirOperator_CheckPreviewSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCheckPreviewSupport(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnCheckPreviewSupport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCheckPreviewSupport` instead
    ///
    pub const QBaseCheckPreviewSupport = SuperCheckPreviewSupport;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperCheckPreviewSupport(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperCheckPreviewSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#activatedMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ActivatedMenu(self: KDirOperator, item: anytype, pos: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KDirOperator_ActivatedMenu(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#activatedMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnActivatedMenu(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QPoint) callconv(.c) void) void {
        qtc.KDirOperator_OnActivatedMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivatedMenu` instead
    ///
    pub const QBaseActivatedMenu = SuperActivatedMenu;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#activatedMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperActivatedMenu(self: KDirOperator, item: anytype, pos: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KDirOperator_SuperActivatedMenu(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KDirOperator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirOperator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KDirOperator, callback: *const fn (KDirOperator, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirOperator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KDirOperator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirOperator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Back(self: KDirOperator) void {
        qtc.KDirOperator_Back(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#back)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBack(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnBack(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBack` instead
    ///
    pub const QBaseBack = SuperBack;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#back)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperBack(self: KDirOperator) void {
        qtc.KDirOperator_SuperBack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Forward(self: KDirOperator) void {
        qtc.KDirOperator_Forward(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#forward)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnForward(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnForward(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperForward` instead
    ///
    pub const QBaseForward = SuperForward;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#forward)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperForward(self: KDirOperator) void {
        qtc.KDirOperator_SuperForward(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Home(self: KDirOperator) void {
        qtc.KDirOperator_Home(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#home)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnHome(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHome` instead
    ///
    pub const QBaseHome = SuperHome;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#home)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperHome(self: KDirOperator) void {
        qtc.KDirOperator_SuperHome(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#cdUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn CdUp(self: KDirOperator) void {
        qtc.KDirOperator_CdUp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#cdUp)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCdUp(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnCdUp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCdUp` instead
    ///
    pub const QBaseCdUp = SuperCdUp;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#cdUp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperCdUp(self: KDirOperator) void {
        qtc.KDirOperator_SuperCdUp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateDir(self: KDirOperator) void {
        qtc.KDirOperator_UpdateDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#rereadDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn RereadDir(self: KDirOperator) void {
        qtc.KDirOperator_RereadDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#rereadDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRereadDir(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnRereadDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRereadDir` instead
    ///
    pub const QBaseRereadDir = SuperRereadDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#rereadDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperRereadDir(self: KDirOperator) void {
        qtc.KDirOperator_SuperRereadDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Mkdir(self: KDirOperator) void {
        qtc.KDirOperator_Mkdir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mkdir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnMkdir(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMkdir` instead
    ///
    pub const QBaseMkdir = SuperMkdir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperMkdir(self: KDirOperator) void {
        qtc.KDirOperator_SuperMkdir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#deleteSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DeleteSelected(self: KDirOperator) void {
        qtc.KDirOperator_DeleteSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#deleteSelected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDeleteSelected(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnDeleteSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteSelected` instead
    ///
    pub const QBaseDeleteSelected = SuperDeleteSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#deleteSelected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperDeleteSelected(self: KDirOperator) void {
        qtc.KDirOperator_SuperDeleteSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSelectionDependentActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateSelectionDependentActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateSelectionDependentActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#makeCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn MakeCompletion(self: KDirOperator, allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KDirOperator_MakeCompletion(@ptrCast(self.ptr), param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#makeDirCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn MakeDirCompletion(self: KDirOperator, allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KDirOperator_MakeDirCompletion(@ptrCast(self.ptr), param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.MakeDirCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renameSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn RenameSelected(self: KDirOperator) void {
        qtc.KDirOperator_RenameSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trashSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn TrashSelected(self: KDirOperator) void {
        qtc.KDirOperator_TrashSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trashSelected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnTrashSelected(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnTrashSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTrashSelected` instead
    ///
    pub const QBaseTrashSelected = SuperTrashSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trashSelected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperTrashSelected(self: KDirOperator) void {
        qtc.KDirOperator_SuperTrashSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` value: i32 `
    ///
    pub fn SetIconSize(self: KDirOperator, value: i32) void {
        qtc.KDirOperator_SetIconSize(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setSupportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` schemes: []const []const u8 `
    ///
    pub fn SetSupportedSchemes(self: KDirOperator, allocator: std.mem.Allocator, schemes: []const []const u8) void {
        const schemes_arr = allocator.alloc(qtc.libqt_string, schemes.len) catch @panic("kdiroperator.SetSupportedSchemes: Memory allocation failed");
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
        qtc.KDirOperator_SetSupportedSchemes(@ptrCast(self.ptr), schemes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ResetCursor(self: KDirOperator) void {
        qtc.KDirOperator_ResetCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resetCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetCursor(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnResetCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetCursor` instead
    ///
    pub const QBaseResetCursor = SuperResetCursor;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resetCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperResetCursor(self: KDirOperator) void {
        qtc.KDirOperator_SuperResetCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#pathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PathChanged(self: KDirOperator) void {
        qtc.KDirOperator_PathChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#pathChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPathChanged(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnPathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPathChanged` instead
    ///
    pub const QBasePathChanged = SuperPathChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#pathChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperPathChanged(self: KDirOperator) void {
        qtc.KDirOperator_SuperPathChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SelectDir(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SelectDir(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnSelectDir(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnSelectDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectDir` instead
    ///
    pub const QBaseSelectDir = SuperSelectDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SuperSelectDir(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperSelectDir(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SelectFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SelectFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnSelectFile(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnSelectFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectFile` instead
    ///
    pub const QBaseSelectFile = SuperSelectFile;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SuperSelectFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperSelectFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#highlightFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn HighlightFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_HighlightFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#highlightFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnHighlightFile(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnHighlightFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHighlightFile` instead
    ///
    pub const QBaseHighlightFile = SuperHighlightFile;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#highlightFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn SuperHighlightFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperHighlightFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SortByName(self: KDirOperator) void {
        qtc.KDirOperator_SortByName(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSortByName(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSortByName` instead
    ///
    pub const QBaseSortByName = SuperSortByName;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSortByName(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByName(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortBySize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SortBySize(self: KDirOperator) void {
        qtc.KDirOperator_SortBySize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortBySize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSortBySize(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortBySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSortBySize` instead
    ///
    pub const QBaseSortBySize = SuperSortBySize;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortBySize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSortBySize(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortBySize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SortByDate(self: KDirOperator) void {
        qtc.KDirOperator_SortByDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByDate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSortByDate(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByDate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSortByDate` instead
    ///
    pub const QBaseSortByDate = SuperSortByDate;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByDate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSortByDate(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SortByType(self: KDirOperator) void {
        qtc.KDirOperator_SortByType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSortByType(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSortByType` instead
    ///
    pub const QBaseSortByType = SuperSortByType;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSortByType(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortReversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SortReversed(self: KDirOperator) void {
        qtc.KDirOperator_SortReversed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortReversed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSortReversed(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortReversed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSortReversed` instead
    ///
    pub const QBaseSortReversed = SuperSortReversed;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortReversed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSortReversed(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortReversed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ToggleDirsFirst(self: KDirOperator) void {
        qtc.KDirOperator_ToggleDirsFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnToggleDirsFirst(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnToggleDirsFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperToggleDirsFirst` instead
    ///
    pub const QBaseToggleDirsFirst = SuperToggleDirsFirst;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperToggleDirsFirst(self: KDirOperator) void {
        qtc.KDirOperator_SuperToggleDirsFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ToggleIgnoreCase(self: KDirOperator) void {
        qtc.KDirOperator_ToggleIgnoreCase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnToggleIgnoreCase(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnToggleIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperToggleIgnoreCase` instead
    ///
    pub const QBaseToggleIgnoreCase = SuperToggleIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperToggleIgnoreCase(self: KDirOperator) void {
        qtc.KDirOperator_SuperToggleIgnoreCase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` match: []const u8 `
    ///
    pub fn SlotCompletionMatch(self: KDirOperator, match: []const u8) void {
        const match_str = qtc.libqt_string{
            .len = match.len,
            .data = match.ptr,
        };
        qtc.KDirOperator_SlotCompletionMatch(@ptrCast(self.ptr), match_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, match: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSlotCompletionMatch(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirOperator_OnSlotCompletionMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotCompletionMatch` instead
    ///
    pub const QBaseSlotCompletionMatch = SuperSlotCompletionMatch;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` match: []const u8 `
    ///
    pub fn SuperSlotCompletionMatch(self: KDirOperator, match: []const u8) void {
        const match_str = qtc.libqt_string{
            .len = match.len,
            .data = match.ptr,
        };
        qtc.KDirOperator_SuperSlotCompletionMatch(@ptrCast(self.ptr), match_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#urlEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QUrl `
    ///
    pub fn UrlEntered(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.KDirOperator_UrlEntered(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#urlEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlEntered(self: KDirOperator, callback: *const fn (KDirOperator, QUrl) callconv(.c) void) void {
        qtc.KDirOperator_Connect_UrlEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` files: i32 `
    ///
    /// ` dirs: i32 `
    ///
    pub fn UpdateInformation(self: KDirOperator, files: i32, dirs: i32) void {
        qtc.KDirOperator_UpdateInformation(@ptrCast(self.ptr), @bitCast(files), @bitCast(dirs));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateInformation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, files: i32, dirs: i32) callconv(.c) void `
    ///
    pub fn OnUpdateInformation(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32) callconv(.c) void) void {
        qtc.KDirOperator_Connect_UpdateInformation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Completion(self: KDirOperator, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KDirOperator_Completion(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCompletion(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirOperator_Connect_Completion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#finishedLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FinishedLoading(self: KDirOperator) void {
        qtc.KDirOperator_FinishedLoading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#finishedLoading)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn OnFinishedLoading(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FinishedLoading(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` newView: QAbstractItemView `
    ///
    pub fn ViewChanged(self: KDirOperator, newView: anytype) void {
        comptime _ = @TypeOf(newView)._is_QAbstractItemView;
        qtc.KDirOperator_ViewChanged(@ptrCast(self.ptr), @ptrCast(newView.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, newView: QAbstractItemView) callconv(.c) void `
    ///
    pub fn OnViewChanged(self: KDirOperator, callback: *const fn (KDirOperator, QAbstractItemView) callconv(.c) void) void {
        qtc.KDirOperator_Connect_ViewChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileHighlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn FileHighlighted(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_FileHighlighted(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileHighlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnFileHighlighted(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FileHighlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn DirActivated(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_DirActivated(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnDirActivated(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_DirActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn FileSelected(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_FileSelected(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn OnFileSelected(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FileSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dropped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` event: QDropEvent `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn Dropped(self: KDirOperator, item: anytype, event: anytype, urls: []QUrl) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(event)._is_QDropEvent;
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_Dropped(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(event.ptr), urls_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dropped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem, event: QDropEvent, urls: qtc.libqt_list ([]QUrl)) callconv(.c) void `
    ///
    pub fn OnDropped(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QDropEvent, qtc.libqt_list) callconv(.c) void) void {
        qtc.KDirOperator_Connect_Dropped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#contextMenuAboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` menu: QMenu `
    ///
    pub fn ContextMenuAboutToShow(self: KDirOperator, item: anytype, menu: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KDirOperator_ContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#contextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem, menu: QMenu) callconv(.c) void `
    ///
    pub fn OnContextMenuAboutToShow(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QMenu) callconv(.c) void) void {
        qtc.KDirOperator_Connect_ContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` size: i32 `
    ///
    pub fn CurrentIconSizeChanged(self: KDirOperator, size: i32) void {
        qtc.KDirOperator_CurrentIconSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, size: i32) callconv(.c) void `
    ///
    pub fn OnCurrentIconSizeChanged(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_Connect_CurrentIconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn KeyEnterReturnPressed(self: KDirOperator) void {
        qtc.KDirOperator_KeyEnterReturnPressed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn OnKeyEnterReturnPressed(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
        qtc.KDirOperator_Connect_KeyEnterReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renamingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn RenamingFinished(self: KDirOperator, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_RenamingFinished(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renamingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, urls: qtc.libqt_list ([]QUrl)) callconv(.c) void `
    ///
    pub fn OnRenamingFinished(self: KDirOperator, callback: *const fn (KDirOperator, qtc.libqt_list) callconv(.c) void) void {
        qtc.KDirOperator_Connect_RenamingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn WinId(self: KDirOperator) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn CreateWinId(self: KDirOperator) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn InternalWinId(self: KDirOperator) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn EffectiveWinId(self: KDirOperator) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Style(self: KDirOperator) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KDirOperator, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsTopLevel(self: KDirOperator) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsWindow(self: KDirOperator) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsModal(self: KDirOperator) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KDirOperator) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KDirOperator, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsEnabled(self: KDirOperator) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KDirOperator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KDirOperator, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KDirOperator, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KDirOperator, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FrameGeometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Geometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn NormalGeometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn X(self: KDirOperator) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Y(self: KDirOperator) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Pos(self: KDirOperator) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FrameSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Size(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Width(self: KDirOperator) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Height(self: KDirOperator) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Rect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ChildrenRect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ChildrenRegion(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MinimumSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MaximumSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MinimumWidth(self: KDirOperator) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MinimumHeight(self: KDirOperator) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MaximumWidth(self: KDirOperator) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MaximumHeight(self: KDirOperator) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KDirOperator, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KDirOperator, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KDirOperator, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KDirOperator, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KDirOperator, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KDirOperator, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KDirOperator, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KDirOperator, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SizeIncrement(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KDirOperator, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn BaseSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KDirOperator, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KDirOperator, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KDirOperator, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KDirOperator, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KDirOperator, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KDirOperator, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KDirOperator, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KDirOperator, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KDirOperator, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KDirOperator `
    ///
    pub fn Window(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn NativeParentWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn TopLevelWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Palette(self: KDirOperator) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KDirOperator, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KDirOperator, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KDirOperator) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KDirOperator, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KDirOperator) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Font(self: KDirOperator) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KDirOperator, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FontMetrics(self: KDirOperator) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FontInfo(self: KDirOperator) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Cursor(self: KDirOperator) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KDirOperator, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UnsetCursor(self: KDirOperator) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn HasMouseTracking(self: KDirOperator) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UnderMouse(self: KDirOperator) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn HasTabletTracking(self: KDirOperator) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KDirOperator, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KDirOperator, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Mask(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ClearMask(self: KDirOperator) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KDirOperator, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Grab(self: KDirOperator) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn GraphicsEffect(self: KDirOperator) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KDirOperator, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KDirOperator, windowTitle: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KDirOperator, styleSheet: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KDirOperator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn WindowIcon(self: KDirOperator) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KDirOperator, windowIconText: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KDirOperator, windowRole: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KDirOperator, filePath: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KDirOperator, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn WindowOpacity(self: KDirOperator) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsWindowModified(self: KDirOperator) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KDirOperator, toolTip: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KDirOperator, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ToolTipDuration(self: KDirOperator) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KDirOperator, statusTip: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KDirOperator, whatsThis: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KDirOperator, name: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KDirOperator, description: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KDirOperator, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KDirOperator) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UnsetLayoutDirection(self: KDirOperator) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KDirOperator, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Locale(self: KDirOperator) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UnsetLocale(self: KDirOperator) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsRightToLeft(self: KDirOperator) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsLeftToRight(self: KDirOperator) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SetFocus(self: KDirOperator) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsActiveWindow(self: KDirOperator) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ActivateWindow(self: KDirOperator) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ClearFocus(self: KDirOperator) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KDirOperator, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KDirOperator) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KDirOperator, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn HasFocus(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KDirOperator, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FocusProxy(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KDirOperator) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KDirOperator, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn GrabMouse(self: KDirOperator) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ReleaseMouse(self: KDirOperator) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn GrabKeyboard(self: KDirOperator) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ReleaseKeyboard(self: KDirOperator) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KDirOperator, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KDirOperator, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KDirOperator, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KDirOperator, id: i32) void {
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
    /// ` self: KDirOperator `
    ///
    pub fn UpdatesEnabled(self: KDirOperator) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn GraphicsProxyWidget(self: KDirOperator) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Update(self: KDirOperator) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Repaint(self: KDirOperator) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KDirOperator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KDirOperator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KDirOperator, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Show(self: KDirOperator) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Hide(self: KDirOperator) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ShowMinimized(self: KDirOperator) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ShowMaximized(self: KDirOperator) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ShowFullScreen(self: KDirOperator) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ShowNormal(self: KDirOperator) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Raise(self: KDirOperator) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Lower(self: KDirOperator) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KDirOperator, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KDirOperator, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KDirOperator, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KDirOperator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kdiroperator.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KDirOperator, geometry: []u8) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn AdjustSize(self: KDirOperator) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsVisible(self: KDirOperator) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KDirOperator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsHidden(self: KDirOperator) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsMinimized(self: KDirOperator) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsMaximized(self: KDirOperator) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsFullScreen(self: KDirOperator) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KDirOperator) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KDirOperator, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KDirOperator, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SizePolicy(self: KDirOperator) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KDirOperator, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KDirOperator, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn VisibleRegion(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KDirOperator, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KDirOperator, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ContentsMargins(self: KDirOperator) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ContentsRect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Layout(self: KDirOperator) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KDirOperator, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateGeometry(self: KDirOperator) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KDirOperator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KDirOperator, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KDirOperator, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KDirOperator, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FocusWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn NextInFocusChain(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PreviousInFocusChain(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn AcceptDrops(self: KDirOperator) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KDirOperator, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KDirOperator, actions: []QAction) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KDirOperator, before: anytype, actions: []QAction) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KDirOperator, before: anytype, action: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KDirOperator, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KDirOperator, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kdiroperator.Actions: Memory allocation failed");
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
    /// ` self: KDirOperator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KDirOperator, text: []const u8) QAction {
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
    /// ` self: KDirOperator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KDirOperator, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KDirOperator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KDirOperator, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KDirOperator `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KDirOperator, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KDirOperator `
    ///
    pub fn ParentWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KDirOperator) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KDirOperator, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KDirOperator) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KDirOperator, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KDirOperator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KDirOperator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KDirOperator, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KDirOperator, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn EnsurePolished(self: KDirOperator) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KDirOperator, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn AutoFillBackground(self: KDirOperator) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KDirOperator, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn BackingStore(self: KDirOperator) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn WindowHandle(self: KDirOperator) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Screen(self: KDirOperator) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KDirOperator, screen: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KDirOperator, title: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KDirOperator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KDirOperator, callback: *const fn (KDirOperator, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KDirOperator, iconText: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KDirOperator, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KDirOperator, callback: *const fn (KDirOperator, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KDirOperator) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KDirOperator, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KDirOperator, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KDirOperator, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KDirOperator, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KDirOperator, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KDirOperator, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KDirOperator, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KDirOperator, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KDirOperator, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KDirOperator, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KDirOperator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KDirOperator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KDirOperator, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KDirOperator, param1: i32, on: bool) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdiroperator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KDirOperator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsWidgetType(self: KDirOperator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsWindowType(self: KDirOperator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn IsQuickItemType(self: KDirOperator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SignalsBlocked(self: KDirOperator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KDirOperator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Thread(self: KDirOperator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KDirOperator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KDirOperator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KDirOperator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KDirOperator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KDirOperator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KDirOperator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kdiroperator.Children: Memory allocation failed");
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
    /// ` self: KDirOperator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KDirOperator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KDirOperator, obj: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KDirOperator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDirOperator `
    ///
    pub fn Disconnect3(self: KDirOperator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KDirOperator, receiver: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn DumpObjectTree(self: KDirOperator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DumpObjectInfo(self: KDirOperator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KDirOperator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KDirOperator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KDirOperator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdiroperator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdiroperator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirOperator `
    ///
    pub fn BindingStorage(self: KDirOperator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn BindingStorage2(self: KDirOperator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Destroyed(self: KDirOperator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Parent(self: KDirOperator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KDirOperator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DeleteLater(self: KDirOperator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KDirOperator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KDirOperator, time: i64, timerType: i32) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KDirOperator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KDirOperator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KDirOperator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KDirOperator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KDirOperator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KDirOperator, callback: *const fn (KDirOperator, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PaintingActive(self: KDirOperator) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn WidthMM(self: KDirOperator) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn HeightMM(self: KDirOperator) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn LogicalDpiX(self: KDirOperator) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn LogicalDpiY(self: KDirOperator) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PhysicalDpiX(self: KDirOperator) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PhysicalDpiY(self: KDirOperator) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DevicePixelRatio(self: KDirOperator) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn DevicePixelRatioF(self: KDirOperator) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ColorCount(self: KDirOperator) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Depth(self: KDirOperator) i32 {
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
    /// ` self: KDirOperator `
    ///
    pub fn DevType(self: KDirOperator) i32 {
        return qtc.KDirOperator_DevType(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperDevType(self: KDirOperator) i32 {
        return qtc.KDirOperator_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KDirOperator, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirOperator_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KDirOperator, visible: bool) void {
        qtc.KDirOperator_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KDirOperator `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KDirOperator, visible: bool) void {
        qtc.KDirOperator_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SuperSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KDirOperator, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDirOperator_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn MinimumSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperMinimumSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KDirOperator, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDirOperator_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) i32) void {
        qtc.KDirOperator_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn HasHeightForWidth(self: KDirOperator) bool {
        return qtc.KDirOperator_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperHasHeightForWidth(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn PaintEngine(self: KDirOperator) QPaintEngine {
        return .{ .ptr = qtc.KDirOperator_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperPaintEngine(self: KDirOperator) QPaintEngine {
        return .{ .ptr = qtc.KDirOperator_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KDirOperator, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KDirOperator_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KDirOperator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirOperator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KDirOperator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirOperator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) bool) void {
        qtc.KDirOperator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KDirOperator_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KDirOperator_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KDirOperator, callback: *const fn (KDirOperator, QWheelEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDirOperator_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDirOperator_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KDirOperator, callback: *const fn (KDirOperator, QKeyEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDirOperator_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDirOperator_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QKeyEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDirOperator_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDirOperator_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KDirOperator, callback: *const fn (KDirOperator, QFocusEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDirOperator_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDirOperator_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KDirOperator, callback: *const fn (KDirOperator, QFocusEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KDirOperator_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KDirOperator_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEnterEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KDirOperator_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KDirOperator_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KDirOperator, callback: *const fn (KDirOperator, QPaintEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KDirOperator_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KDirOperator_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMoveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KDirOperator_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KDirOperator_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QCloseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KDirOperator_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KDirOperator_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KDirOperator, callback: *const fn (KDirOperator, QContextMenuEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KDirOperator_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KDirOperator_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KDirOperator, callback: *const fn (KDirOperator, QTabletEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KDirOperator_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KDirOperator_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KDirOperator, callback: *const fn (KDirOperator, QActionEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KDirOperator_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KDirOperator_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragEnterEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KDirOperator_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KDirOperator_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragMoveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KDirOperator_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KDirOperator_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KDirOperator_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KDirOperator_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDropEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KDirOperator_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KDirOperator_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KDirOperator, callback: *const fn (KDirOperator, QShowEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KDirOperator_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KDirOperator_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KDirOperator, callback: *const fn (KDirOperator, QHideEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KDirOperator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDirOperator_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KDirOperator `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KDirOperator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDirOperator_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KDirOperator, callback: *const fn (KDirOperator, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KDirOperator_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) i32) void {
        qtc.KDirOperator_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDirOperator_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDirOperator_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KDirOperator, callback: *const fn (KDirOperator, QPainter) callconv(.c) void) void {
        qtc.KDirOperator_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KDirOperator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDirOperator_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KDirOperator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDirOperator_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KDirOperator, callback: *const fn (KDirOperator, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KDirOperator_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SharedPainter(self: KDirOperator) QPainter {
        return .{ .ptr = qtc.KDirOperator_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperSharedPainter(self: KDirOperator) QPainter {
        return .{ .ptr = qtc.KDirOperator_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KDirOperator, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KDirOperator_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDirOperator_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDirOperator_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KDirOperator, callback: *const fn (KDirOperator, QInputMethodEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KDirOperator, param1: i32) QVariant {
        return .{ .ptr = qtc.KDirOperator_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KDirOperator, param1: i32) QVariant {
        return .{ .ptr = qtc.KDirOperator_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) QVariant) void {
        qtc.KDirOperator_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KDirOperator, next: bool) bool {
        return qtc.KDirOperator_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KDirOperator `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KDirOperator, next: bool) bool {
        return qtc.KDirOperator_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirOperator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirOperator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KDirOperator, callback: *const fn (KDirOperator, QTimerEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirOperator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirOperator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KDirOperator, callback: *const fn (KDirOperator, QChildEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KDirOperator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirOperator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) void) void {
        qtc.KDirOperator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) void) void {
        qtc.KDirOperator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn UpdateMicroFocus(self: KDirOperator) void {
        qtc.KDirOperator_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperUpdateMicroFocus(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Create(self: KDirOperator) void {
        qtc.KDirOperator_Create(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperCreate(self: KDirOperator) void {
        qtc.KDirOperator_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Destroy(self: KDirOperator) void {
        qtc.KDirOperator_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperDestroy(self: KDirOperator) void {
        qtc.KDirOperator_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FocusNextChild(self: KDirOperator) bool {
        return qtc.KDirOperator_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperFocusNextChild(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn FocusPreviousChild(self: KDirOperator) bool {
        return qtc.KDirOperator_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperFocusPreviousChild(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Sender(self: KDirOperator) QObject {
        return .{ .ptr = qtc.KDirOperator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperSender(self: KDirOperator) QObject {
        return .{ .ptr = qtc.KDirOperator_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KDirOperator, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirOperator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn SenderSignalIndex(self: KDirOperator) i32 {
        return qtc.KDirOperator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn SuperSenderSignalIndex(self: KDirOperator) i32 {
        return qtc.KDirOperator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KDirOperator, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirOperator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KDirOperator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirOperator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KDirOperator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirOperator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirOperator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KDirOperator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirOperator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KDirOperator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirOperator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirOperator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KDirOperator, metricA: i32, metricB: i32) f64 {
        return qtc.KDirOperator_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KDirOperator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KDirOperator, metricA: i32, metricB: i32) f64 {
        return qtc.KDirOperator_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32) callconv(.c) f64) void {
        qtc.KDirOperator_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dtor.KDirOperator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirOperator `
    ///
    pub fn Delete(self: KDirOperator) void {
        qtc.KDirOperator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kdiroperator.html#public-types)
pub const enums = struct {
    pub const ActionType = enum(i32) {
        pub const SortActions: i32 = 1;
        pub const ViewActions: i32 = 2;
        pub const NavActions: i32 = 4;
        pub const FileActions: i32 = 8;
        pub const AllActions: i32 = 15;
    };

    pub const Action = enum(i32) {
        pub const PopupMenu: i32 = 0;
        pub const Up: i32 = 1;
        pub const Back: i32 = 2;
        pub const Forward: i32 = 3;
        pub const Home: i32 = 4;
        pub const Reload: i32 = 5;
        pub const New: i32 = 6;
        pub const NewFolder: i32 = 7;
        pub const Rename: i32 = 8;
        pub const Trash: i32 = 9;
        pub const Delete: i32 = 10;
        pub const SortMenu: i32 = 11;
        pub const SortByName: i32 = 12;
        pub const SortBySize: i32 = 13;
        pub const SortByDate: i32 = 14;
        pub const SortByType: i32 = 15;
        pub const SortAscending: i32 = 16;
        pub const SortDescending: i32 = 17;
        pub const SortFoldersFirst: i32 = 18;
        pub const SortHiddenFilesLast: i32 = 19;
        pub const ViewModeMenu: i32 = 20;
        pub const ViewIconsView: i32 = 21;
        pub const ViewCompactView: i32 = 22;
        pub const ViewDetailsView: i32 = 23;
        pub const DecorationMenu: i32 = 24;
        pub const DecorationAtTop: i32 = 25;
        pub const DecorationAtLeft: i32 = 26;
        pub const ShortView: i32 = 27;
        pub const DetailedView: i32 = 28;
        pub const TreeView: i32 = 29;
        pub const DetailedTreeView: i32 = 30;
        pub const AllowExpansionInDetailsView: i32 = 31;
        pub const ShowHiddenFiles: i32 = 32;
        pub const ShowPreviewPanel: i32 = 33;
        pub const ShowPreview: i32 = 34;
        pub const OpenContainingFolder: i32 = 35;
        pub const Properties: i32 = 36;
    };
};
