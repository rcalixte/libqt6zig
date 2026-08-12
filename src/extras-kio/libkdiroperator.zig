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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KDirOperator object in C++ memory
    ///
    pub fn new() KDirOperator {
        return .{ .ptr = qtc.KDirOperator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KDirOperator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` urlName: QUrl `
    ///
    pub fn new2(urlName: anytype) KDirOperator {
        comptime _ = @TypeOf(urlName)._is_QUrl;
        return .{ .ptr = qtc.KDirOperator_new2(@ptrCast(urlName.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KDirOperator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` urlName: QUrl `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new3(urlName: anytype, _parent: anytype) KDirOperator {
        comptime _ = @TypeOf(urlName)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_new3(@ptrCast(urlName.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn metaObject(self: KDirOperator) QMetaObject {
        return .{ .ptr = qtc.KDirOperator_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KDirOperator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirOperator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    pub fn superMetaObject(self: KDirOperator) QMetaObject {
        return .{ .ptr = qtc.KDirOperator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KDirOperator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirOperator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirOperator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KDirOperator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirOperator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KDirOperator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirOperator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirOperator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KDirOperator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirOperator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setShowHiddenFiles` instead
    ///
    pub const SetShowHiddenFiles = setShowHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` s: bool `
    ///
    pub fn setShowHiddenFiles(self: KDirOperator, s: bool) void {
        qtc.KDirOperator_SetShowHiddenFiles(@ptrCast(self.ptr), s);
    }

    /// ### DEPRECATED: Use `onSetShowHiddenFiles` instead
    ///
    pub const OnSetShowHiddenFiles = onSetShowHiddenFiles;

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
    pub fn onSetShowHiddenFiles(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetShowHiddenFiles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetShowHiddenFiles` instead
    ///
    pub const SuperSetShowHiddenFiles = superSetShowHiddenFiles;

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
    pub fn superSetShowHiddenFiles(self: KDirOperator, s: bool) void {
        qtc.KDirOperator_SuperSetShowHiddenFiles(@ptrCast(self.ptr), s);
    }

    /// ### DEPRECATED: Use `showHiddenFiles` instead
    ///
    pub const ShowHiddenFiles = showHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#showHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn showHiddenFiles(self: KDirOperator) bool {
        return qtc.KDirOperator_ShowHiddenFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn close(self: KDirOperator) void {
        qtc.KDirOperator_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNameFilter` instead
    ///
    pub const SetNameFilter = setNameFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn setNameFilter(self: KDirOperator, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KDirOperator_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `nameFilter` instead
    ///
    pub const NameFilter = nameFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#nameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nameFilter(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDirOperator_NameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.nameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeFilter` instead
    ///
    pub const SetMimeFilter = setMimeFilter;

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
    pub fn setMimeFilter(self: KDirOperator, allocator: std.mem.Allocator, mimetypes: []const []const u8) void {
        const mimetypes_arr = allocator.alloc(qtc.libqt_string, mimetypes.len) catch @panic("KDirOperator.setMimeFilter: Memory allocation failed");
        defer allocator.free(mimetypes_arr);
        for (mimetypes, 0..mimetypes.len) |str_item, i|
            mimetypes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimetypes_list = qtc.libqt_list{
            .len = mimetypes.len,
            .data = mimetypes_arr.ptr,
        };
        qtc.KDirOperator_SetMimeFilter(@ptrCast(self.ptr), mimetypes_list);
    }

    /// ### DEPRECATED: Use `mimeFilter` instead
    ///
    pub const MimeFilter = mimeFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeFilter(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_MimeFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDirOperator.mimeFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirOperator.mimeFilter: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setNewFileMenuSupportedMimeTypes` instead
    ///
    pub const SetNewFileMenuSupportedMimeTypes = setNewFileMenuSupportedMimeTypes;

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
    pub fn setNewFileMenuSupportedMimeTypes(self: KDirOperator, allocator: std.mem.Allocator, mime: []const []const u8) void {
        const mime_arr = allocator.alloc(qtc.libqt_string, mime.len) catch @panic("KDirOperator.setNewFileMenuSupportedMimeTypes: Memory allocation failed");
        defer allocator.free(mime_arr);
        for (mime, 0..mime.len) |str_item, i|
            mime_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mime_list = qtc.libqt_list{
            .len = mime.len,
            .data = mime_arr.ptr,
        };
        qtc.KDirOperator_SetNewFileMenuSupportedMimeTypes(@ptrCast(self.ptr), mime_list);
    }

    /// ### DEPRECATED: Use `newFileMenuSupportedMimeTypes` instead
    ///
    pub const NewFileMenuSupportedMimeTypes = newFileMenuSupportedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#newFileMenuSupportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn newFileMenuSupportedMimeTypes(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_NewFileMenuSupportedMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDirOperator.newFileMenuSupportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirOperator.newFileMenuSupportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setNewFileMenuSelectDirWhenAlreadyExist` instead
    ///
    pub const SetNewFileMenuSelectDirWhenAlreadyExist = setNewFileMenuSelectDirWhenAlreadyExist;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setNewFileMenuSelectDirWhenAlreadyExist)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` selectOnDirExists: bool `
    ///
    pub fn setNewFileMenuSelectDirWhenAlreadyExist(self: KDirOperator, selectOnDirExists: bool) void {
        qtc.KDirOperator_SetNewFileMenuSelectDirWhenAlreadyExist(@ptrCast(self.ptr), selectOnDirExists);
    }

    /// ### DEPRECATED: Use `clearFilter` instead
    ///
    pub const ClearFilter = clearFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#clearFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn clearFilter(self: KDirOperator) void {
        qtc.KDirOperator_ClearFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn url(self: KDirOperator) QUrl {
        return .{ .ptr = qtc.KDirOperator_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _url: QUrl `
    ///
    /// ` clearforward: bool `
    ///
    pub fn setUrl(self: KDirOperator, _url: anytype, clearforward: bool) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KDirOperator_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr), clearforward);
    }

    /// ### DEPRECATED: Use `onSetUrl` instead
    ///
    pub const OnSetUrl = onSetUrl;

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
    pub fn onSetUrl(self: KDirOperator, callback: *const fn (KDirOperator, QUrl, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUrl` instead
    ///
    pub const SuperSetUrl = superSetUrl;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _url: QUrl `
    ///
    /// ` clearforward: bool `
    ///
    pub fn superSetUrl(self: KDirOperator, _url: anytype, clearforward: bool) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KDirOperator_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr), clearforward);
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setCurrentItem(self: KDirOperator, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KDirOperator_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem2` instead
    ///
    pub const SetCurrentItem2 = setCurrentItem2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn setCurrentItem2(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItems` instead
    ///
    pub const SetCurrentItems = setCurrentItems;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn setCurrentItems(self: KDirOperator, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_SetCurrentItems(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `setCurrentItems2` instead
    ///
    pub const SetCurrentItems2 = setCurrentItems2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setCurrentItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn setCurrentItems2(self: KDirOperator, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KDirOperator_SetCurrentItems2(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn view(self: KDirOperator) QAbstractItemView {
        return .{ .ptr = qtc.KDirOperator_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewMode` instead
    ///
    pub const SetViewMode = setViewMode;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn setViewMode(self: KDirOperator, viewKind: i32) void {
        qtc.KDirOperator_SetViewMode(@ptrCast(self.ptr), @bitCast(viewKind));
    }

    /// ### DEPRECATED: Use `viewMode` instead
    ///
    pub const ViewMode = viewMode;

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
    pub fn viewMode(self: KDirOperator) i32 {
        return qtc.KDirOperator_ViewMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSorting` instead
    ///
    pub const SetSorting = setSorting;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _sorting: flag of qdir_enums.SortFlag `
    ///
    pub fn setSorting(self: KDirOperator, _sorting: i32) void {
        qtc.KDirOperator_SetSorting(@ptrCast(self.ptr), @bitCast(_sorting));
    }

    /// ### DEPRECATED: Use `sorting` instead
    ///
    pub const Sorting = sorting;

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
    pub fn sorting(self: KDirOperator) i32 {
        return qtc.KDirOperator_Sorting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRoot` instead
    ///
    pub const IsRoot = isRoot;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isRoot(self: KDirOperator) bool {
        return qtc.KDirOperator_IsRoot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dirLister` instead
    ///
    pub const DirLister = dirLister;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirLister)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn dirLister(self: KDirOperator) KDirLister {
        return .{ .ptr = qtc.KDirOperator_DirLister(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `progressBar` instead
    ///
    pub const ProgressBar = progressBar;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#progressBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn progressBar(self: KDirOperator) QProgressBar {
        return .{ .ptr = qtc.KDirOperator_ProgressBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` m: flag of kfile_enums.Mode `
    ///
    pub fn setMode(self: KDirOperator, m: i32) void {
        qtc.KDirOperator_SetMode(@ptrCast(self.ptr), @bitCast(m));
    }

    /// ### DEPRECATED: Use `onSetMode` instead
    ///
    pub const OnSetMode = onSetMode;

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
    pub fn onSetMode(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMode` instead
    ///
    pub const SuperSetMode = superSetMode;

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
    pub fn superSetMode(self: KDirOperator, m: i32) void {
        qtc.KDirOperator_SuperSetMode(@ptrCast(self.ptr), @bitCast(m));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: KDirOperator) i32 {
        return qtc.KDirOperator_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreviewWidget` instead
    ///
    pub const SetPreviewWidget = setPreviewWidget;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setPreviewWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` w: KPreviewWidgetBase `
    ///
    pub fn setPreviewWidget(self: KDirOperator, w: anytype) void {
        comptime _ = @TypeOf(w)._is_KPreviewWidgetBase;
        qtc.KDirOperator_SetPreviewWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onSetPreviewWidget` instead
    ///
    pub const OnSetPreviewWidget = onSetPreviewWidget;

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
    pub fn onSetPreviewWidget(self: KDirOperator, callback: *const fn (KDirOperator, KPreviewWidgetBase) callconv(.c) void) void {
        qtc.KDirOperator_OnSetPreviewWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPreviewWidget` instead
    ///
    pub const SuperSetPreviewWidget = superSetPreviewWidget;

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
    pub fn superSetPreviewWidget(self: KDirOperator, w: anytype) void {
        comptime _ = @TypeOf(w)._is_KPreviewWidgetBase;
        qtc.KDirOperator_SuperSetPreviewWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn selectedItems(self: KDirOperator) KFileItemList {
        return .{ .ptr = qtc.KDirOperator_SelectedItems(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn isSelected(self: KDirOperator, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_KFileItem;
        return qtc.KDirOperator_IsSelected(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `numDirs` instead
    ///
    pub const NumDirs = numDirs;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#numDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn numDirs(self: KDirOperator) i32 {
        return qtc.KDirOperator_NumDirs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `numFiles` instead
    ///
    pub const NumFiles = numFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#numFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn numFiles(self: KDirOperator) i32 {
        return qtc.KDirOperator_NumFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `completionObject` instead
    ///
    pub const CompletionObject = completionObject;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn completionObject(self: KDirOperator) KCompletion {
        return .{ .ptr = qtc.KDirOperator_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dirCompletionObject` instead
    ///
    pub const DirCompletionObject = dirCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn dirCompletionObject(self: KDirOperator) KCompletion {
        return .{ .ptr = qtc.KDirOperator_DirCompletionObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _action: kdiroperator_enums.Action `
    ///
    pub fn action(self: KDirOperator, _action: i32) QAction {
        return .{ .ptr = qtc.KDirOperator_Action(@ptrCast(self.ptr), @bitCast(_action)) };
    }

    /// ### DEPRECATED: Use `allActions` instead
    ///
    pub const AllActions = allActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#allActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allActions(self: KDirOperator, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KDirOperator_AllActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KDirOperator.allActions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setViewConfig` instead
    ///
    pub const SetViewConfig = setViewConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setViewConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn setViewConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SetViewConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `onSetViewConfig` instead
    ///
    pub const OnSetViewConfig = onSetViewConfig;

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
    pub fn onSetViewConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnSetViewConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetViewConfig` instead
    ///
    pub const SuperSetViewConfig = superSetViewConfig;

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
    pub fn superSetViewConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperSetViewConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `viewConfigGroup` instead
    ///
    pub const ViewConfigGroup = viewConfigGroup;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn viewConfigGroup(self: KDirOperator) KConfigGroup {
        return .{ .ptr = qtc.KDirOperator_ViewConfigGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn readConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_ReadConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

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
    pub fn onReadConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

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
    pub fn superReadConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#writeConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn writeConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_WriteConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `onWriteConfig` instead
    ///
    pub const OnWriteConfig = onWriteConfig;

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
    pub fn onWriteConfig(self: KDirOperator, callback: *const fn (KDirOperator, KConfigGroup) callconv(.c) void) void {
        qtc.KDirOperator_OnWriteConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteConfig` instead
    ///
    pub const SuperWriteConfig = superWriteConfig;

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
    pub fn superWriteConfig(self: KDirOperator, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KDirOperator_SuperWriteConfig(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### DEPRECATED: Use `setOnlyDoubleClickSelectsFiles` instead
    ///
    pub const SetOnlyDoubleClickSelectsFiles = setOnlyDoubleClickSelectsFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setOnlyDoubleClickSelectsFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn setOnlyDoubleClickSelectsFiles(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetOnlyDoubleClickSelectsFiles(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onlyDoubleClickSelectsFiles` instead
    ///
    pub const OnlyDoubleClickSelectsFiles = onlyDoubleClickSelectsFiles;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#onlyDoubleClickSelectsFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn onlyDoubleClickSelectsFiles(self: KDirOperator) bool {
        return qtc.KDirOperator_OnlyDoubleClickSelectsFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFollowNewDirectories` instead
    ///
    pub const SetFollowNewDirectories = setFollowNewDirectories;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setFollowNewDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn setFollowNewDirectories(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetFollowNewDirectories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `followNewDirectories` instead
    ///
    pub const FollowNewDirectories = followNewDirectories;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#followNewDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn followNewDirectories(self: KDirOperator) bool {
        return qtc.KDirOperator_FollowNewDirectories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFollowSelectedDirectories` instead
    ///
    pub const SetFollowSelectedDirectories = setFollowSelectedDirectories;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setFollowSelectedDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn setFollowSelectedDirectories(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetFollowSelectedDirectories(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `followSelectedDirectories` instead
    ///
    pub const FollowSelectedDirectories = followSelectedDirectories;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#followSelectedDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn followSelectedDirectories(self: KDirOperator) bool {
        return qtc.KDirOperator_FollowSelectedDirectories(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `del` instead
    ///
    pub const Del = del;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn del(self: KDirOperator, items: anytype, _parent: anytype, ask: bool, showProgress: bool) KIO__DeleteJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_Del(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(_parent.ptr), ask, showProgress) };
    }

    /// ### DEPRECATED: Use `onDel` instead
    ///
    pub const OnDel = onDel;

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
    pub fn onDel(self: KDirOperator, callback: *const fn (KDirOperator, KFileItemList, QWidget, bool, bool) callconv(.c) KIO__DeleteJob) void {
        qtc.KDirOperator_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDel` instead
    ///
    pub const SuperDel = superDel;

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
    /// ` _parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn superDel(self: KDirOperator, items: anytype, _parent: anytype, ask: bool, showProgress: bool) KIO__DeleteJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperDel(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(_parent.ptr), ask, showProgress) };
    }

    /// ### DEPRECATED: Use `clearHistory` instead
    ///
    pub const ClearHistory = clearHistory;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#clearHistory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn clearHistory(self: KDirOperator) void {
        qtc.KDirOperator_ClearHistory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnableDirHighlighting` instead
    ///
    pub const SetEnableDirHighlighting = setEnableDirHighlighting;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnableDirHighlighting(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SetEnableDirHighlighting(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSetEnableDirHighlighting` instead
    ///
    pub const OnSetEnableDirHighlighting = onSetEnableDirHighlighting;

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
    pub fn onSetEnableDirHighlighting(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetEnableDirHighlighting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEnableDirHighlighting` instead
    ///
    pub const SuperSetEnableDirHighlighting = superSetEnableDirHighlighting;

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
    pub fn superSetEnableDirHighlighting(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_SuperSetEnableDirHighlighting(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `dirHighlighting` instead
    ///
    pub const DirHighlighting = dirHighlighting;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirHighlighting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn dirHighlighting(self: KDirOperator) bool {
        return qtc.KDirOperator_DirHighlighting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dirOnlyMode` instead
    ///
    pub const DirOnlyMode = dirOnlyMode;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn dirOnlyMode(self: KDirOperator) bool {
        return qtc.KDirOperator_DirOnlyMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dirOnlyMode2` instead
    ///
    pub const DirOnlyMode2 = dirOnlyMode2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` _mode: u32 `
    ///
    pub fn dirOnlyMode2(_mode: u32) bool {
        return qtc.KDirOperator_DirOnlyMode2(@bitCast(_mode));
    }

    /// ### DEPRECATED: Use `setupMenu` instead
    ///
    pub const SetupMenu = setupMenu;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` whichActions: i32 `
    ///
    pub fn setupMenu(self: KDirOperator, whichActions: i32) void {
        qtc.KDirOperator_SetupMenu(@ptrCast(self.ptr), @bitCast(whichActions));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` b: bool `
    ///
    pub fn setAcceptDrops(self: KDirOperator, b: bool) void {
        qtc.KDirOperator_SetAcceptDrops(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onSetAcceptDrops` instead
    ///
    pub const OnSetAcceptDrops = onSetAcceptDrops;

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
    pub fn onSetAcceptDrops(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetAcceptDrops(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAcceptDrops` instead
    ///
    pub const SuperSetAcceptDrops = superSetAcceptDrops;

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
    pub fn superSetAcceptDrops(self: KDirOperator, b: bool) void {
        qtc.KDirOperator_SuperSetAcceptDrops(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setDropOptions` instead
    ///
    pub const SetDropOptions = setDropOptions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDropOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` options: i32 `
    ///
    pub fn setDropOptions(self: KDirOperator, options: i32) void {
        qtc.KDirOperator_SetDropOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `onSetDropOptions` instead
    ///
    pub const OnSetDropOptions = onSetDropOptions;

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
    pub fn onSetDropOptions(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_OnSetDropOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDropOptions` instead
    ///
    pub const SuperSetDropOptions = superSetDropOptions;

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
    pub fn superSetDropOptions(self: KDirOperator, options: i32) void {
        qtc.KDirOperator_SuperSetDropOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `trash` instead
    ///
    pub const Trash = trash;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn trash(self: KDirOperator, items: anytype, _parent: anytype, ask: bool, showProgress: bool) KIO__CopyJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_Trash(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(_parent.ptr), ask, showProgress) };
    }

    /// ### DEPRECATED: Use `onTrash` instead
    ///
    pub const OnTrash = onTrash;

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
    pub fn onTrash(self: KDirOperator, callback: *const fn (KDirOperator, KFileItemList, QWidget, bool, bool) callconv(.c) KIO__CopyJob) void {
        qtc.KDirOperator_OnTrash(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTrash` instead
    ///
    pub const SuperTrash = superTrash;

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
    /// ` _parent: QWidget `
    ///
    /// ` ask: bool `
    ///
    /// ` showProgress: bool `
    ///
    pub fn superTrash(self: KDirOperator, items: anytype, _parent: anytype, ask: bool, showProgress: bool) KIO__CopyJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperTrash(@ptrCast(self.ptr), @ptrCast(items.ptr), @ptrCast(_parent.ptr), ask, showProgress) };
    }

    /// ### DEPRECATED: Use `previewGenerator` instead
    ///
    pub const PreviewGenerator = previewGenerator;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#previewGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn previewGenerator(self: KDirOperator) KFilePreviewGenerator {
        return .{ .ptr = qtc.KDirOperator_PreviewGenerator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInlinePreviewShown` instead
    ///
    pub const SetInlinePreviewShown = setInlinePreviewShown;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setInlinePreviewShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _show: bool `
    ///
    pub fn setInlinePreviewShown(self: KDirOperator, _show: bool) void {
        qtc.KDirOperator_SetInlinePreviewShown(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `decorationPosition` instead
    ///
    pub const DecorationPosition = decorationPosition;

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
    pub fn decorationPosition(self: KDirOperator) i32 {
        return qtc.KDirOperator_DecorationPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecorationPosition` instead
    ///
    pub const SetDecorationPosition = setDecorationPosition;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDecorationPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` position: qstyleoption_enums.Position `
    ///
    pub fn setDecorationPosition(self: KDirOperator, position: i32) void {
        qtc.KDirOperator_SetDecorationPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `isInlinePreviewShown` instead
    ///
    pub const IsInlinePreviewShown = isInlinePreviewShown;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isInlinePreviewShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isInlinePreviewShown(self: KDirOperator) bool {
        return qtc.KDirOperator_IsInlinePreviewShown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn iconSize(self: KDirOperator) i32 {
        return qtc.KDirOperator_IconSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsSaving` instead
    ///
    pub const SetIsSaving = setIsSaving;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setIsSaving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _isSaving: bool `
    ///
    pub fn setIsSaving(self: KDirOperator, _isSaving: bool) void {
        qtc.KDirOperator_SetIsSaving(@ptrCast(self.ptr), _isSaving);
    }

    /// ### DEPRECATED: Use `isSaving` instead
    ///
    pub const IsSaving = isSaving;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#isSaving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isSaving(self: KDirOperator) bool {
        return qtc.KDirOperator_IsSaving(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedSchemes` instead
    ///
    pub const SupportedSchemes = supportedSchemes;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSchemes(self: KDirOperator, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirOperator_SupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDirOperator.supportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirOperator.supportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `showOpenWithActions` instead
    ///
    pub const ShowOpenWithActions = showOpenWithActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#showOpenWithActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` enable: bool `
    ///
    pub fn showOpenWithActions(self: KDirOperator, enable: bool) void {
        qtc.KDirOperator_ShowOpenWithActions(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `usingKeyNavigation` instead
    ///
    pub const UsingKeyNavigation = usingKeyNavigation;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#usingKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn usingKeyNavigation(self: KDirOperator) bool {
        return qtc.KDirOperator_UsingKeyNavigation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createView` instead
    ///
    pub const CreateView = createView;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#createView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn createView(self: KDirOperator, _parent: anytype, viewKind: i32) QAbstractItemView {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_CreateView(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(viewKind)) };
    }

    /// ### DEPRECATED: Use `onCreateView` instead
    ///
    pub const OnCreateView = onCreateView;

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
    pub fn onCreateView(self: KDirOperator, callback: *const fn (KDirOperator, QWidget, i32) callconv(.c) QAbstractItemView) void {
        qtc.KDirOperator_OnCreateView(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateView` instead
    ///
    pub const SuperCreateView = superCreateView;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#createView)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` viewKind: kfile_enums.FileView `
    ///
    pub fn superCreateView(self: KDirOperator, _parent: anytype, viewKind: i32) QAbstractItemView {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KDirOperator_SuperCreateView(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(viewKind)) };
    }

    /// ### DEPRECATED: Use `setDirLister` instead
    ///
    pub const SetDirLister = setDirLister;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setDirLister)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` lister: KDirLister `
    ///
    pub fn setDirLister(self: KDirOperator, lister: anytype) void {
        comptime _ = @TypeOf(lister)._is_KDirLister;
        qtc.KDirOperator_SetDirLister(@ptrCast(self.ptr), @ptrCast(lister.ptr));
    }

    /// ### DEPRECATED: Use `onSetDirLister` instead
    ///
    pub const OnSetDirLister = onSetDirLister;

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
    pub fn onSetDirLister(self: KDirOperator, callback: *const fn (KDirOperator, KDirLister) callconv(.c) void) void {
        qtc.KDirOperator_OnSetDirLister(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDirLister` instead
    ///
    pub const SuperSetDirLister = superSetDirLister;

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
    pub fn superSetDirLister(self: KDirOperator, lister: anytype) void {
        comptime _ = @TypeOf(lister)._is_KDirLister;
        qtc.KDirOperator_SuperSetDirLister(@ptrCast(self.ptr), @ptrCast(lister.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KDirOperator_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: KDirOperator, callback: *const fn (KDirOperator, QResizeEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KDirOperator_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `setupActions` instead
    ///
    pub const SetupActions = setupActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn setupActions(self: KDirOperator) void {
        qtc.KDirOperator_SetupActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetupActions` instead
    ///
    pub const OnSetupActions = onSetupActions;

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
    pub fn onSetupActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSetupActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetupActions` instead
    ///
    pub const SuperSetupActions = superSetupActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSetupActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperSetupActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateSortActions` instead
    ///
    pub const UpdateSortActions = updateSortActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSortActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updateSortActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateSortActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateSortActions` instead
    ///
    pub const OnUpdateSortActions = onUpdateSortActions;

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
    pub fn onUpdateSortActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateSortActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSortActions` instead
    ///
    pub const SuperUpdateSortActions = superUpdateSortActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSortActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superUpdateSortActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateSortActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateViewActions` instead
    ///
    pub const UpdateViewActions = updateViewActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateViewActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updateViewActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateViewActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateViewActions` instead
    ///
    pub const OnUpdateViewActions = onUpdateViewActions;

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
    pub fn onUpdateViewActions(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateViewActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateViewActions` instead
    ///
    pub const SuperUpdateViewActions = superUpdateViewActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateViewActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superUpdateViewActions(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateViewActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setupMenu2` instead
    ///
    pub const SetupMenu2 = setupMenu2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn setupMenu2(self: KDirOperator) void {
        qtc.KDirOperator_SetupMenu2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetupMenu2` instead
    ///
    pub const OnSetupMenu2 = onSetupMenu2;

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
    pub fn onSetupMenu2(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSetupMenu2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetupMenu2` instead
    ///
    pub const SuperSetupMenu2 = superSetupMenu2;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setupMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSetupMenu2(self: KDirOperator) void {
        qtc.KDirOperator_SuperSetupMenu2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepareCompletionObjects` instead
    ///
    pub const PrepareCompletionObjects = prepareCompletionObjects;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn prepareCompletionObjects(self: KDirOperator) void {
        qtc.KDirOperator_PrepareCompletionObjects(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrepareCompletionObjects` instead
    ///
    pub const OnPrepareCompletionObjects = onPrepareCompletionObjects;

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
    pub fn onPrepareCompletionObjects(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnPrepareCompletionObjects(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrepareCompletionObjects` instead
    ///
    pub const SuperPrepareCompletionObjects = superPrepareCompletionObjects;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superPrepareCompletionObjects(self: KDirOperator) void {
        qtc.KDirOperator_SuperPrepareCompletionObjects(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `checkPreviewSupport` instead
    ///
    pub const CheckPreviewSupport = checkPreviewSupport;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn checkPreviewSupport(self: KDirOperator) bool {
        return qtc.KDirOperator_CheckPreviewSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCheckPreviewSupport` instead
    ///
    pub const OnCheckPreviewSupport = onCheckPreviewSupport;

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
    pub fn onCheckPreviewSupport(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnCheckPreviewSupport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCheckPreviewSupport` instead
    ///
    pub const SuperCheckPreviewSupport = superCheckPreviewSupport;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superCheckPreviewSupport(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperCheckPreviewSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activatedMenu` instead
    ///
    pub const ActivatedMenu = activatedMenu;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#activatedMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn activatedMenu(self: KDirOperator, item: anytype, _pos: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.KDirOperator_ActivatedMenu(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onActivatedMenu` instead
    ///
    pub const OnActivatedMenu = onActivatedMenu;

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
    pub fn onActivatedMenu(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QPoint) callconv(.c) void) void {
        qtc.KDirOperator_OnActivatedMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActivatedMenu` instead
    ///
    pub const SuperActivatedMenu = superActivatedMenu;

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
    /// ` _pos: QPoint `
    ///
    pub fn superActivatedMenu(self: KDirOperator, item: anytype, _pos: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.KDirOperator_SuperActivatedMenu(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn changeEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_ChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superChangeEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KDirOperator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirOperator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KDirOperator, callback: *const fn (KDirOperator, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirOperator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KDirOperator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirOperator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `back` instead
    ///
    pub const Back = back;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn back(self: KDirOperator) void {
        qtc.KDirOperator_Back(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBack` instead
    ///
    pub const OnBack = onBack;

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
    pub fn onBack(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnBack(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBack` instead
    ///
    pub const SuperBack = superBack;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#back)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superBack(self: KDirOperator) void {
        qtc.KDirOperator_SuperBack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forward` instead
    ///
    pub const Forward = forward;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn forward(self: KDirOperator) void {
        qtc.KDirOperator_Forward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onForward` instead
    ///
    pub const OnForward = onForward;

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
    pub fn onForward(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnForward(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superForward` instead
    ///
    pub const SuperForward = superForward;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#forward)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superForward(self: KDirOperator) void {
        qtc.KDirOperator_SuperForward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `home` instead
    ///
    pub const Home = home;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn home(self: KDirOperator) void {
        qtc.KDirOperator_Home(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHome` instead
    ///
    pub const OnHome = onHome;

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
    pub fn onHome(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHome` instead
    ///
    pub const SuperHome = superHome;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#home)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superHome(self: KDirOperator) void {
        qtc.KDirOperator_SuperHome(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cdUp` instead
    ///
    pub const CdUp = cdUp;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#cdUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn cdUp(self: KDirOperator) void {
        qtc.KDirOperator_CdUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCdUp` instead
    ///
    pub const OnCdUp = onCdUp;

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
    pub fn onCdUp(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnCdUp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCdUp` instead
    ///
    pub const SuperCdUp = superCdUp;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#cdUp)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superCdUp(self: KDirOperator) void {
        qtc.KDirOperator_SuperCdUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateDir` instead
    ///
    pub const UpdateDir = updateDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updateDir(self: KDirOperator) void {
        qtc.KDirOperator_UpdateDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rereadDir` instead
    ///
    pub const RereadDir = rereadDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#rereadDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn rereadDir(self: KDirOperator) void {
        qtc.KDirOperator_RereadDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRereadDir` instead
    ///
    pub const OnRereadDir = onRereadDir;

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
    pub fn onRereadDir(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnRereadDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRereadDir` instead
    ///
    pub const SuperRereadDir = superRereadDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#rereadDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superRereadDir(self: KDirOperator) void {
        qtc.KDirOperator_SuperRereadDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mkdir` instead
    ///
    pub const Mkdir = mkdir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn mkdir(self: KDirOperator) void {
        qtc.KDirOperator_Mkdir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMkdir` instead
    ///
    pub const OnMkdir = onMkdir;

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
    pub fn onMkdir(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMkdir` instead
    ///
    pub const SuperMkdir = superMkdir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superMkdir(self: KDirOperator) void {
        qtc.KDirOperator_SuperMkdir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deleteSelected` instead
    ///
    pub const DeleteSelected = deleteSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#deleteSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn deleteSelected(self: KDirOperator) void {
        qtc.KDirOperator_DeleteSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteSelected` instead
    ///
    pub const OnDeleteSelected = onDeleteSelected;

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
    pub fn onDeleteSelected(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnDeleteSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeleteSelected` instead
    ///
    pub const SuperDeleteSelected = superDeleteSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#deleteSelected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superDeleteSelected(self: KDirOperator) void {
        qtc.KDirOperator_SuperDeleteSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateSelectionDependentActions` instead
    ///
    pub const UpdateSelectionDependentActions = updateSelectionDependentActions;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateSelectionDependentActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updateSelectionDependentActions(self: KDirOperator) void {
        qtc.KDirOperator_UpdateSelectionDependentActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeCompletion` instead
    ///
    pub const MakeCompletion = makeCompletion;

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
    pub fn makeCompletion(self: KDirOperator, allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KDirOperator_MakeCompletion(@ptrCast(self.ptr), param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.makeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `makeDirCompletion` instead
    ///
    pub const MakeDirCompletion = makeDirCompletion;

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
    pub fn makeDirCompletion(self: KDirOperator, allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KDirOperator_MakeDirCompletion(@ptrCast(self.ptr), param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.makeDirCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `renameSelected` instead
    ///
    pub const RenameSelected = renameSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renameSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn renameSelected(self: KDirOperator) void {
        qtc.KDirOperator_RenameSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trashSelected` instead
    ///
    pub const TrashSelected = trashSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trashSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn trashSelected(self: KDirOperator) void {
        qtc.KDirOperator_TrashSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTrashSelected` instead
    ///
    pub const OnTrashSelected = onTrashSelected;

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
    pub fn onTrashSelected(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnTrashSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTrashSelected` instead
    ///
    pub const SuperTrashSelected = superTrashSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#trashSelected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superTrashSelected(self: KDirOperator) void {
        qtc.KDirOperator_SuperTrashSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` value: i32 `
    ///
    pub fn setIconSize(self: KDirOperator, value: i32) void {
        qtc.KDirOperator_SetIconSize(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setSupportedSchemes` instead
    ///
    pub const SetSupportedSchemes = setSupportedSchemes;

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
    pub fn setSupportedSchemes(self: KDirOperator, allocator: std.mem.Allocator, schemes: []const []const u8) void {
        const schemes_arr = allocator.alloc(qtc.libqt_string, schemes.len) catch @panic("KDirOperator.setSupportedSchemes: Memory allocation failed");
        defer allocator.free(schemes_arr);
        for (schemes, 0..schemes.len) |str_item, i|
            schemes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const schemes_list = qtc.libqt_list{
            .len = schemes.len,
            .data = schemes_arr.ptr,
        };
        qtc.KDirOperator_SetSupportedSchemes(@ptrCast(self.ptr), schemes_list);
    }

    /// ### DEPRECATED: Use `resetCursor` instead
    ///
    pub const ResetCursor = resetCursor;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn resetCursor(self: KDirOperator) void {
        qtc.KDirOperator_ResetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetCursor` instead
    ///
    pub const OnResetCursor = onResetCursor;

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
    pub fn onResetCursor(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnResetCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetCursor` instead
    ///
    pub const SuperResetCursor = superResetCursor;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#resetCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superResetCursor(self: KDirOperator) void {
        qtc.KDirOperator_SuperResetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pathChanged` instead
    ///
    pub const PathChanged = pathChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#pathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn pathChanged(self: KDirOperator) void {
        qtc.KDirOperator_PathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPathChanged` instead
    ///
    pub const OnPathChanged = onPathChanged;

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
    pub fn onPathChanged(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnPathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPathChanged` instead
    ///
    pub const SuperPathChanged = superPathChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#pathChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superPathChanged(self: KDirOperator) void {
        qtc.KDirOperator_SuperPathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectDir` instead
    ///
    pub const SelectDir = selectDir;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn selectDir(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SelectDir(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSelectDir` instead
    ///
    pub const OnSelectDir = onSelectDir;

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
    pub fn onSelectDir(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnSelectDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectDir` instead
    ///
    pub const SuperSelectDir = superSelectDir;

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
    pub fn superSelectDir(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperSelectDir(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `selectFile` instead
    ///
    pub const SelectFile = selectFile;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#selectFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn selectFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SelectFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSelectFile` instead
    ///
    pub const OnSelectFile = onSelectFile;

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
    pub fn onSelectFile(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnSelectFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectFile` instead
    ///
    pub const SuperSelectFile = superSelectFile;

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
    pub fn superSelectFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperSelectFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `highlightFile` instead
    ///
    pub const HighlightFile = highlightFile;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#highlightFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn highlightFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_HighlightFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onHighlightFile` instead
    ///
    pub const OnHighlightFile = onHighlightFile;

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
    pub fn onHighlightFile(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_OnHighlightFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHighlightFile` instead
    ///
    pub const SuperHighlightFile = superHighlightFile;

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
    pub fn superHighlightFile(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_SuperHighlightFile(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `sortByName` instead
    ///
    pub const SortByName = sortByName;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sortByName(self: KDirOperator) void {
        qtc.KDirOperator_SortByName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSortByName` instead
    ///
    pub const OnSortByName = onSortByName;

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
    pub fn onSortByName(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSortByName` instead
    ///
    pub const SuperSortByName = superSortByName;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSortByName(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortBySize` instead
    ///
    pub const SortBySize = sortBySize;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortBySize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sortBySize(self: KDirOperator) void {
        qtc.KDirOperator_SortBySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSortBySize` instead
    ///
    pub const OnSortBySize = onSortBySize;

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
    pub fn onSortBySize(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortBySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSortBySize` instead
    ///
    pub const SuperSortBySize = superSortBySize;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortBySize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSortBySize(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortBySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortByDate` instead
    ///
    pub const SortByDate = sortByDate;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sortByDate(self: KDirOperator) void {
        qtc.KDirOperator_SortByDate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSortByDate` instead
    ///
    pub const OnSortByDate = onSortByDate;

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
    pub fn onSortByDate(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByDate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSortByDate` instead
    ///
    pub const SuperSortByDate = superSortByDate;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByDate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSortByDate(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByDate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortByType` instead
    ///
    pub const SortByType = sortByType;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sortByType(self: KDirOperator) void {
        qtc.KDirOperator_SortByType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSortByType` instead
    ///
    pub const OnSortByType = onSortByType;

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
    pub fn onSortByType(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortByType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSortByType` instead
    ///
    pub const SuperSortByType = superSortByType;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortByType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSortByType(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortByType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortReversed` instead
    ///
    pub const SortReversed = sortReversed;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortReversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sortReversed(self: KDirOperator) void {
        qtc.KDirOperator_SortReversed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSortReversed` instead
    ///
    pub const OnSortReversed = onSortReversed;

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
    pub fn onSortReversed(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnSortReversed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSortReversed` instead
    ///
    pub const SuperSortReversed = superSortReversed;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#sortReversed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superSortReversed(self: KDirOperator) void {
        qtc.KDirOperator_SuperSortReversed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toggleDirsFirst` instead
    ///
    pub const ToggleDirsFirst = toggleDirsFirst;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn toggleDirsFirst(self: KDirOperator) void {
        qtc.KDirOperator_ToggleDirsFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onToggleDirsFirst` instead
    ///
    pub const OnToggleDirsFirst = onToggleDirsFirst;

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
    pub fn onToggleDirsFirst(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnToggleDirsFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superToggleDirsFirst` instead
    ///
    pub const SuperToggleDirsFirst = superToggleDirsFirst;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superToggleDirsFirst(self: KDirOperator) void {
        qtc.KDirOperator_SuperToggleDirsFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toggleIgnoreCase` instead
    ///
    pub const ToggleIgnoreCase = toggleIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn toggleIgnoreCase(self: KDirOperator) void {
        qtc.KDirOperator_ToggleIgnoreCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onToggleIgnoreCase` instead
    ///
    pub const OnToggleIgnoreCase = onToggleIgnoreCase;

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
    pub fn onToggleIgnoreCase(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnToggleIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superToggleIgnoreCase` instead
    ///
    pub const SuperToggleIgnoreCase = superToggleIgnoreCase;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn superToggleIgnoreCase(self: KDirOperator) void {
        qtc.KDirOperator_SuperToggleIgnoreCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotCompletionMatch` instead
    ///
    pub const SlotCompletionMatch = slotCompletionMatch;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` match: []const u8 `
    ///
    pub fn slotCompletionMatch(self: KDirOperator, match: []const u8) void {
        const match_str = qtc.libqt_string{
            .len = match.len,
            .data = match.ptr,
        };
        qtc.KDirOperator_SlotCompletionMatch(@ptrCast(self.ptr), match_str);
    }

    /// ### DEPRECATED: Use `onSlotCompletionMatch` instead
    ///
    pub const OnSlotCompletionMatch = onSlotCompletionMatch;

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
    pub fn onSlotCompletionMatch(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirOperator_OnSlotCompletionMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotCompletionMatch` instead
    ///
    pub const SuperSlotCompletionMatch = superSlotCompletionMatch;

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
    pub fn superSlotCompletionMatch(self: KDirOperator, match: []const u8) void {
        const match_str = qtc.libqt_string{
            .len = match.len,
            .data = match.ptr,
        };
        qtc.KDirOperator_SuperSlotCompletionMatch(@ptrCast(self.ptr), match_str);
    }

    /// ### DEPRECATED: Use `urlEntered` instead
    ///
    pub const UrlEntered = urlEntered;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#urlEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: QUrl `
    ///
    pub fn urlEntered(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.KDirOperator_UrlEntered(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onUrlEntered` instead
    ///
    pub const OnUrlEntered = onUrlEntered;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#urlEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: QUrl) callconv(.c) void `
    ///
    pub fn onUrlEntered(self: KDirOperator, callback: *const fn (KDirOperator, QUrl) callconv(.c) void) void {
        qtc.KDirOperator_Connect_UrlEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateInformation` instead
    ///
    pub const UpdateInformation = updateInformation;

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
    pub fn updateInformation(self: KDirOperator, files: i32, dirs: i32) void {
        qtc.KDirOperator_UpdateInformation(@ptrCast(self.ptr), @bitCast(files), @bitCast(dirs));
    }

    /// ### DEPRECATED: Use `onUpdateInformation` instead
    ///
    pub const OnUpdateInformation = onUpdateInformation;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#updateInformation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, files: i32, dirs: i32) callconv(.c) void `
    ///
    pub fn onUpdateInformation(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32) callconv(.c) void) void {
        qtc.KDirOperator_Connect_UpdateInformation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completion` instead
    ///
    pub const Completion = completion;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn completion(self: KDirOperator, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KDirOperator_Completion(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onCompletion` instead
    ///
    pub const OnCompletion = onCompletion;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#completion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCompletion(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirOperator_Connect_Completion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finishedLoading` instead
    ///
    pub const FinishedLoading = finishedLoading;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#finishedLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn finishedLoading(self: KDirOperator) void {
        qtc.KDirOperator_FinishedLoading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinishedLoading` instead
    ///
    pub const OnFinishedLoading = onFinishedLoading;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#finishedLoading)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn onFinishedLoading(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FinishedLoading(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewChanged` instead
    ///
    pub const ViewChanged = viewChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` newView: QAbstractItemView `
    ///
    pub fn viewChanged(self: KDirOperator, newView: anytype) void {
        comptime _ = @TypeOf(newView)._is_QAbstractItemView;
        qtc.KDirOperator_ViewChanged(@ptrCast(self.ptr), @ptrCast(newView.ptr));
    }

    /// ### DEPRECATED: Use `onViewChanged` instead
    ///
    pub const OnViewChanged = onViewChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#viewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, newView: QAbstractItemView) callconv(.c) void `
    ///
    pub fn onViewChanged(self: KDirOperator, callback: *const fn (KDirOperator, QAbstractItemView) callconv(.c) void) void {
        qtc.KDirOperator_Connect_ViewChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileHighlighted` instead
    ///
    pub const FileHighlighted = fileHighlighted;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileHighlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn fileHighlighted(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_FileHighlighted(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onFileHighlighted` instead
    ///
    pub const OnFileHighlighted = onFileHighlighted;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileHighlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn onFileHighlighted(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FileHighlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dirActivated` instead
    ///
    pub const DirActivated = dirActivated;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn dirActivated(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_DirActivated(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onDirActivated` instead
    ///
    pub const OnDirActivated = onDirActivated;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dirActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn onDirActivated(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_DirActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileSelected` instead
    ///
    pub const FileSelected = fileSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    pub fn fileSelected(self: KDirOperator, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KDirOperator_FileSelected(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onFileSelected` instead
    ///
    pub const OnFileSelected = onFileSelected;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#fileSelected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem) callconv(.c) void `
    ///
    pub fn onFileSelected(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem) callconv(.c) void) void {
        qtc.KDirOperator_Connect_FileSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropped` instead
    ///
    pub const Dropped = dropped;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dropped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` item: KFileItem `
    ///
    /// ` _event: QDropEvent `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn dropped(self: KDirOperator, item: anytype, _event: anytype, urls: []QUrl) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_Dropped(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_event.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `onDropped` instead
    ///
    pub const OnDropped = onDropped;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dropped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem, event: QDropEvent, urls: qtc.libqt_list ([]QUrl)) callconv(.c) void `
    ///
    pub fn onDropped(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QDropEvent, qtc.libqt_list) callconv(.c) void) void {
        qtc.KDirOperator_Connect_Dropped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuAboutToShow` instead
    ///
    pub const ContextMenuAboutToShow = contextMenuAboutToShow;

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
    pub fn contextMenuAboutToShow(self: KDirOperator, item: anytype, menu: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KDirOperator_ContextMenuAboutToShow(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(menu.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuAboutToShow` instead
    ///
    pub const OnContextMenuAboutToShow = onContextMenuAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#contextMenuAboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, item: KFileItem, menu: QMenu) callconv(.c) void `
    ///
    pub fn onContextMenuAboutToShow(self: KDirOperator, callback: *const fn (KDirOperator, KFileItem, QMenu) callconv(.c) void) void {
        qtc.KDirOperator_Connect_ContextMenuAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentIconSizeChanged` instead
    ///
    pub const CurrentIconSizeChanged = currentIconSizeChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _size: i32 `
    ///
    pub fn currentIconSizeChanged(self: KDirOperator, _size: i32) void {
        qtc.KDirOperator_CurrentIconSizeChanged(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `onCurrentIconSizeChanged` instead
    ///
    pub const OnCurrentIconSizeChanged = onCurrentIconSizeChanged;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, size: i32) callconv(.c) void `
    ///
    pub fn onCurrentIconSizeChanged(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) void) void {
        qtc.KDirOperator_Connect_CurrentIconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyEnterReturnPressed` instead
    ///
    pub const KeyEnterReturnPressed = keyEnterReturnPressed;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn keyEnterReturnPressed(self: KDirOperator) void {
        qtc.KDirOperator_KeyEnterReturnPressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onKeyEnterReturnPressed` instead
    ///
    pub const OnKeyEnterReturnPressed = onKeyEnterReturnPressed;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn onKeyEnterReturnPressed(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
        qtc.KDirOperator_Connect_KeyEnterReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `renamingFinished` instead
    ///
    pub const RenamingFinished = renamingFinished;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renamingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn renamingFinished(self: KDirOperator, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KDirOperator_RenamingFinished(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `onRenamingFinished` instead
    ///
    pub const OnRenamingFinished = onRenamingFinished;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#renamingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, urls: qtc.libqt_list ([]QUrl)) callconv(.c) void `
    ///
    pub fn onRenamingFinished(self: KDirOperator, callback: *const fn (KDirOperator, qtc.libqt_list) callconv(.c) void) void {
        qtc.KDirOperator_Connect_RenamingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn winId(self: KDirOperator) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createWinId` instead
    ///
    pub const CreateWinId = createWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn createWinId(self: KDirOperator) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalWinId` instead
    ///
    pub const InternalWinId = internalWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn internalWinId(self: KDirOperator) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveWinId` instead
    ///
    pub const EffectiveWinId = effectiveWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn effectiveWinId(self: KDirOperator) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn style(self: KDirOperator) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: KDirOperator, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isTopLevel(self: KDirOperator) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isWindow(self: KDirOperator) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isModal(self: KDirOperator) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowModality` instead
    ///
    pub const WindowModality = windowModality;

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
    pub fn windowModality(self: KDirOperator) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowModality` instead
    ///
    pub const SetWindowModality = setWindowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: KDirOperator, _windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(_windowModality));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isEnabled(self: KDirOperator) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabledTo` instead
    ///
    pub const IsEnabledTo = isEnabledTo;

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
    pub fn isEnabledTo(self: KDirOperator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

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
    pub fn setEnabled(self: KDirOperator, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

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
    pub fn setDisabled(self: KDirOperator, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### DEPRECATED: Use `setWindowModified` instead
    ///
    pub const SetWindowModified = setWindowModified;

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
    pub fn setWindowModified(self: KDirOperator, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn frameGeometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn geometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalGeometry` instead
    ///
    pub const NormalGeometry = normalGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn normalGeometry(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn x(self: KDirOperator) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn y(self: KDirOperator) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn pos(self: KDirOperator) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn frameSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn size(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn width(self: KDirOperator) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn height(self: KDirOperator) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn rect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn childrenRect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRegion` instead
    ///
    pub const ChildrenRegion = childrenRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn childrenRegion(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn minimumSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn maximumSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn minimumWidth(self: KDirOperator) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn minimumHeight(self: KDirOperator) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn maximumWidth(self: KDirOperator) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn maximumHeight(self: KDirOperator) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: KDirOperator, _minimumSize: anytype) void {
        comptime _ = @TypeOf(_minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_minimumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

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
    pub fn setMinimumSize2(self: KDirOperator, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: KDirOperator, _maximumSize: anytype) void {
        comptime _ = @TypeOf(_maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_maximumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

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
    pub fn setMaximumSize2(self: KDirOperator, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

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
    pub fn setMinimumWidth(self: KDirOperator, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

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
    pub fn setMinimumHeight(self: KDirOperator, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

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
    pub fn setMaximumWidth(self: KDirOperator, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

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
    pub fn setMaximumHeight(self: KDirOperator, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sizeIncrement(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: KDirOperator, _sizeIncrement: anytype) void {
        comptime _ = @TypeOf(_sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_sizeIncrement.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement2` instead
    ///
    pub const SetSizeIncrement2 = setSizeIncrement2;

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
    pub fn setSizeIncrement2(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn baseSize(self: KDirOperator) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: KDirOperator, _baseSize: anytype) void {
        comptime _ = @TypeOf(_baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_baseSize.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize2` instead
    ///
    pub const SetBaseSize2 = setBaseSize2;

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
    pub fn setBaseSize2(self: KDirOperator, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// ### DEPRECATED: Use `setFixedSize` instead
    ///
    pub const SetFixedSize = setFixedSize;

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
    pub fn setFixedSize(self: KDirOperator, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// ### DEPRECATED: Use `setFixedSize2` instead
    ///
    pub const SetFixedSize2 = setFixedSize2;

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
    pub fn setFixedSize2(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFixedWidth` instead
    ///
    pub const SetFixedWidth = setFixedWidth;

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
    pub fn setFixedWidth(self: KDirOperator, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setFixedHeight` instead
    ///
    pub const SetFixedHeight = setFixedHeight;

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
    pub fn setFixedHeight(self: KDirOperator, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

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
    pub fn mapToGlobal(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

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
    pub fn mapToGlobal2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

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
    pub fn mapFromGlobal(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

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
    pub fn mapFromGlobal2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

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
    pub fn mapToParent(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent2` instead
    ///
    pub const MapToParent2 = mapToParent2;

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
    pub fn mapToParent2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

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
    pub fn mapFromParent(self: KDirOperator, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent2` instead
    ///
    pub const MapFromParent2 = mapFromParent2;

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
    pub fn mapFromParent2(self: KDirOperator, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo` instead
    ///
    pub const MapTo = mapTo;

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
    pub fn mapTo(self: KDirOperator, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo2` instead
    ///
    pub const MapTo2 = mapTo2;

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
    pub fn mapTo2(self: KDirOperator, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom` instead
    ///
    pub const MapFrom = mapFrom;

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
    pub fn mapFrom(self: KDirOperator, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom2` instead
    ///
    pub const MapFrom2 = mapFrom2;

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
    pub fn mapFrom2(self: KDirOperator, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn window(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nativeParentWidget` instead
    ///
    pub const NativeParentWidget = nativeParentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn nativeParentWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn topLevelWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn palette(self: KDirOperator) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KDirOperator, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundRole` instead
    ///
    pub const SetBackgroundRole = setBackgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: KDirOperator, _backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(_backgroundRole));
    }

    /// ### DEPRECATED: Use `backgroundRole` instead
    ///
    pub const BackgroundRole = backgroundRole;

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
    pub fn backgroundRole(self: KDirOperator) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForegroundRole` instead
    ///
    pub const SetForegroundRole = setForegroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: KDirOperator, _foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(_foregroundRole));
    }

    /// ### DEPRECATED: Use `foregroundRole` instead
    ///
    pub const ForegroundRole = foregroundRole;

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
    pub fn foregroundRole(self: KDirOperator) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn font(self: KDirOperator) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KDirOperator, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn fontMetrics(self: KDirOperator) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn fontInfo(self: KDirOperator) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn cursor(self: KDirOperator) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: KDirOperator, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn unsetCursor(self: KDirOperator) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMouseTracking` instead
    ///
    pub const SetMouseTracking = setMouseTracking;

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
    pub fn setMouseTracking(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasMouseTracking` instead
    ///
    pub const HasMouseTracking = hasMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn hasMouseTracking(self: KDirOperator) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underMouse` instead
    ///
    pub const UnderMouse = underMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn underMouse(self: KDirOperator) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabletTracking` instead
    ///
    pub const SetTabletTracking = setTabletTracking;

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
    pub fn setTabletTracking(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasTabletTracking` instead
    ///
    pub const HasTabletTracking = hasTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn hasTabletTracking(self: KDirOperator) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: KDirOperator, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `setMask2` instead
    ///
    pub const SetMask2 = setMask2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: KDirOperator, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn mask(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearMask` instead
    ///
    pub const ClearMask = clearMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn clearMask(self: KDirOperator) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

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
    pub fn render(self: KDirOperator, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

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
    pub fn render2(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `grab` instead
    ///
    pub const Grab = grab;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn grab(self: KDirOperator) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn graphicsEffect(self: KDirOperator) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

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
    pub fn setGraphicsEffect(self: KDirOperator, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

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
    pub fn grabGesture(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

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
    pub fn ungrabGesture(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: KDirOperator, _windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = _windowTitle.len,
            .data = _windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// ### DEPRECATED: Use `setStyleSheet` instead
    ///
    pub const SetStyleSheet = setStyleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: KDirOperator, _styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = _styleSheet.len,
            .data = _styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// ### DEPRECATED: Use `styleSheet` instead
    ///
    pub const StyleSheet = styleSheet;

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
    pub fn styleSheet(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.styleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

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
    pub fn windowTitle(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

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
    pub fn setWindowIcon(self: KDirOperator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `windowIcon` instead
    ///
    pub const WindowIcon = windowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn windowIcon(self: KDirOperator) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowIconText` instead
    ///
    pub const SetWindowIconText = setWindowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: KDirOperator, _windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = _windowIconText.len,
            .data = _windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// ### DEPRECATED: Use `windowIconText` instead
    ///
    pub const WindowIconText = windowIconText;

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
    pub fn windowIconText(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.windowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowRole` instead
    ///
    pub const SetWindowRole = setWindowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: KDirOperator, _windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = _windowRole.len,
            .data = _windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// ### DEPRECATED: Use `windowRole` instead
    ///
    pub const WindowRole = windowRole;

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
    pub fn windowRole(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.windowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowFilePath` instead
    ///
    pub const SetWindowFilePath = setWindowFilePath;

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
    pub fn setWindowFilePath(self: KDirOperator, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `windowFilePath` instead
    ///
    pub const WindowFilePath = windowFilePath;

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
    pub fn windowFilePath(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.windowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowOpacity` instead
    ///
    pub const SetWindowOpacity = setWindowOpacity;

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
    pub fn setWindowOpacity(self: KDirOperator, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `windowOpacity` instead
    ///
    pub const WindowOpacity = windowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn windowOpacity(self: KDirOperator) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowModified` instead
    ///
    pub const IsWindowModified = isWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isWindowModified(self: KDirOperator) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KDirOperator, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

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
    pub fn toolTip(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipDuration` instead
    ///
    pub const SetToolTipDuration = setToolTipDuration;

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
    pub fn setToolTipDuration(self: KDirOperator, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `toolTipDuration` instead
    ///
    pub const ToolTipDuration = toolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn toolTipDuration(self: KDirOperator) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KDirOperator, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

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
    pub fn statusTip(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KDirOperator, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

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
    pub fn whatsThis(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accessibleName` instead
    ///
    pub const AccessibleName = accessibleName;

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
    pub fn accessibleName(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.accessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleName` instead
    ///
    pub const SetAccessibleName = setAccessibleName;

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
    pub fn setAccessibleName(self: KDirOperator, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `accessibleDescription` instead
    ///
    pub const AccessibleDescription = accessibleDescription;

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
    pub fn accessibleDescription(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.accessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleDescription` instead
    ///
    pub const SetAccessibleDescription = setAccessibleDescription;

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
    pub fn setAccessibleDescription(self: KDirOperator, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

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
    pub fn setLayoutDirection(self: KDirOperator, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: KDirOperator) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn unsetLayoutDirection(self: KDirOperator) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: KDirOperator, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn locale(self: KDirOperator) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `unsetLocale` instead
    ///
    pub const UnsetLocale = unsetLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn unsetLocale(self: KDirOperator) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isRightToLeft(self: KDirOperator) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isLeftToRight(self: KDirOperator) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn setFocus(self: KDirOperator) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isActiveWindow(self: KDirOperator) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activateWindow` instead
    ///
    pub const ActivateWindow = activateWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn activateWindow(self: KDirOperator) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn clearFocus(self: KDirOperator) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

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
    pub fn setFocus2(self: KDirOperator, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

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
    pub fn focusPolicy(self: KDirOperator) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

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
    pub fn setFocusPolicy(self: KDirOperator, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn hasFocus(self: KDirOperator) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

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
    pub fn setTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: KDirOperator, _focusProxy: anytype) void {
        comptime _ = @TypeOf(_focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(_focusProxy.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn focusProxy(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contextMenuPolicy` instead
    ///
    pub const ContextMenuPolicy = contextMenuPolicy;

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
    pub fn contextMenuPolicy(self: KDirOperator) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContextMenuPolicy` instead
    ///
    pub const SetContextMenuPolicy = setContextMenuPolicy;

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
    pub fn setContextMenuPolicy(self: KDirOperator, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn grabMouse(self: KDirOperator) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse2` instead
    ///
    pub const GrabMouse2 = grabMouse2;

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
    pub fn grabMouse2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `releaseMouse` instead
    ///
    pub const ReleaseMouse = releaseMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn releaseMouse(self: KDirOperator) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn grabKeyboard(self: KDirOperator) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `releaseKeyboard` instead
    ///
    pub const ReleaseKeyboard = releaseKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn releaseKeyboard(self: KDirOperator) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

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
    pub fn grabShortcut(self: KDirOperator, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

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
    pub fn releaseShortcut(self: KDirOperator, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

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
    pub fn setShortcutEnabled(self: KDirOperator, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

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
    pub fn setShortcutAutoRepeat(self: KDirOperator, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `mouseGrabber` instead
    ///
    pub const MouseGrabber = mouseGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn mouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// ### DEPRECATED: Use `keyboardGrabber` instead
    ///
    pub const KeyboardGrabber = keyboardGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn keyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// ### DEPRECATED: Use `updatesEnabled` instead
    ///
    pub const UpdatesEnabled = updatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updatesEnabled(self: KDirOperator) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpdatesEnabled` instead
    ///
    pub const SetUpdatesEnabled = setUpdatesEnabled;

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
    pub fn setUpdatesEnabled(self: KDirOperator, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `graphicsProxyWidget` instead
    ///
    pub const GraphicsProxyWidget = graphicsProxyWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn graphicsProxyWidget(self: KDirOperator) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn update(self: KDirOperator) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaint` instead
    ///
    pub const Repaint = repaint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn repaint(self: KDirOperator) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: KDirOperator, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `update3` instead
    ///
    pub const Update3 = update3;

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
    pub fn update3(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `update4` instead
    ///
    pub const Update4 = update4;

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
    pub fn update4(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint2` instead
    ///
    pub const Repaint2 = repaint2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: KDirOperator, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `repaint3` instead
    ///
    pub const Repaint3 = repaint3;

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
    pub fn repaint3(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint4` instead
    ///
    pub const Repaint4 = repaint4;

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
    pub fn repaint4(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

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
    pub fn setHidden(self: KDirOperator, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn show(self: KDirOperator) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn hide(self: KDirOperator) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn showMinimized(self: KDirOperator) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn showMaximized(self: KDirOperator) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn showFullScreen(self: KDirOperator) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn showNormal(self: KDirOperator) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn raise(self: KDirOperator) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn lower(self: KDirOperator) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stackUnder` instead
    ///
    pub const StackUnder = stackUnder;

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
    pub fn stackUnder(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: KDirOperator, _x: i32, _y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

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
    pub fn move2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

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
    pub fn resize(self: KDirOperator, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

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
    pub fn resize2(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: KDirOperator, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: KDirOperator, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `saveGeometry` instead
    ///
    pub const SaveGeometry = saveGeometry;

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
    pub fn saveGeometry(self: KDirOperator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KDirOperator.saveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreGeometry` instead
    ///
    pub const RestoreGeometry = restoreGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: KDirOperator, _geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = _geometry.len,
            .data = _geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn adjustSize(self: KDirOperator) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isVisible(self: KDirOperator) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

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
    pub fn isVisibleTo(self: KDirOperator, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isHidden(self: KDirOperator) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMinimized` instead
    ///
    pub const IsMinimized = isMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isMinimized(self: KDirOperator) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMaximized` instead
    ///
    pub const IsMaximized = isMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isMaximized(self: KDirOperator) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFullScreen` instead
    ///
    pub const IsFullScreen = isFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn isFullScreen(self: KDirOperator) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

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
    pub fn windowState(self: KDirOperator) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

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
    pub fn setWindowState(self: KDirOperator, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `overrideWindowState` instead
    ///
    pub const OverrideWindowState = overrideWindowState;

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
    pub fn overrideWindowState(self: KDirOperator, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn sizePolicy(self: KDirOperator) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: KDirOperator, _sizePolicy: anytype) void {
        comptime _ = @TypeOf(_sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(_sizePolicy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

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
    pub fn setSizePolicy2(self: KDirOperator, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `visibleRegion` instead
    ///
    pub const VisibleRegion = visibleRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn visibleRegion(self: KDirOperator) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

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
    pub fn setContentsMargins(self: KDirOperator, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

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
    pub fn setContentsMargins2(self: KDirOperator, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn contentsMargins(self: KDirOperator) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn contentsRect(self: KDirOperator) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn layout(self: KDirOperator) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: KDirOperator, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn updateGeometry(self: KDirOperator) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: KDirOperator, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setParent2` instead
    ///
    pub const SetParent2 = setParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: KDirOperator, _parent: anytype, f: i32) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    pub fn scroll(self: KDirOperator, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

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
    pub fn scroll2(self: KDirOperator, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn focusWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextInFocusChain` instead
    ///
    pub const NextInFocusChain = nextInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn nextInFocusChain(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousInFocusChain` instead
    ///
    pub const PreviousInFocusChain = previousInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn previousInFocusChain(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn acceptDrops(self: KDirOperator) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KDirOperator, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KDirOperator, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

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
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: KDirOperator, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

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
    /// ` _action: QAction `
    ///
    pub fn insertAction(self: KDirOperator, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KDirOperator, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

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
    pub fn actions(self: KDirOperator, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KDirOperator.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

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
    pub fn addAction2(self: KDirOperator, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

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
    pub fn addAction3(self: KDirOperator, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction4` instead
    ///
    pub const AddAction4 = addAction4;

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
    pub fn addAction4(self: KDirOperator, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `addAction5` instead
    ///
    pub const AddAction5 = addAction5;

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
    pub fn addAction5(self: KDirOperator, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn parentWidget(self: KDirOperator) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

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
    pub fn setWindowFlags(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

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
    pub fn windowFlags(self: KDirOperator) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlag` instead
    ///
    pub const SetWindowFlag = setWindowFlag;

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
    pub fn setWindowFlag(self: KDirOperator, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `overrideWindowFlags` instead
    ///
    pub const OverrideWindowFlags = overrideWindowFlags;

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
    pub fn overrideWindowFlags(self: KDirOperator, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

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
    pub fn windowType(self: KDirOperator) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: KDirOperator, _x: i32, _y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `childAt2` instead
    ///
    pub const ChildAt2 = childAt2;

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
    pub fn childAt2(self: KDirOperator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt3` instead
    ///
    pub const ChildAt3 = childAt3;

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
    pub fn childAt3(self: KDirOperator, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

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
    pub fn setAttribute(self: KDirOperator, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

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
    pub fn testAttribute(self: KDirOperator, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn ensurePolished(self: KDirOperator) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

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
    pub fn isAncestorOf(self: KDirOperator, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn autoFillBackground(self: KDirOperator) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

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
    pub fn setAutoFillBackground(self: KDirOperator, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `backingStore` instead
    ///
    pub const BackingStore = backingStore;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn backingStore(self: KDirOperator) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowHandle` instead
    ///
    pub const WindowHandle = windowHandle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn windowHandle(self: KDirOperator) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn screen(self: KDirOperator) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: KDirOperator, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `createWindowContainer` instead
    ///
    pub const CreateWindowContainer = createWindowContainer;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn createWindowContainer(_window: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

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
    pub fn windowTitleChanged(self: KDirOperator, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

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
    pub fn onWindowTitleChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconChanged` instead
    ///
    pub const WindowIconChanged = windowIconChanged;

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
    pub fn windowIconChanged(self: KDirOperator, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `onWindowIconChanged` instead
    ///
    pub const OnWindowIconChanged = onWindowIconChanged;

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
    pub fn onWindowIconChanged(self: KDirOperator, callback: *const fn (KDirOperator, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconTextChanged` instead
    ///
    pub const WindowIconTextChanged = windowIconTextChanged;

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
    pub fn windowIconTextChanged(self: KDirOperator, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// ### DEPRECATED: Use `onWindowIconTextChanged` instead
    ///
    pub const OnWindowIconTextChanged = onWindowIconTextChanged;

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
    pub fn onWindowIconTextChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customContextMenuRequested` instead
    ///
    pub const CustomContextMenuRequested = customContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: KDirOperator, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onCustomContextMenuRequested` instead
    ///
    pub const OnCustomContextMenuRequested = onCustomContextMenuRequested;

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
    pub fn onCustomContextMenuRequested(self: KDirOperator, callback: *const fn (KDirOperator, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

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
    pub fn inputMethodHints(self: KDirOperator) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

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
    pub fn setInputMethodHints(self: KDirOperator, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `render22` instead
    ///
    pub const Render22 = render22;

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
    pub fn render22(self: KDirOperator, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

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
    pub fn render3(self: KDirOperator, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render4` instead
    ///
    pub const Render4 = render4;

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
    pub fn render4(self: KDirOperator, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `render23` instead
    ///
    pub const Render23 = render23;

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
    pub fn render23(self: KDirOperator, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render32` instead
    ///
    pub const Render32 = render32;

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
    pub fn render32(self: KDirOperator, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render42` instead
    ///
    pub const Render42 = render42;

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
    pub fn render42(self: KDirOperator, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `grab1` instead
    ///
    pub const Grab1 = grab1;

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
    pub fn grab1(self: KDirOperator, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

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
    pub fn grabGesture2(self: KDirOperator, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

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
    pub fn grabShortcut2(self: KDirOperator, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

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
    pub fn setShortcutEnabled2(self: KDirOperator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

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
    pub fn setShortcutAutoRepeat2(self: KDirOperator, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setWindowFlag2` instead
    ///
    pub const SetWindowFlag2 = setWindowFlag2;

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
    pub fn setWindowFlag2(self: KDirOperator, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

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
    pub fn setAttribute2(self: KDirOperator, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `createWindowContainer2` instead
    ///
    pub const CreateWindowContainer2 = createWindowContainer2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWindowContainer2(_window: anytype, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(_window.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createWindowContainer3` instead
    ///
    pub const CreateWindowContainer3 = createWindowContainer3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createWindowContainer3(_window: anytype, _parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(_window.ptr), @ptrCast(_parent.ptr), @bitCast(flags)) };
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KDirOperator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirOperator.objectName: Memory allocation failed");
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
    /// ` self: KDirOperator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KDirOperator, name: []const u8) void {
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
    /// ` self: KDirOperator `
    ///
    pub fn isWidgetType(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn isWindowType(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn isQuickItemType(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn signalsBlocked(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KDirOperator, b: bool) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn thread(self: KDirOperator) QThread {
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
    /// ` self: KDirOperator `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KDirOperator, _thread: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KDirOperator, interval: i32) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KDirOperator, time: i64) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KDirOperator, id: i32) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KDirOperator, id: i32) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KDirOperator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KDirOperator.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
    /// ` self: KDirOperator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KDirOperator, filterObj: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KDirOperator, obj: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KDirOperator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDirOperator `
    ///
    pub fn disconnect3(self: KDirOperator) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KDirOperator, receiver: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn dumpObjectTree(self: KDirOperator) void {
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
    /// ` self: KDirOperator `
    ///
    pub fn dumpObjectInfo(self: KDirOperator) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KDirOperator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KDirOperator, name: [:0]const u8) QVariant {
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
    /// ` self: KDirOperator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KDirOperator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KDirOperator.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirOperator.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirOperator `
    ///
    pub fn bindingStorage(self: KDirOperator) QBindingStorage {
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
    /// ` self: KDirOperator `
    ///
    pub fn bindingStorage2(self: KDirOperator) QBindingStorage {
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
    /// ` self: KDirOperator `
    ///
    pub fn destroyed(self: KDirOperator) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KDirOperator, callback: *const fn (KDirOperator) callconv(.c) void) void {
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
    /// ` self: KDirOperator `
    ///
    pub fn parent(self: KDirOperator) QObject {
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
    /// ` self: KDirOperator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KDirOperator, classname: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    pub fn deleteLater(self: KDirOperator) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KDirOperator, interval: i32, timerType: i32) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KDirOperator, time: i64, timerType: i32) i32 {
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
    /// ` self: KDirOperator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KDirOperator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KDirOperator, signal: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KDirOperator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KDirOperator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KDirOperator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirOperator `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KDirOperator, param1: anytype) void {
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KDirOperator, callback: *const fn (KDirOperator, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn paintingActive(self: KDirOperator) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn widthMM(self: KDirOperator) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn heightMM(self: KDirOperator) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn logicalDpiX(self: KDirOperator) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn logicalDpiY(self: KDirOperator) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn physicalDpiX(self: KDirOperator) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn physicalDpiY(self: KDirOperator) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn devicePixelRatio(self: KDirOperator) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn devicePixelRatioF(self: KDirOperator) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn colorCount(self: KDirOperator) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirOperator `
    ///
    pub fn depth(self: KDirOperator) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: KDirOperator) i32 {
        return qtc.KDirOperator_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: KDirOperator) i32 {
        return qtc.KDirOperator_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: KDirOperator, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirOperator_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

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
    pub fn setVisible(self: KDirOperator, visible: bool) void {
        qtc.KDirOperator_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

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
    pub fn superSetVisible(self: KDirOperator, visible: bool) void {
        qtc.KDirOperator_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

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
    pub fn onSetVisible(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) void) void {
        qtc.KDirOperator_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: KDirOperator, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDirOperator_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

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
    pub fn minimumSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

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
    pub fn superMinimumSizeHint(self: KDirOperator) QSize {
        return .{ .ptr = qtc.KDirOperator_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: KDirOperator, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDirOperator_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

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
    pub fn heightForWidth(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) i32) void {
        qtc.KDirOperator_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

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
    pub fn hasHeightForWidth(self: KDirOperator) bool {
        return qtc.KDirOperator_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

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
    pub fn superHasHeightForWidth(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

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
    pub fn paintEngine(self: KDirOperator) QPaintEngine {
        return .{ .ptr = qtc.KDirOperator_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

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
    pub fn superPaintEngine(self: KDirOperator) QPaintEngine {
        return .{ .ptr = qtc.KDirOperator_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: KDirOperator, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KDirOperator_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KDirOperator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirOperator_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KDirOperator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirOperator_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) bool) void {
        qtc.KDirOperator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.KDirOperator_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMouseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KDirOperator_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KDirOperator_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: KDirOperator, callback: *const fn (KDirOperator, QWheelEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KDirOperator_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KDirOperator_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: KDirOperator, callback: *const fn (KDirOperator, QKeyEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KDirOperator_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.KDirOperator_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QKeyEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KDirOperator_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KDirOperator_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: KDirOperator, callback: *const fn (KDirOperator, QFocusEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KDirOperator_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.KDirOperator_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: KDirOperator, callback: *const fn (KDirOperator, QFocusEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enterEvent` instead
    ///
    pub const EnterEvent = enterEvent;

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
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KDirOperator_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEnterEvent` instead
    ///
    pub const SuperEnterEvent = superEnterEvent;

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
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KDirOperator_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEnterEvent` instead
    ///
    pub const OnEnterEvent = onEnterEvent;

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
    pub fn onEnterEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEnterEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `leaveEvent` instead
    ///
    pub const LeaveEvent = leaveEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superLeaveEvent` instead
    ///
    pub const SuperLeaveEvent = superLeaveEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveEvent` instead
    ///
    pub const OnLeaveEvent = onLeaveEvent;

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
    pub fn onLeaveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KDirOperator_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.KDirOperator_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: KDirOperator, callback: *const fn (KDirOperator, QPaintEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

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
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KDirOperator_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

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
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KDirOperator_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

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
    pub fn onMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QMoveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.KDirOperator_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.KDirOperator_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

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
    pub fn onCloseEvent(self: KDirOperator, callback: *const fn (KDirOperator, QCloseEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

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
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KDirOperator_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.KDirOperator_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: KDirOperator, callback: *const fn (KDirOperator, QContextMenuEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

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
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KDirOperator_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

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
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KDirOperator_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

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
    pub fn onTabletEvent(self: KDirOperator, callback: *const fn (KDirOperator, QTabletEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionEvent` instead
    ///
    pub const ActionEvent = actionEvent;

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
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KDirOperator_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superActionEvent` instead
    ///
    pub const SuperActionEvent = superActionEvent;

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
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KDirOperator_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onActionEvent` instead
    ///
    pub const OnActionEvent = onActionEvent;

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
    pub fn onActionEvent(self: KDirOperator, callback: *const fn (KDirOperator, QActionEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

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
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KDirOperator_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.KDirOperator_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragEnterEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KDirOperator_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.KDirOperator_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragMoveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KDirOperator_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.KDirOperator_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

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
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KDirOperator_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.KDirOperator_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: KDirOperator, callback: *const fn (KDirOperator, QDropEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KDirOperator_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KDirOperator_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

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
    pub fn onShowEvent(self: KDirOperator, callback: *const fn (KDirOperator, QShowEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KDirOperator_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KDirOperator_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

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
    pub fn onHideEvent(self: KDirOperator, callback: *const fn (KDirOperator, QHideEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

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
    pub fn nativeEvent(self: KDirOperator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDirOperator_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

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
    pub fn superNativeEvent(self: KDirOperator, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDirOperator_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

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
    pub fn onNativeEvent(self: KDirOperator, callback: *const fn (KDirOperator, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KDirOperator_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

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
    pub fn metric(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

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
    pub fn superMetric(self: KDirOperator, param1: i32) i32 {
        return qtc.KDirOperator_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) i32) void {
        qtc.KDirOperator_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

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
    pub fn initPainter(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDirOperator_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

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
    pub fn superInitPainter(self: KDirOperator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDirOperator_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

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
    pub fn onInitPainter(self: KDirOperator, callback: *const fn (KDirOperator, QPainter) callconv(.c) void) void {
        qtc.KDirOperator_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

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
    pub fn redirected(self: KDirOperator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDirOperator_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

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
    pub fn superRedirected(self: KDirOperator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDirOperator_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

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
    pub fn onRedirected(self: KDirOperator, callback: *const fn (KDirOperator, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KDirOperator_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

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
    pub fn sharedPainter(self: KDirOperator) QPainter {
        return .{ .ptr = qtc.KDirOperator_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

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
    pub fn superSharedPainter(self: KDirOperator) QPainter {
        return .{ .ptr = qtc.KDirOperator_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

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
    pub fn onSharedPainter(self: KDirOperator, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KDirOperator_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    pub fn inputMethodEvent(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDirOperator_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    pub fn superInputMethodEvent(self: KDirOperator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDirOperator_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: KDirOperator, callback: *const fn (KDirOperator, QInputMethodEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: KDirOperator, param1: i32) QVariant {
        return .{ .ptr = qtc.KDirOperator_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: KDirOperator, param1: i32) QVariant {
        return .{ .ptr = qtc.KDirOperator_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: KDirOperator, callback: *const fn (KDirOperator, i32) callconv(.c) QVariant) void {
        qtc.KDirOperator_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

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
    pub fn focusNextPrevChild(self: KDirOperator, next: bool) bool {
        return qtc.KDirOperator_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: KDirOperator, next: bool) bool {
        return qtc.KDirOperator_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: KDirOperator, callback: *const fn (KDirOperator, bool) callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDirOperator_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDirOperator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KDirOperator, callback: *const fn (KDirOperator, QTimerEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDirOperator_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDirOperator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KDirOperator, callback: *const fn (KDirOperator, QChildEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KDirOperator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirOperator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KDirOperator, callback: *const fn (KDirOperator, QEvent) callconv(.c) void) void {
        qtc.KDirOperator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) void) void {
        qtc.KDirOperator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KDirOperator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirOperator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) void) void {
        qtc.KDirOperator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

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
    pub fn updateMicroFocus(self: KDirOperator) void {
        qtc.KDirOperator_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

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
    pub fn superUpdateMicroFocus(self: KDirOperator) void {
        qtc.KDirOperator_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

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
    pub fn onUpdateMicroFocus(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

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
    pub fn create(self: KDirOperator) void {
        qtc.KDirOperator_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

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
    pub fn superCreate(self: KDirOperator) void {
        qtc.KDirOperator_SuperCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

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
    pub fn onCreate(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

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
    pub fn destroy(self: KDirOperator) void {
        qtc.KDirOperator_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDestroy` instead
    ///
    pub const SuperDestroy = superDestroy;

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
    pub fn superDestroy(self: KDirOperator) void {
        qtc.KDirOperator_SuperDestroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroy` instead
    ///
    pub const OnDestroy = onDestroy;

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
    pub fn onDestroy(self: KDirOperator, callback: *const fn () callconv(.c) void) void {
        qtc.KDirOperator_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextChild` instead
    ///
    pub const FocusNextChild = focusNextChild;

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
    pub fn focusNextChild(self: KDirOperator) bool {
        return qtc.KDirOperator_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusNextChild` instead
    ///
    pub const SuperFocusNextChild = superFocusNextChild;

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
    pub fn superFocusNextChild(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusNextChild` instead
    ///
    pub const OnFocusNextChild = onFocusNextChild;

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
    pub fn onFocusNextChild(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPreviousChild` instead
    ///
    pub const FocusPreviousChild = focusPreviousChild;

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
    pub fn focusPreviousChild(self: KDirOperator) bool {
        return qtc.KDirOperator_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusPreviousChild` instead
    ///
    pub const SuperFocusPreviousChild = superFocusPreviousChild;

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
    pub fn superFocusPreviousChild(self: KDirOperator) bool {
        return qtc.KDirOperator_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusPreviousChild` instead
    ///
    pub const OnFocusPreviousChild = onFocusPreviousChild;

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
    pub fn onFocusPreviousChild(self: KDirOperator, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirOperator_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    pub fn sender(self: KDirOperator) QObject {
        return .{ .ptr = qtc.KDirOperator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator `
    ///
    pub fn superSender(self: KDirOperator) QObject {
        return .{ .ptr = qtc.KDirOperator_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KDirOperator, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirOperator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    pub fn senderSignalIndex(self: KDirOperator) i32 {
        return qtc.KDirOperator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator `
    ///
    pub fn superSenderSignalIndex(self: KDirOperator) i32 {
        return qtc.KDirOperator_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KDirOperator, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirOperator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KDirOperator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirOperator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KDirOperator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirOperator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirOperator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KDirOperator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirOperator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KDirOperator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirOperator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirOperator`
    ///
    /// ` callback: *const fn (self: KDirOperator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KDirOperator, callback: *const fn (KDirOperator, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirOperator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

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
    pub fn getDecodedMetricF(self: KDirOperator, metricA: i32, metricB: i32) f64 {
        return qtc.KDirOperator_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

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
    pub fn superGetDecodedMetricF(self: KDirOperator, metricA: i32, metricB: i32) f64 {
        return qtc.KDirOperator_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

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
    pub fn onGetDecodedMetricF(self: KDirOperator, callback: *const fn (KDirOperator, i32, i32) callconv(.c) f64) void {
        qtc.KDirOperator_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirOperator `
    ///
    /// ` callback: *const fn (self: KDirOperator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KDirOperator, callback: *const fn (KDirOperator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kdiroperator.html#dtor.KDirOperator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirOperator `
    ///
    pub fn delete(self: KDirOperator) void {
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
